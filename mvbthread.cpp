#include "mvbthread.h"

#include "CGlobal.h" // 用户编程使用
#include "stdio.h"

MvbThread::MvbThread()
{

}

MvbThread::~MvbThread()
{

}

bool MvbThread::init()
{
#ifndef windows_demo
    UNSIGNED16 RetVal = 0;
     restart = false;
     abort = false;

   // Initialize MVB
   // PIXYMVB_MIN_TMMODEL or PIXYMVB_MAX_TMMODEL
   // PIXYMVB_MIN_TMMODEL equals to 64KB of MVB Traffic Store,
   // the default. PIXYMVB_MAX_TMMODEL is equal to 256KB of MVB Traffic Store.
   // PIXYMVB_PHY_OFG is an OFG Interface Opto Port
   // PIXYMVB_PHY_ESD is an ESD(+) Interface
   // PIXYMVB_PHY_EMD is an EMD Interface
   // deviceID:
   // snkTmeSupvIntv:0 = Inactive, 1 = 1 ms, 2 = 2 ms, 3 = 4 ms, 4 = 8 ms, 5 = 16 ms,
   // 6 = 32 ms, 7 = 64 ms, 8 = 128 ms, 9 = 256 ms
   //qDebug() <<"TC1_HMI:"<<TC1_HMI<<"TC2_HMI:"<<TC2_HMI;


   //RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 2, 1 );
   if(TC1_HMI==1)
   {
       RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x31, 1 );

       #ifdef LOG_OPEN
       qDebug() <<"TC1_HMI:"<<"pixymvb_CfgHWInit Tc1:"<<RetVal;
       #endif

   }
   else
   {
       if(TC2_HMI==1)
       {
           RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x32, 1 );

           #ifdef LOG_OPEN
           qDebug() <<"TC2_HMI:"<<"pixymvb_CfgHWInit Tc2:"<<RetVal;
           #endif
       }
       else
       {
           RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x31, 1 );

           #ifdef LOG_OPEN
           qDebug() <<"TC1_HMI:"<<"pixymvb_CfgHWInit Tc1:"<<RetVal;
           #endif
       }
   }


   if ( PIXYMVB_OK != RetVal )
   {
       return(false);
   }

   // Initialize Ports Data

   // src

   memset(srcPortData021,0,sizeof(srcPortData021)); // MVB test
   memset(srcPortData023,0,sizeof(srcPortData023)); // MVB test
   //snk
   memset(snkPortData020,0,sizeof(snkPortData020)); // MVB test



   memset(srcPortData310,0,sizeof(srcPortData310));
   memset(srcPortData311,0,sizeof(srcPortData311));
   memset(srcPortData312,0,sizeof(srcPortData312));
   memset(srcPortData313,0,sizeof(srcPortData313));

   memset(srcPortData320,0,sizeof(srcPortData320));
   memset(srcPortData321,0,sizeof(srcPortData321));
   memset(srcPortData322,0,sizeof(srcPortData322));
   memset(srcPortData323,0,sizeof(srcPortData323));
   //snk

   memset(snkPortDataf  ,0,sizeof(snkPortDataf));
   memset(snkPortData1  ,0,sizeof(snkPortDataf));
   memset(snkPortData2  ,0,sizeof(snkPortDataf));
   memset(snkPortData110,0,sizeof(snkPortData110));
   memset(snkPortData111,0,sizeof(snkPortData111));
   memset(snkPortData112,0,sizeof(snkPortData112));
   memset(snkPortData120,0,sizeof(snkPortData120));
   memset(snkPortData121,0,sizeof(snkPortData121));
   memset(snkPortData130,0,sizeof(snkPortData130));
   memset(snkPortData131,0,sizeof(snkPortData131));
   memset(snkPortData140,0,sizeof(snkPortData140));
   memset(snkPortData141,0,sizeof(snkPortData141));
   memset(snkPortData150,0,sizeof(snkPortData150));
   memset(snkPortData151,0,sizeof(snkPortData151));
   memset(snkPortData160,0,sizeof(snkPortData160));
   memset(snkPortData161,0,sizeof(snkPortData161));
   memset(snkPortData162,0,sizeof(snkPortData162));

   memset(snkPortData118,0,sizeof(snkPortData118));
   memset(snkPortData128,0,sizeof(snkPortData128));
   memset(snkPortData138,0,sizeof(snkPortData138));
   memset(snkPortData148,0,sizeof(snkPortData148));
   memset(snkPortData158,0,sizeof(snkPortData158));
   memset(snkPortData168,0,sizeof(snkPortData168));

   //ERM
   memset(snkPortData210,0,sizeof(snkPortData210));
   memset(snkPortData211,0,sizeof(snkPortData211));
   memset(snkPortData212,0,sizeof(snkPortData212));
   memset(snkPortData213,0,sizeof(snkPortData213));

   memset(snkPortData220,0,sizeof(snkPortData220));
   memset(snkPortData221,0,sizeof(snkPortData221));
   memset(snkPortData222,0,sizeof(snkPortData222));
   memset(snkPortData223,0,sizeof(snkPortData223));

   //HMI
   memset(snkPortData310,0,sizeof(snkPortData310));
   memset(snkPortData311,0,sizeof(snkPortData311));
   memset(snkPortData312,0,sizeof(snkPortData312));
   memset(snkPortData313,0,sizeof(snkPortData313));

   memset(snkPortData320,0,sizeof(snkPortData320));
   memset(snkPortData321,0,sizeof(snkPortData321));
   memset(snkPortData322,0,sizeof(snkPortData322));
   memset(snkPortData323,0,sizeof(snkPortData323));

   memset(snkPortData308,0,sizeof(snkPortData308));
   memset(snkPortData309,0,sizeof(snkPortData309));
   memset(snkPortData318,0,sizeof(snkPortData318));
   memset(snkPortData328,0,sizeof(snkPortData328));


   //BCU
   memset(snkPortData510,0,sizeof(snkPortData510));
   memset(snkPortData511,0,sizeof(snkPortData511));
   memset(snkPortData512,0,sizeof(snkPortData512));
   memset(snkPortData513,0,sizeof(snkPortData513));
   memset(snkPortData514,0,sizeof(snkPortData514));
   memset(snkPortData515,0,sizeof(snkPortData515));
   memset(snkPortData520,0,sizeof(snkPortData520));
   memset(snkPortData521,0,sizeof(snkPortData521));
   memset(snkPortData522,0,sizeof(snkPortData522));
   memset(snkPortData523,0,sizeof(snkPortData523));
   memset(snkPortData524,0,sizeof(snkPortData524));
   memset(snkPortData525,0,sizeof(snkPortData525));
   memset(snkPortData530,0,sizeof(snkPortData530));
   memset(snkPortData531,0,sizeof(snkPortData531));
   memset(snkPortData532,0,sizeof(snkPortData532));
   memset(snkPortData533,0,sizeof(snkPortData533));
   memset(snkPortData534,0,sizeof(snkPortData534));
   memset(snkPortData535,0,sizeof(snkPortData535));
   memset(snkPortData540,0,sizeof(snkPortData540));
   memset(snkPortData541,0,sizeof(snkPortData541));
   memset(snkPortData542,0,sizeof(snkPortData542));
   memset(snkPortData543,0,sizeof(snkPortData543));
   memset(snkPortData544,0,sizeof(snkPortData544));
   memset(snkPortData545,0,sizeof(snkPortData545));

   memset(snkPortData508,0,sizeof(snkPortData508));


  //DCU
   memset(snkPortData610,0,sizeof(snkPortData610));
   memset(snkPortData611,0,sizeof(snkPortData611));
   memset(snkPortData612,0,sizeof(snkPortData612));
   memset(snkPortData620,0,sizeof(snkPortData620));
   memset(snkPortData621,0,sizeof(snkPortData621));
   memset(snkPortData621,0,sizeof(snkPortData622));
   memset(snkPortData630,0,sizeof(snkPortData630));
   memset(snkPortData631,0,sizeof(snkPortData631));
   memset(snkPortData632,0,sizeof(snkPortData632));
   memset(snkPortData640,0,sizeof(snkPortData640));
   memset(snkPortData641,0,sizeof(snkPortData641));
   memset(snkPortData642,0,sizeof(snkPortData642));

   memset(snkPortData618,0,sizeof(snkPortData618));
   memset(snkPortData628,0,sizeof(snkPortData628));
   memset(snkPortData638,0,sizeof(snkPortData638));
   memset(snkPortData648,0,sizeof(snkPortData648));


   //SIV
   memset(snkPortData710,0,sizeof(snkPortData710));
   memset(snkPortData711,0,sizeof(snkPortData711));
   memset(snkPortData720,0,sizeof(snkPortData720));
   memset(snkPortData721,0,sizeof(snkPortData721));

   memset(snkPortData718,0,sizeof(snkPortData718));
   memset(snkPortData728,0,sizeof(snkPortData728));



   //EDCU
   memset(snkPortData810,0,sizeof(snkPortData810));
   memset(snkPortData811,0,sizeof(snkPortData811));
   memset(snkPortData820,0,sizeof(snkPortData820));
   memset(snkPortData821,0,sizeof(snkPortData821));
   memset(snkPortData830,0,sizeof(snkPortData830));
   memset(snkPortData831,0,sizeof(snkPortData831));
   memset(snkPortData840,0,sizeof(snkPortData840));
   memset(snkPortData841,0,sizeof(snkPortData841));
   memset(snkPortData850,0,sizeof(snkPortData850));
   memset(snkPortData851,0,sizeof(snkPortData851));
   memset(snkPortData860,0,sizeof(snkPortData860));
   memset(snkPortData861,0,sizeof(snkPortData861));
   memset(snkPortData870,0,sizeof(snkPortData870));
   memset(snkPortData871,0,sizeof(snkPortData871));
   memset(snkPortData880,0,sizeof(snkPortData880));
   memset(snkPortData881,0,sizeof(snkPortData881));
   memset(snkPortData890,0,sizeof(snkPortData890));
   memset(snkPortData891,0,sizeof(snkPortData891));
   memset(snkPortData8A0,0,sizeof(snkPortData8A0));
   memset(snkPortData8A1,0,sizeof(snkPortData8A1));
   memset(snkPortData8B0,0,sizeof(snkPortData8B0));
   memset(snkPortData8B1,0,sizeof(snkPortData8B1));
   memset(snkPortData8C0,0,sizeof(snkPortData8C0));
   memset(snkPortData8C1,0,sizeof(snkPortData8C1));

   memset(snkPortData809,0,sizeof(snkPortData809));


   //HVAC
   memset(snkPortData910,0,sizeof(snkPortData910));
   memset(snkPortData920,0,sizeof(snkPortData920));
   memset(snkPortData930,0,sizeof(snkPortData930));
   memset(snkPortData940,0,sizeof(snkPortData940));
   memset(snkPortData950,0,sizeof(snkPortData950));
   memset(snkPortData960,0,sizeof(snkPortData960));

   memset(snkPortData918,0,sizeof(snkPortData918));
   memset(snkPortData928,0,sizeof(snkPortData928));
   memset(snkPortData938,0,sizeof(snkPortData938));
   memset(snkPortData948,0,sizeof(snkPortData948));
   memset(snkPortData958,0,sizeof(snkPortData958));
   memset(snkPortData968,0,sizeof(snkPortData968));


   //ATC
   memset(snkPortDataA10,0,sizeof(snkPortDataA10));
   memset(snkPortDataA20,0,sizeof(snkPortDataA20));

   memset(snkPortDataA08,0,sizeof(snkPortDataA08));


   //PIS
   memset(snkPortDataB10,0,sizeof(snkPortDataB10));
   memset(snkPortDataB11,0,sizeof(snkPortDataB11));
   memset(snkPortDataB20,0,sizeof(snkPortDataB20));
   memset(snkPortDataB21,0,sizeof(snkPortDataB21));

   memset(snkPortDataB08,0,sizeof(snkPortDataB08));

   //FAU
   memset(snkPortDataC10,0,sizeof(snkPortDataC10));
   memset(snkPortDataC20,0,sizeof(snkPortDataC20));

   memset(snkPortDataC08,0,sizeof(snkPortDataC08));

   // Configure Ports
   // SRC
   if(TC1_HMI==1)
   {
       // HMI tc1 add src port
       RetVal = pixymvb_AddPort( 0x310, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData310 ); // Src Port FC 4

       #ifdef LOG_OPEN
       qDebug() <<"TC1_HMI:"<<"pixymvb_AddPort: SRC 310:"<<RetVal;
       #endif

       if ( PIXYMVB_OK != RetVal )
       {
           return(false);
       }

       pixymvb_AddPort( 0x311, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData311 ); // Src Port FC 4
       pixymvb_AddPort( 0x312, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData312 ); // Src Port FC 4
       pixymvb_AddPort( 0x313, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData313 ); // Src Port FC 4
   }
   else
   {   // HMI tc2 add src port
       if(TC2_HMI==1)
       {
           RetVal = pixymvb_AddPort( 0x320, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData320 ); // Src Port FC 4

           #ifdef LOG_OPEN
           qDebug() <<"TC2_HMI:"<<"pixymvb_AddPort: SRC 320:"<<RetVal;
           #endif

           if ( PIXYMVB_OK != RetVal )
           {
               return(false);
           }

           pixymvb_AddPort( 0x321, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData321 ); // Src Port FC 4
           pixymvb_AddPort( 0x322, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData322 ); // Src Port FC 4
           pixymvb_AddPort( 0x323, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData323 ); // Src Port FC 4
       }
       else
       {
           // HMI tc1 add src port
           RetVal = pixymvb_AddPort( 0x310, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData310 ); // Src Port FC 4

           #ifdef LOG_OPEN
           qDebug() <<"TC1_HMI:"<<"pixymvb_AddPort: SRC 310:"<<RetVal;
           #endif

           if ( PIXYMVB_OK != RetVal )
           {
               return(false);
           }

           pixymvb_AddPort( 0x311, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData311 ); // Src Port FC 4
           pixymvb_AddPort( 0x312, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData312 ); // Src Port FC 4
           pixymvb_AddPort( 0x313, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData313 ); // Src Port FC 4

       }


   }



   pixymvb_AddPort(   0xf, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortDataf );   // Snk Port FC 3
   pixymvb_AddPort(   0x1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1 );   // Snk Port FC 4
   pixymvb_AddPort(   0x2, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData2 );   // Snk Port FC 4
   pixymvb_AddPort( 0x110, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData110 ); // Snk Port FC 4
   pixymvb_AddPort( 0x111, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData111 ); // Snk Port FC 4
   pixymvb_AddPort( 0x112, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData112 ); // Snk Port FC 4
   pixymvb_AddPort( 0x120, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData120 ); // Snk Port FC 4
   pixymvb_AddPort( 0x121, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData121 ); // Snk Port FC 4
   pixymvb_AddPort( 0x130, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData130 ); // Snk Port FC 4
   pixymvb_AddPort( 0x131, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData131 ); // Snk Port FC 4
   pixymvb_AddPort( 0x140, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData140 ); // Snk Port FC 4
   pixymvb_AddPort( 0x141, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData141 ); // Snk Port FC 4
   pixymvb_AddPort( 0x150, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData150 ); // Snk Port FC 4
   pixymvb_AddPort( 0x151, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData151 ); // Snk Port FC 4
   pixymvb_AddPort( 0x160, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData160 ); // Snk Port FC 4
   pixymvb_AddPort( 0x161, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData161 ); // Snk Port FC 4
   pixymvb_AddPort( 0x162, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData162 ); // Snk Port FC 4

   pixymvb_AddPort( 0x118, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData118 ); // Snk Port FC 4
   pixymvb_AddPort( 0x128, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData128 ); // Snk Port FC 4
   pixymvb_AddPort( 0x138, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData138 ); // Snk Port FC 4
   pixymvb_AddPort( 0x148, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData148 ); // Snk Port FC 4
   pixymvb_AddPort( 0x158, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData158 ); // Snk Port FC 4
   pixymvb_AddPort( 0x168, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData168 ); // Snk Port FC 4

   pixymvb_AddPort( 0x210, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData210 ); // Snk Port FC 4
   pixymvb_AddPort( 0x211, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData211 ); // Snk Port FC 4
   pixymvb_AddPort( 0x212, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData212 ); // Snk Port FC 4
   pixymvb_AddPort( 0x213, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData213 ); // Snk Port FC 4
   pixymvb_AddPort( 0x220, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData220 ); // Snk Port FC 4
   pixymvb_AddPort( 0x221, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData221 ); // Snk Port FC 4
   pixymvb_AddPort( 0x222, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData222 ); // Snk Port FC 4
   pixymvb_AddPort( 0x223, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData223 ); // Snk Port FC 4

   pixymvb_AddPort( 0x218, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData218 ); // Snk Port FC 4
   pixymvb_AddPort( 0x228, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData228 ); // Snk Port FC 4


   if(TC1_HMI==1)
   {   // HMI tc1 add snk port
       pixymvb_AddPort( 0x320, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData320 ); // Snk Port FC 4
       pixymvb_AddPort( 0x321, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData321 ); // Snk Port FC 4
       pixymvb_AddPort( 0x322, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData322 ); // Snk Port FC 4
       pixymvb_AddPort( 0x323, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData323 ); // Snk Port FC 4
   }
   else
   {   // HMI tc2 add snk port
       if(TC2_HMI==1)
       {
           pixymvb_AddPort( 0x310, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData310 ); // Snk Port FC 4
           pixymvb_AddPort( 0x311, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData311 ); // Snk Port FC 4
           pixymvb_AddPort( 0x312, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData312 ); // Snk Port FC 4
           pixymvb_AddPort( 0x313, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData313 ); // Snk Port FC 4
       }

   }

   pixymvb_AddPort( 0x308, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData308 ); // Snk Port FC 4
   pixymvb_AddPort( 0x309, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData309 ); // Snk Port FC 4
   pixymvb_AddPort( 0x318, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData318 ); // Snk Port FC 4
   pixymvb_AddPort( 0x328, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData328 ); // Snk Port FC 4


   pixymvb_AddPort( 0x510, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData510 ); // Snk Port FC 4
   pixymvb_AddPort( 0x511, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData511 ); // Snk Port FC 4
   pixymvb_AddPort( 0x512, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData512 ); // Snk Port FC 4
   pixymvb_AddPort( 0x513, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData513 ); // Snk Port FC 4
   pixymvb_AddPort( 0x514, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData514 ); // Snk Port FC 4
   pixymvb_AddPort( 0x515, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData515 ); // Snk Port FC 4
   pixymvb_AddPort( 0x520, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData520 ); // Snk Port FC 4
   pixymvb_AddPort( 0x521, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData521 ); // Snk Port FC 4
   pixymvb_AddPort( 0x522, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData522 ); // Snk Port FC 4
   pixymvb_AddPort( 0x523, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData523 ); // Snk Port FC 4
   pixymvb_AddPort( 0x524, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData524 ); // Snk Port FC 4
   pixymvb_AddPort( 0x525, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData525 ); // Snk Port FC 4
   pixymvb_AddPort( 0x530, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData530 ); // Snk Port FC 4
   pixymvb_AddPort( 0x531, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData531 ); // Snk Port FC 4
   pixymvb_AddPort( 0x532, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData532 ); // Snk Port FC 4
   pixymvb_AddPort( 0x533, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData533 ); // Snk Port FC 4
   pixymvb_AddPort( 0x534, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData534 ); // Snk Port FC 4
   pixymvb_AddPort( 0x535, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData535 ); // Snk Port FC 4
   pixymvb_AddPort( 0x540, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData540 ); // Snk Port FC 4
   pixymvb_AddPort( 0x541, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData541 ); // Snk Port FC 4
   pixymvb_AddPort( 0x542, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData542 ); // Snk Port FC 4
   pixymvb_AddPort( 0x543, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData543 ); // Snk Port FC 4
   pixymvb_AddPort( 0x544, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData544 ); // Snk Port FC 4
   pixymvb_AddPort( 0x545, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData545 ); // Snk Port FC 4

   pixymvb_AddPort( 0x508, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData508 ); // Snk Port FC 4


   pixymvb_AddPort( 0x610, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData610 ); // Snk Port FC 4
   pixymvb_AddPort( 0x611, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData611 ); // Snk Port FC 4
   pixymvb_AddPort( 0x612, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData612 ); // Snk Port FC 4
   pixymvb_AddPort( 0x620, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData620 ); // Snk Port FC 4
   pixymvb_AddPort( 0x621, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData621 ); // Snk Port FC 4
   pixymvb_AddPort( 0x622, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData622 ); // Snk Port FC 4
   pixymvb_AddPort( 0x630, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData630 ); // Snk Port FC 4
   pixymvb_AddPort( 0x631, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData631 ); // Snk Port FC 4
   pixymvb_AddPort( 0x632, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData632 ); // Snk Port FC 4
   pixymvb_AddPort( 0x640, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData640 ); // Snk Port FC 4
   pixymvb_AddPort( 0x641, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData641 ); // Snk Port FC 4
   pixymvb_AddPort( 0x642, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData642 ); // Snk Port FC 4

   pixymvb_AddPort( 0x618, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData618 ); // Snk Port FC 4
   pixymvb_AddPort( 0x628, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData628 ); // Snk Port FC 4
   pixymvb_AddPort( 0x638, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData638 ); // Snk Port FC 4
   pixymvb_AddPort( 0x648, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData648 ); // Snk Port FC 4



   pixymvb_AddPort( 0x710, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData710 ); // Snk Port FC 4
   pixymvb_AddPort( 0x711, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData711 ); // Snk Port FC 4
   pixymvb_AddPort( 0x720, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData720 ); // Snk Port FC 4
   pixymvb_AddPort( 0x721, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData721 ); // Snk Port FC 4

   pixymvb_AddPort( 0x718, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData718 ); // Snk Port FC 4
   pixymvb_AddPort( 0x728, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData728 ); // Snk Port FC 4



   pixymvb_AddPort( 0x810, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData810 ); // Snk Port FC 4
   pixymvb_AddPort( 0x811, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData811 ); // Snk Port FC 4
   pixymvb_AddPort( 0x820, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData820 ); // Snk Port FC 4
   pixymvb_AddPort( 0x821, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData821 ); // Snk Port FC 4
   pixymvb_AddPort( 0x830, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData830 ); // Snk Port FC 4
   pixymvb_AddPort( 0x831, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData831 ); // Snk Port FC 4
   pixymvb_AddPort( 0x840, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData840 ); // Snk Port FC 4
   pixymvb_AddPort( 0x841, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData841 ); // Snk Port FC 4
   pixymvb_AddPort( 0x850, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData850 ); // Snk Port FC 4
   pixymvb_AddPort( 0x851, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData851 ); // Snk Port FC 4
   pixymvb_AddPort( 0x860, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData860 ); // Snk Port FC 4
   pixymvb_AddPort( 0x861, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData861 ); // Snk Port FC 4
   pixymvb_AddPort( 0x870, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData870 ); // Snk Port FC 4
   pixymvb_AddPort( 0x871, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData871 ); // Snk Port FC 4
   pixymvb_AddPort( 0x880, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData880 ); // Snk Port FC 4
   pixymvb_AddPort( 0x881, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData881 ); // Snk Port FC 4
   pixymvb_AddPort( 0x890, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData890 ); // Snk Port FC 4
   pixymvb_AddPort( 0x891, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData891 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8A0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8A0 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8A1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8A1 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8B0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8B0 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8B1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8B1 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8C0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8C0 ); // Snk Port FC 4
   pixymvb_AddPort( 0x8C1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData8C1 ); // Snk Port FC 4

   pixymvb_AddPort( 0x809, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData809 ); // Snk Port FC 4



   pixymvb_AddPort( 0x910, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData910 ); // Snk Port FC 3
   pixymvb_AddPort( 0x920, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData920 ); // Snk Port FC 3
   pixymvb_AddPort( 0x930, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData930 ); // Snk Port FC 3
   pixymvb_AddPort( 0x940, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData940 ); // Snk Port FC 3
   pixymvb_AddPort( 0x950, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData950 ); // Snk Port FC 3
   pixymvb_AddPort( 0x960, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData960 ); // Snk Port FC 3

   pixymvb_AddPort( 0x918, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData918 ); // Snk Port FC 2
   pixymvb_AddPort( 0x928, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData928 ); // Snk Port FC 2
   pixymvb_AddPort( 0x938, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData938 ); // Snk Port FC 2
   pixymvb_AddPort( 0x948, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData948 ); // Snk Port FC 2
   pixymvb_AddPort( 0x958, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData958 ); // Snk Port FC 2
   pixymvb_AddPort( 0x968, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData968 ); // Snk Port FC 2


   pixymvb_AddPort( 0xA10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA10 ); // Snk Port FC 4
   pixymvb_AddPort( 0xA20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA20 ); // Snk Port FC 4

   pixymvb_AddPort( 0xA08, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortDataA08 ); // Snk Port FC 4


   pixymvb_AddPort( 0xB10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB10 ); // Snk Port FC 4
   pixymvb_AddPort( 0xB11, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB11 ); // Snk Port FC 4
   pixymvb_AddPort( 0xB20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB20 ); // Snk Port FC 4
   pixymvb_AddPort( 0xB21, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB21 ); // Snk Port FC 4

   pixymvb_AddPort( 0xB08, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB08 ); // Snk Port FC 4

   pixymvb_AddPort( 0xC10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataC10 ); // Snk Port FC 4
   pixymvb_AddPort( 0xC20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataC20 ); // Snk Port FC 4

   pixymvb_AddPort( 0xC08, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortDataC08 ); // Snk Port FC 4


   // Change MVB State To Operation State
   RetVal = pixymvb_ChangeState(PIXYMVB_OPERATION_STATE); // OP Mode

   #ifdef LOG_OPEN
   qDebug() <<"pixymvb_ChangeState:"<<RetVal;
   #endif

   if ( PIXYMVB_OK != RetVal )
   {
       return(false);
   }

   return true;
#endif  //windows_demo

}
void MvbThread::render()
{
    if( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}
/*

*/
void MvbThread::run()
{
#ifndef windows_demo
    UNSIGNED16 snkTmeSup = 0;
    UNSIGNED16 RetVal = 0;
    UNSIGNED16 i = 0;

    if( init() )
    {
        forever
        {
            if(TC1_HMI==1)
            {   // HMI tc1 set src data
                for(i=0;i<16;i++)
                {
                    srcPortData310[i] = UNSIGNED16(sendData[i*2]<<8)    + UNSIGNED16(sendData[i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    srcPortData311[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    srcPortData312[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    srcPortData313[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                }
                // send src data to bus
                 RetVal = pixymvb_PutPort(0x310, (PIXYMVB_Data *) &(srcPortData310[0]));

                //#ifdef LOG_OPEN
                //qDebug() <<"pixymvb_PutPort(0x310, (PIXYMVB_Data *) &(srcPortData310[0]))"<<RetVal;
                //#endif

                pixymvb_PutPort(0x311, (PIXYMVB_Data *) &(srcPortData311[0]));
                pixymvb_PutPort(0x312, (PIXYMVB_Data *) &(srcPortData312[0]));
                pixymvb_PutPort(0x313, (PIXYMVB_Data *) &(srcPortData313[0]));
                #ifdef USE_MVB_SEND_RECORD
                {
                    QString timeStr;
                    timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");
                    // qDebug()<<"writeRecorder  start:"<<timeStr;


                        //create csvFile
                        QString fileNameRunData = "./rundata" + QDateTime::currentDateTime().date().toString("yyyy_MM_dd") + ".csv";
                        QFile csvFileRunData( fileNameRunData );
                        if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
                        {
                            return;
                        }
                        QTextStream inoutRunData( &csvFileRunData );
                        inoutRunData.setCodec("GB2312");

                        QString dateTimeStr = QDateTime::currentDateTime().toString("yyyy_MM_dd,HH:mm:ss");

                        QString newLine = dateTimeStr;
                        QString str;
                        BYTE tmpByte;
                        int lineDataLen = 4;
                        quint32 lineData[lineDataLen];
                        for(int i=0;i<lineDataLen;i++)
                            lineData[i] = 0;


                        lineData[0] = srcPortData310[1]*65536+srcPortData310[0];
                        lineData[1] = srcPortData310[3]*65536+srcPortData310[2];
                        lineData[2] = srcPortData310[15]*65536+srcPortData310[14];
                        lineData[3] = srcPortData312[1]*65536+srcPortData312[0];
                  //      lineData[4] = srcPortData312[1]*65536+srcPortData312[0];


                        for(int i=0;i<lineDataLen;i++)
                        {
                            str.clear();
                            newLine += ",";
                            newLine += str.setNum(lineData[i],16);
                        }

                        inoutRunData << newLine << "\n";

                        inoutRunData.flush();//clear


                }
                #endif




            }
            else
            {   // HMI tc2 set src data
                if(TC2_HMI==1)
                {
                    for(i=0;i<16;i++)
                    {
                        srcPortData320[i] = UNSIGNED16(sendData[i*2]<< 8) + UNSIGNED16(sendData[i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData321[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData322[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData323[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                    }
                    // send src data to bus
                    RetVal = pixymvb_PutPort(0x320, (PIXYMVB_Data *) &(srcPortData320[0]));

                    #ifdef LOG_OPEN
                    qDebug() <<"pixymvb_PutPort(0x320, (PIXYMVB_Data *) &(srcPortData320[0]))"<<RetVal;
                    #endif

                    pixymvb_PutPort(0x321, (PIXYMVB_Data *) &(srcPortData321[0]));
                    pixymvb_PutPort(0x322, (PIXYMVB_Data *) &(srcPortData322[0]));
                    pixymvb_PutPort(0x323, (PIXYMVB_Data *) &(srcPortData323[0]));

                    #ifdef USE_MVB_SEND_RECORD
                    {
                        QString timeStr;
                        timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");
                        // qDebug()<<"writeRecorder  start:"<<timeStr;


                            //create csvFile
                            QString fileNameRunData = "./rundata" + QDateTime::currentDateTime().date().toString("yyyy_MM_dd") + ".csv";
                            QFile csvFileRunData( fileNameRunData );
                            if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
                            {
                                return;
                            }
                            QTextStream inoutRunData( &csvFileRunData );
                            inoutRunData.setCodec("GB2312");

                            QString dateTimeStr = QDateTime::currentDateTime().toString("yyyy_MM_dd,HH:mm:ss");

                            QString newLine = dateTimeStr;
                            QString str;
                            BYTE tmpByte;
                            int lineDataLen = 4;
                            quint32 lineData[lineDataLen];
                            for(int i=0;i<lineDataLen;i++)
                                lineData[i] = 0;


                            lineData[0] = srcPortData320[1]*65536+srcPortData320[0];
                            lineData[1] = srcPortData320[7]*65536+srcPortData320[6];
                            lineData[2] = srcPortData320[15]*65536+srcPortData320[14];
                            lineData[3] = srcPortData322[1]*65536+srcPortData322[0];
                          //  lineData[4] = srcPortData322[1]*65536+srcPortData320[0];


                            for(int i=0;i<lineDataLen;i++)
                            {
                                str.clear();
                                newLine += ",";
                                newLine += str.setNum(lineData[i],16);
                            }

                            inoutRunData << newLine << "\n";

                            inoutRunData.flush();//clear
                    }
                    #endif
                }
                else
                {

                }

            }

            // get snk data from bus
            RetVal = pixymvb_GetPort( 0xf, &snkPortDataf, &refresh_time_f);

            //#ifdef LOG_OPEN
            //qDebug() <<"pixymvb_GetPort( 0xf, &snkPortDataf, &refresh_time_f)"<<RetVal;
            //#endif

            // set to be processed snk data
            for (i=0;i<8;i++)
            {
                g_dataBuffer_MVB[i] = highbyteLowbyteExchange(snkPortDataf[i]);
            }


            // get snk data from bus
            RetVal = pixymvb_GetPort( 0x1, &snkPortData1, &refresh_time_1);
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2240+i] = highbyteLowbyteExchange(snkPortData1[i]);
            }

            RetVal = pixymvb_GetPort( 0x2, &snkPortData2, &refresh_time_2);
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2256+i] = highbyteLowbyteExchange(snkPortData2[i]);
            }

            pixymvb_GetPort( 0x110, &snkPortData110, &refresh_time_110); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[16+i] = highbyteLowbyteExchange(snkPortData110[i]);
            }

            pixymvb_GetPort( 0x111, &snkPortData111, &refresh_time_111); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData111[i]);
            }

            pixymvb_GetPort( 0x112, &snkPortData112, &refresh_time_112); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2192+i] = highbyteLowbyteExchange(snkPortData112[i]);
            }

            pixymvb_GetPort( 0x120, &snkPortData120, &refresh_time_120); // Snk Port FC 4
	//	printf("%d ",refresh_time_120);
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[48+i] = highbyteLowbyteExchange(snkPortData120[i]);
            }

            pixymvb_GetPort( 0x121, &snkPortData121, &refresh_time_121); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[64+i] = highbyteLowbyteExchange(snkPortData121[i]);
            }

            pixymvb_GetPort( 0x130, &snkPortData130, &refresh_time_130); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[80+i] = highbyteLowbyteExchange(snkPortData130[i]);
            }

            pixymvb_GetPort( 0x131, &snkPortData131, &refresh_time_131); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[96+i] = highbyteLowbyteExchange(snkPortData131[i]);
            }

            pixymvb_GetPort( 0x140, &snkPortData140, &refresh_time_140); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[112+i] = highbyteLowbyteExchange(snkPortData140[i]);
            }

            pixymvb_GetPort( 0x141, &snkPortData141, &refresh_time_141); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[128+i] = highbyteLowbyteExchange(snkPortData141[i]);
            }

            pixymvb_GetPort( 0x150, &snkPortData150, &refresh_time_150); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[144+i] = highbyteLowbyteExchange(snkPortData150[i]);
            }

            pixymvb_GetPort( 0x151, &snkPortData151, &refresh_time_151); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[160+i] = highbyteLowbyteExchange(snkPortData151[i]);
            }

            pixymvb_GetPort( 0x160, &snkPortData160, &refresh_time_160); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(snkPortData160[i]);
            }

            pixymvb_GetPort( 0x161, &snkPortData161, &refresh_time_161); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(snkPortData161[i]);
            }

            pixymvb_GetPort( 0x162, &snkPortData162, &refresh_time_162); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2208+i] = highbyteLowbyteExchange(snkPortData162[i]);
            }



            pixymvb_GetPort( 0x210, &snkPortData210, &refresh_time_210); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(snkPortData210[i]);
            }

            pixymvb_GetPort( 0x211, &snkPortData211, &refresh_time_211); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(snkPortData211[i]);
            }

            pixymvb_GetPort( 0x212, &snkPortData212, &refresh_time_212); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(snkPortData212[i]);
            }

            pixymvb_GetPort( 0x213, &snkPortData213, &refresh_time_213); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(snkPortData213[i]);
            }

            pixymvb_GetPort( 0x220, &snkPortData220, &refresh_time_220); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(snkPortData220[i]);
            }

            pixymvb_GetPort( 0x221, &snkPortData221, &refresh_time_221); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(snkPortData221[i]);
            }

            pixymvb_GetPort( 0x222, &snkPortData222, &refresh_time_222); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[304+i] = highbyteLowbyteExchange(snkPortData222[i]);
            }

            pixymvb_GetPort( 0x223, &snkPortData223, &refresh_time_223); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[320+i] = highbyteLowbyteExchange(snkPortData223[i]);
            }


            if(TC1_HMI==1)
            {   // HMi tc1 set rev data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[336+i] = highbyteLowbyteExchange(srcPortData310[i]);
                    g_dataBuffer_MVB[352+i] = highbyteLowbyteExchange(srcPortData311[i]);
                    g_dataBuffer_MVB[368+i] = highbyteLowbyteExchange(srcPortData312[i]);
                    g_dataBuffer_MVB[384+i] = highbyteLowbyteExchange(srcPortData313[i]);
                }

                pixymvb_GetPort( 0x320, &snkPortData320, &refresh_time_320); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[400+i] = highbyteLowbyteExchange(snkPortData320[i]);
                }

                pixymvb_GetPort( 0x321, &snkPortData321, &refresh_time_321); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[416+i] = highbyteLowbyteExchange(snkPortData321[i]);
                }

                pixymvb_GetPort( 0x322, &snkPortData322, &refresh_time_322); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[432+i] = highbyteLowbyteExchange(snkPortData322[i]);
                }

                pixymvb_GetPort( 0x323, &snkPortData323, &refresh_time_323); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[448+i] = highbyteLowbyteExchange(snkPortData323[i]);
                }
            }
            else
            {   // HMi tc2 set rev data
                pixymvb_GetPort( 0x310, &snkPortData310, &refresh_time_310); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[176+160+i] = highbyteLowbyteExchange(snkPortData310[i]);
                }

                pixymvb_GetPort( 0x311, &snkPortData311, &refresh_time_311); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[192+160+i] = highbyteLowbyteExchange(snkPortData311[i]);
                }

                pixymvb_GetPort( 0x312, &snkPortData312, &refresh_time_312); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[208+160+i] = highbyteLowbyteExchange(snkPortData312[i]);
                }

                pixymvb_GetPort( 0x313, &snkPortData313, &refresh_time_313); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[224+160+i] = highbyteLowbyteExchange(snkPortData313[i]);
                }

                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[240+160+i] = highbyteLowbyteExchange(srcPortData320[i]);
                    g_dataBuffer_MVB[256+160+i] = highbyteLowbyteExchange(srcPortData321[i]);
                    g_dataBuffer_MVB[272+160+i] = highbyteLowbyteExchange(srcPortData322[i]);
                    g_dataBuffer_MVB[288+160+i] = highbyteLowbyteExchange(srcPortData323[i]);
                }
            }



            pixymvb_GetPort( 0x510, &snkPortData510, &refresh_time_510); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[464+i] = highbyteLowbyteExchange(snkPortData510[i]);
            }

            pixymvb_GetPort( 0x511, &snkPortData511, &refresh_time_511); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[336+144+i] = highbyteLowbyteExchange(snkPortData511[i]);
            }

            pixymvb_GetPort( 0x512, &snkPortData512, &refresh_time_512); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[352+144+i] = highbyteLowbyteExchange(snkPortData512[i]);
            }

            pixymvb_GetPort( 0x513, &snkPortData513, &refresh_time_513); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[368+144+i] = highbyteLowbyteExchange(snkPortData513[i]);
            }

            pixymvb_GetPort( 0x514, &snkPortData514, &refresh_time_514); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[384+144+i] = highbyteLowbyteExchange(snkPortData514[i]);
            }

            pixymvb_GetPort( 0x515, &snkPortData515, &refresh_time_515); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[384+160+i] = highbyteLowbyteExchange(snkPortData515[i]);
            }

            pixymvb_GetPort( 0x520, &snkPortData520, &refresh_time_520); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[400+160+i] = highbyteLowbyteExchange(snkPortData520[i]);
            }

            pixymvb_GetPort( 0x521, &snkPortData521, &refresh_time_521); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[416+160+i] = highbyteLowbyteExchange(snkPortData521[i]);
            }

            pixymvb_GetPort( 0x522, &snkPortData522, &refresh_time_522); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[432+160+i] = highbyteLowbyteExchange(snkPortData522[i]);
            }

            pixymvb_GetPort( 0x523, &snkPortData523, &refresh_time_523); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[448+160+i] = highbyteLowbyteExchange(snkPortData523[i]);
            }

            pixymvb_GetPort( 0x524, &snkPortData524, &refresh_time_524); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[464+160+i] = highbyteLowbyteExchange(snkPortData524[i]);
            }

            pixymvb_GetPort( 0x525, &snkPortData525, &refresh_time_525); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[464+176+i] = highbyteLowbyteExchange(snkPortData525[i]);
            }

            pixymvb_GetPort( 0x530, &snkPortData530, &refresh_time_530); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[480+176+i] = highbyteLowbyteExchange(snkPortData530[i]);
            }

            pixymvb_GetPort( 0x531, &snkPortData531, &refresh_time_531); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[496+176+i] = highbyteLowbyteExchange(snkPortData531[i]);
            }

            pixymvb_GetPort( 0x532, &snkPortData532, &refresh_time_532); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[512+176+i] = highbyteLowbyteExchange(snkPortData532[i]);
            }

            pixymvb_GetPort( 0x533, &snkPortData533, &refresh_time_533); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[528+176+i] = highbyteLowbyteExchange(snkPortData533[i]);
            }

            pixymvb_GetPort( 0x534, &snkPortData534, &refresh_time_534); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[544+176+i] = highbyteLowbyteExchange(snkPortData534[i]);
            }

            pixymvb_GetPort( 0x535, &snkPortData535, &refresh_time_535); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[544+192+i] = highbyteLowbyteExchange(snkPortData535[i]);
            }


            pixymvb_GetPort( 0x540, &snkPortData540, &refresh_time_540); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[560+192+i] = highbyteLowbyteExchange(snkPortData540[i]);
            }

            pixymvb_GetPort( 0x541, &snkPortData541, &refresh_time_541); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[576+192+i] = highbyteLowbyteExchange(snkPortData541[i]);
            }

            pixymvb_GetPort( 0x542, &snkPortData542, &refresh_time_542); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[592+192+i] = highbyteLowbyteExchange(snkPortData542[i]);
            }

            pixymvb_GetPort( 0x543, &snkPortData543, &refresh_time_543); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[608+192+i] = highbyteLowbyteExchange(snkPortData543[i]);
            }

            pixymvb_GetPort( 0x544, &snkPortData544, &refresh_time_544); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[624+192+i] = highbyteLowbyteExchange(snkPortData544[i]);
            }

            pixymvb_GetPort( 0x545, &snkPortData545, &refresh_time_545); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[624+208+i] = highbyteLowbyteExchange(snkPortData545[i]);
            }




            pixymvb_GetPort( 0x610, &snkPortData610, &refresh_time_610); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[656+192+i] = highbyteLowbyteExchange(snkPortData610[i]);
            }

            pixymvb_GetPort( 0x611, &snkPortData611, &refresh_time_611); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[672+192+i] = highbyteLowbyteExchange(snkPortData611[i]);
            }

            pixymvb_GetPort( 0x612, &snkPortData612, &refresh_time_612); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[688+192+i] = highbyteLowbyteExchange(snkPortData612[i]);
            }

            pixymvb_GetPort( 0x620, &snkPortData620, &refresh_time_620); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[704+192+i] = highbyteLowbyteExchange(snkPortData620[i]);
            }

            pixymvb_GetPort( 0x621, &snkPortData621, &refresh_time_621); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[720+192+i] = highbyteLowbyteExchange(snkPortData621[i]);
            }

            pixymvb_GetPort( 0x622, &snkPortData622, &refresh_time_622); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[736+192+i] = highbyteLowbyteExchange(snkPortData622[i]);
            }

            pixymvb_GetPort( 0x630, &snkPortData630, &refresh_time_630); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[752+192+i] = highbyteLowbyteExchange(snkPortData630[i]);
            }

            pixymvb_GetPort( 0x631, &snkPortData631, &refresh_time_631); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[768+192+i] = highbyteLowbyteExchange(snkPortData631[i]);
            }

            pixymvb_GetPort( 0x632, &snkPortData632, &refresh_time_632); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[784+192+i] = highbyteLowbyteExchange(snkPortData632[i]);
            }

            pixymvb_GetPort( 0x640, &snkPortData640, &refresh_time_640); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[800+192+i] = highbyteLowbyteExchange(snkPortData640[i]);
            }

            pixymvb_GetPort( 0x641, &snkPortData641, &refresh_time_641); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[816+192+i] = highbyteLowbyteExchange(snkPortData641[i]);
            }

            pixymvb_GetPort( 0x642, &snkPortData642, &refresh_time_642); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[832+192+i] = highbyteLowbyteExchange(snkPortData642[i]);
            }

            pixymvb_GetPort( 0x710, &snkPortData710, &refresh_time_710); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[848+192+i] = highbyteLowbyteExchange(snkPortData710[i]);
            }

            pixymvb_GetPort( 0x711, &snkPortData711, &refresh_time_711); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[864+192+i] = highbyteLowbyteExchange(snkPortData711[i]);
            }

            pixymvb_GetPort( 0x720, &snkPortData720, &refresh_time_720); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[880+192+i] = highbyteLowbyteExchange(snkPortData720[i]);
            }

            pixymvb_GetPort( 0x721, &snkPortData721, &refresh_time_721); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[896+192+i] = highbyteLowbyteExchange(snkPortData721[i]);
            }



            pixymvb_GetPort( 0x810, &snkPortData810, &refresh_time_810); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[944+160+i] = highbyteLowbyteExchange(snkPortData810[i]);
            }

            pixymvb_GetPort( 0x811, &snkPortData811, &refresh_time_811); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[960+160+i] = highbyteLowbyteExchange(snkPortData811[i]);
            }

            pixymvb_GetPort( 0x820, &snkPortData820, &refresh_time_820); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[976+160+i] = highbyteLowbyteExchange(snkPortData820[i]);
            }

            pixymvb_GetPort( 0x821, &snkPortData821, &refresh_time_821); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[992+160+i] = highbyteLowbyteExchange(snkPortData821[i]);
            }

            pixymvb_GetPort( 0x830, &snkPortData830, &refresh_time_830); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1008+160+i] = highbyteLowbyteExchange(snkPortData830[i]);
            }

            pixymvb_GetPort( 0x831, &snkPortData831, &refresh_time_831); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1024+160+i] = highbyteLowbyteExchange(snkPortData831[i]);
            }

            pixymvb_GetPort( 0x840, &snkPortData840, &refresh_time_840); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1040+160+i] = highbyteLowbyteExchange(snkPortData840[i]);
            }

            pixymvb_GetPort( 0x841, &snkPortData841, &refresh_time_841); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1056+160+i] = highbyteLowbyteExchange(snkPortData841[i]);
            }

            pixymvb_GetPort( 0x850, &snkPortData850, &refresh_time_850); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1072+160+i] = highbyteLowbyteExchange(snkPortData850[i]);
            }

            pixymvb_GetPort( 0x851, &snkPortData851, &refresh_time_851); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1088+160+i] = highbyteLowbyteExchange(snkPortData851[i]);
            }

            pixymvb_GetPort( 0x860, &snkPortData860, &refresh_time_860); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1104+160+i] = highbyteLowbyteExchange(snkPortData860[i]);
            }

            pixymvb_GetPort( 0x861, &snkPortData861, &refresh_time_861); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1120+160+i] = highbyteLowbyteExchange(snkPortData861[i]);
            }

            pixymvb_GetPort( 0x870, &snkPortData870, &refresh_time_870); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1136+160+i] = highbyteLowbyteExchange(snkPortData870[i]);
            }

            pixymvb_GetPort( 0x871, &snkPortData871, &refresh_time_871); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1152+160+i] = highbyteLowbyteExchange(snkPortData871[i]);
            }

            pixymvb_GetPort( 0x880, &snkPortData880, &refresh_time_880); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1168+160+i] = highbyteLowbyteExchange(snkPortData880[i]);
            }

            pixymvb_GetPort( 0x881, &snkPortData881, &refresh_time_881); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1184+160+i] = highbyteLowbyteExchange(snkPortData881[i]);
            }

            pixymvb_GetPort( 0x890, &snkPortData890, &refresh_time_890); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1200+160+i] = highbyteLowbyteExchange(snkPortData890[i]);
            }

            pixymvb_GetPort( 0x891, &snkPortData891, &refresh_time_891); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1216+160+i] = highbyteLowbyteExchange(snkPortData891[i]);
            }

            pixymvb_GetPort( 0x8A0, &snkPortData8A0, &refresh_time_8A0); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1232+160+i] = highbyteLowbyteExchange(snkPortData8A0[i]);
            }

            pixymvb_GetPort( 0x8A1, &snkPortData8A1, &refresh_time_8A1); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1248+160+i] = highbyteLowbyteExchange(snkPortData8A1[i]);
            }

            pixymvb_GetPort( 0x8B0, &snkPortData8B0, &refresh_time_8B0); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1264+160+i] = highbyteLowbyteExchange(snkPortData8B0[i]);
            }

            pixymvb_GetPort( 0x8B1, &snkPortData8B1, &refresh_time_8B1); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1280+160+i] = highbyteLowbyteExchange(snkPortData8B1[i]);
            }

            pixymvb_GetPort( 0x8C0, &snkPortData8C0, &refresh_time_8C0); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1296+160+i] = highbyteLowbyteExchange(snkPortData8C0[i]);
            }

            pixymvb_GetPort( 0x8C1, &snkPortData8C1, &refresh_time_8C1); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1312+160+i] = highbyteLowbyteExchange(snkPortData8C1[i]);
            }

//            pixymvb_GetPort( 0x7D0, &snkPortData7D0, &refresh_time_7D0); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1328+i] = highbyteLowbyteExchange(snkPortData7D0[i]);
//            }

//            pixymvb_GetPort( 0x7D1, &snkPortData7D1, &refresh_time_7D1); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1344+i] = highbyteLowbyteExchange(snkPortData7D1[i]);
//            }

//            pixymvb_GetPort( 0x7E0, &snkPortData7E0, &refresh_time_7E0); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1360+i] = highbyteLowbyteExchange(snkPortData7E0[i]);
//            }

//            pixymvb_GetPort( 0x7E1, &snkPortData7E1, &refresh_time_7E1); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1376+i] = highbyteLowbyteExchange(snkPortData7E1[i]);
//            }

//            pixymvb_GetPort( 0x7F0, &snkPortData7F0, &refresh_time_7F0); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1392+i] = highbyteLowbyteExchange(snkPortData7F0[i]);
//            }

//            pixymvb_GetPort( 0x7F1, &snkPortData7F1, &refresh_time_7F1); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1408+i] = highbyteLowbyteExchange(snkPortData7F1[i]);
//            }

//            //pixymvb_GetPort( 0x800, &snkPortData800, &refresh_time_800); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1424+i] = highbyteLowbyteExchange(snkPortData800[i]);
//            }

            pixymvb_GetPort( 0x910, &snkPortData910, &refresh_time_910); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1440+48+i] = highbyteLowbyteExchange(snkPortData910[i]);
            }

            pixymvb_GetPort( 0x920, &snkPortData920, &refresh_time_920); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1456+48+i] = highbyteLowbyteExchange(snkPortData920[i]);
            }

            pixymvb_GetPort( 0x930, &snkPortData930, &refresh_time_930); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1472+48+i] = highbyteLowbyteExchange(snkPortData930[i]);
            }

            pixymvb_GetPort( 0x940, &snkPortData940, &refresh_time_940); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1488+48+i] = highbyteLowbyteExchange(snkPortData940[i]);
            }

            pixymvb_GetPort( 0x950, &snkPortData950, &refresh_time_950); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1504+48+i] = highbyteLowbyteExchange(snkPortData950[i]);
            }

            pixymvb_GetPort( 0x960, &snkPortData960, &refresh_time_960); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1520+48+i] = highbyteLowbyteExchange(snkPortData960[i]);
            }

//            //pixymvb_GetPort( 0x870, &snkPortData870, &refresh_time_870); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1536+i] = highbyteLowbyteExchange(snkPortData870[i]);
//            }

//            //pixymvb_GetPort( 0x880, &snkPortData880, &refresh_time_880); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1552+i] = highbyteLowbyteExchange(snkPortData880[i]);
//            }

//            pixymvb_GetPort( 0x900, &snkPortData900, &refresh_time_900); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1568+i] = highbyteLowbyteExchange(snkPortData900[i]);
//            }

            pixymvb_GetPort( 0xA10, &snkPortDataA10, &refresh_time_A10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1584+i] = highbyteLowbyteExchange(snkPortDataA10[i]);
            }

//            pixymvb_GetPort( 0xA11, &snkPortDataA11, &refresh_time_A11); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1584+16+i] = highbyteLowbyteExchange(snkPortDataA11[i]);
//            }

            pixymvb_GetPort( 0xA20, &snkPortDataA20, &refresh_time_A20); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1600+16+i] = highbyteLowbyteExchange(snkPortDataA20[i]);
            }

//            pixymvb_GetPort( 0xA21, &snkPortDataA21, &refresh_time_A21); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1600+32+i] = highbyteLowbyteExchange(snkPortDataA21[i]);
//            }

            pixymvb_GetPort( 0xB10, &snkPortDataB10, &refresh_time_B10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1616+32+i] = highbyteLowbyteExchange(snkPortDataB10[i]);
            }

            pixymvb_GetPort( 0xB11, &snkPortDataB11, &refresh_time_B11); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1632+32+i] = highbyteLowbyteExchange(snkPortDataB11[i]);
            }

            pixymvb_GetPort( 0xB20, &snkPortDataB20, &refresh_time_B20); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1648+32+i] = highbyteLowbyteExchange(snkPortDataB20[i]);
            }

            pixymvb_GetPort( 0xB21, &snkPortDataB21, &refresh_time_B21); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1664+32+i] = highbyteLowbyteExchange(snkPortDataB21[i]);
            }

            pixymvb_GetPort( 0xC10, &snkPortDataC10, &refresh_time_C10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1680+32+i] = highbyteLowbyteExchange(snkPortDataC10[i]);
            }

            pixymvb_GetPort( 0xC20, &snkPortDataC20, &refresh_time_C20); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1696+32+i] = highbyteLowbyteExchange(snkPortDataC20[i]);
            }

//            pixymvb_GetPort( 0xB10, &snkPortDataB10, &refresh_time_B10); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1712+i] = highbyteLowbyteExchange(snkPortDataB10[i]);
//            }

//            pixymvb_GetPort( 0xB20, &snkPortDataB20, &refresh_time_B20); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1728+i] = highbyteLowbyteExchange(snkPortDataB20[i]);
//            }

//            pixymvb_GetPort( 0xF00, &snkPortDataF00, &refresh_time_F00); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1744+i] = highbyteLowbyteExchange(snkPortDataF00[i]);
//            }

//            pixymvb_GetPort( 0xF01, &snkPortDataF01, &refresh_time_F01); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1760+i] = highbyteLowbyteExchange(snkPortDataF01[i]);
//            }

//            pixymvb_GetPort( 0xF02, &snkPortDataF02, &refresh_time_F02); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1776+i] = highbyteLowbyteExchange(snkPortDataF02[i]);
//            }

//            pixymvb_GetPort( 0xF03, &snkPortDataF03, &refresh_time_F03); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1792+i] = highbyteLowbyteExchange(snkPortDataF03[i]);
//            }

//            pixymvb_GetPort( 0xF10, &snkPortDataF10, &refresh_time_F10); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1808+i] = highbyteLowbyteExchange(snkPortDataF10[i]);
//            }

//            pixymvb_GetPort( 0xF11, &snkPortDataF11, &refresh_time_F11); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1824+i] = highbyteLowbyteExchange(snkPortDataF11[i]);
//            }

//            pixymvb_GetPort( 0xF12, &snkPortDataF12, &refresh_time_F12); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1840+i] = highbyteLowbyteExchange(snkPortDataF12[i]);
//            }

//            pixymvb_GetPort( 0xF13, &snkPortDataF13, &refresh_time_F13); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[1856+i] = highbyteLowbyteExchange(snkPortDataF13[i]);
//            }
//            pixymvb_GetPort( 0x108, &snkPortData108, &snkTmeSupv); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[2000+i] = highbyteLowbyteExchange(snkPortData108[i]);
//            }

            pixymvb_GetPort( 0x118, &snkPortData118, &refresh_time_118); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2016-272+i] = highbyteLowbyteExchange(snkPortData118[i]);
            }

            pixymvb_GetPort( 0x128, &snkPortData128, &refresh_time_128); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2032-272+i] = highbyteLowbyteExchange(snkPortData128[i]);
            }

            pixymvb_GetPort( 0x138, &snkPortData138, &refresh_time_138); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2048-272+i] = highbyteLowbyteExchange(snkPortData138[i]);
            }

            pixymvb_GetPort( 0x148, &snkPortData148, &refresh_time_148); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2064-272+i] = highbyteLowbyteExchange(snkPortData148[i]);
            }

            pixymvb_GetPort( 0x158, &snkPortData158, &refresh_time_158); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2080-272+i] = highbyteLowbyteExchange(snkPortData158[i]);
            }

            pixymvb_GetPort( 0x168, &snkPortData168, &refresh_time_168); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-272+i] = highbyteLowbyteExchange(snkPortData168[i]);
            }



            pixymvb_GetPort( 0x218, &snkPortData218, &refresh_time_218); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-288+32+i] = highbyteLowbyteExchange(snkPortData218[i]);
            }

            pixymvb_GetPort( 0x228, &snkPortData228, &refresh_time_228); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-272+32+i] = highbyteLowbyteExchange(snkPortData228[i]);
            }

            pixymvb_GetPort( 0x308, &snkPortData308, &refresh_time_308); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1872+i] = highbyteLowbyteExchange(snkPortData308[i]);
            }

            pixymvb_GetPort( 0x309, &snkPortData309, &refresh_time_309); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-256+48+i] = highbyteLowbyteExchange(snkPortData309[i]);
            }

            pixymvb_GetPort( 0x318, &snkPortData318, &refresh_time_318); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-240+48+i] = highbyteLowbyteExchange(snkPortData318[i]);
            }

            pixymvb_GetPort( 0x328, &snkPortData328, &refresh_time_328); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-224+48+i] = highbyteLowbyteExchange(snkPortData328[i]);
            }

            pixymvb_GetPort( 0x508, &snkPortData508, &refresh_time_508); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-208+48+i] = highbyteLowbyteExchange(snkPortData508[i]);
            }

            pixymvb_GetPort( 0x618, &snkPortData618, &refresh_time_618); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-192+48+i] = highbyteLowbyteExchange(snkPortData618[i]);
            }

            pixymvb_GetPort( 0x628, &snkPortData628, &refresh_time_628); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-176+48+i] = highbyteLowbyteExchange(snkPortData628[i]);
            }

            pixymvb_GetPort( 0x638, &snkPortData638, &refresh_time_638); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-160+48+i] = highbyteLowbyteExchange(snkPortData638[i]);
            }

            pixymvb_GetPort( 0x648, &snkPortData648, &refresh_time_648); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-144+48+i] = highbyteLowbyteExchange(snkPortData648[i]);
            }



            pixymvb_GetPort( 0x718, &snkPortData718, &refresh_time_718); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-128+48+i] = highbyteLowbyteExchange(snkPortData718[i]);
            }

            pixymvb_GetPort( 0x728, &snkPortData728, &refresh_time_728); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-112+48+i] = highbyteLowbyteExchange(snkPortData728[i]);
            }

            pixymvb_GetPort( 0x809, &snkPortData809, &refresh_time_809); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-96+48+i] = highbyteLowbyteExchange(snkPortData809[i]);
            }



            pixymvb_GetPort( 0x918, &snkPortData918, &refresh_time_918); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-80+48+i] = highbyteLowbyteExchange(snkPortData918[i]);
            }


            pixymvb_GetPort( 0x928, &snkPortData928, &refresh_time_928); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096-16+i] = highbyteLowbyteExchange(snkPortData928[i]);
            }

            pixymvb_GetPort( 0x938, &snkPortData938, &refresh_time_938); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData938[i]);
            }

            pixymvb_GetPort( 0x948, &snkPortData948, &refresh_time_948); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+16+i] = highbyteLowbyteExchange(snkPortData948[i]);
            }

            pixymvb_GetPort( 0x958, &snkPortData958, &refresh_time_958); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+32+i] = highbyteLowbyteExchange(snkPortData958[i]);
            }

            pixymvb_GetPort( 0x968, &snkPortData968, &refresh_time_968); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+48+i] = highbyteLowbyteExchange(snkPortData968[i]);
            }



            pixymvb_GetPort( 0xA08, &snkPortDataA08, &refresh_time_A08); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+64+i] = highbyteLowbyteExchange(snkPortDataA08[i]);
            }

            pixymvb_GetPort( 0xB08, &snkPortDataB08, &refresh_time_B08); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2224+i] = highbyteLowbyteExchange(snkPortDataB08[i]);
            }

            pixymvb_GetPort( 0xC08, &snkPortDataC08, &refresh_time_C08); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+80+i] = highbyteLowbyteExchange(snkPortDataC08[i]);
            }

//            pixymvb_GetPort( 0xA18, &snkPortDataA18, &snkTmeSupv); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[2392+i] = highbyteLowbyteExchange(snkPortDataA18[i]);
//            }

//            pixymvb_GetPort( 0xB08, &snkPortDataB08, &snkTmeSupv); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[2408+i] = highbyteLowbyteExchange(snkPortDataB08[i]);
//            }

//            pixymvb_GetPort( 0xB18, &snkPortDataB18, &snkTmeSupv); // Snk Port FC 3
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[2424+i] = highbyteLowbyteExchange(snkPortDataB18[i]);
//            }


            msleep(100);

        } // end

    }
    else
    {
        #ifdef LOG_OPEN
        qDebug() <<"pixymvb init() not OK!!!!!";
        #endif
    }



    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
#endif  //windows_demo

}




UNSIGNED16 MvbThread::highbyteLowbyteExchange( const UNSIGNED16 wordData )
{
    return ( ((wordData&0x00FF)<<8) | ((wordData&0xFF00)>>8) );
}
#ifdef DEBUG
void MvbThread::writeDebugLog( const QString str, const SIGNED16 state )
{
    QFile file("debugLog.txt");
    if (!file.open(QIODevice::Append))
    {
        qDebug("debugLog.txt open failed\n");
        return;
    }
    QTextStream out(&file);
    out << str << ": ";
    switch(state)
    {
    case PIXYMVB_OK:
        out << "PIXYMVB_OK";
        break;
    case PIXYMVB_FAILED:
        out << "PIXYMVB_FAILED";
        break;
    case PIXYMVB_PARAMERR:
        out << "PIXYMVB_PARAMERR";
        break;
    case PIXYMVB_STATEERR:
        out << "PIXYMVB_STATEERR";
        break;
    default:
        out << "UNKNOW_ERROR";
        break;
    }
    out << "!\n";
    file.close();
}
#endif


