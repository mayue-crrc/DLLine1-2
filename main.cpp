#include <QtGui/QApplication>
#include <QSplashScreen>
#include "dialog.h"
#include <QtDebug>
#include <QFile>
#include <qdir.h>
#include <QTextStream>
#include <QWSServer>
#include <QTranslator>
#include <QTextCodec>



void customMessageHandler(QtMsgType type,const char *msg)
{
//
    QString txt;

    QString pathStr = qApp->applicationDirPath() + "/log/";
    QDir dir(pathStr);
    if(!dir.exists())
        dir.mkdir(pathStr);

    switch(type){

    case QtDebugMsg:
        {
            txt=QString("Debug   : %1").arg( msg);

            QFile logfile_debug( logfileName_debug );
            logfile_debug.open(QIODevice::WriteOnly|QIODevice::Append);
            QTextStream ts_debug(&logfile_debug);
            ts_debug<<txt<<endl;
        }
        break;
    case QtWarningMsg:
        {
            txt=QString("Warning : %1").arg( msg);

            QFile logfile_warning( logfileName_warning );
            logfile_warning.open(QIODevice::WriteOnly|QIODevice::Append);
            QTextStream ts_warning(&logfile_warning);
            ts_warning<<txt<<endl;
        }
        break;
    case QtCriticalMsg:
        txt=QString("Critical: %1").arg(msg);
        break;
    case QtFatalMsg:
        txt=QString("Fatal   : %1").arg(msg);
        break;
//    case QtDebugMsg:
//        txt=QString("Debug: %1").arg(msg);
//        break;

    }




}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
//    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
//      QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));



//    QTranslator  qtTranslator;
//    qtTranslator.load("translation.qm");
//    a.installTranslator(&qtTranslator);






    #ifndef USE_RAND_DATA
        a.setOverrideCursor(QCursor(Qt::BlankCursor));
            if (QWSServer::isCursorVisible()) {
                QWSServer::setCursorVisible(false);
            } //end
        system( "find /opt/project/cnrerd/log -mtime +1 -type f |xargs rm -rf " );
    #endif

    #ifdef USE_RAND_DATA
    //system( "find /home/lsz/13-9-23/CNR_BJ_line6/log -mtime +1 -type f |xargs rm -rf " );
    #endif


    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");
    QString path = qApp->applicationDirPath();
    logfileName_debug   = path + "/log/Log_debug--" + dateStr + "_" + timeStr + ".log";
    logfileName_warning = path + "/log/Log_warning" + dateStr + "_" + timeStr + ".log";


    qInstallMsgHandler(customMessageHandler);

    //QString path = qApp->applicationDirPath();
    QString fileName = path + "/resource/image/splash.PNG";
    QFile inifile( fileName );

//    //读启动参数   参数通过USB地址U盘可以读出, 然后通过显示屏程序启动参数传递给显示屏
//    for(int i=0;i<argc;i++)
//    {
//        QString argv_name=QString(QLatin1String(argv[i]));

//        if(argv_name=="-address")
//        {
//            qDebug() << "code:"<<argv[i+1];
//        }

//    }


    if ( inifile.exists( fileName ) )
    {
        QSplashScreen *splash = new QSplashScreen;
        splash->setPixmap(QPixmap("resource/image/splash.PNG"));
        splash->show();
        Dialog w;
        w.show();
        splash->finish(&w);
        delete splash;
        return a.exec();
    }
    else
    {
        Dialog w;
        w.show();
        return a.exec();
    }

//        Dialog w;
//        w.show();
  //  return a.exec();




}
