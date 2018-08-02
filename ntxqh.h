#ifndef NTXQH_PLUGIN_H
#define NTXQH_PLUGIN_H


#define NTXQH_PLUGINSHARED_EXPORT __declspec(dllexport)
#ifdef NTXQH_PLUGINSHARED_EXPORT
#else
#define NTXQH_PLUGINSHARED_EXPORT __declspec(dllimport)
#endif
#include<windows.h>
#include<QJsonObject>
#define HEADER "BG"
#define TAIL "ED"
#define NTXQH "03"

//返回结果 
//1：表示BG,ED的要素数据
//2：表示终端命令操作成功
//3：表示终端命令操作失败
//4：表示终端命令读取值
//0：表示非法的终端命令
//-1：表示无效数据
//-2：表示非航空气象数据
EXTERN_C NTXQH_PLUGINSHARED_EXPORT LRESULT Char2Json(QString &buff, QJsonObject &json);
QString Convert2Time(QString strTime);
QString Convert2TimeForm(QString strTime);
//获取业务号
EXTERN_C NTXQH_PLUGINSHARED_EXPORT int GetServiceTypeID();
//获取业务名称
EXTERN_C NTXQH_PLUGINSHARED_EXPORT QString GetServiceTypeName();
//获取版本号
EXTERN_C NTXQH_PLUGINSHARED_EXPORT QString GetVersionNo();
//获取端口号
EXTERN_C NTXQH_PLUGINSHARED_EXPORT int GetPort();
#endif // NTXQH_PLUGIN_H
