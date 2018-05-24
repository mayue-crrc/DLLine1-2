#include "cudpdatapage1.h"

ROMDATA g_PicRom_UdpDataPage1[] =
{
    /*string                font                            rc                  foreground color         background color             control type               ID           */
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
   // D_COMMON_PAGE_HEADER(QObject::trUtf8("网口数据"))
    D_COMMON_PAGE_HEADER(QObject::trUtf8("网口数据1"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//                {"",                            D_FONT(6),      QRect(0,543,800,2),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {QObject::trUtf8("Page1"),              D_FONT(6),      QRect(237,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE1  },
//                {QObject::trUtf8("Page2"),              D_FONT(6),      QRect(350,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE2  },
//                {QObject::trUtf8("RevPage3"),              D_FONT(6),      QRect(462,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE3  },
//                {QObject::trUtf8("SendPage"),              D_FONT(6),      QRect(575,550,100,43),         Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_SENDPAGE  },
//                {QObject::trUtf8("返 回"),                  D_FONT(6),      QRect(687,550,100,43),         Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_BACK      },


                //H line
                //{"",                            D_FONT(6),      QRect(62,75,500,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"Length",                    D_FONT(6),      QRect(10,   9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_LENGTH },
                {"Head",                    D_FONT(6),      QRect(60,   9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_HEAD },
                {"CRC",                    D_FONT(6),      QRect(110,   9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_CRC },

                {"Length",                    D_FONT(6),      QRect(6,   41, 60,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_LABLE },


                {"",                            D_FONT(6),      QRect(34+25,72,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,90,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,108,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,126,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,144,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,162,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,180,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,198,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,216,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,234,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,252,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,270,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,288,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,306,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,324,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,342,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,360,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,378,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,396,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,414,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,432,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(34+25,450,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                 {"",                            D_FONT(6),      QRect(34+25,468,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                 {"",                            D_FONT(6),      QRect(34+25,486,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                 {"",                            D_FONT(6),      QRect(34+25,504,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                 {"",                            D_FONT(6),      QRect(34+25,522,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                 {"",                            D_FONT(6),      QRect(34+25,540,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
            //     {"",                            D_FONT(6),      QRect(30,558,740,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

//                {"510",                            D_FONT(4),      QRect(4,72,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"520",                            D_FONT(4),      QRect(4,90,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,108,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,126,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,144,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,162,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,180,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,198,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,216,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,234,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,252,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,270,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,288,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,306,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,324,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,342,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,360,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,378,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,396,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,414,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,432,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(4,450,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(4,468,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(4,486,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(4,504,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(4,522,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
//               //  {"",                            D_FONT(6),      QRect(4,540,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },


                //{"",                            D_FONT(6),      QRect(62,500,500,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

                //V line
                {"",                            D_FONT(6),      QRect(34+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(87,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(80+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(137,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(126+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(187,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(172+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(237,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(218+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(287,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(264+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(337,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(310+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(387,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(356+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(437,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(402+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(487,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(448+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
               // {"",                            D_FONT(6),      QRect(537,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(494+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(540+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(586+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(632+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(678+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(724+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"",                            D_FONT(6),      QRect(770+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },


                //{"",                            D_FONT(6),      QRect(587,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(612,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(637,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(662,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                //{"",                            D_FONT(6),      QRect(687,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

};

int g_UdpDataPage1RomLen = sizeof(g_PicRom_UdpDataPage1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CUdpDataPage1,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif

END_MESSAGE_MAP()

CUdpDataPage1::CUdpDataPage1()
{
    m_nBtnIndex = 1;
    UDP_lable=QObject::trUtf8("接收1");
}

void CUdpDataPage1::OnUpdatePage()
{
    UpdateRawData();
    QPainter* pPainter = GetPainter();
       QRect rc;
       QRect rc2;
       WORD g_dataBuffer_temp[416];

       switch(m_nBtnIndex)
       {
           case 1:
           {

               for(int i = 0; i < 416; i++)
               {

                 //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);
                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

           //        char hex[8] = {'\0'};
           //        sprintf(hex,"%04X",g_dataBuffer_MVB[i]);
           //        pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }
           }
           break;
            case 2:
            {      
               for(int i = 0; i < 416; i++)
               {

                 //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);
                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

//                   char hex[8] = {'\0'};
//                   sprintf(hex,"%04X",g_dataBuffer_MVB[i+416]);
//                   pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i+416]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i+416]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }


            }
           break;
            case 3:
            {
//               for(int i = 0; i < 416; i++)
//               {
//                   if(i<40)
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832];
//                   }
//                   if((39<i)&&(i<49))
//                   {
//                        g_dataBuffer_temp[i]=0;
//                   }
//                   if((47<i)&&(i<72))
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832-8];
//                   }
//                   if((71<i)&&(i<80))
//                   {
//                        g_dataBuffer_temp[i]=0;
//                   }
//                   if((79<i)&&(i<416))
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832-16];
//                   }

//               }

               for(int i = 0; i < 416; i++)
               {

                   //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);

                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

//                   char hex[8] = {'\0'};
//                   sprintf(hex,"%04X",g_dataBuffer_temp[i]);
//                   pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i+832]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i+832]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }

            }
           break;
       case 4:
       {
//               for(int i = 0; i < 416; i++)
//               {

//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1248-16];


//               }



          for(int i = 0; i < 416; i++)
          {
              rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+1248]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+1248]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }

       }
      break;
       case 5:
       {
          for(int i = 0; i < 416; i++)
          {

//              if(i<160)
//              {
//                   g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1664-16];
//              }

//              if(159<i)
//              {
//                   g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1664-16+192];
//              }



          }
          for(int i = 0; i < 416; i++)
          {

              //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
             // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
              rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+1664]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+1664]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }

       }
      break;
      case 6:
      {
          for(int i = 0; i < 416; i++)
          {

              //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
             // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
              rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+2080]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+2080]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }


      }
      break;

       case 7:
       {

          for(int i = 0; i < 416; i++)
          {

              //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
             // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
              rc =  QRect((60*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((60*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

//              char hex[8] = {'\0'};
//              sprintf(hex,"%04X",g_dataBuffer_MVB[i+3000]);
//              pPainter->drawText(rc, Qt::AlignCenter,hex);
              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+3000]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+3000]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }

       }
      break;
       default:
           break;
       }

}

void CUdpDataPage1::OnShowPage()
{


#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("接收1"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("接收2"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收3"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收4"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("接收5"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("接收6"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("接收7"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收数据1"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收数据2"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("发送数据"));
   // ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("调试页面"));
   // ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
    RedrawTable();

    this->InitPageHeader();
}

void CUdpDataPage1::UpdateRawData()
{
    WORD temp[4];
    for(int i=0;i<3;i++)
    {
        temp[i] = (test_tempdata[90+i*2]<<8) | test_tempdata[90+i*2+1];
    }

    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_LENGTH))->SetCtrlText(QString::number(temp[0]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_HEAD))->SetCtrlText(QString::number(temp[1]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_CRC))->SetCtrlText(QString::number(temp[2]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_LABLE))->SetCtrlText(UDP_lable);

}

void CUdpDataPage1::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CUdpDataPage1::OnComBtn2Clk()
{
    m_nBtnIndex = 1;
    UDP_lable=QObject::trUtf8("接收1");
         RedrawTable();
}

void CUdpDataPage1::OnComBtn3Clk()
{
    m_nBtnIndex = 2;
    UDP_lable=QObject::trUtf8("接收2");
         RedrawTable();
}

void CUdpDataPage1::OnComBtn4Clk()
{
    m_nBtnIndex = 3;
    UDP_lable=QObject::trUtf8("接收3");
         RedrawTable();
}

void CUdpDataPage1::OnComBtn5Clk()
{
    m_nBtnIndex = 4;
    UDP_lable=QObject::trUtf8("接收4");
         RedrawTable();
}

void CUdpDataPage1::OnComBtn6Clk()
{
    m_nBtnIndex = 5;
    UDP_lable=QObject::trUtf8("接收5");
         RedrawTable();
}
void CUdpDataPage1::OnComBtn7Clk()
{
    m_nBtnIndex = 6;
    UDP_lable=QObject::trUtf8("接收6");
         RedrawTable();
}
void CUdpDataPage1::OnComBtn8Clk()
{
    m_nBtnIndex = 7;
    UDP_lable=QObject::trUtf8("接收7");
         RedrawTable();
}

void CUdpDataPage1::OnInitPage()
{
}

void CUdpDataPage1::RedrawTable()
{
    QPainter* pPainter = GetPainter();
    QRect rc;

    for(int i = 0; i < 32; i++)
    {

        //rc = QRect((48+25+46*i),46,20,25);
        rc = QRect((59*SCREEN_factor+23*SCREEN_factor*i),46*SCREEN_factor,23*SCREEN_factor,25*SCREEN_factor);
        //rc = QRect((28+29*i),36,16,20);
        //rc = QRect((35*(4/5)+37*(4/5)*i),46*(4/5),20*(4/5),25*(4/5));
        pPainter->fillRect(rc,Qt::black);
        pPainter->setFont(D_FONT(5));
        pPainter->setPen(Qt::gray);
        pPainter->drawText(rc, Qt::AlignCenter,QString::number(i));
    }

    for(int i = 0; i < 26; i++)
    {

        rc = QRect(1*SCREEN_factor,(72*SCREEN_factor+18*SCREEN_factor*i),28*SCREEN_factor+25*SCREEN_factor,20*SCREEN_factor);
        //rc = QRect(1,(57+14*i),22,16);
        //rc = QRect(1,(72*(4/5)+18*(4/5)*i),28*(4/5),20*(4/5));
        pPainter->fillRect(rc,Qt::black);
        pPainter->setFont(D_FONT(5));
        pPainter->setPen(Qt::gray);
       switch(m_nBtnIndex)
       {
        case 1:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"F");
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(110));
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(111));
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(120));
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(121));
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(130));
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(131));
            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(140));
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(141));
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(150));
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(151));
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(160));
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(161));
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(210));
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(211));
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(212));
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(213));
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(220));
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(221));
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(222));
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(223));
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(310));
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(311));
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(312));
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(313));
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(320));
            }
//            if(i==24)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,QString::number(421));
//            }
//            if(i==25)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,QString::number(422));
//            }

            break;
        case 2:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(321));
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(322));
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(323));
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(510));
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(511));
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(512));
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(513));
            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(514));
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(515));
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(520));
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(521));
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(522));
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(523));
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(524));
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(525));
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(530));
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(531));
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(532));
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(533));
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(534));
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(535));
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(540));
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(541));
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(542));
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(543));
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(544));
            }
//            if(i==26)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,QString::number(561));
//            }
//            if(i==27)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,QString::number(610));
//            }
//            if(i==28)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,QString::number(611));
//            }
            break;
        case 3:
             if(i==0)
             {
                    pPainter->drawText(rc, Qt::AlignCenter,QString::number(545));
             }
             if(i==1)
             {
                    pPainter->drawText(rc, Qt::AlignCenter,QString::number(610));
             }
             if(i==2)
             {
                    pPainter->drawText(rc, Qt::AlignCenter,QString::number(611));
             }
             if(i==3)
             {
                    pPainter->drawText(rc, Qt::AlignCenter,QString::number(612));
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(620));
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(621));
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(622));
            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(630));
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(631));
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(632));
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(640));
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(641));
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(642));
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(710));
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(711));
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(720));
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(721));
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(810));
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(811));
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(820));
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(821));
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(830));
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(831));
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(840));
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(841));
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(850));
            }

            break;

        case 4:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"851");
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"860");
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"861");
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"870");
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"871");
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"880");
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"881");
            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"890");
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"891");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8A0");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8A1");
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8B0");
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8B1");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8C0");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"8C1");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(910));
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(920));
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(930));
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(940));
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(950));
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(960));
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"A10");
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"A11");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"A20");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"A21");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"B10");
            }

            break;
        case 5:
            if(i==0)
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"B11");
            }
            if(i==1)
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"B20");
            }
            if(i==2)
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"B21");
            }
            if(i==3)
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"C10");
            }
            if(i==4)
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"C20");
            }
           if(i==5)
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"118");
           }
           if(i==6)
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"128");
            }
            if(i==7)
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"138");
           }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"148");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"158");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QObject::trUtf8("168"));
            }

            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"218");

            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"228");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"308");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"309");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(318));
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(328));
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(508));
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(618));
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(628));
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(638));
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,QString::number(648));
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"718");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"728");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"809");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"918");
            }


            break;
        case 6:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"928");
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"938");
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"948");
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"958");
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"968");
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"A08");
            }


            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"C08");
            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"112");
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"162");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"B08");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }

            break;
        case 7:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU1_1");
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU1_2");
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU1_3");
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU1_4");
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU1_5");
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU2_1");
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU2_2");

            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU2_3");
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU2_4");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"BCU2_5");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR1_1");
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR1_2");
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR2_1");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR2_2");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR3_1");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR3_2");
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR4_1");
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR4_2");
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR5_1");
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR5_2");
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR6_1");
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR6_2");
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR7_1");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR7_2");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR8_1");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"DOOR8_2");
            }
            break;


        default:
            break;

        }
    }
}


