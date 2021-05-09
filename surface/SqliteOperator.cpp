#include <SqliteOperator.h>

// 构造函数中初始化数据库对象，并建立数据库
SqliteOperator::SqliteOperator()
{
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        // 建立和SQlite数据库的连接
        database = QSqlDatabase::addDatabase("QSQLITE");
        // 设置数据库文件的名字
        database.setDatabaseName("SpecDataBase.db");
    }
}

// 打开数据库
bool SqliteOperator::openDb()
{
    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        // do something
    }

    return true;
}

// 创建数据表
void SqliteOperator::createTable()
{
    // 用于执行sql语句的对象
    QSqlQuery sqlQuery;
    // 构建创建数据库的sql语句字符串
    QString createSql = QString("CREATE TABLE specdata (\
                          id INTEGER  PRIMARY KEY AUTOINCREMENT,\
                          address TEXT NOT NULL,\
                          date datetime NOT NULL");
    for(int i=0;i<650;i++){
            createSql += ", s"+QString::number(i) + "  float";
    }
    createSql +=")";
    sqlQuery.prepare(createSql);
    // 执行sql语句
    if(!sqlQuery.exec())
    {
        qDebug() << "Error: Fail to create table. " << sqlQuery.lastError();
    }
    else
    {
        qDebug() << "Table created!";
    }
}

// 判断数据库中某个数据表是否存在
bool SqliteOperator::isTableExist(QString& tableName)
{
    QSqlDatabase database = QSqlDatabase::database();
    if(database.tables().contains(tableName))
    {
        return true;
    }

    return false;
}

// 查询全部数据
QList<SpecData> SqliteOperator::queryTable()
{
    QSqlQuery sqlQuery;
    QList<SpecData> specdatalist;
    sqlQuery.exec("SELECT * FROM specdata");
    if(!sqlQuery.exec())
    {
        qDebug() << "Error: Fail to query table. " << sqlQuery.lastError();
    }
    else
    {
        while(sqlQuery.next())
        {
            SpecData spdata;
            spdata.id = sqlQuery.value(0).toInt();
            spdata.address = sqlQuery.value(1).toString();
            spdata.date = sqlQuery.value(2).toDateTime();
            for(int i=0;i<650;i++){
                   spdata.wareData[i] = sqlQuery.value(3+i).toFloat();
            }
            specdatalist.append(spdata);
        }
    }
    return specdatalist;
}

// 查询全部数据
QList<SpecData> SqliteOperator::queryTablelimit(int max)
{
    QSqlQuery sqlQuery;
    QList<SpecData> specdatalist;
    sqlQuery.exec("SELECT * FROM specdata order by date limit "+ QString::number(max));
    if(!sqlQuery.exec())
    {
        qDebug() << "Error: Fail to query table. " << sqlQuery.lastError();
    }
    else
    {
        while(sqlQuery.next())
        {
            SpecData spdata;
            spdata.id = sqlQuery.value(0).toInt();
            spdata.address = sqlQuery.value(1).toString();
            spdata.date = sqlQuery.value(2).toDateTime();
            for(int i=0;i<650;i++){
                   spdata.wareData[i] = sqlQuery.value(3+i).toFloat();
            }
            specdatalist.append(spdata);
        }
    }
    return specdatalist;
}

// 插入单条数据
void SqliteOperator::singleInsertData(SpecData &singledb)
{
    QSqlQuery sqlQuery;
    QString sql="INSERT INTO specdata VALUES(NULL, :address,:date";
    for(int i=0;i<650;i++){
            sql += ", :s"+QString::number(i);
    }
    sql +=")";
    sqlQuery.prepare(sql);
    sqlQuery.bindValue(":address", singledb.address);
    sqlQuery.bindValue(":date", singledb.date);
    for(int i=0;i<650;i++){
         sqlQuery.bindValue(":s"+QString::number(i), singledb.wareData[i]);
    }
    if(!sqlQuery.exec())
    {
        qDebug() << "Error: Fail to insert data. " << sqlQuery.lastError();
    }
    else
    {
        // do something
    }
}

// 插入多条数据
//void SqliteOperator::moreInsertData(QList<SpecData>& moredb)
//{
//    // 进行多个数据的插入时，可以利用绑定进行批处理
//    QSqlQuery sqlQuery;
//    sqlQuery.prepare("INSERT INTO specdata VALUES(?,?,?)");
//    QVariantList idList,nameList,ageList;
//    for(int i=0; i< moredb.size(); i++)
//    {
//        idList <<  moredb.at(i).id;
//        nameList << moredb.at(i).address;
//        ageList << moredb.at(i).date;
//    }
//    sqlQuery.addBindValue(idList);
//    sqlQuery.addBindValue(nameList);
//    sqlQuery.addBindValue(ageList);

//    if (!sqlQuery.execBatch()) // 进行批处理，如果出错就输出错误
//    {
//        qDebug() << sqlQuery.lastError();
//    }
//}

// 修改数据
//void SqliteOperator::modifyData(int id, QString name, int age)
//{
//    QSqlQuery sqlQuery;
//    sqlQuery.prepare("UPDATE specdata SET name=?,age=? WHERE id=?");
//    sqlQuery.addBindValue(name);
//    sqlQuery.addBindValue(age);
//    sqlQuery.addBindValue(id);
//    if(!sqlQuery.exec())
//    {
//        qDebug() << sqlQuery.lastError();
//    }
//    else
//    {
//        qDebug() << "updated data success!";
//    }
//}

// 删除数据
void SqliteOperator::deleteData(int id)
{
    QSqlQuery sqlQuery;

    sqlQuery.exec(QString("DELETE FROM specdata WHERE id = %1").arg(id));
    if(!sqlQuery.exec())
    {
        qDebug()<<sqlQuery.lastError();
    }
    else
    {
        qDebug()<<"deleted data success!";
    }
}

//删除数据表
void SqliteOperator::deleteTable(QString& tableName)
{
    QSqlQuery sqlQuery;

    sqlQuery.exec(QString("DROP TABLE %1").arg(tableName));
    if(sqlQuery.exec())
    {
        qDebug() << sqlQuery.lastError();
    }
    else
    {
        qDebug() << "deleted table success";
    }
}

void SqliteOperator::closeDb(void)
{
    database.close();
}
