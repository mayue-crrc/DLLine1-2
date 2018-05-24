#ifndef C_CTRL_LOG_H
#define C_CTRL_LOG_H

#include <fstream>
#include <string>
#include <QString>

using namespace std;

class CLog
{
public:
    CLog();
    virtual ~CLog();

public:
    static int m_nCommErr;
    static quint64 m_nErrPackage;
    static int m_nTimeSkip;

public:
    void Log(QString logStr);
    void Flush();
    void Begin();
    void End();

private:
    fstream m_fs;
    string m_pathName;
};


#endif // C_CTRL_LOG_H
