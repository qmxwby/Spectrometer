#ifndef SQLITEOPERATOR_H
#define SQLITEOPERATOR_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

typedef struct
{
    int id;
    QString address;
    QDateTime date;
    float wareData[650];
}SpecData;

class SqliteOperator
{
public:
    SqliteOperator();

    // 打开数据库
    bool openDb(void);
    // 创建数据表
    void createTable(void);
    // 判断数据表是否存在
    bool isTableExist(QString& tableName);
    // 查询全部数据
    QList<SpecData> queryTable();
    //查询规定上限数量的数据
    QList<SpecData> queryTablelimit(int max);
    // 插入数据
    void singleInsertData(SpecData &singleData); // 插入单条数据
    void moreInsertData(QList<SpecData> &moreData); // 插入多条数据
    // 修改数据
    void modifyData(int id, QString name, int age);
    // 删除数据
    void deleteData(int id);
    //删除数据表
    void deleteTable(QString& tableName);
    // 关闭数据库
    void closeDb(void);

private:
    QSqlDatabase database;// 用于建立和数据库的连接
};


#endif // SQLITEOPERATOR_H
