#ifndef MvbThread_H
#define MvbThread_H
#include <QtGui/QApplication>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>


#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QTextStream>
//#define DEBUG

#ifdef DEBUG
#include <QVariant>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#endif
#include "DataBuffer.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"


class MvbThread : public QThread
{
    Q_OBJECT
public:
    MvbThread();
    ~MvbThread();
    void render();
    //UNSIGNED8 sendData[128];
signals:

public slots:

private:
    bool restart;
    bool abort;
    QWaitCondition condition;
    QMutex mutex;




    //src
    PIXYMVB_Data srcPortData021; // MVB test
    PIXYMVB_Data srcPortData023; // MVB test

    PIXYMVB_Data snkPortData020; // MVB test
    

    PIXYMVB_Data srcPortData200;
    PIXYMVB_Data srcPortData201;
    PIXYMVB_Data srcPortData202;
    PIXYMVB_Data srcPortData203;

    PIXYMVB_Data srcPortData280;
    PIXYMVB_Data srcPortData281;
    PIXYMVB_Data srcPortData282;
    PIXYMVB_Data srcPortData283;

    PIXYMVB_Data srcPortData310;
    PIXYMVB_Data srcPortData311;
    PIXYMVB_Data srcPortData312;
    PIXYMVB_Data srcPortData313;

    PIXYMVB_Data srcPortData320;
    PIXYMVB_Data srcPortData321;
    PIXYMVB_Data srcPortData322;
    PIXYMVB_Data srcPortData323;
    //snk

    PIXYMVB_Data snkPortDataf;
    PIXYMVB_Data snkPortData1;
    PIXYMVB_Data snkPortData2;

	
    PIXYMVB_Data snkPortData100;
    PIXYMVB_Data snkPortData110;
    PIXYMVB_Data snkPortData111;
    PIXYMVB_Data snkPortData112;
    PIXYMVB_Data snkPortData120;
    PIXYMVB_Data snkPortData121;
    PIXYMVB_Data snkPortData130;
    PIXYMVB_Data snkPortData131;
    PIXYMVB_Data snkPortData140;
    PIXYMVB_Data snkPortData141;
    PIXYMVB_Data snkPortData150;
    PIXYMVB_Data snkPortData151;
    PIXYMVB_Data snkPortData160;
    PIXYMVB_Data snkPortData161;
    PIXYMVB_Data snkPortData162;

    PIXYMVB_Data snkPortData118;
    PIXYMVB_Data snkPortData128;
    PIXYMVB_Data snkPortData138;
    PIXYMVB_Data snkPortData148;
    PIXYMVB_Data snkPortData158;
    PIXYMVB_Data snkPortData168;




    PIXYMVB_Data snkPortData210;
    PIXYMVB_Data snkPortData211;
    PIXYMVB_Data snkPortData212;
    PIXYMVB_Data snkPortData213;

    PIXYMVB_Data snkPortData220;
    PIXYMVB_Data snkPortData221;
    PIXYMVB_Data snkPortData222;
    PIXYMVB_Data snkPortData223;

    PIXYMVB_Data snkPortData218;
    PIXYMVB_Data snkPortData228;


    PIXYMVB_Data snkPortData310;
    PIXYMVB_Data snkPortData311;
    PIXYMVB_Data snkPortData312;
    PIXYMVB_Data snkPortData313;

    PIXYMVB_Data snkPortData320;
    PIXYMVB_Data snkPortData321;
    PIXYMVB_Data snkPortData322;
    PIXYMVB_Data snkPortData323;

    PIXYMVB_Data snkPortData308;
    PIXYMVB_Data snkPortData309;
    PIXYMVB_Data snkPortData318;
    PIXYMVB_Data snkPortData328;



    PIXYMVB_Data snkPortData510;
    PIXYMVB_Data snkPortData511;
    PIXYMVB_Data snkPortData512;
    PIXYMVB_Data snkPortData513;
    PIXYMVB_Data snkPortData514;
    PIXYMVB_Data snkPortData515;
    PIXYMVB_Data snkPortData520;
    PIXYMVB_Data snkPortData521;
    PIXYMVB_Data snkPortData522;
    PIXYMVB_Data snkPortData523;
    PIXYMVB_Data snkPortData524;
    PIXYMVB_Data snkPortData525;
    PIXYMVB_Data snkPortData530;
    PIXYMVB_Data snkPortData531;
    PIXYMVB_Data snkPortData532;
    PIXYMVB_Data snkPortData533;
    PIXYMVB_Data snkPortData534;
    PIXYMVB_Data snkPortData535;
    PIXYMVB_Data snkPortData540;
    PIXYMVB_Data snkPortData541;
    PIXYMVB_Data snkPortData542;
    PIXYMVB_Data snkPortData543;
    PIXYMVB_Data snkPortData544;
    PIXYMVB_Data snkPortData545;

    PIXYMVB_Data snkPortData508;


    PIXYMVB_Data snkPortData610;
    PIXYMVB_Data snkPortData611;
    PIXYMVB_Data snkPortData612;
    PIXYMVB_Data snkPortData620;
    PIXYMVB_Data snkPortData621;
    PIXYMVB_Data snkPortData622;
    PIXYMVB_Data snkPortData630;
    PIXYMVB_Data snkPortData631;
    PIXYMVB_Data snkPortData632;
    PIXYMVB_Data snkPortData640;
    PIXYMVB_Data snkPortData641;
    PIXYMVB_Data snkPortData642;

    PIXYMVB_Data snkPortData618;
    PIXYMVB_Data snkPortData628;
    PIXYMVB_Data snkPortData638;
    PIXYMVB_Data snkPortData648;



    PIXYMVB_Data snkPortData710;
    PIXYMVB_Data snkPortData711;
    PIXYMVB_Data snkPortData720;
    PIXYMVB_Data snkPortData721;

    PIXYMVB_Data snkPortData718;
    PIXYMVB_Data snkPortData728;


    PIXYMVB_Data snkPortData810;
    PIXYMVB_Data snkPortData811;
    PIXYMVB_Data snkPortData820;
    PIXYMVB_Data snkPortData821;
    PIXYMVB_Data snkPortData830;
    PIXYMVB_Data snkPortData831;
    PIXYMVB_Data snkPortData840;
    PIXYMVB_Data snkPortData841;
    PIXYMVB_Data snkPortData850;
    PIXYMVB_Data snkPortData851;
    PIXYMVB_Data snkPortData860;
    PIXYMVB_Data snkPortData861;
    PIXYMVB_Data snkPortData870;
    PIXYMVB_Data snkPortData871;
    PIXYMVB_Data snkPortData880;
    PIXYMVB_Data snkPortData881;
    PIXYMVB_Data snkPortData890;
    PIXYMVB_Data snkPortData891;
    PIXYMVB_Data snkPortData8A0;
    PIXYMVB_Data snkPortData8A1;
    PIXYMVB_Data snkPortData8B0;
    PIXYMVB_Data snkPortData8B1;
    PIXYMVB_Data snkPortData8C0;
    PIXYMVB_Data snkPortData8C1;

    PIXYMVB_Data snkPortData809;



    PIXYMVB_Data snkPortData910;
    PIXYMVB_Data snkPortData920;
    PIXYMVB_Data snkPortData930;
    PIXYMVB_Data snkPortData940;
    PIXYMVB_Data snkPortData950;
    PIXYMVB_Data snkPortData960;

    PIXYMVB_Data snkPortData918;
    PIXYMVB_Data snkPortData928;
    PIXYMVB_Data snkPortData938;
    PIXYMVB_Data snkPortData948;
    PIXYMVB_Data snkPortData958;
    PIXYMVB_Data snkPortData968;


    PIXYMVB_Data snkPortDataA10;
    PIXYMVB_Data snkPortDataA11;
    PIXYMVB_Data snkPortDataA20;
    PIXYMVB_Data snkPortDataA21;

    PIXYMVB_Data snkPortDataA08;


    PIXYMVB_Data snkPortDataB10;
    PIXYMVB_Data snkPortDataB11;
    PIXYMVB_Data snkPortDataB20;
    PIXYMVB_Data snkPortDataB21;
//
    PIXYMVB_Data snkPortDataB08;

    PIXYMVB_Data snkPortDataC10;
    PIXYMVB_Data snkPortDataC20;

    PIXYMVB_Data snkPortDataC08;



    //--------------------º¯ÊýÇø---------------------------------------------
    bool init();
    void run();
    UNSIGNED16 highbyteLowbyteExchange( const UNSIGNED16 wordData );
#ifdef DEBUG
    void writeDebugLog( const QString str, const SIGNED16 state );
#endif
};

#endif // MvbThread_H
