#include "widget.h"
#include "SqliteOperator.h"
#include <QString>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

//    //创建并打开SQLite数据库
//        SqliteOperator sqlTest;
//        sqlTest.openDb();
//    //如果数据表不存在创建数据表
//        QString str1 = QString("specdata");
//        if(!sqlTest.isTableExist(str1)){
//            sqlTest.createTable();
//        }

//        // 查询全部数据
//        QList<SpecData> list =  sqlTest.queryTable();
//        for(int i=0;i<list.size();i++){
//            qDebug()<<list[i].id << endl;
//        }


//         //删除数据表
//        QString str2 = QString("specdata");
//        sqlTest.deleteTable(str2);

//        //关闭数据库
//        sqlTest.closeDb();


    return a.exec();
}
