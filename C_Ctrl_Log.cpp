#include "C_Ctrl_Log.h"

#include <qapplication.h>
#include <qfile.h>
#include "CGlobal.h"



string GetModulePathName()
{
#ifndef windows_demo
    string pathstr;
    char buf[256] = {'\0'};
    int count = 0;

    count = readlink( "/proc/self/exe", buf, 256);
    if( count < 0 || count >= 256 )
    {
      printf( "Failed\n" );
      return "";
    }
    buf[ count ] = '\0';
    //printf( "/proc/self/exe -> [%s]\n", buf );
    pathstr = buf;

    return pathstr;
#endif  //windows_demo


}

string GetModulePath()
{

#ifndef windows_demo
    string str = GetModulePathName();
    int nPos = str.rfind('/');

    return str.substr(0,nPos);
#endif  //windows_demo


}

CLog::CLog()
{
#ifndef windows_demo
    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");

    m_pathName = GetModulePath() + "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif  //windows_demo

}

CLog::~CLog()
{
}

int CLog::m_nCommErr = 0;
quint64 CLog::m_nErrPackage = 0;
int CLog::m_nTimeSkip = 0;

void CLog::Log(QString logStr)
{
#ifndef windows_demo
    if(m_fs.is_open())
    {
        m_fs.write(logStr.toStdString().c_str(), logStr.length());
    }
#endif  //windows_demo

}

void CLog::Flush()
{
#ifndef windows_demo
    m_fs.flush();
    m_fs.close();
#endif  //windows_demo

}

void CLog::Begin()
{
#ifndef windows_demo
    m_fs.open(m_pathName.c_str(), ios_base::out|ios_base::app);
#endif  //windows_demo

}

void CLog::End()
{
#ifndef windows_demo
    Flush();
#endif  //windows_demo

}


