#ifndef DATABUFFER_H
#define DATABUFFER_H

#include "CGlobal.h"

#define bit0  0x0001
#define bit1  0x0002
#define bit2  0x0004
#define bit3  0x0008
#define bit4  0x0010
#define bit5  0x0020
#define bit6  0x0040
#define bit7  0x0080
#define bit8  0x0100
#define bit9  0x0200
#define bit10 0x0400
#define bit11 0x0800
#define bit12 0x1000
#define bit13 0x2000
#define bit14 0x4000
#define bit15 0x8000

#define Nbit0  0xfffe
#define Nbit1  0xfffd
#define Nbit2  0xfffb
#define Nbit3  0xfff7
#define Nbit4  0xffef
#define Nbit5  0xffdf
#define Nbit6  0xffbf
#define Nbit7  0xff7f
#define Nbit8  0xfeff
#define Nbit9  0xfdff
#define Nbit10 0xfbff
#define Nbit11 0xf7ff
#define Nbit12 0xefff
#define Nbit13 0xdfff
#define Nbit14 0xbfff
#define Nbit15 0x7fff
// 0xF
#define CTALL_LifeSign_U16                             g_dataBuffer_Display[0]
#define CTALL_Month_U8                                 g_dataBuffer_Display[1]%256
#define CTALL_Year_U8                                  g_dataBuffer_Display[1]/256
#define CTALL_Hour_U8                                  g_dataBuffer_Display[2]%256
#define CTALL_Day_U8                                   g_dataBuffer_Display[2]/256
#define CTALL_Second_U8                                g_dataBuffer_Display[3]%256
#define CTALL_Minite_U8                                g_dataBuffer_Display[3]/256
#define CTALL_TrainNumber_U16                          g_dataBuffer_Display[4]

// 0x118
#define CTRIOM1_GWLifeSign1_U8                         g_dataBuffer_Display[1744]

#define CTRIOM1_DOM1DI_1_U16                        g_dataBuffer_Display[1753]
#define CTRIOM1_DOM1DI_2_U16                        g_dataBuffer_Display[1754]

#define CTRIOM1_DOM1DI24_B1                        g_dataBuffer_Display[1753]& bit7
#define CTRIOM1_DOM1DI23_B1                        g_dataBuffer_Display[1753]& bit6
#define CTRIOM1_DOM1DI22_B1                        g_dataBuffer_Display[1753]& bit5
#define CTRIOM1_DOM1DI21_B1                        g_dataBuffer_Display[1753]& bit4
#define CTRIOM1_DOM1DI20_B1                        g_dataBuffer_Display[1753]& bit3
#define CTRIOM1_DOM1DI19_B1                        g_dataBuffer_Display[1753]& bit2
#define CTRIOM1_DOM1DI18_B1                        g_dataBuffer_Display[1753]& bit1
#define CTRIOM1_DOM1DI17_B1                        g_dataBuffer_Display[1753]& bit0
#define CTRIOM1_DOM1DI16_B1                        g_dataBuffer_Display[1753]& bit15
#define CTRIOM1_DOM1DI15_B1                        g_dataBuffer_Display[1753]& bit14
#define CTRIOM1_DOM1DI14_B1                        g_dataBuffer_Display[1753]& bit13
#define CTRIOM1_DOM1DI13_B1                        g_dataBuffer_Display[1753]& bit12
#define CTRIOM1_DOM1DI12_B1                       g_dataBuffer_Display[1753]& bit11
#define CTRIOM1_DOM1DI11_B1                       g_dataBuffer_Display[1753]& bit10
#define CTRIOM1_DOM1DI10_B1                       g_dataBuffer_Display[1753]& bit9
#define CTRIOM1_DOM1DI9_B1                       g_dataBuffer_Display[1753]& bit8
#define CTRIOM1_DOM1DI8_B1                        g_dataBuffer_Display[1754]& bit7
#define CTRIOM1_DOM1DI7_B1                        g_dataBuffer_Display[1754]& bit6
#define CTRIOM1_DOM1DI6_B1                        g_dataBuffer_Display[1754]& bit5
#define CTRIOM1_DOM1DI5_B1                        g_dataBuffer_Display[1754]& bit4
#define CTRIOM1_DOM1DI4_B1                        g_dataBuffer_Display[1754]& bit3
#define CTRIOM1_DOM1DI3_B1                        g_dataBuffer_Display[1754]& bit2
#define CTRIOM1_DOM1DI2_B1                        g_dataBuffer_Display[1754]& bit1
#define CTRIOM1_DOM1DI1_B1                        g_dataBuffer_Display[1754]& bit0

// 0x128
#define CTRIOM2_GWLifeSign1_U8                         g_dataBuffer_Display[1744+16]

#define CTRIOM2_DOM1DI_1_U16                        g_dataBuffer_Display[1753+16]
#define CTRIOM2_DOM1DI_2_U16                        g_dataBuffer_Display[1754+16]

#define CTRIOM2_DOM1DI24_B1                        g_dataBuffer_Display[1753+16]& bit7
#define CTRIOM2_DOM1DI23_B1                        g_dataBuffer_Display[1753+16]& bit6
#define CTRIOM2_DOM1DI22_B1                        g_dataBuffer_Display[1753+16]& bit5
#define CTRIOM2_DOM1DI21_B1                        g_dataBuffer_Display[1753+16]& bit4
#define CTRIOM2_DOM1DI20_B1                        g_dataBuffer_Display[1753+16]& bit3
#define CTRIOM2_DOM1DI19_B1                        g_dataBuffer_Display[1753+16]& bit2
#define CTRIOM2_DOM1DI18_B1                        g_dataBuffer_Display[1753+16]& bit1
#define CTRIOM2_DOM1DI17_B1                        g_dataBuffer_Display[1753+16]& bit0
#define CTRIOM2_DOM1DI16_B1                        g_dataBuffer_Display[1753+16]& bit15
#define CTRIOM2_DOM1DI15_B1                        g_dataBuffer_Display[1753+16]& bit14
#define CTRIOM2_DOM1DI14_B1                        g_dataBuffer_Display[1753+16]& bit13
#define CTRIOM2_DOM1DI13_B1                        g_dataBuffer_Display[1753+16]& bit12
#define CTRIOM2_DOM1DI12_B1                       g_dataBuffer_Display[1753+16]& bit11
#define CTRIOM2_DOM1DI11_B1                       g_dataBuffer_Display[1753+16]& bit10
#define CTRIOM2_DOM1DI10_B1                       g_dataBuffer_Display[1753+16]& bit9
#define CTRIOM2_DOM1DI9_B1                       g_dataBuffer_Display[1753+16]& bit8
#define CTRIOM2_DOM1DI8_B1                        g_dataBuffer_Display[1754+16]& bit7
#define CTRIOM2_DOM1DI7_B1                        g_dataBuffer_Display[1754+16]& bit6
#define CTRIOM2_DOM1DI6_B1                        g_dataBuffer_Display[1754+16]& bit5
#define CTRIOM2_DOM1DI5_B1                        g_dataBuffer_Display[1754+16]& bit4
#define CTRIOM2_DOM1DI4_B1                        g_dataBuffer_Display[1754+16]& bit3
#define CTRIOM2_DOM1DI3_B1                        g_dataBuffer_Display[1754+16]& bit2
#define CTRIOM2_DOM1DI2_B1                        g_dataBuffer_Display[1754+16]& bit1
#define CTRIOM2_DOM1DI1_B1                        g_dataBuffer_Display[1754+16]& bit0

// 0x138
#define CTRIOM3_GWLifeSign1_U8                         g_dataBuffer_Display[1744+32]

#define CTRIOM3_DOM1DI_1_U16                        g_dataBuffer_Display[1753+32]
#define CTRIOM3_DOM1DI_2_U16                        g_dataBuffer_Display[1754+32]

#define CTRIOM3_DOM1DI24_B1                        g_dataBuffer_Display[1753+32]& bit7
#define CTRIOM3_DOM1DI23_B1                        g_dataBuffer_Display[1753+32]& bit6
#define CTRIOM3_DOM1DI22_B1                        g_dataBuffer_Display[1753+32]& bit5
#define CTRIOM3_DOM1DI21_B1                        g_dataBuffer_Display[1753+32]& bit4
#define CTRIOM3_DOM1DI20_B1                        g_dataBuffer_Display[1753+32]& bit3
#define CTRIOM3_DOM1DI19_B1                        g_dataBuffer_Display[1753+32]& bit2
#define CTRIOM3_DOM1DI18_B1                        g_dataBuffer_Display[1753+32]& bit1
#define CTRIOM3_DOM1DI17_B1                        g_dataBuffer_Display[1753+32]& bit0
#define CTRIOM3_DOM1DI16_B1                        g_dataBuffer_Display[1753+32]& bit15
#define CTRIOM3_DOM1DI15_B1                        g_dataBuffer_Display[1753+32]& bit14
#define CTRIOM3_DOM1DI14_B1                        g_dataBuffer_Display[1753+32]& bit13
#define CTRIOM3_DOM1DI13_B1                        g_dataBuffer_Display[1753+32]& bit12
#define CTRIOM3_DOM1DI12_B1                       g_dataBuffer_Display[1753+32]& bit11
#define CTRIOM3_DOM1DI11_B1                       g_dataBuffer_Display[1753+32]& bit10
#define CTRIOM3_DOM1DI10_B1                       g_dataBuffer_Display[1753+32]& bit9
#define CTRIOM3_DOM1DI9_B1                       g_dataBuffer_Display[1753+32]& bit8
#define CTRIOM3_DOM1DI8_B1                        g_dataBuffer_Display[1754+32]& bit7
#define CTRIOM3_DOM1DI7_B1                        g_dataBuffer_Display[1754+32]& bit6
#define CTRIOM3_DOM1DI6_B1                        g_dataBuffer_Display[1754+32]& bit5
#define CTRIOM3_DOM1DI5_B1                        g_dataBuffer_Display[1754+32]& bit4
#define CTRIOM3_DOM1DI4_B1                        g_dataBuffer_Display[1754+32]& bit3
#define CTRIOM3_DOM1DI3_B1                        g_dataBuffer_Display[1754+32]& bit2
#define CTRIOM3_DOM1DI2_B1                        g_dataBuffer_Display[1754+32]& bit1
#define CTRIOM3_DOM1DI1_B1                        g_dataBuffer_Display[1754+32]& bit0

// 0x148
#define CTRIOM4_GWLifeSign1_U8                         g_dataBuffer_Display[1744+48]

#define CTRIOM4_DOM1DI_1_U16                        g_dataBuffer_Display[1753+48]
#define CTRIOM4_DOM1DI_2_U16                        g_dataBuffer_Display[1754+48]

#define CTRIOM4_DOM1DI24_B1                        g_dataBuffer_Display[1753+48]& bit7
#define CTRIOM4_DOM1DI23_B1                        g_dataBuffer_Display[1753+48]& bit6
#define CTRIOM4_DOM1DI22_B1                        g_dataBuffer_Display[1753+48]& bit5
#define CTRIOM4_DOM1DI21_B1                        g_dataBuffer_Display[1753+48]& bit4
#define CTRIOM4_DOM1DI20_B1                        g_dataBuffer_Display[1753+48]& bit3
#define CTRIOM4_DOM1DI19_B1                        g_dataBuffer_Display[1753+48]& bit2
#define CTRIOM4_DOM1DI18_B1                        g_dataBuffer_Display[1753+48]& bit1
#define CTRIOM4_DOM1DI17_B1                        g_dataBuffer_Display[1753+48]& bit0
#define CTRIOM4_DOM1DI16_B1                        g_dataBuffer_Display[1753+48]& bit15
#define CTRIOM4_DOM1DI15_B1                        g_dataBuffer_Display[1753+48]& bit14
#define CTRIOM4_DOM1DI14_B1                        g_dataBuffer_Display[1753+48]& bit13
#define CTRIOM4_DOM1DI13_B1                        g_dataBuffer_Display[1753+48]& bit12
#define CTRIOM4_DOM1DI12_B1                       g_dataBuffer_Display[1753+48]& bit11
#define CTRIOM4_DOM1DI11_B1                       g_dataBuffer_Display[1753+48]& bit10
#define CTRIOM4_DOM1DI10_B1                       g_dataBuffer_Display[1753+48]& bit9
#define CTRIOM4_DOM1DI9_B1                       g_dataBuffer_Display[1753+48]& bit8
#define CTRIOM4_DOM1DI8_B1                        g_dataBuffer_Display[1754+48]& bit7
#define CTRIOM4_DOM1DI7_B1                        g_dataBuffer_Display[1754+48]& bit6
#define CTRIOM4_DOM1DI6_B1                        g_dataBuffer_Display[1754+48]& bit5
#define CTRIOM4_DOM1DI5_B1                        g_dataBuffer_Display[1754+48]& bit4
#define CTRIOM4_DOM1DI4_B1                        g_dataBuffer_Display[1754+48]& bit3
#define CTRIOM4_DOM1DI3_B1                        g_dataBuffer_Display[1754+48]& bit2
#define CTRIOM4_DOM1DI2_B1                        g_dataBuffer_Display[1754+48]& bit1
#define CTRIOM4_DOM1DI1_B1                        g_dataBuffer_Display[1754+48]& bit0

// 0x158
#define CTRIOM5_GWLifeSign1_U8                         g_dataBuffer_Display[1744+64]

#define CTRIOM5_DOM1DI_1_U16                        g_dataBuffer_Display[1753+64]
#define CTRIOM5_DOM1DI_2_U16                        g_dataBuffer_Display[1754+64]

#define CTRIOM5_DOM1DI24_B1                        g_dataBuffer_Display[1753+64]& bit7
#define CTRIOM5_DOM1DI23_B1                        g_dataBuffer_Display[1753+64]& bit6
#define CTRIOM5_DOM1DI22_B1                        g_dataBuffer_Display[1753+64]& bit5
#define CTRIOM5_DOM1DI21_B1                        g_dataBuffer_Display[1753+64]& bit4
#define CTRIOM5_DOM1DI20_B1                        g_dataBuffer_Display[1753+64]& bit3
#define CTRIOM5_DOM1DI19_B1                        g_dataBuffer_Display[1753+64]& bit2
#define CTRIOM5_DOM1DI18_B1                        g_dataBuffer_Display[1753+64]& bit1
#define CTRIOM5_DOM1DI17_B1                        g_dataBuffer_Display[1753+64]& bit0
#define CTRIOM5_DOM1DI16_B1                        g_dataBuffer_Display[1753+64]& bit15
#define CTRIOM5_DOM1DI15_B1                        g_dataBuffer_Display[1753+64]& bit14
#define CTRIOM5_DOM1DI14_B1                        g_dataBuffer_Display[1753+64]& bit13
#define CTRIOM5_DOM1DI13_B1                        g_dataBuffer_Display[1753+64]& bit12
#define CTRIOM5_DOM1DI12_B1                       g_dataBuffer_Display[1753+64]& bit11
#define CTRIOM5_DOM1DI11_B1                       g_dataBuffer_Display[1753+64]& bit10
#define CTRIOM5_DOM1DI10_B1                       g_dataBuffer_Display[1753+64]& bit9
#define CTRIOM5_DOM1DI9_B1                       g_dataBuffer_Display[1753+64]& bit8
#define CTRIOM5_DOM1DI8_B1                        g_dataBuffer_Display[1754+64]& bit7
#define CTRIOM5_DOM1DI7_B1                        g_dataBuffer_Display[1754+64]& bit6
#define CTRIOM5_DOM1DI6_B1                        g_dataBuffer_Display[1754+64]& bit5
#define CTRIOM5_DOM1DI5_B1                        g_dataBuffer_Display[1754+64]& bit4
#define CTRIOM5_DOM1DI4_B1                        g_dataBuffer_Display[1754+64]& bit3
#define CTRIOM5_DOM1DI3_B1                        g_dataBuffer_Display[1754+64]& bit2
#define CTRIOM5_DOM1DI2_B1                        g_dataBuffer_Display[1754+64]& bit1
#define CTRIOM5_DOM1DI1_B1                        g_dataBuffer_Display[1754+64]& bit0


// 0x168
#define CTRIOM6_GWLifeSign1_U8                         g_dataBuffer_Display[1744+80]

#define CTRIOM6_DOM1DI_1_U16                        g_dataBuffer_Display[1753+80]
#define CTRIOM6_DOM1DI_2_U16                        g_dataBuffer_Display[1754+80]

#define CTRIOM6_DOM1DI24_B1                        g_dataBuffer_Display[1753+80]& bit7
#define CTRIOM6_DOM1DI23_B1                        g_dataBuffer_Display[1753+80]& bit6
#define CTRIOM6_DOM1DI22_B1                        g_dataBuffer_Display[1753+80]& bit5
#define CTRIOM6_DOM1DI21_B1                        g_dataBuffer_Display[1753+80]& bit4
#define CTRIOM6_DOM1DI20_B1                        g_dataBuffer_Display[1753+80]& bit3
#define CTRIOM6_DOM1DI19_B1                        g_dataBuffer_Display[1753+80]& bit2
#define CTRIOM6_DOM1DI18_B1                        g_dataBuffer_Display[1753+80]& bit1
#define CTRIOM6_DOM1DI17_B1                        g_dataBuffer_Display[1753+80]& bit0
#define CTRIOM6_DOM1DI16_B1                        g_dataBuffer_Display[1753+80]& bit15
#define CTRIOM6_DOM1DI15_B1                        g_dataBuffer_Display[1753+80]& bit14
#define CTRIOM6_DOM1DI14_B1                        g_dataBuffer_Display[1753+80]& bit13
#define CTRIOM6_DOM1DI13_B1                        g_dataBuffer_Display[1753+80]& bit12
#define CTRIOM6_DOM1DI12_B1                       g_dataBuffer_Display[1753+80]& bit11
#define CTRIOM6_DOM1DI11_B1                       g_dataBuffer_Display[1753+80]& bit10
#define CTRIOM6_DOM1DI10_B1                       g_dataBuffer_Display[1753+80]& bit9
#define CTRIOM6_DOM1DI9_B1                       g_dataBuffer_Display[1753+80]& bit8
#define CTRIOM6_DOM1DI8_B1                        g_dataBuffer_Display[1754+80]& bit7
#define CTRIOM6_DOM1DI7_B1                        g_dataBuffer_Display[1754+80]& bit6
#define CTRIOM6_DOM1DI6_B1                        g_dataBuffer_Display[1754+80]& bit5
#define CTRIOM6_DOM1DI5_B1                        g_dataBuffer_Display[1754+80]& bit4
#define CTRIOM6_DOM1DI4_B1                        g_dataBuffer_Display[1754+80]& bit3
#define CTRIOM6_DOM1DI3_B1                        g_dataBuffer_Display[1754+80]& bit2
#define CTRIOM6_DOM1DI2_B1                        g_dataBuffer_Display[1754+80]& bit1
#define CTRIOM6_DOM1DI1_B1                        g_dataBuffer_Display[1754+80]& bit0
// 0x110
#define RIOM1CT_GWLifeSign1_U8                         g_dataBuffer_Display[16]%256
#define RIOM1CT_GWVersion_U8                           g_dataBuffer_Display[16]/256
#define RIOM1CT_DIVersion_U8                           g_dataBuffer_Display[17]%256
#define RIOM1CT_DOVersion_U8                           g_dataBuffer_Display[17]/256
#define RIOM1CT_AIVersion_U8                           g_dataBuffer_Display[18]%256
#define RIOM1CT_PWMVersion_U8                          g_dataBuffer_Display[18]/256
#define RIOM1CT_DIM1LifeSign_U8                        g_dataBuffer_Display[19]%256
#define RIOM1CT_DIM2LifeSign_U8                        g_dataBuffer_Display[19]/256
#define RIOM1CT_DIM3LifeSign_U8                        g_dataBuffer_Display[20]%256
#define RIOM1CT_DIM4LifeSign_U8                        g_dataBuffer_Display[20]/256
#define RIOM1CT_DIM5LifeSign_U8                         g_dataBuffer_Display[21]%256
#define RIOM1CT_DIM6LifeSign_U8                           g_dataBuffer_Display[21]/256
#define RIOM1CT_DIM7LifeSign_U8                           g_dataBuffer_Display[22]%256
#define RIOM1CT_DIM8LifeSign_U8                           g_dataBuffer_Display[22]/256
#define RIOM1CT_DOM1LifeSign_U8                           g_dataBuffer_Display[23]%256
#define RIOM1CT_DOM2LifeSign_U8                          g_dataBuffer_Display[23]/256
#define RIOM1CT_DOM3LifeSign_U8                        g_dataBuffer_Display[24]%256
#define RIOM1CT_DOM4LifeSign_U8                        g_dataBuffer_Display[24]/256
#define RIOM1CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[25]%256
#define RIOM1CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[25]/256
#define RIOM1CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[26]%256
#define RIOM1CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[26]/256
#define RIOM1CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[27]%256
#define RIOM1CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[27]/256
#define RIOM1CT_DIM1Online_B1                        g_dataBuffer_Display[28]& bit7
#define RIOM1CT_DIM2Online_B1                        g_dataBuffer_Display[28]& bit6
#define RIOM1CT_DIM3Online_B1                        g_dataBuffer_Display[28]& bit5
#define RIOM1CT_DIM4Online_B1                        g_dataBuffer_Display[28]& bit4
#define RIOM1CT_DIM5Online_B1                        g_dataBuffer_Display[28]& bit3
#define RIOM1CT_DIM6Online_B1                        g_dataBuffer_Display[28]& bit2
#define RIOM1CT_DIM7Online_B1                        g_dataBuffer_Display[28]& bit1
#define RIOM1CT_DIM8Online_B1                        g_dataBuffer_Display[28]& bit0
#define RIOM1CT_DOM1Online_B1                        g_dataBuffer_Display[28]& bit15
#define RIOM1CT_DOM2Online_B1                        g_dataBuffer_Display[28]& bit14
#define RIOM1CT_DOM3Online_B1                        g_dataBuffer_Display[28]& bit13
#define RIOM1CT_DOM4Online_B1                        g_dataBuffer_Display[28]& bit12
#define RIOM1CT_AIOM1Online_B1                       g_dataBuffer_Display[28]& bit11
#define RIOM1CT_AIOM2Online_B1                       g_dataBuffer_Display[28]& bit10
#define RIOM1CT_AIOM3Online_B1                       g_dataBuffer_Display[28]& bit9
#define RIOM1CT_AIOM4Online_B1                       g_dataBuffer_Display[28]& bit8
#define RIOM1CT_PWMM1Online_B1                       g_dataBuffer_Display[29]& bit7
#define RIOM1CT_PWMM2Online_B1                       g_dataBuffer_Display[29]& bit6
#define RIOM1CT_LineStatus_U8                        g_dataBuffer_Display[31]%256
#define RIOM1CT_LAT_B1                               g_dataBuffer_Display[31]& bit7
#define RIOM1CT_RLD_B1                               g_dataBuffer_Display[31]& bit6
#define RIOM1CT_KeyNumber_U8                         g_dataBuffer_Display[31]/256
// 0x111
#define RIOM1CT_AIOM1AI1_U16                         g_dataBuffer_Display[32]
#define RIOM1CT_AIOM1AI2_U16                         g_dataBuffer_Display[33]
#define RIOM1CT_AIOM1AI3_U16                         g_dataBuffer_Display[34]
#define RIOM1CT_AIOM1AI4_U16                         g_dataBuffer_Display[35]
#define RIOM1CT_AIOM1AI5_U16                         g_dataBuffer_Display[36]
#define RIOM1CT_AIOM1AI6_U16                         g_dataBuffer_Display[37]
#define RIOM1CT_AIOM1AI7_U16                         g_dataBuffer_Display[38]
#define RIOM1CT_AIOM1AI8_U16                         g_dataBuffer_Display[39]
#define RIOM1CT_PWMM1PWM1_U16                         g_dataBuffer_Display[40]
#define RIOM1CT_PWMM1PWM2_U16                         g_dataBuffer_Display[41]

#define RIOM1CT_DIM1DI_1_U16                        g_dataBuffer_Display[42]
#define RIOM1CT_DIM1DI_2_U16                        g_dataBuffer_Display[43]
#define RIOM1CT_DIM1DI_3_U16                        g_dataBuffer_Display[44]
#define RIOM1CT_DIM1DI_4_U16                        g_dataBuffer_Display[45]
#define RIOM1CT_DIM1DI_5_U16                        g_dataBuffer_Display[46]


#define RIOM1CT_DIM1DI24_B1                        g_dataBuffer_Display[42]& bit7
#define RIOM1CT_DIM1DI23_B1                        g_dataBuffer_Display[42]& bit6
#define RIOM1CT_DIM1DI22_B1                        g_dataBuffer_Display[42]& bit5
#define RIOM1CT_DIM1DI21_B1                        g_dataBuffer_Display[42]& bit4
#define RIOM1CT_DIM1DI20_B1                        g_dataBuffer_Display[42]& bit3
#define RIOM1CT_DIM1DI19_B1                        g_dataBuffer_Display[42]& bit2
#define RIOM1CT_DIM1DI18_B1                        g_dataBuffer_Display[42]& bit1
#define RIOM1CT_DIM1DI17_B1                        g_dataBuffer_Display[42]& bit0
#define RIOM1CT_DIM1DI16_B1                        g_dataBuffer_Display[42]& bit15
#define RIOM1CT_DIM1DI15_B1                        g_dataBuffer_Display[42]& bit14
#define RIOM1CT_DIM1DI14_B1                        g_dataBuffer_Display[42]& bit13
#define RIOM1CT_DIM1DI13_B1                        g_dataBuffer_Display[42]& bit12
#define RIOM1CT_DIM1DI12_B1                       g_dataBuffer_Display[42]& bit11
#define RIOM1CT_DIM1DI11_B1                       g_dataBuffer_Display[42]& bit10
#define RIOM1CT_DIM1DI10_B1                       g_dataBuffer_Display[42]& bit9
#define RIOM1CT_DIM1DI9_B1                       g_dataBuffer_Display[42]& bit8
#define RIOM1CT_DIM1DI8_B1                        g_dataBuffer_Display[43]& bit7
#define RIOM1CT_DIM1DI7_B1                        g_dataBuffer_Display[43]& bit6
#define RIOM1CT_DIM1DI6_B1                        g_dataBuffer_Display[43]& bit5
#define RIOM1CT_DIM1DI5_B1                        g_dataBuffer_Display[43]& bit4
#define RIOM1CT_DIM1DI4_B1                        g_dataBuffer_Display[43]& bit3
#define RIOM1CT_DIM1DI3_B1                        g_dataBuffer_Display[43]& bit2
#define RIOM1CT_DIM1DI2_B1                        g_dataBuffer_Display[43]& bit1
#define RIOM1CT_DIM1DI1_B1                        g_dataBuffer_Display[43]& bit0

#define RIOM1CT_DIM2DI24_B1                        g_dataBuffer_Display[43]& bit15
#define RIOM1CT_DIM2DI23_B1                        g_dataBuffer_Display[43]& bit14
#define RIOM1CT_DIM2DI22_B1                        g_dataBuffer_Display[43]& bit13
#define RIOM1CT_DIM2DI21_B1                        g_dataBuffer_Display[43]& bit12
#define RIOM1CT_DIM2DI20_B1                       g_dataBuffer_Display[43]& bit11
#define RIOM1CT_DIM2DI19_B1                       g_dataBuffer_Display[43]& bit10
#define RIOM1CT_DIM2DI18_B1                       g_dataBuffer_Display[43]& bit9
#define RIOM1CT_DIM2DI17_B1                       g_dataBuffer_Display[43]& bit8
#define RIOM1CT_DIM2DI16_B1                        g_dataBuffer_Display[44]& bit7
#define RIOM1CT_DIM2DI15_B1                        g_dataBuffer_Display[44]& bit6
#define RIOM1CT_DIM2DI14_B1                        g_dataBuffer_Display[44]& bit5
#define RIOM1CT_DIM2DI13_B1                        g_dataBuffer_Display[44]& bit4
#define RIOM1CT_DIM2DI12_B1                       g_dataBuffer_Display[44]& bit3
#define RIOM1CT_DIM2DI11_B1                       g_dataBuffer_Display[44]& bit2
#define RIOM1CT_DIM2DI10_B1                       g_dataBuffer_Display[44]& bit1
#define RIOM1CT_DIM2DI9_B1                       g_dataBuffer_Display[44]& bit0
#define RIOM1CT_DIM2DI8_B1                        g_dataBuffer_Display[44]& bit15
#define RIOM1CT_DIM2DI7_B1                        g_dataBuffer_Display[44]& bit14
#define RIOM1CT_DIM2DI6_B1                        g_dataBuffer_Display[44]& bit13
#define RIOM1CT_DIM2DI5_B1                        g_dataBuffer_Display[44]& bit12
#define RIOM1CT_DIM2DI4_B1                        g_dataBuffer_Display[44]& bit11
#define RIOM1CT_DIM2DI3_B1                        g_dataBuffer_Display[44]& bit10
#define RIOM1CT_DIM2DI2_B1                        g_dataBuffer_Display[44]& bit9
#define RIOM1CT_DIM2DI1_B1                        g_dataBuffer_Display[44]& bit8

#define RIOM1CT_DIM3DI24_B1                        g_dataBuffer_Display[45]& bit7
#define RIOM1CT_DIM3DI23_B1                        g_dataBuffer_Display[45]& bit6
#define RIOM1CT_DIM3DI22_B1                        g_dataBuffer_Display[45]& bit5
#define RIOM1CT_DIM3DI21_B1                        g_dataBuffer_Display[45]& bit4
#define RIOM1CT_DIM3DI20_B1                        g_dataBuffer_Display[45]& bit3
#define RIOM1CT_DIM3DI19_B1                        g_dataBuffer_Display[45]& bit2
#define RIOM1CT_DIM3DI18_B1                        g_dataBuffer_Display[45]& bit1
#define RIOM1CT_DIM3DI17_B1                        g_dataBuffer_Display[45]& bit0
#define RIOM1CT_DIM3DI16_B1                        g_dataBuffer_Display[45]& bit15
#define RIOM1CT_DIM3DI15_B1                        g_dataBuffer_Display[45]& bit14
#define RIOM1CT_DIM3DI14_B1                        g_dataBuffer_Display[45]& bit13
#define RIOM1CT_DIM3DI13_B1                        g_dataBuffer_Display[45]& bit12
#define RIOM1CT_DIM3DI12_B1                       g_dataBuffer_Display[45]& bit11
#define RIOM1CT_DIM3DI11_B1                       g_dataBuffer_Display[45]& bit10
#define RIOM1CT_DIM3DI10_B1                       g_dataBuffer_Display[45]& bit9
#define RIOM1CT_DIM3DI9_B1                       g_dataBuffer_Display[45]& bit8
#define RIOM1CT_DIM3DI8_B1                        g_dataBuffer_Display[46]& bit7
#define RIOM1CT_DIM3DI7_B1                        g_dataBuffer_Display[46]& bit6
#define RIOM1CT_DIM3DI6_B1                        g_dataBuffer_Display[46]& bit5
#define RIOM1CT_DIM3DI5_B1                        g_dataBuffer_Display[46]& bit4
#define RIOM1CT_DIM3DI4_B1                        g_dataBuffer_Display[46]& bit3
#define RIOM1CT_DIM3DI3_B1                        g_dataBuffer_Display[46]& bit2
#define RIOM1CT_DIM3DI2_B1                        g_dataBuffer_Display[46]& bit1
#define RIOM1CT_DIM3DI1_B1                        g_dataBuffer_Display[46]& bit0
//0x112
#define RIOM1CT_DIM1DI_11_U16                        g_dataBuffer_Display[2202]
#define RIOM1CT_DIM1DI_12_U16                        g_dataBuffer_Display[2203]

#define RIOM1CT_DIM4DI24_B1                        g_dataBuffer_Display[2202]& bit7
#define RIOM1CT_DIM4DI23_B1                        g_dataBuffer_Display[2202]& bit6
#define RIOM1CT_DIM4DI22_B1                        g_dataBuffer_Display[2202]& bit5
#define RIOM1CT_DIM4DI21_B1                        g_dataBuffer_Display[2202]& bit4
#define RIOM1CT_DIM4DI20_B1                        g_dataBuffer_Display[2202]& bit3
#define RIOM1CT_DIM4DI19_B1                        g_dataBuffer_Display[2202]& bit2
#define RIOM1CT_DIM4DI18_B1                        g_dataBuffer_Display[2202]& bit1
#define RIOM1CT_DIM4DI17_B1                        g_dataBuffer_Display[2202]& bit0
#define RIOM1CT_DIM4DI16_B1                        g_dataBuffer_Display[2202]& bit15
#define RIOM1CT_DIM4DI15_B1                        g_dataBuffer_Display[2202]& bit14
#define RIOM1CT_DIM4DI14_B1                        g_dataBuffer_Display[2202]& bit13
#define RIOM1CT_DIM4DI13_B1                        g_dataBuffer_Display[2202]& bit12
#define RIOM1CT_DIM4DI12_B1                       g_dataBuffer_Display[2202]& bit11
#define RIOM1CT_DIM4DI11_B1                       g_dataBuffer_Display[2202]& bit10
#define RIOM1CT_DIM4DI10_B1                       g_dataBuffer_Display[2202]& bit9
#define RIOM1CT_DIM4DI9_B1                        g_dataBuffer_Display[2202]& bit8
#define RIOM1CT_DIM4DI8_B1                        g_dataBuffer_Display[2203]& bit7
#define RIOM1CT_DIM4DI7_B1                        g_dataBuffer_Display[2203]& bit6
#define RIOM1CT_DIM4DI6_B1                        g_dataBuffer_Display[2203]& bit5
#define RIOM1CT_DIM4DI5_B1                        g_dataBuffer_Display[2203]& bit4
#define RIOM1CT_DIM4DI4_B1                        g_dataBuffer_Display[2203]& bit3
#define RIOM1CT_DIM4DI3_B1                        g_dataBuffer_Display[2203]& bit2
#define RIOM1CT_DIM4DI2_B1                        g_dataBuffer_Display[2203]& bit1
#define RIOM1CT_DIM4DI1_B1                        g_dataBuffer_Display[2203]& bit0

// 0x120
#define RIOM2CT_GWLifeSign1_U8                         g_dataBuffer_Display[32+16]%256
#define RIOM2CT_GWVersion_U8                           g_dataBuffer_Display[32+16]/256
#define RIOM2CT_DIVersion_U8                           g_dataBuffer_Display[32+17]%256
#define RIOM2CT_DOVersion_U8                           g_dataBuffer_Display[32+17]/256
#define RIOM2CT_AIVersion_U8                           g_dataBuffer_Display[32+18]%256
#define RIOM2CT_PWMVersion_U8                          g_dataBuffer_Display[32+18]/256
#define RIOM2CT_DIM1LifeSign_U8                        g_dataBuffer_Display[32+19]%256
#define RIOM2CT_DIM2LifeSign_U8                        g_dataBuffer_Display[32+19]/256
#define RIOM2CT_DIM3LifeSign_U8                        g_dataBuffer_Display[32+20]%256
#define RIOM2CT_DIM4LifeSign_U8                        g_dataBuffer_Display[32+20]/256
#define RIOM2CT_DIM5LifeSign_U8                        g_dataBuffer_Display[32+21]%256
#define RIOM2CT_DIM6LifeSign_U8                           g_dataBuffer_Display[32+21]/256
#define RIOM2CT_DIM7LifeSign_U8                           g_dataBuffer_Display[32+22]%256
#define RIOM2CT_DIM8LifeSign_U8                           g_dataBuffer_Display[32+22]/256
#define RIOM2CT_DOM1LifeSign_U8                           g_dataBuffer_Display[32+23]%256
#define RIOM2CT_DOM2LifeSign_U8                          g_dataBuffer_Display[32+23]/256
#define RIOM2CT_DOM3LifeSign_U8                        g_dataBuffer_Display[32+24]%256
#define RIOM2CT_DOM4LifeSign_U8                        g_dataBuffer_Display[32+24]/256
#define RIOM2CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[32+25]%256
#define RIOM2CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[32+25]/256
#define RIOM2CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[32+26]%256
#define RIOM2CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[32+26]/256
#define RIOM2CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[32+27]%256
#define RIOM2CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[32+27]/256
#define RIOM2CT_DIM1Online_B1                        g_dataBuffer_Display[32+28]& bit7
#define RIOM2CT_DIM2Online_B1                        g_dataBuffer_Display[32+28]& bit6
#define RIOM2CT_DIM3Online_B1                        g_dataBuffer_Display[32+28]& bit5
#define RIOM2CT_DIM4Online_B1                        g_dataBuffer_Display[32+28]& bit4
#define RIOM2CT_DIM5Online_B1                        g_dataBuffer_Display[32+28]& bit3
#define RIOM2CT_DIM6Online_B1                        g_dataBuffer_Display[32+28]& bit2
#define RIOM2CT_DIM7Online_B1                        g_dataBuffer_Display[32+28]& bit1
#define RIOM2CT_DIM8Online_B1                        g_dataBuffer_Display[32+28]& bit0
#define RIOM2CT_DOM1Online_B1                        g_dataBuffer_Display[32+28]& bit15
#define RIOM2CT_DOM2Online_B1                        g_dataBuffer_Display[32+28]& bit14
#define RIOM2CT_DOM3Online_B1                        g_dataBuffer_Display[32+28]& bit13
#define RIOM2CT_DOM4Online_B1                        g_dataBuffer_Display[32+28]& bit12
#define RIOM2CT_AIOM1Online_B1                       g_dataBuffer_Display[32+28]& bit11
#define RIOM2CT_AIOM2Online_B1                       g_dataBuffer_Display[32+28]& bit10
#define RIOM2CT_AIOM3Online_B1                       g_dataBuffer_Display[32+28]& bit9
#define RIOM2CT_AIOM4Online_B1                       g_dataBuffer_Display[32+28]& bit8
#define RIOM2CT_PWMM1Online_B1                       g_dataBuffer_Display[32+29]& bit7
#define RIOM2CT_PWMM2Online_B1                       g_dataBuffer_Display[32+29]& bit6
#define RIOM2CT_LineStatus_U8                        g_dataBuffer_Display[32+31]%256
#define RIOM2CT_LAT_B1                               g_dataBuffer_Display[32+31]& bit7
#define RIOM2CT_RLD_B1                               g_dataBuffer_Display[32+31]& bit6
#define RIOM2CT_KeyNumber_U8                         g_dataBuffer_Display[32+31]/256
// 0x121
#define RIOM2CT_AIOM1AI1_U16                          Change_BigEen(g_dataBuffer_Display[32+32])
#define RIOM2CT_AIOM1AI2_U16                         Change_BigEen(g_dataBuffer_Display[32+33])
#define RIOM2CT_AIOM1AI3_U16                         Change_BigEen(g_dataBuffer_Display[32+34])
#define RIOM2CT_AIOM1AI4_U16                         Change_BigEen(g_dataBuffer_Display[32+35])
#define RIOM2CT_AIOM1AI5_U16                         Change_BigEen(g_dataBuffer_Display[32+36])
#define RIOM2CT_AIOM1AI6_U16                         Change_BigEen(g_dataBuffer_Display[32+37])
#define RIOM2CT_AIOM1AI7_U16                         Change_BigEen(g_dataBuffer_Display[32+38])
#define RIOM2CT_AIOM1AI8_U16                         Change_BigEen(g_dataBuffer_Display[32+39])
#define RIOM2CT_PWMM1PWM1_U16                         Change_BigEen(g_dataBuffer_Display[32+40])
#define RIOM2CT_PWMM1PWM2_U16                         Change_BigEen(g_dataBuffer_Display[32+41])

#define RIOM2CT_DIM1DI_1_U16                        g_dataBuffer_Display[74]
#define RIOM2CT_DIM1DI_2_U16                        g_dataBuffer_Display[75]
#define RIOM2CT_DIM1DI_3_U16                        g_dataBuffer_Display[76]
#define RIOM2CT_DIM1DI_4_U16                        g_dataBuffer_Display[77]
#define RIOM2CT_DIM1DI_5_U16                        g_dataBuffer_Display[78]

#define RIOM2CT_DIM1DI24_B1                        g_dataBuffer_Display[32+42]& bit7
#define RIOM2CT_DIM1DI23_B1                        g_dataBuffer_Display[32+42]& bit6
#define RIOM2CT_DIM1DI22_B1                        g_dataBuffer_Display[32+42]& bit5
#define RIOM2CT_DIM1DI21_B1                        g_dataBuffer_Display[32+42]& bit4
#define RIOM2CT_DIM1DI20_B1                        g_dataBuffer_Display[32+42]& bit3
#define RIOM2CT_DIM1DI19_B1                        g_dataBuffer_Display[32+42]& bit2
#define RIOM2CT_DIM1DI18_B1                        g_dataBuffer_Display[32+42]& bit1
#define RIOM2CT_DIM1DI17_B1                        g_dataBuffer_Display[32+42]& bit0
#define RIOM2CT_DIM1DI16_B1                        g_dataBuffer_Display[32+42]& bit15
#define RIOM2CT_DIM1DI15_B1                        g_dataBuffer_Display[32+42]& bit14
#define RIOM2CT_DIM1DI14_B1                        g_dataBuffer_Display[32+42]& bit13
#define RIOM2CT_DIM1DI13_B1                        g_dataBuffer_Display[32+42]& bit12
#define RIOM2CT_DIM1DI12_B1                       g_dataBuffer_Display[32+42]& bit11
#define RIOM2CT_DIM1DI11_B1                       g_dataBuffer_Display[32+42]& bit10
#define RIOM2CT_DIM1DI10_B1                       g_dataBuffer_Display[32+42]& bit9
#define RIOM2CT_DIM1DI9_B1                       g_dataBuffer_Display[32+42]& bit8
#define RIOM2CT_DIM1DI8_B1                        g_dataBuffer_Display[32+43]& bit7
#define RIOM2CT_DIM1DI7_B1                        g_dataBuffer_Display[32+43]& bit6
#define RIOM2CT_DIM1DI6_B1                        g_dataBuffer_Display[32+43]& bit5
#define RIOM2CT_DIM1DI5_B1                        g_dataBuffer_Display[32+43]& bit4
#define RIOM2CT_DIM1DI4_B1                        g_dataBuffer_Display[32+43]& bit3
#define RIOM2CT_DIM1DI3_B1                        g_dataBuffer_Display[32+43]& bit2
#define RIOM2CT_DIM1DI2_B1                        g_dataBuffer_Display[32+43]& bit1
#define RIOM2CT_DIM1DI1_B1                        g_dataBuffer_Display[32+43]& bit0

#define RIOM2CT_DIM2DI24_B1                        g_dataBuffer_Display[32+43]& bit15
#define RIOM2CT_DIM2DI23_B1                        g_dataBuffer_Display[32+43]& bit14
#define RIOM2CT_DIM2DI22_B1                        g_dataBuffer_Display[32+43]& bit13
#define RIOM2CT_DIM2DI21_B1                        g_dataBuffer_Display[32+43]& bit12
#define RIOM2CT_DIM2DI20_B1                       g_dataBuffer_Display[32+43]& bit11
#define RIOM2CT_DIM2DI19_B1                       g_dataBuffer_Display[32+43]& bit10
#define RIOM2CT_DIM2DI18_B1                       g_dataBuffer_Display[32+43]& bit9
#define RIOM2CT_DIM2DI17_B1                       g_dataBuffer_Display[32+43]& bit8
#define RIOM2CT_DIM2DI16_B1                        g_dataBuffer_Display[32+44]& bit7
#define RIOM2CT_DIM2DI15_B1                        g_dataBuffer_Display[32+44]& bit6
#define RIOM2CT_DIM2DI14_B1                        g_dataBuffer_Display[32+44]& bit5
#define RIOM2CT_DIM2DI13_B1                        g_dataBuffer_Display[32+44]& bit4
#define RIOM2CT_DIM2DI12_B1                       g_dataBuffer_Display[32+44]& bit3
#define RIOM2CT_DIM2DI11_B1                       g_dataBuffer_Display[32+44]& bit2
#define RIOM2CT_DIM2DI10_B1                       g_dataBuffer_Display[32+44]& bit1
#define RIOM2CT_DIM2DI9_B1                       g_dataBuffer_Display[32+44]& bit0
#define RIOM2CT_DIM2DI8_B1                        g_dataBuffer_Display[32+44]& bit15
#define RIOM2CT_DIM2DI7_B1                        g_dataBuffer_Display[32+44]& bit14
#define RIOM2CT_DIM2DI6_B1                        g_dataBuffer_Display[32+44]& bit13
#define RIOM2CT_DIM2DI5_B1                        g_dataBuffer_Display[32+44]& bit12
#define RIOM2CT_DIM2DI4_B1                        g_dataBuffer_Display[32+44]& bit11
#define RIOM2CT_DIM2DI3_B1                        g_dataBuffer_Display[32+44]& bit10
#define RIOM2CT_DIM2DI2_B1                        g_dataBuffer_Display[32+44]& bit9
#define RIOM2CT_DIM2DI1_B1                        g_dataBuffer_Display[32+44]& bit8

#define RIOM2CT_DIM3DI24_B1                        g_dataBuffer_Display[32+45]& bit7
#define RIOM2CT_DIM3DI23_B1                        g_dataBuffer_Display[32+45]& bit6
#define RIOM2CT_DIM3DI22_B1                        g_dataBuffer_Display[32+45]& bit5
#define RIOM2CT_DIM3DI21_B1                        g_dataBuffer_Display[32+45]& bit4
#define RIOM2CT_DIM3DI20_B1                        g_dataBuffer_Display[32+45]& bit3
#define RIOM2CT_DIM3DI19_B1                        g_dataBuffer_Display[32+45]& bit2
#define RIOM2CT_DIM3DI18_B1                        g_dataBuffer_Display[32+45]& bit1
#define RIOM2CT_DIM3DI17_B1                        g_dataBuffer_Display[32+45]& bit0
#define RIOM2CT_DIM3DI16_B1                        g_dataBuffer_Display[32+45]& bit15
#define RIOM2CT_DIM3DI15_B1                        g_dataBuffer_Display[32+45]& bit14
#define RIOM2CT_DIM3DI14_B1                        g_dataBuffer_Display[32+45]& bit13
#define RIOM2CT_DIM3DI13_B1                        g_dataBuffer_Display[32+45]& bit12
#define RIOM2CT_DIM3DI12_B1                       g_dataBuffer_Display[32+45]& bit11
#define RIOM2CT_DIM3DI11_B1                       g_dataBuffer_Display[32+45]& bit10
#define RIOM2CT_DIM3DI10_B1                       g_dataBuffer_Display[32+45]& bit9
#define RIOM2CT_DIM3DI9_B1                       g_dataBuffer_Display[32+45]& bit8
#define RIOM2CT_DIM3DI8_B1                        g_dataBuffer_Display[32+46]& bit7
#define RIOM2CT_DIM3DI7_B1                        g_dataBuffer_Display[32+46]& bit6
#define RIOM2CT_DIM3DI6_B1                        g_dataBuffer_Display[32+46]& bit5
#define RIOM2CT_DIM3DI5_B1                        g_dataBuffer_Display[32+46]& bit4
#define RIOM2CT_DIM3DI4_B1                        g_dataBuffer_Display[32+46]& bit3
#define RIOM2CT_DIM3DI3_B1                        g_dataBuffer_Display[32+46]& bit2
#define RIOM2CT_DIM3DI2_B1                        g_dataBuffer_Display[32+46]& bit1
#define RIOM2CT_DIM3DI1_B1                        g_dataBuffer_Display[32+46]& bit0

// 0x130
#define RIOM3CT_GWLifeSign1_U8                         g_dataBuffer_Display[64+16]%256
#define RIOM3CT_GWVersion_U8                           g_dataBuffer_Display[64+16]/256
#define RIOM3CT_DIVersion_U8                           g_dataBuffer_Display[64+17]%256
#define RIOM3CT_DOVersion_U8                           g_dataBuffer_Display[64+17]/256
#define RIOM3CT_AIVersion_U8                           g_dataBuffer_Display[64+18]%256
#define RIOM3CT_PWMVersion_U8                          g_dataBuffer_Display[64+18]/256
#define RIOM3CT_DIM1LifeSign_U8                        g_dataBuffer_Display[64+19]%256
#define RIOM3CT_DIM2LifeSign_U8                        g_dataBuffer_Display[64+19]/256
#define RIOM3CT_DIM3LifeSign_U8                        g_dataBuffer_Display[64+20]%256
#define RIOM3CT_DIM4LifeSign_U8                        g_dataBuffer_Display[64+20]/256
#define RIOM3CT_DIM5LifeSign_U8                         g_dataBuffer_Display[64+21]%256
#define RIOM3CT_DIM6LifeSign_U8                           g_dataBuffer_Display[64+21]/256
#define RIOM3CT_DIM7LifeSign_U8                           g_dataBuffer_Display[64+22]%256
#define RIOM3CT_DIM8LifeSign_U8                           g_dataBuffer_Display[64+22]/256
#define RIOM3CT_DOM1LifeSign_U8                           g_dataBuffer_Display[64+23]%256
#define RIOM3CT_DOM2LifeSign_U8                          g_dataBuffer_Display[64+23]/256
#define RIOM3CT_DOM3LifeSign_U8                        g_dataBuffer_Display[64+24]%256
#define RIOM3CT_DOM4LifeSign_U8                        g_dataBuffer_Display[64+24]/256
#define RIOM3CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[64+25]%256
#define RIOM3CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[64+25]/256
#define RIOM3CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[64+26]%256
#define RIOM3CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[64+26]/256
#define RIOM3CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[64+27]%256
#define RIOM3CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[64+27]/256
#define RIOM3CT_DIM1Online_B1                        g_dataBuffer_Display[64+28]& bit7
#define RIOM3CT_DIM2Online_B1                        g_dataBuffer_Display[64+28]& bit6
#define RIOM3CT_DIM3Online_B1                        g_dataBuffer_Display[64+28]& bit5
#define RIOM3CT_DIM4Online_B1                        g_dataBuffer_Display[64+28]& bit4
#define RIOM3CT_DIM5Online_B1                        g_dataBuffer_Display[64+28]& bit3
#define RIOM3CT_DIM6Online_B1                        g_dataBuffer_Display[64+28]& bit2
#define RIOM3CT_DIM7Online_B1                        g_dataBuffer_Display[64+28]& bit1
#define RIOM3CT_DIM8Online_B1                        g_dataBuffer_Display[64+28]& bit0
#define RIOM3CT_DOM1Online_B1                        g_dataBuffer_Display[64+28]& bit15
#define RIOM3CT_DOM2Online_B1                        g_dataBuffer_Display[64+28]& bit14
#define RIOM3CT_DOM3Online_B1                        g_dataBuffer_Display[64+28]& bit13
#define RIOM3CT_DOM4Online_B1                        g_dataBuffer_Display[64+28]& bit12
#define RIOM3CT_AIOM1Online_B1                       g_dataBuffer_Display[64+28]& bit11
#define RIOM3CT_AIOM2Online_B1                       g_dataBuffer_Display[64+28]& bit10
#define RIOM3CT_AIOM3Online_B1                       g_dataBuffer_Display[64+28]& bit9
#define RIOM3CT_AIOM4Online_B1                       g_dataBuffer_Display[64+28]& bit8
#define RIOM3CT_PWMM1Online_B1                       g_dataBuffer_Display[64+29]& bit7
#define RIOM3CT_PWMM2Online_B1                       g_dataBuffer_Display[64+29]& bit6
#define RIOM3CT_LineStatus_U8                        g_dataBuffer_Display[64+31]%256
#define RIOM3CT_LAT_B1                               g_dataBuffer_Display[64+31]& bit7
#define RIOM3CT_RLD_B1                               g_dataBuffer_Display[64+31]& bit6
#define RIOM3CT_KeyNumber_U8                         g_dataBuffer_Display[64+31]/256
// 0x131
#define RIOM3CT_AIOM1AI1_U16                         g_dataBuffer_Display[64+32]
#define RIOM3CT_AIOM1AI2_U16                         g_dataBuffer_Display[64+33]
#define RIOM3CT_AIOM1AI3_U16                         g_dataBuffer_Display[64+34]
#define RIOM3CT_AIOM1AI4_U16                         g_dataBuffer_Display[64+35]
#define RIOM3CT_AIOM1AI5_U16                         g_dataBuffer_Display[64+36]
#define RIOM3CT_AIOM1AI6_U16                         g_dataBuffer_Display[64+37]
#define RIOM3CT_AIOM1AI7_U16                         g_dataBuffer_Display[64+38]
#define RIOM3CT_AIOM1AI8_U16                         g_dataBuffer_Display[64+39]
#define RIOM3CT_PWMM1PWM1_U16                         g_dataBuffer_Display[64+40]
#define RIOM3CT_PWMM1PWM2_U16                         g_dataBuffer_Display[64+41]

#define RIOM3CT_DIM1DI_1_U16                        g_dataBuffer_Display[106]
#define RIOM3CT_DIM1DI_2_U16                        g_dataBuffer_Display[107]
#define RIOM3CT_DIM1DI_3_U16                        g_dataBuffer_Display[108]
#define RIOM3CT_DIM1DI_4_U16                        g_dataBuffer_Display[109]
#define RIOM3CT_DIM1DI_5_U16                        g_dataBuffer_Display[110]

#define RIOM3CT_DIM1DI24_B1                        g_dataBuffer_Display[64+42]& bit7
#define RIOM3CT_DIM1DI23_B1                        g_dataBuffer_Display[64+42]& bit6
#define RIOM3CT_DIM1DI22_B1                        g_dataBuffer_Display[64+42]& bit5
#define RIOM3CT_DIM1DI21_B1                        g_dataBuffer_Display[64+42]& bit4
#define RIOM3CT_DIM1DI20_B1                        g_dataBuffer_Display[64+42]& bit3
#define RIOM3CT_DIM1DI19_B1                        g_dataBuffer_Display[64+42]& bit2
#define RIOM3CT_DIM1DI18_B1                        g_dataBuffer_Display[64+42]& bit1
#define RIOM3CT_DIM1DI17_B1                        g_dataBuffer_Display[64+42]& bit0
#define RIOM3CT_DIM1DI16_B1                        g_dataBuffer_Display[64+42]& bit15
#define RIOM3CT_DIM1DI15_B1                        g_dataBuffer_Display[64+42]& bit14
#define RIOM3CT_DIM1DI14_B1                        g_dataBuffer_Display[64+42]& bit13
#define RIOM3CT_DIM1DI13_B1                        g_dataBuffer_Display[64+42]& bit12
#define RIOM3CT_DIM1DI12_B1                       g_dataBuffer_Display[64+42]& bit11
#define RIOM3CT_DIM1DI11_B1                       g_dataBuffer_Display[64+42]& bit10
#define RIOM3CT_DIM1DI10_B1                       g_dataBuffer_Display[64+42]& bit9
#define RIOM3CT_DIM1DI9_B1                       g_dataBuffer_Display[64+42]& bit8
#define RIOM3CT_DIM1DI8_B1                        g_dataBuffer_Display[64+43]& bit7
#define RIOM3CT_DIM1DI7_B1                        g_dataBuffer_Display[64+43]& bit6
#define RIOM3CT_DIM1DI6_B1                        g_dataBuffer_Display[64+43]& bit5
#define RIOM3CT_DIM1DI5_B1                        g_dataBuffer_Display[64+43]& bit4
#define RIOM3CT_DIM1DI4_B1                        g_dataBuffer_Display[64+43]& bit3
#define RIOM3CT_DIM1DI3_B1                        g_dataBuffer_Display[64+43]& bit2
#define RIOM3CT_DIM1DI2_B1                        g_dataBuffer_Display[64+43]& bit1
#define RIOM3CT_DIM1DI1_B1                        g_dataBuffer_Display[64+43]& bit0

#define RIOM3CT_DIM2DI24_B1                        g_dataBuffer_Display[64+43]& bit15
#define RIOM3CT_DIM2DI23_B1                        g_dataBuffer_Display[64+43]& bit14
#define RIOM3CT_DIM2DI22_B1                        g_dataBuffer_Display[64+43]& bit13
#define RIOM3CT_DIM2DI21_B1                        g_dataBuffer_Display[64+43]& bit12
#define RIOM3CT_DIM2DI20_B1                       g_dataBuffer_Display[64+43]& bit11
#define RIOM3CT_DIM2DI19_B1                       g_dataBuffer_Display[64+43]& bit10
#define RIOM3CT_DIM2DI18_B1                       g_dataBuffer_Display[64+43]& bit9
#define RIOM3CT_DIM2DI17_B1                       g_dataBuffer_Display[64+43]& bit8
#define RIOM3CT_DIM2DI16_B1                        g_dataBuffer_Display[64+44]& bit7
#define RIOM3CT_DIM2DI15_B1                        g_dataBuffer_Display[64+44]& bit6
#define RIOM3CT_DIM2DI14_B1                        g_dataBuffer_Display[64+44]& bit5
#define RIOM3CT_DIM2DI13_B1                        g_dataBuffer_Display[64+44]& bit4
#define RIOM3CT_DIM2DI12_B1                       g_dataBuffer_Display[64+44]& bit3
#define RIOM3CT_DIM2DI11_B1                       g_dataBuffer_Display[64+44]& bit2
#define RIOM3CT_DIM2DI10_B1                       g_dataBuffer_Display[64+44]& bit1
#define RIOM3CT_DIM2DI9_B1                       g_dataBuffer_Display[64+44]& bit0
#define RIOM3CT_DIM2DI8_B1                        g_dataBuffer_Display[64+44]& bit15
#define RIOM3CT_DIM2DI7_B1                        g_dataBuffer_Display[64+44]& bit14
#define RIOM3CT_DIM2DI6_B1                        g_dataBuffer_Display[64+44]& bit13
#define RIOM3CT_DIM2DI5_B1                        g_dataBuffer_Display[64+44]& bit12
#define RIOM3CT_DIM2DI4_B1                        g_dataBuffer_Display[64+44]& bit11
#define RIOM3CT_DIM2DI3_B1                        g_dataBuffer_Display[64+44]& bit10
#define RIOM3CT_DIM2DI2_B1                        g_dataBuffer_Display[64+44]& bit9
#define RIOM3CT_DIM2DI1_B1                        g_dataBuffer_Display[64+44]& bit8

#define RIOM3CT_DIM3DI24_B1                        g_dataBuffer_Display[64+45]& bit7
#define RIOM3CT_DIM3DI23_B1                        g_dataBuffer_Display[64+45]& bit6
#define RIOM3CT_DIM3DI22_B1                        g_dataBuffer_Display[64+45]& bit5
#define RIOM3CT_DIM3DI21_B1                        g_dataBuffer_Display[64+45]& bit4
#define RIOM3CT_DIM3DI20_B1                        g_dataBuffer_Display[64+45]& bit3
#define RIOM3CT_DIM3DI19_B1                        g_dataBuffer_Display[64+45]& bit2
#define RIOM3CT_DIM3DI18_B1                        g_dataBuffer_Display[64+45]& bit1
#define RIOM3CT_DIM3DI17_B1                        g_dataBuffer_Display[64+45]& bit0
#define RIOM3CT_DIM3DI16_B1                        g_dataBuffer_Display[64+45]& bit15
#define RIOM3CT_DIM3DI15_B1                        g_dataBuffer_Display[64+45]& bit14
#define RIOM3CT_DIM3DI14_B1                        g_dataBuffer_Display[64+45]& bit13
#define RIOM3CT_DIM3DI13_B1                        g_dataBuffer_Display[64+45]& bit12
#define RIOM3CT_DIM3DI12_B1                       g_dataBuffer_Display[64+45]& bit11
#define RIOM3CT_DIM3DI11_B1                       g_dataBuffer_Display[64+45]& bit10
#define RIOM3CT_DIM3DI10_B1                       g_dataBuffer_Display[64+45]& bit9
#define RIOM3CT_DIM3DI9_B1                       g_dataBuffer_Display[64+45]& bit8
#define RIOM3CT_DIM3DI8_B1                        g_dataBuffer_Display[64+46]& bit7
#define RIOM3CT_DIM3DI7_B1                        g_dataBuffer_Display[64+46]& bit6
#define RIOM3CT_DIM3DI6_B1                        g_dataBuffer_Display[64+46]& bit5
#define RIOM3CT_DIM3DI5_B1                        g_dataBuffer_Display[64+46]& bit4
#define RIOM3CT_DIM3DI4_B1                        g_dataBuffer_Display[64+46]& bit3
#define RIOM3CT_DIM3DI3_B1                        g_dataBuffer_Display[64+46]& bit2
#define RIOM3CT_DIM3DI2_B1                        g_dataBuffer_Display[64+46]& bit1
#define RIOM3CT_DIM3DI1_B1                        g_dataBuffer_Display[64+46]& bit0

// 0x140
#define RIOM4CT_GWLifeSign1_U8                         g_dataBuffer_Display[96+16]%256
#define RIOM4CT_GWVersion_U8                           g_dataBuffer_Display[96+16]/256
#define RIOM4CT_DIVersion_U8                           g_dataBuffer_Display[96+17]%256
#define RIOM4CT_DOVersion_U8                           g_dataBuffer_Display[96+17]/256
#define RIOM4CT_AIVersion_U8                           g_dataBuffer_Display[96+18]%256
#define RIOM4CT_PWMVersion_U8                          g_dataBuffer_Display[96+18]/256
#define RIOM4CT_DIM1LifeSign_U8                        g_dataBuffer_Display[96+19]%256
#define RIOM4CT_DIM2LifeSign_U8                        g_dataBuffer_Display[96+19]/256
#define RIOM4CT_DIM3LifeSign_U8                        g_dataBuffer_Display[96+20]%256
#define RIOM4CT_DIM4LifeSign_U8                        g_dataBuffer_Display[96+20]/256
#define RIOM4CT_DIM5LifeSign_U8                         g_dataBuffer_Display[96+21]%256
#define RIOM4CT_DIM6LifeSign_U8                           g_dataBuffer_Display[96+21]/256
#define RIOM4CT_DIM7LifeSign_U8                           g_dataBuffer_Display[96+22]%256
#define RIOM4CT_DIM8LifeSign_U8                           g_dataBuffer_Display[96+22]/256
#define RIOM4CT_DOM1LifeSign_U8                           g_dataBuffer_Display[96+23]%256
#define RIOM4CT_DOM2LifeSign_U8                          g_dataBuffer_Display[96+23]/256
#define RIOM4CT_DOM3LifeSign_U8                        g_dataBuffer_Display[96+24]%256
#define RIOM4CT_DOM4LifeSign_U8                        g_dataBuffer_Display[96+24]/256
#define RIOM4CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[96+25]%256
#define RIOM4CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[96+25]/256
#define RIOM4CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[96+26]%256
#define RIOM4CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[96+26]/256
#define RIOM4CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[96+27]%256
#define RIOM4CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[96+27]/256
#define RIOM4CT_DIM1Online_B1                        g_dataBuffer_Display[96+28]& bit7
#define RIOM4CT_DIM2Online_B1                        g_dataBuffer_Display[96+28]& bit6
#define RIOM4CT_DIM3Online_B1                        g_dataBuffer_Display[96+28]& bit5
#define RIOM4CT_DIM4Online_B1                        g_dataBuffer_Display[96+28]& bit4
#define RIOM4CT_DIM5Online_B1                        g_dataBuffer_Display[96+28]& bit3
#define RIOM4CT_DIM6Online_B1                        g_dataBuffer_Display[96+28]& bit2
#define RIOM4CT_DIM7Online_B1                        g_dataBuffer_Display[96+28]& bit1
#define RIOM4CT_DIM8Online_B1                        g_dataBuffer_Display[96+28]& bit0
#define RIOM4CT_DOM1Online_B1                        g_dataBuffer_Display[96+28]& bit15
#define RIOM4CT_DOM2Online_B1                        g_dataBuffer_Display[96+28]& bit14
#define RIOM4CT_DOM3Online_B1                        g_dataBuffer_Display[96+28]& bit13
#define RIOM4CT_DOM4Online_B1                        g_dataBuffer_Display[96+28]& bit12
#define RIOM4CT_AIOM1Online_B1                       g_dataBuffer_Display[96+28]& bit11
#define RIOM4CT_AIOM2Online_B1                       g_dataBuffer_Display[96+28]& bit10
#define RIOM4CT_AIOM3Online_B1                       g_dataBuffer_Display[96+28]& bit9
#define RIOM4CT_AIOM4Online_B1                       g_dataBuffer_Display[96+28]& bit8
#define RIOM4CT_PWMM1Online_B1                       g_dataBuffer_Display[96+29]& bit7
#define RIOM4CT_PWMM2Online_B1                       g_dataBuffer_Display[96+29]& bit6
#define RIOM4CT_LineStatus_U8                        g_dataBuffer_Display[96+31]%256
#define RIOM4CT_LAT_B1                               g_dataBuffer_Display[96+31]& bit7
#define RIOM4CT_RLD_B1                               g_dataBuffer_Display[96+31]& bit6
#define RIOM4CT_KeyNumber_U8                         g_dataBuffer_Display[96+31]/256
// 0x141
#define RIOM4CT_AIOM1AI1_U16                         g_dataBuffer_Display[96+32]
#define RIOM4CT_AIOM1AI2_U16                         g_dataBuffer_Display[96+33]
#define RIOM4CT_AIOM1AI3_U16                         g_dataBuffer_Display[96+34]
#define RIOM4CT_AIOM1AI4_U16                         g_dataBuffer_Display[96+35]
#define RIOM4CT_AIOM1AI5_U16                         g_dataBuffer_Display[96+36]
#define RIOM4CT_AIOM1AI6_U16                         g_dataBuffer_Display[96+37]
#define RIOM4CT_AIOM1AI7_U16                         g_dataBuffer_Display[96+38]
#define RIOM4CT_AIOM1AI8_U16                         g_dataBuffer_Display[96+39]
#define RIOM4CT_PWMM1PWM1_U16                         g_dataBuffer_Display[96+40]
#define RIOM4CT_PWMM1PWM2_U16                         g_dataBuffer_Display[96+41]


#define RIOM4CT_DIM1DI_1_U16                        g_dataBuffer_Display[138]
#define RIOM4CT_DIM1DI_2_U16                        g_dataBuffer_Display[139]
#define RIOM4CT_DIM1DI_3_U16                        g_dataBuffer_Display[140]
#define RIOM4CT_DIM1DI_4_U16                        g_dataBuffer_Display[141]
#define RIOM4CT_DIM1DI_5_U16                        g_dataBuffer_Display[142]

#define RIOM4CT_DIM1DI24_B1                        g_dataBuffer_Display[96+42]& bit7
#define RIOM4CT_DIM1DI23_B1                        g_dataBuffer_Display[96+42]& bit6
#define RIOM4CT_DIM1DI22_B1                        g_dataBuffer_Display[96+42]& bit5
#define RIOM4CT_DIM1DI21_B1                        g_dataBuffer_Display[96+42]& bit4
#define RIOM4CT_DIM1DI20_B1                        g_dataBuffer_Display[96+42]& bit3
#define RIOM4CT_DIM1DI19_B1                        g_dataBuffer_Display[96+42]& bit2
#define RIOM4CT_DIM1DI18_B1                        g_dataBuffer_Display[96+42]& bit1
#define RIOM4CT_DIM1DI17_B1                        g_dataBuffer_Display[96+42]& bit0
#define RIOM4CT_DIM1DI16_B1                        g_dataBuffer_Display[96+42]& bit15
#define RIOM4CT_DIM1DI15_B1                        g_dataBuffer_Display[96+42]& bit14
#define RIOM4CT_DIM1DI14_B1                        g_dataBuffer_Display[96+42]& bit13
#define RIOM4CT_DIM1DI13_B1                        g_dataBuffer_Display[96+42]& bit12
#define RIOM4CT_DIM1DI12_B1                       g_dataBuffer_Display[96+42]& bit11
#define RIOM4CT_DIM1DI11_B1                       g_dataBuffer_Display[96+42]& bit10
#define RIOM4CT_DIM1DI10_B1                       g_dataBuffer_Display[96+42]& bit9
#define RIOM4CT_DIM1DI9_B1                        g_dataBuffer_Display[96+42]& bit8
#define RIOM4CT_DIM1DI8_B1                        g_dataBuffer_Display[96+43]& bit7
#define RIOM4CT_DIM1DI7_B1                        g_dataBuffer_Display[96+43]& bit6
#define RIOM4CT_DIM1DI6_B1                        g_dataBuffer_Display[96+43]& bit5
#define RIOM4CT_DIM1DI5_B1                        g_dataBuffer_Display[96+43]& bit4
#define RIOM4CT_DIM1DI4_B1                        g_dataBuffer_Display[96+43]& bit3
#define RIOM4CT_DIM1DI3_B1                        g_dataBuffer_Display[96+43]& bit2
#define RIOM4CT_DIM1DI2_B1                        g_dataBuffer_Display[96+43]& bit1
#define RIOM4CT_DIM1DI1_B1                        g_dataBuffer_Display[96+43]& bit0

#define RIOM4CT_DIM2DI24_B1                        g_dataBuffer_Display[96+43]& bit15
#define RIOM4CT_DIM2DI23_B1                        g_dataBuffer_Display[96+43]& bit14
#define RIOM4CT_DIM2DI22_B1                        g_dataBuffer_Display[96+43]& bit13
#define RIOM4CT_DIM2DI21_B1                        g_dataBuffer_Display[96+43]& bit12
#define RIOM4CT_DIM2DI20_B1                       g_dataBuffer_Display[96+43]& bit11
#define RIOM4CT_DIM2DI19_B1                       g_dataBuffer_Display[96+43]& bit10
#define RIOM4CT_DIM2DI18_B1                       g_dataBuffer_Display[96+43]& bit9
#define RIOM4CT_DIM2DI17_B1                       g_dataBuffer_Display[96+43]& bit8
#define RIOM4CT_DIM2DI16_B1                        g_dataBuffer_Display[96+44]& bit7
#define RIOM4CT_DIM2DI15_B1                        g_dataBuffer_Display[96+44]& bit6
#define RIOM4CT_DIM2DI14_B1                        g_dataBuffer_Display[96+44]& bit5
#define RIOM4CT_DIM2DI13_B1                        g_dataBuffer_Display[96+44]& bit4
#define RIOM4CT_DIM2DI12_B1                       g_dataBuffer_Display[96+44]& bit3
#define RIOM4CT_DIM2DI11_B1                       g_dataBuffer_Display[96+44]& bit2
#define RIOM4CT_DIM2DI10_B1                       g_dataBuffer_Display[96+44]& bit1
#define RIOM4CT_DIM2DI9_B1                        g_dataBuffer_Display[96+44]& bit0
#define RIOM4CT_DIM2DI8_B1                        g_dataBuffer_Display[96+44]& bit15
#define RIOM4CT_DIM2DI7_B1                        g_dataBuffer_Display[96+44]& bit14
#define RIOM4CT_DIM2DI6_B1                        g_dataBuffer_Display[96+44]& bit13
#define RIOM4CT_DIM2DI5_B1                        g_dataBuffer_Display[96+44]& bit12
#define RIOM4CT_DIM2DI4_B1                        g_dataBuffer_Display[96+44]& bit11
#define RIOM4CT_DIM2DI3_B1                        g_dataBuffer_Display[96+44]& bit10
#define RIOM4CT_DIM2DI2_B1                        g_dataBuffer_Display[96+44]& bit9
#define RIOM4CT_DIM2DI1_B1                        g_dataBuffer_Display[96+44]& bit8

#define RIOM4CT_DIM3DI24_B1                        g_dataBuffer_Display[96+45]& bit7
#define RIOM4CT_DIM3DI23_B1                        g_dataBuffer_Display[96+45]& bit6
#define RIOM4CT_DIM3DI22_B1                        g_dataBuffer_Display[96+45]& bit5
#define RIOM4CT_DIM3DI21_B1                        g_dataBuffer_Display[96+45]& bit4
#define RIOM4CT_DIM3DI20_B1                        g_dataBuffer_Display[96+45]& bit3
#define RIOM4CT_DIM3DI19_B1                        g_dataBuffer_Display[96+45]& bit2
#define RIOM4CT_DIM3DI18_B1                        g_dataBuffer_Display[96+45]& bit1
#define RIOM4CT_DIM3DI17_B1                        g_dataBuffer_Display[96+45]& bit0
#define RIOM4CT_DIM3DI16_B1                        g_dataBuffer_Display[96+45]& bit15
#define RIOM4CT_DIM3DI15_B1                        g_dataBuffer_Display[96+45]& bit14
#define RIOM4CT_DIM3DI14_B1                        g_dataBuffer_Display[96+45]& bit13
#define RIOM4CT_DIM3DI13_B1                        g_dataBuffer_Display[96+45]& bit12
#define RIOM4CT_DIM3DI12_B1                       g_dataBuffer_Display[96+45]& bit11
#define RIOM4CT_DIM3DI11_B1                       g_dataBuffer_Display[96+45]& bit10
#define RIOM4CT_DIM3DI10_B1                       g_dataBuffer_Display[96+45]& bit9
#define RIOM4CT_DIM3DI9_B1                        g_dataBuffer_Display[96+45]& bit8
#define RIOM4CT_DIM3DI8_B1                        g_dataBuffer_Display[96+46]& bit7
#define RIOM4CT_DIM3DI7_B1                        g_dataBuffer_Display[96+46]& bit6
#define RIOM4CT_DIM3DI6_B1                        g_dataBuffer_Display[96+46]& bit5
#define RIOM4CT_DIM3DI5_B1                        g_dataBuffer_Display[96+46]& bit4
#define RIOM4CT_DIM3DI4_B1                        g_dataBuffer_Display[96+46]& bit3
#define RIOM4CT_DIM3DI3_B1                        g_dataBuffer_Display[96+46]& bit2
#define RIOM4CT_DIM3DI2_B1                        g_dataBuffer_Display[96+46]& bit1
#define RIOM4CT_DIM3DI1_B1                        g_dataBuffer_Display[96+46]& bit0

// 0x150
#define RIOM5CT_GWLifeSign1_U8                         g_dataBuffer_Display[128+16]%256
#define RIOM5CT_GWVersion_U8                           g_dataBuffer_Display[128+16]/256
#define RIOM5CT_DIVersion_U8                           g_dataBuffer_Display[128+17]%256
#define RIOM5CT_DOVersion_U8                           g_dataBuffer_Display[128+17]/256
#define RIOM5CT_AIVersion_U8                           g_dataBuffer_Display[128+18]%256
#define RIOM5CT_PWMVersion_U8                          g_dataBuffer_Display[128+18]/256
#define RIOM5CT_DIM1LifeSign_U8                        g_dataBuffer_Display[128+19]%256
#define RIOM5CT_DIM2LifeSign_U8                        g_dataBuffer_Display[128+19]/256
#define RIOM5CT_DIM3LifeSign_U8                        g_dataBuffer_Display[128+20]%256
#define RIOM5CT_DIM4LifeSign_U8                        g_dataBuffer_Display[128+20]/256
#define RIOM5CT_DIM5LifeSign_U8                        g_dataBuffer_Display[128+21]%256
#define RIOM5CT_DIM6LifeSign_U8                        g_dataBuffer_Display[128+21]/256
#define RIOM5CT_DIM7LifeSign_U8                        g_dataBuffer_Display[128+22]%256
#define RIOM5CT_DIM8LifeSign_U8                        g_dataBuffer_Display[128+22]/256
#define RIOM5CT_DOM1LifeSign_U8                        g_dataBuffer_Display[128+23]%256
#define RIOM5CT_DOM2LifeSign_U8                        g_dataBuffer_Display[128+23]/256
#define RIOM5CT_DOM3LifeSign_U8                        g_dataBuffer_Display[128+24]%256
#define RIOM5CT_DOM4LifeSign_U8                        g_dataBuffer_Display[128+24]/256
#define RIOM5CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[128+25]%256
#define RIOM5CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[128+25]/256
#define RIOM5CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[128+26]%256
#define RIOM5CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[128+26]/256
#define RIOM5CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[128+27]%256
#define RIOM5CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[128+27]/256
#define RIOM5CT_DIM1Online_B1                        g_dataBuffer_Display[128+28]& bit7
#define RIOM5CT_DIM2Online_B1                        g_dataBuffer_Display[128+28]& bit6
#define RIOM5CT_DIM3Online_B1                        g_dataBuffer_Display[128+28]& bit5
#define RIOM5CT_DIM4Online_B1                        g_dataBuffer_Display[128+28]& bit4
#define RIOM5CT_DIM5Online_B1                        g_dataBuffer_Display[128+28]& bit3
#define RIOM5CT_DIM6Online_B1                        g_dataBuffer_Display[128+28]& bit2
#define RIOM5CT_DIM7Online_B1                        g_dataBuffer_Display[128+28]& bit1
#define RIOM5CT_DIM8Online_B1                        g_dataBuffer_Display[128+28]& bit0
#define RIOM5CT_DOM1Online_B1                        g_dataBuffer_Display[128+28]& bit15
#define RIOM5CT_DOM2Online_B1                        g_dataBuffer_Display[128+28]& bit14
#define RIOM5CT_DOM3Online_B1                        g_dataBuffer_Display[128+28]& bit13
#define RIOM5CT_DOM4Online_B1                        g_dataBuffer_Display[128+28]& bit12
#define RIOM5CT_AIOM1Online_B1                       g_dataBuffer_Display[128+28]& bit11
#define RIOM5CT_AIOM2Online_B1                       g_dataBuffer_Display[128+28]& bit10
#define RIOM5CT_AIOM3Online_B1                       g_dataBuffer_Display[128+28]& bit9
#define RIOM5CT_AIOM4Online_B1                       g_dataBuffer_Display[128+28]& bit8
#define RIOM5CT_PWMM1Online_B1                       g_dataBuffer_Display[128+29]& bit7
#define RIOM5CT_PWMM2Online_B1                       g_dataBuffer_Display[128+29]& bit6
#define RIOM5CT_LineStatus_U8                        g_dataBuffer_Display[128+31]%256
#define RIOM5CT_LAT_B1                               g_dataBuffer_Display[128+31]& bit7
#define RIOM5CT_RLD_B1                               g_dataBuffer_Display[128+31]& bit6
#define RIOM5CT_KeyNumber_U8                         g_dataBuffer_Display[128+31]/256
// 0x151
#define RIOM5CT_AIOM1AI1_U16                         g_dataBuffer_Display[128+32]
#define RIOM5CT_AIOM1AI2_U16                         g_dataBuffer_Display[128+33]
#define RIOM5CT_AIOM1AI3_U16                         g_dataBuffer_Display[128+34]
#define RIOM5CT_AIOM1AI4_U16                         g_dataBuffer_Display[128+35]
#define RIOM5CT_AIOM1AI5_U16                         g_dataBuffer_Display[128+36]
#define RIOM5CT_AIOM1AI6_U16                         g_dataBuffer_Display[128+37]
#define RIOM5CT_AIOM1AI7_U16                         g_dataBuffer_Display[128+38]
#define RIOM5CT_AIOM1AI8_U16                         g_dataBuffer_Display[128+39]
#define RIOM5CT_PWMM1PWM1_U16                        g_dataBuffer_Display[128+40]
#define RIOM5CT_PWMM1PWM2_U16                        g_dataBuffer_Display[128+41]


#define RIOM5CT_DIM1DI_1_U16                        g_dataBuffer_Display[170]
#define RIOM5CT_DIM1DI_2_U16                        g_dataBuffer_Display[171]
#define RIOM5CT_DIM1DI_3_U16                        g_dataBuffer_Display[172]
#define RIOM5CT_DIM1DI_4_U16                        g_dataBuffer_Display[173]
#define RIOM5CT_DIM1DI_5_U16                        g_dataBuffer_Display[174]

#define RIOM5CT_DIM1DI24_B1                        g_dataBuffer_Display[128+42]& bit7
#define RIOM5CT_DIM1DI23_B1                        g_dataBuffer_Display[128+42]& bit6
#define RIOM5CT_DIM1DI22_B1                        g_dataBuffer_Display[128+42]& bit5
#define RIOM5CT_DIM1DI21_B1                        g_dataBuffer_Display[128+42]& bit4
#define RIOM5CT_DIM1DI20_B1                        g_dataBuffer_Display[128+42]& bit3
#define RIOM5CT_DIM1DI19_B1                        g_dataBuffer_Display[128+42]& bit2
#define RIOM5CT_DIM1DI18_B1                        g_dataBuffer_Display[128+42]& bit1
#define RIOM5CT_DIM1DI17_B1                        g_dataBuffer_Display[128+42]& bit0
#define RIOM5CT_DIM1DI16_B1                        g_dataBuffer_Display[128+42]& bit15
#define RIOM5CT_DIM1DI15_B1                        g_dataBuffer_Display[128+42]& bit14
#define RIOM5CT_DIM1DI14_B1                        g_dataBuffer_Display[128+42]& bit13
#define RIOM5CT_DIM1DI13_B1                        g_dataBuffer_Display[128+42]& bit12
#define RIOM5CT_DIM1DI12_B1                       g_dataBuffer_Display[128+42]& bit11
#define RIOM5CT_DIM1DI11_B1                       g_dataBuffer_Display[128+42]& bit10
#define RIOM5CT_DIM1DI10_B1                       g_dataBuffer_Display[128+42]& bit9
#define RIOM5CT_DIM1DI9_B1                        g_dataBuffer_Display[128+42]& bit8
#define RIOM5CT_DIM1DI8_B1                        g_dataBuffer_Display[128+43]& bit7
#define RIOM5CT_DIM1DI7_B1                        g_dataBuffer_Display[128+43]& bit6
#define RIOM5CT_DIM1DI6_B1                        g_dataBuffer_Display[128+43]& bit5
#define RIOM5CT_DIM1DI5_B1                        g_dataBuffer_Display[128+43]& bit4
#define RIOM5CT_DIM1DI4_B1                        g_dataBuffer_Display[128+43]& bit3
#define RIOM5CT_DIM1DI3_B1                        g_dataBuffer_Display[128+43]& bit2
#define RIOM5CT_DIM1DI2_B1                        g_dataBuffer_Display[128+43]& bit1
#define RIOM5CT_DIM1DI1_B1                        g_dataBuffer_Display[128+43]& bit0

#define RIOM5CT_DIM2DI24_B1                        g_dataBuffer_Display[128+43]& bit15
#define RIOM5CT_DIM2DI23_B1                        g_dataBuffer_Display[128+43]& bit14
#define RIOM5CT_DIM2DI22_B1                        g_dataBuffer_Display[128+43]& bit13
#define RIOM5CT_DIM2DI21_B1                        g_dataBuffer_Display[128+43]& bit12
#define RIOM5CT_DIM2DI20_B1                       g_dataBuffer_Display[128+43]& bit11
#define RIOM5CT_DIM2DI19_B1                       g_dataBuffer_Display[128+43]& bit10
#define RIOM5CT_DIM2DI18_B1                       g_dataBuffer_Display[128+43]& bit9
#define RIOM5CT_DIM2DI17_B1                       g_dataBuffer_Display[128+43]& bit8
#define RIOM5CT_DIM2DI16_B1                        g_dataBuffer_Display[128+44]& bit7
#define RIOM5CT_DIM2DI15_B1                        g_dataBuffer_Display[128+44]& bit6
#define RIOM5CT_DIM2DI14_B1                        g_dataBuffer_Display[128+44]& bit5
#define RIOM5CT_DIM2DI13_B1                        g_dataBuffer_Display[128+44]& bit4
#define RIOM5CT_DIM2DI12_B1                       g_dataBuffer_Display[128+44]& bit3
#define RIOM5CT_DIM2DI11_B1                       g_dataBuffer_Display[128+44]& bit2
#define RIOM5CT_DIM2DI10_B1                       g_dataBuffer_Display[128+44]& bit1
#define RIOM5CT_DIM2DI9_B1                        g_dataBuffer_Display[128+44]& bit0
#define RIOM5CT_DIM2DI8_B1                        g_dataBuffer_Display[128+44]& bit15
#define RIOM5CT_DIM2DI7_B1                        g_dataBuffer_Display[128+44]& bit14
#define RIOM5CT_DIM2DI6_B1                        g_dataBuffer_Display[128+44]& bit13
#define RIOM5CT_DIM2DI5_B1                        g_dataBuffer_Display[128+44]& bit12
#define RIOM5CT_DIM2DI4_B1                        g_dataBuffer_Display[128+44]& bit11
#define RIOM5CT_DIM2DI3_B1                        g_dataBuffer_Display[128+44]& bit10
#define RIOM5CT_DIM2DI2_B1                        g_dataBuffer_Display[128+44]& bit9
#define RIOM5CT_DIM2DI1_B1                        g_dataBuffer_Display[128+44]& bit8

#define RIOM5CT_DIM3DI24_B1                        g_dataBuffer_Display[128+45]& bit7
#define RIOM5CT_DIM3DI23_B1                        g_dataBuffer_Display[128+45]& bit6
#define RIOM5CT_DIM3DI22_B1                        g_dataBuffer_Display[128+45]& bit5
#define RIOM5CT_DIM3DI21_B1                        g_dataBuffer_Display[128+45]& bit4
#define RIOM5CT_DIM3DI20_B1                        g_dataBuffer_Display[128+45]& bit3
#define RIOM5CT_DIM3DI19_B1                        g_dataBuffer_Display[128+45]& bit2
#define RIOM5CT_DIM3DI18_B1                        g_dataBuffer_Display[128+45]& bit1
#define RIOM5CT_DIM3DI17_B1                        g_dataBuffer_Display[128+45]& bit0
#define RIOM5CT_DIM3DI16_B1                        g_dataBuffer_Display[128+45]& bit15
#define RIOM5CT_DIM3DI15_B1                        g_dataBuffer_Display[128+45]& bit14
#define RIOM5CT_DIM3DI14_B1                        g_dataBuffer_Display[128+45]& bit13
#define RIOM5CT_DIM3DI13_B1                        g_dataBuffer_Display[128+45]& bit12
#define RIOM5CT_DIM3DI12_B1                       g_dataBuffer_Display[128+45]& bit11
#define RIOM5CT_DIM3DI11_B1                       g_dataBuffer_Display[128+45]& bit10
#define RIOM5CT_DIM3DI10_B1                       g_dataBuffer_Display[128+45]& bit9
#define RIOM5CT_DIM3DI9_B1                        g_dataBuffer_Display[128+45]& bit8
#define RIOM5CT_DIM3DI8_B1                        g_dataBuffer_Display[128+46]& bit7
#define RIOM5CT_DIM3DI7_B1                        g_dataBuffer_Display[128+46]& bit6
#define RIOM5CT_DIM3DI6_B1                        g_dataBuffer_Display[128+46]& bit5
#define RIOM5CT_DIM3DI5_B1                        g_dataBuffer_Display[128+46]& bit4
#define RIOM5CT_DIM3DI4_B1                        g_dataBuffer_Display[128+46]& bit3
#define RIOM5CT_DIM3DI3_B1                        g_dataBuffer_Display[128+46]& bit2
#define RIOM5CT_DIM3DI2_B1                        g_dataBuffer_Display[128+46]& bit1
#define RIOM5CT_DIM3DI1_B1                        g_dataBuffer_Display[128+46]& bit0


// 0x160
#define RIOM6CT_GWLifeSign1_U8                         g_dataBuffer_Display[160+16]%256
#define RIOM6CT_GWVersion_U8                           g_dataBuffer_Display[160+16]/256
#define RIOM6CT_DIVersion_U8                           g_dataBuffer_Display[160+17]%256
#define RIOM6CT_DOVersion_U8                           g_dataBuffer_Display[160+17]/256
#define RIOM6CT_AIVersion_U8                           g_dataBuffer_Display[160+18]%256
#define RIOM6CT_PWMVersion_U8                          g_dataBuffer_Display[160+18]/256
#define RIOM6CT_DIM1LifeSign_U8                        g_dataBuffer_Display[160+19]%256
#define RIOM6CT_DIM2LifeSign_U8                        g_dataBuffer_Display[160+19]/256
#define RIOM6CT_DIM3LifeSign_U8                        g_dataBuffer_Display[160+20]%256
#define RIOM6CT_DIM4LifeSign_U8                        g_dataBuffer_Display[160+20]/256
#define RIOM6CT_DIM5LifeSign_U8                        g_dataBuffer_Display[160+21]%256
#define RIOM6CT_DIM6LifeSign_U8                        g_dataBuffer_Display[160+21]/256
#define RIOM6CT_DIM7LifeSign_U8                        g_dataBuffer_Display[160+22]%256
#define RIOM6CT_DIM8LifeSign_U8                        g_dataBuffer_Display[160+22]/256
#define RIOM6CT_DOM1LifeSign_U8                        g_dataBuffer_Display[160+23]%256
#define RIOM6CT_DOM2LifeSign_U8                        g_dataBuffer_Display[160+23]/256
#define RIOM6CT_DOM3LifeSign_U8                        g_dataBuffer_Display[160+24]%256
#define RIOM6CT_DOM4LifeSign_U8                        g_dataBuffer_Display[160+24]/256
#define RIOM6CT_AIOM1LifeSign_U8                        g_dataBuffer_Display[160+25]%256
#define RIOM6CT_AIOM2LifeSign_U8                        g_dataBuffer_Display[160+25]/256
#define RIOM6CT_AIOM3LifeSign_U8                        g_dataBuffer_Display[160+26]%256
#define RIOM6CT_AIOM4LifeSign_U8                        g_dataBuffer_Display[160+26]/256
#define RIOM6CT_PWMM1LifeSign_U8                        g_dataBuffer_Display[160+27]%256
#define RIOM6CT_PWMM2LifeSign_U8                        g_dataBuffer_Display[160+27]/256
#define RIOM6CT_DIM1Online_B1                        g_dataBuffer_Display[160+28]& bit7
#define RIOM6CT_DIM2Online_B1                        g_dataBuffer_Display[160+28]& bit6
#define RIOM6CT_DIM3Online_B1                        g_dataBuffer_Display[160+28]& bit5
#define RIOM6CT_DIM4Online_B1                        g_dataBuffer_Display[160+28]& bit4
#define RIOM6CT_DIM5Online_B1                        g_dataBuffer_Display[160+28]& bit3
#define RIOM6CT_DIM6Online_B1                        g_dataBuffer_Display[160+28]& bit2
#define RIOM6CT_DIM7Online_B1                        g_dataBuffer_Display[160+28]& bit1
#define RIOM6CT_DIM8Online_B1                        g_dataBuffer_Display[160+28]& bit0
#define RIOM6CT_DOM1Online_B1                        g_dataBuffer_Display[160+28]& bit15
#define RIOM6CT_DOM2Online_B1                        g_dataBuffer_Display[160+28]& bit14
#define RIOM6CT_DOM3Online_B1                        g_dataBuffer_Display[160+28]& bit13
#define RIOM6CT_DOM4Online_B1                        g_dataBuffer_Display[160+28]& bit12
#define RIOM6CT_AIOM1Online_B1                       g_dataBuffer_Display[160+28]& bit11
#define RIOM6CT_AIOM2Online_B1                       g_dataBuffer_Display[160+28]& bit10
#define RIOM6CT_AIOM3Online_B1                       g_dataBuffer_Display[160+28]& bit9
#define RIOM6CT_AIOM4Online_B1                       g_dataBuffer_Display[160+28]& bit8
#define RIOM6CT_PWMM1Online_B1                       g_dataBuffer_Display[160+29]& bit7
#define RIOM6CT_PWMM2Online_B1                       g_dataBuffer_Display[160+29]& bit6
#define RIOM6CT_LineStatus_U8                        g_dataBuffer_Display[160+31]%256
#define RIOM6CT_LAT_B1                               g_dataBuffer_Display[160+31]& bit7
#define RIOM6CT_RLD_B1                               g_dataBuffer_Display[160+31]& bit6
#define RIOM6CT_KeyNumber_U8                         g_dataBuffer_Display[160+31]/256
// 0x161
#define RIOM6CT_AIOM1AI1_U16                         g_dataBuffer_Display[160+32]
#define RIOM6CT_AIOM1AI2_U16                         g_dataBuffer_Display[160+33]
#define RIOM6CT_AIOM1AI3_U16                         g_dataBuffer_Display[160+34]
#define RIOM6CT_AIOM1AI4_U16                         g_dataBuffer_Display[160+35]
#define RIOM6CT_AIOM1AI5_U16                         g_dataBuffer_Display[160+36]
#define RIOM6CT_AIOM1AI6_U16                         g_dataBuffer_Display[160+37]
#define RIOM6CT_AIOM1AI7_U16                         g_dataBuffer_Display[160+38]
#define RIOM6CT_AIOM1AI8_U16                         g_dataBuffer_Display[160+39]
#define RIOM6CT_PWMM1PWM1_U16                        g_dataBuffer_Display[160+40]
#define RIOM6CT_PWMM1PWM2_U16                        g_dataBuffer_Display[160+41]


#define RIOM6CT_DIM1DI_1_U16                        g_dataBuffer_Display[202]
#define RIOM6CT_DIM1DI_2_U16                        g_dataBuffer_Display[203]
#define RIOM6CT_DIM1DI_3_U16                        g_dataBuffer_Display[204]
#define RIOM6CT_DIM1DI_4_U16                        g_dataBuffer_Display[205]
#define RIOM6CT_DIM1DI_5_U16                        g_dataBuffer_Display[206]

#define RIOM6CT_DIM1DI24_B1                        g_dataBuffer_Display[160+42]& bit7
#define RIOM6CT_DIM1DI23_B1                        g_dataBuffer_Display[160+42]& bit6
#define RIOM6CT_DIM1DI22_B1                        g_dataBuffer_Display[160+42]& bit5
#define RIOM6CT_DIM1DI21_B1                        g_dataBuffer_Display[160+42]& bit4
#define RIOM6CT_DIM1DI20_B1                        g_dataBuffer_Display[160+42]& bit3
#define RIOM6CT_DIM1DI19_B1                        g_dataBuffer_Display[160+42]& bit2
#define RIOM6CT_DIM1DI18_B1                        g_dataBuffer_Display[160+42]& bit1
#define RIOM6CT_DIM1DI17_B1                        g_dataBuffer_Display[160+42]& bit0
#define RIOM6CT_DIM1DI16_B1                        g_dataBuffer_Display[160+42]& bit15
#define RIOM6CT_DIM1DI15_B1                        g_dataBuffer_Display[160+42]& bit14
#define RIOM6CT_DIM1DI14_B1                        g_dataBuffer_Display[160+42]& bit13
#define RIOM6CT_DIM1DI13_B1                        g_dataBuffer_Display[160+42]& bit12
#define RIOM6CT_DIM1DI12_B1                       g_dataBuffer_Display[160+42]& bit11
#define RIOM6CT_DIM1DI11_B1                       g_dataBuffer_Display[160+42]& bit10
#define RIOM6CT_DIM1DI10_B1                       g_dataBuffer_Display[160+42]& bit9
#define RIOM6CT_DIM1DI9_B1                        g_dataBuffer_Display[160+42]& bit8
#define RIOM6CT_DIM1DI8_B1                        g_dataBuffer_Display[160+43]& bit7
#define RIOM6CT_DIM1DI7_B1                        g_dataBuffer_Display[160+43]& bit6
#define RIOM6CT_DIM1DI6_B1                        g_dataBuffer_Display[160+43]& bit5
#define RIOM6CT_DIM1DI5_B1                        g_dataBuffer_Display[160+43]& bit4
#define RIOM6CT_DIM1DI4_B1                        g_dataBuffer_Display[160+43]& bit3
#define RIOM6CT_DIM1DI3_B1                        g_dataBuffer_Display[160+43]& bit2
#define RIOM6CT_DIM1DI2_B1                        g_dataBuffer_Display[160+43]& bit1
#define RIOM6CT_DIM1DI1_B1                        g_dataBuffer_Display[160+43]& bit0

#define RIOM6CT_DIM2DI24_B1                        g_dataBuffer_Display[160+43]& bit15
#define RIOM6CT_DIM2DI23_B1                        g_dataBuffer_Display[160+43]& bit14
#define RIOM6CT_DIM2DI22_B1                        g_dataBuffer_Display[160+43]& bit13
#define RIOM6CT_DIM2DI21_B1                        g_dataBuffer_Display[160+43]& bit12
#define RIOM6CT_DIM2DI20_B1                        g_dataBuffer_Display[160+43]& bit11
#define RIOM6CT_DIM2DI19_B1                        g_dataBuffer_Display[160+43]& bit10
#define RIOM6CT_DIM2DI18_B1                        g_dataBuffer_Display[160+43]& bit9
#define RIOM6CT_DIM2DI17_B1                        g_dataBuffer_Display[160+43]& bit8
#define RIOM6CT_DIM2DI16_B1                        g_dataBuffer_Display[160+44]& bit7
#define RIOM6CT_DIM2DI15_B1                        g_dataBuffer_Display[160+44]& bit6
#define RIOM6CT_DIM2DI14_B1                        g_dataBuffer_Display[160+44]& bit5
#define RIOM6CT_DIM2DI13_B1                        g_dataBuffer_Display[160+44]& bit4
#define RIOM6CT_DIM2DI12_B1                       g_dataBuffer_Display[160+44]& bit3
#define RIOM6CT_DIM2DI11_B1                       g_dataBuffer_Display[160+44]& bit2
#define RIOM6CT_DIM2DI10_B1                       g_dataBuffer_Display[160+44]& bit1
#define RIOM6CT_DIM2DI9_B1                        g_dataBuffer_Display[160+44]& bit0
#define RIOM6CT_DIM2DI8_B1                        g_dataBuffer_Display[160+44]& bit15
#define RIOM6CT_DIM2DI7_B1                        g_dataBuffer_Display[160+44]& bit14
#define RIOM6CT_DIM2DI6_B1                        g_dataBuffer_Display[160+44]& bit13
#define RIOM6CT_DIM2DI5_B1                        g_dataBuffer_Display[160+44]& bit12
#define RIOM6CT_DIM2DI4_B1                        g_dataBuffer_Display[160+44]& bit11
#define RIOM6CT_DIM2DI3_B1                        g_dataBuffer_Display[160+44]& bit10
#define RIOM6CT_DIM2DI2_B1                        g_dataBuffer_Display[160+44]& bit9
#define RIOM6CT_DIM2DI1_B1                        g_dataBuffer_Display[160+44]& bit8

#define RIOM6CT_DIM3DI24_B1                        g_dataBuffer_Display[160+45]& bit7
#define RIOM6CT_DIM3DI23_B1                        g_dataBuffer_Display[160+45]& bit6
#define RIOM6CT_DIM3DI22_B1                        g_dataBuffer_Display[160+45]& bit5
#define RIOM6CT_DIM3DI21_B1                        g_dataBuffer_Display[160+45]& bit4
#define RIOM6CT_DIM3DI20_B1                        g_dataBuffer_Display[160+45]& bit3
#define RIOM6CT_DIM3DI19_B1                        g_dataBuffer_Display[160+45]& bit2
#define RIOM6CT_DIM3DI18_B1                        g_dataBuffer_Display[160+45]& bit1
#define RIOM6CT_DIM3DI17_B1                        g_dataBuffer_Display[160+45]& bit0
#define RIOM6CT_DIM3DI16_B1                        g_dataBuffer_Display[160+45]& bit15
#define RIOM6CT_DIM3DI15_B1                        g_dataBuffer_Display[160+45]& bit14
#define RIOM6CT_DIM3DI14_B1                        g_dataBuffer_Display[160+45]& bit13
#define RIOM6CT_DIM3DI13_B1                        g_dataBuffer_Display[160+45]& bit12
#define RIOM6CT_DIM3DI12_B1                       g_dataBuffer_Display[160+45]& bit11
#define RIOM6CT_DIM3DI11_B1                       g_dataBuffer_Display[160+45]& bit10
#define RIOM6CT_DIM3DI10_B1                       g_dataBuffer_Display[160+45]& bit9
#define RIOM6CT_DIM3DI9_B1                        g_dataBuffer_Display[160+45]& bit8
#define RIOM6CT_DIM3DI8_B1                        g_dataBuffer_Display[160+46]& bit7
#define RIOM6CT_DIM3DI7_B1                        g_dataBuffer_Display[160+46]& bit6
#define RIOM6CT_DIM3DI6_B1                        g_dataBuffer_Display[160+46]& bit5
#define RIOM6CT_DIM3DI5_B1                        g_dataBuffer_Display[160+46]& bit4
#define RIOM6CT_DIM3DI4_B1                        g_dataBuffer_Display[160+46]& bit3
#define RIOM6CT_DIM3DI3_B1                        g_dataBuffer_Display[160+46]& bit2
#define RIOM6CT_DIM3DI2_B1                        g_dataBuffer_Display[160+46]& bit1
#define RIOM6CT_DIM3DI1_B1                        g_dataBuffer_Display[160+46]& bit0

//0x162
#define RIOM6CT_DIM1DI_11_U16                        g_dataBuffer_Display[2218]
#define RIOM6CT_DIM1DI_12_U16                        g_dataBuffer_Display[2219]

#define RIOM6CT_DIM4DI24_B1                        g_dataBuffer_Display[2218]& bit7
#define RIOM6CT_DIM4DI23_B1                        g_dataBuffer_Display[2218]& bit6
#define RIOM6CT_DIM4DI22_B1                        g_dataBuffer_Display[2218]& bit5
#define RIOM6CT_DIM4DI21_B1                        g_dataBuffer_Display[2218]& bit4
#define RIOM6CT_DIM4DI20_B1                        g_dataBuffer_Display[2218]& bit3
#define RIOM6CT_DIM4DI19_B1                        g_dataBuffer_Display[2218]& bit2
#define RIOM6CT_DIM4DI18_B1                        g_dataBuffer_Display[2218]& bit1
#define RIOM6CT_DIM4DI17_B1                        g_dataBuffer_Display[2218]& bit0
#define RIOM6CT_DIM4DI16_B1                        g_dataBuffer_Display[2218]& bit15
#define RIOM6CT_DIM4DI15_B1                        g_dataBuffer_Display[2218]& bit14
#define RIOM6CT_DIM4DI14_B1                        g_dataBuffer_Display[2218]& bit13
#define RIOM6CT_DIM4DI13_B1                        g_dataBuffer_Display[2218]& bit12
#define RIOM6CT_DIM4DI12_B1                       g_dataBuffer_Display[2218]& bit11
#define RIOM6CT_DIM4DI11_B1                       g_dataBuffer_Display[2218]& bit10
#define RIOM6CT_DIM4DI10_B1                       g_dataBuffer_Display[2218]& bit9
#define RIOM6CT_DIM4DI9_B1                        g_dataBuffer_Display[2218]& bit8
#define RIOM6CT_DIM4DI8_B1                        g_dataBuffer_Display[2219]& bit7
#define RIOM6CT_DIM4DI7_B1                        g_dataBuffer_Display[2219]& bit6
#define RIOM6CT_DIM4DI6_B1                        g_dataBuffer_Display[2219]& bit5
#define RIOM6CT_DIM4DI5_B1                        g_dataBuffer_Display[2219]& bit4
#define RIOM6CT_DIM4DI4_B1                        g_dataBuffer_Display[2219]& bit3
#define RIOM6CT_DIM4DI3_B1                        g_dataBuffer_Display[2219]& bit2
#define RIOM6CT_DIM4DI2_B1                        g_dataBuffer_Display[2219]& bit1
#define RIOM6CT_DIM4DI1_B1                        g_dataBuffer_Display[2219]& bit0

//0x210    ERM1-->hmi
#define DT1HM_LifeSign_U8                            g_dataBuffer_Display[208]%256
#define DT1HM_VersionVxworks_U8                      g_dataBuffer_Display[216]%256
#define DT1HM_VersionMVB_U8                          g_dataBuffer_Display[216]/256
#define DT1HM_VersionSdb_U8                          g_dataBuffer_Display[217]%256
#define DT1HM_VersionPlc_U8                          g_dataBuffer_Display[217]/256

//0x211
#define DTHM_SingleDistance_U32                            Change_BigEen(g_dataBuffer_Display[224])*65536+Change_BigEen(g_dataBuffer_Display[225])
#define DTHM_SingleDetecDistance_U32                       Change_BigEen(g_dataBuffer_Display[226])*65536+Change_BigEen(g_dataBuffer_Display[227])
#define DTHM_SingleTractionPower_U32                       Change_BigEen(g_dataBuffer_Display[228])*65536+Change_BigEen(g_dataBuffer_Display[229])
#define DTHM_SingleBrakePower_U32                          Change_BigEen(g_dataBuffer_Display[230])*65536+Change_BigEen(g_dataBuffer_Display[231])
#define DTHM_SingleSivPower_U32                            Change_BigEen(g_dataBuffer_Display[232])*65536+Change_BigEen(g_dataBuffer_Display[233])
#define DTHM_SingleAP1Time_U32                             Change_BigEen(g_dataBuffer_Display[234])*65536+Change_BigEen(g_dataBuffer_Display[235])
#define DTHM_SingleAP2Time_U32                             Change_BigEen(g_dataBuffer_Display[236])*65536+Change_BigEen(g_dataBuffer_Display[237])
#define DTHM_SingleRunTime_U32                             Change_BigEen(g_dataBuffer_Display[238])*65536+Change_BigEen(g_dataBuffer_Display[239])


//0x212
#define DTHM_Distance_Year_U8                              g_dataBuffer_Display[240]%256
#define DTHM_Distance_Month_U8                             g_dataBuffer_Display[240]/256
#define DTHM_Distance_Day_U8                               g_dataBuffer_Display[241]%256

#define DTHM_DeteDistance_Year_U8                              g_dataBuffer_Display[241]/256
#define DTHM_DeteDistance_Month_U8                             g_dataBuffer_Display[242]%256
#define DTHM_DeteDistance_Day_U8                               g_dataBuffer_Display[242]/256

#define DTHM_TractionPower_Year_U8                              g_dataBuffer_Display[243]%256
#define DTHM_TractionPower_Month_U8                             g_dataBuffer_Display[243]/256
#define DTHM_TractionPower_Day_U8                               g_dataBuffer_Display[244]%256

#define DTHM_BrakePower_Year_U8                              g_dataBuffer_Display[244]/256
#define DTHM_BrakePower_Month_U8                             g_dataBuffer_Display[245]%256
#define DTHM_BrakePower_Day_U8                               g_dataBuffer_Display[245]/256

#define DTHM_SivPower_Year_U8                              g_dataBuffer_Display[246]%256
#define DTHM_SivPower_Month_U8                             g_dataBuffer_Display[246]/256
#define DTHM_SivPower_Day_U8                               g_dataBuffer_Display[247]%256

#define DTHM_AP1Time_Year_U8                              g_dataBuffer_Display[247]/256
#define DTHM_AP1Time_Month_U8                             g_dataBuffer_Display[248]%256
#define DTHM_AP1Time_Day_U8                               g_dataBuffer_Display[248]/256

#define DTHM_AP2Time_Year_U8                              g_dataBuffer_Display[249]%256
#define DTHM_AP2Time_Month_U8                             g_dataBuffer_Display[249]/256
#define DTHM_AP2Time_Day_U8                               g_dataBuffer_Display[250]%256

#define DTHM_RunTime_Year_U8                              g_dataBuffer_Display[250]/256
#define DTHM_RunTime_Month_U8                             g_dataBuffer_Display[251]%256
#define DTHM_RunTime_Day_U8                               g_dataBuffer_Display[251]/256

#define DTHM_LoadRate1_U8                              g_dataBuffer_Display[253]%256
#define DTHM_LoadRate2_U8                              g_dataBuffer_Display[253]/256
#define DTHM_LoadRate3_U8                              g_dataBuffer_Display[254]%256
#define DTHM_LoadRate4_U8                              g_dataBuffer_Display[254]/256
#define DTHM_LoadRate5_U8                              g_dataBuffer_Display[255]%256
#define DTHM_LoadRate6_U8                              g_dataBuffer_Display[255]/256

/*
//0x211
#define DT1HM_SingleCount_U8                         g_dataBuffer_Display[224]%256
#define DT1HM_SingleYear_U8                          g_dataBuffer_Display[224]/256
#define DT1HM_SingleMonth_U8                         g_dataBuffer_Display[225]%256
#define DT1HM_SingleDay_U8                           g_dataBuffer_Display[225]/256
#define DT1HM_SingleMile_U32                         g_dataBuffer_Display[226]+g_dataBuffer_Display[227]*65536
#define DT1HM_SingleTime_U32                         g_dataBuffer_Display[228]+g_dataBuffer_Display[229]*65536
#define DT1HM_SingleTractionPower_U32                g_dataBuffer_Display[230]+g_dataBuffer_Display[231]*65536
#define DT1HM_SingleBrakePower_U32                   g_dataBuffer_Display[232]+g_dataBuffer_Display[233]*65536
#define DT1HM_SingleSivPower_U32                     g_dataBuffer_Display[234]+g_dataBuffer_Display[235]*65536
#define DT1HM_DetectionYear_U8                       g_dataBuffer_Display[236]/256
#define DT1HM_DetectionMonth_U8                      g_dataBuffer_Display[237]%256
#define DT1HM_DetectionDay_U8                        g_dataBuffer_Display[237]/256
#define DT1HM_DetectionMile_U32                      g_dataBuffer_Display[238]+g_dataBuffer_Display[239]*65536
*/
//0X220
#define DT2HM_LifeSign_U8                            g_dataBuffer_Display[272]%256
#define DT2HM_VersionVxworks_U8                      g_dataBuffer_Display[280]%256
#define DT2HM_VersionMVB_U8                          g_dataBuffer_Display[280]/256
#define DT2HM_VersionSdb_U8                          g_dataBuffer_Display[281]%256
#define DT2HM_VersionPlc_U8                          g_dataBuffer_Display[281]/256

/*

//0x211
#define DT2HM_SingleCount_U8                         g_dataBuffer_Display[224+64]%256
#define DT2HM_SingleYear_U8                          g_dataBuffer_Display[224+64]/256
#define DT2HM_SingleMonth_U8                         g_dataBuffer_Display[225+64]%256
#define DT2HM_SingleDay_U8                           g_dataBuffer_Display[225+64]/256
#define DT2HM_SingleMile_U32                         g_dataBuffer_Display[226+64]+g_dataBuffer_Display[227+64]*65536
#define DT2HM_SingleTime_U32                         g_dataBuffer_Display[228+64]+g_dataBuffer_Display[229+64]*65536
#define DT2HM_SingleTractionPower_U32                g_dataBuffer_Display[230+64]+g_dataBuffer_Display[231+64]*65536
#define DT2HM_SingleBrakePower_U32                   g_dataBuffer_Display[232+64]+g_dataBuffer_Display[233+64]*65536
#define DT2HM_SingleSivPower_U32                     g_dataBuffer_Display[234+64]+g_dataBuffer_Display[235+64]*65536
#define DT2HM_DetectionYear_U8                       g_dataBuffer_Display[236+64]/256
#define DT2HM_DetectionMonth_U8                      g_dataBuffer_Display[237+64]%256
#define DT2HM_DetectionDay_U8                        g_dataBuffer_Display[237+64]/256
#define DT2HM_DetectionMile_U32                      g_dataBuffer_Display[238+64]+g_dataBuffer_Display[239+64]*65536

*/

//0x310    HMI1-->CCU
#define HM1CT_LifeSign_U8                             g_dataBuffer_Display[336]%256
#define HM1CT_Version_U8                              g_dataBuffer_Display[351]/256

#define HM1CT_TimeSetFlag__B1                        g_dataBuffer_Display[339]& bit15

//0x320    HMI2-->CCU
#define HM2CT_LifeSign_U8                             g_dataBuffer_Display[400]%256
#define HM2CT_Version_U8                              g_dataBuffer_Display[415]/256

#define HM2CT_TimeSetFlag__B1                        g_dataBuffer_Display[403]& bit15



//0x308    ccu-->hmi
#define CTHM_CCU1_IsOnline_B1                        g_dataBuffer_Display[1872]& bit7
#define CTHM_CCU2_IsOnline_B1                        g_dataBuffer_Display[1872]& bit6
#define CTHM_CCU1_IsMaster_B1                        g_dataBuffer_Display[1872]& bit5
#define CTHM_CCU2_IsMaster_B1                        g_dataBuffer_Display[1872]& bit4



#define CTHM_RIOM1_GW_IsOnline_B1                          g_dataBuffer_Display[1873]& bit15
#define CTHM_RIOM1_DIM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit14
#define CTHM_RIOM1_DIM2_IsOnline_B1                        g_dataBuffer_Display[1873]& bit13
#define CTHM_RIOM1_DIM3_IsOnline_B1                        g_dataBuffer_Display[1873]& bit12
#define CTHM_RIOM1_DIM4_IsOnline_B1                        g_dataBuffer_Display[1873]& bit11
#define CTHM_RIOM1_DOM1_IsOnline_B1                        g_dataBuffer_Display[1873]& bit10
#define CTHM_RIOM1_AIOM1_IsOnline_B1                       g_dataBuffer_Display[1874]& bit7

#define CTHM_RIOM2_GW_IsOnline_B1                          g_dataBuffer_Display[1874]& bit6
#define CTHM_RIOM2_DIM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit5
#define CTHM_RIOM2_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit4
//#define CTHM_RIOM2_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit4

#define CTHM_RIOM3_GW_IsOnline_B1                          g_dataBuffer_Display[1874]& bit15
#define CTHM_RIOM3_DIM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit14
//#define CTHM_RIOM3_DIM2_IsOnline_B1                        g_dataBuffer_Display[1874]& bit13
#define CTHM_RIOM3_DOM1_IsOnline_B1                        g_dataBuffer_Display[1874]& bit12

#define CTHM_RIOM4_GW_IsOnline_B1                          g_dataBuffer_Display[1875]& bit7
#define CTHM_RIOM4_DIM1_IsOnline_B1                        g_dataBuffer_Display[1875]& bit6
//#define CTHM_RIOM4_DIM2_IsOnline_B1                        g_dataBuffer_Display[1875]& bit5
#define CTHM_RIOM4_DOM1_IsOnline_B1                        g_dataBuffer_Display[1875]& bit4

#define CTHM_RIOM5_GW_IsOnline_B1                          g_dataBuffer_Display[1875]& bit15
#define CTHM_RIOM5_DIM1_IsOnline_B1                        g_dataBuffer_Display[1875]& bit14
//#define CTHM_RIOM5_DIM2_IsOnline_B1                        g_dataBuffer_Display[1875]& bit13
#define CTHM_RIOM5_DOM1_IsOnline_B1                        g_dataBuffer_Display[1875]& bit13

#define CTHM_RIOM6_GW_IsOnline_B1                          g_dataBuffer_Display[1875]& bit12
#define CTHM_RIOM6_DIM1_IsOnline_B1                        g_dataBuffer_Display[1876]& bit7
#define CTHM_RIOM6_DIM2_IsOnline_B1                        g_dataBuffer_Display[1876]& bit6
#define CTHM_RIOM6_DIM3_IsOnline_B1                        g_dataBuffer_Display[1876]& bit5
#define CTHM_RIOM6_DIM4_IsOnline_B1                        g_dataBuffer_Display[1876]& bit4
#define CTHM_RIOM6_DOM1_IsOnline_B1                        g_dataBuffer_Display[1876]& bit3
#define CTHM_RIOM6_AIOM1_IsOnline_B1                       g_dataBuffer_Display[1876]& bit2

#define CTHM_ERM1_Online_B1                          g_dataBuffer_Display[1876]& bit15
#define CTHM_ERM2_Online_B1                          g_dataBuffer_Display[1876]& bit14
#define CTHM_HMI1_Online_B1                          g_dataBuffer_Display[1876]& bit13
#define CTHM_HMI2_Online_B1                          g_dataBuffer_Display[1876]& bit12

#define CTHM_BCU1_Online_B1                          g_dataBuffer_Display[1877]& bit7
#define CTHM_BCU2_Online_B1                          g_dataBuffer_Display[1877]& bit6
#define CTHM_BCU3_Online_B1                          g_dataBuffer_Display[1877]& bit5
#define CTHM_BCU4_Online_B1                          g_dataBuffer_Display[1877]& bit4
#define CTHM_DCU2_Online_B1                          g_dataBuffer_Display[1877]& bit3
#define CTHM_DCU3_Online_B1                          g_dataBuffer_Display[1877]& bit2
#define CTHM_DCU4_Online_B1                          g_dataBuffer_Display[1877]& bit1
#define CTHM_DCU5_Online_B1                          g_dataBuffer_Display[1877]& bit0

#define CTHM_SIV1_Online_B1                          g_dataBuffer_Display[1877]& bit15
#define CTHM_SIV2_Online_B1                          g_dataBuffer_Display[1877]& bit14

#define CTHM_EDCU1_Online_B1                          g_dataBuffer_Display[1878]& bit7
#define CTHM_EDCU2_Online_B1                          g_dataBuffer_Display[1878]& bit6
#define CTHM_EDCU3_Online_B1                          g_dataBuffer_Display[1878]& bit5
#define CTHM_EDCU4_Online_B1                          g_dataBuffer_Display[1878]& bit4
#define CTHM_EDCU5_Online_B1                          g_dataBuffer_Display[1878]& bit3
#define CTHM_EDCU6_Online_B1                          g_dataBuffer_Display[1878]& bit2
#define CTHM_EDCU7_Online_B1                          g_dataBuffer_Display[1878]& bit1
#define CTHM_EDCU8_Online_B1                          g_dataBuffer_Display[1878]& bit0
#define CTHM_EDCU9_Online_B1                          g_dataBuffer_Display[1878]& bit15
#define CTHM_EDCU10_Online_B1                          g_dataBuffer_Display[1878]& bit14
#define CTHM_EDCU11_Online_B1                          g_dataBuffer_Display[1878]& bit13
#define CTHM_EDCU12_Online_B1                          g_dataBuffer_Display[1878]& bit12

#define CTHM_HVAC1_Online_B1                          g_dataBuffer_Display[1879]& bit7
#define CTHM_HVAC2_Online_B1                          g_dataBuffer_Display[1879]& bit6
#define CTHM_HVAC3_Online_B1                          g_dataBuffer_Display[1879]& bit5
#define CTHM_HVAC4_Online_B1                          g_dataBuffer_Display[1879]& bit4
#define CTHM_HVAC5_Online_B1                          g_dataBuffer_Display[1879]& bit3
#define CTHM_HVAC6_Online_B1                          g_dataBuffer_Display[1879]& bit2

#define CTHM_ATC1_Online_B1                          g_dataBuffer_Display[1879]& bit15
#define CTHM_ATC2_Online_B1                          g_dataBuffer_Display[1879]& bit14
#define CTHM_PIS1_Online_B1                          g_dataBuffer_Display[1879]& bit13
#define CTHM_PIS2_Online_B1                          g_dataBuffer_Display[1879]& bit12
#define CTHM_FAU1_Online_B1                          g_dataBuffer_Display[1879]& bit11
#define CTHM_FAU2_Online_B1                          g_dataBuffer_Display[1879]& bit10

#define CTHM_CCU1_VersionVxworks_U8                    g_dataBuffer_Display[1880]%256
#define CTHM_CCU1_VersionMVB_U8                        g_dataBuffer_Display[1880]/256
#define CTHM_CCU1_VersionSdb_U8                        g_dataBuffer_Display[1881]%256
#define CTHM_CCU1_VersionPlc_U8                        g_dataBuffer_Display[1881]/256

#define CTHM_CCU2_VersionVxworks_U8                    g_dataBuffer_Display[1882]%256
#define CTHM_CCU2_VersionMVB_U8                        g_dataBuffer_Display[1882]/256
#define CTHM_CCU2_VersionSdb_U8                        g_dataBuffer_Display[1883]%256
#define CTHM_CCU2_VersionPlc_U8                        g_dataBuffer_Display[1883]/256

#define CTHM_TrainSpeed_U16                          Change_BigEen(g_dataBuffer_Display[1884])

#define CTHM_RunForward_B1                          g_dataBuffer_Display[1885]& bit7
#define CTHM_RunBackward_B1                         g_dataBuffer_Display[1885]& bit6
#define CTHM_TC1CabActive_B1                        g_dataBuffer_Display[1885]& bit5
#define CTHM_TC2CabActive_B1                        g_dataBuffer_Display[1885]& bit4
#define CTHM_TractionState_B1                       g_dataBuffer_Display[1885]& bit3
#define CTHM_BrakeState_B1                          g_dataBuffer_Display[1885]& bit2
#define CTHM_EmgcyBrakeState_B1                     g_dataBuffer_Display[1885]& bit1
#define CTHM_QuickBrake_B1                          g_dataBuffer_Display[1885]& bit0


#define CTHM_TractionLevel_U8                        g_dataBuffer_Display[1885]/256
#define CTHM_BrakeLevel_U8                           g_dataBuffer_Display[1886]%256
#define CTHM_LineNumber_U8                           g_dataBuffer_Display[1886]/256
#define CTHM_TrainNumber_U8                          g_dataBuffer_Display[1887]%256

//0x309    ccu-->hmi
#define CTHM_SetHVACModeTC1_U8                        g_dataBuffer_Display[1888]%256
#define CTHM_SetHVACModeMP1_U8                        g_dataBuffer_Display[1888]/256
#define CTHM_SetHVACModeM1_U8                         g_dataBuffer_Display[1889]%256
#define CTHM_SetHVACModeM2_U8                         g_dataBuffer_Display[1889]/256
#define CTHM_SetHVACModeMP2_U8                        g_dataBuffer_Display[1890]%256
#define CTHM_SetHVACModeTC2_U8                        g_dataBuffer_Display[1890]/256


#define CTHM_SetHVACTempTC1_U8                        g_dataBuffer_Display[1891]%256
#define CTHM_SetHVACTempMP1_U8                        g_dataBuffer_Display[1891]/256
#define CTHM_SetHVACTempM1_U8                         g_dataBuffer_Display[1892]%256
#define CTHM_SetHVACTempM2_U8                         g_dataBuffer_Display[1892]/256
#define CTHM_SetHVACTempMP2_U8                        g_dataBuffer_Display[1893]%256
#define CTHM_SetHVACTempTC2_U8                        g_dataBuffer_Display[1893]/256

#define CTHM_WashingMode_B1                          g_dataBuffer_Display[1894]& bit7
#define CTHM_BackMode_B1                             g_dataBuffer_Display[1894]& bit6
#define CTHM_KMKFault_B1                             g_dataBuffer_Display[1894]& bit5
#define CTHM_AcDeDataIsValid_B1                      g_dataBuffer_Display[1894]& bit4

#define CTHM_SetWheelDiaTC1_U8                        g_dataBuffer_Display[1894]/256
#define CTHM_SetWheelDiaMp1_U8                        g_dataBuffer_Display[1895]%256
#define CTHM_SetWheelDiaM1_U8                         g_dataBuffer_Display[1895]/256
#define CTHM_SetWheelDiaM2_U8                         g_dataBuffer_Display[1896]%256
#define CTHM_SetWheelDiaMp2_U8                        g_dataBuffer_Display[1896]/256
#define CTHM_SetWheelDiaTC2_U8                        g_dataBuffer_Display[1897]%256

#define CTHM_AcDeHandleLevel_I8                        (char)(g_dataBuffer_Display[1897]/256)
#define CTHM_AcDeSpeed_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[1898])
#define CTHM_AcDeStartVelocity_U16                     Change_BigEen(g_dataBuffer_Display[1899])
#define CTHM_AcDeStopVelocity_U16                      Change_BigEen(g_dataBuffer_Display[1900])
#define CTHM_AcDeDistance_U16                          Change_BigEen(g_dataBuffer_Display[1901])

#define CTHM_AcDeSpeedMoment_I16                        (int16_t)Change_BigEen(g_dataBuffer_Display[1902])
#define CTHM_AcDeShorkRatio_I16                         (int16_t)Change_BigEen(g_dataBuffer_Display[1903])

//0x510

#define BCU1CT_Mass_1_Valid_B1                        g_dataBuffer_Display[464]& bit15
#define BCU1CT_EP_OK_1_B1                             g_dataBuffer_Display[464]& bit14
#define BCU1CT_Brake_Applied_1_B1                     g_dataBuffer_Display[464]& bit11
#define BCU1CT_Remote_Releae_1_B1                     g_dataBuffer_Display[464]& bit10
#define BCU1CT_Emergency_brake_active_1_B1            g_dataBuffer_Display[464]& bit9
#define BCU1CT_Active_slide_1_B1                      g_dataBuffer_Display[464]& bit8


#define BCU1CT_BCU_LifeData_U8                         g_dataBuffer_Display[464]%256


#define BCU1CT_TC_Mass_1_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[465])

#define BCU1CT_Prime_GV_B1                            g_dataBuffer_Display[466]& bit14
//#define BCU1CT_Prime_GV_B1                            g_dataBuffer_Display[466]& bit6
#define BCU1CT_Selftest_Expired_26h_1_B1              g_dataBuffer_Display[466]& bit13
#define BCU1CT_Selftest_Expired_24h_1_B1              g_dataBuffer_Display[466]& bit12
#define BCU1CT_Selftest_failed_1_B1                   g_dataBuffer_Display[466]& bit11
#define BCU1CT_Selftest_succces_1_B1                  g_dataBuffer_Display[466]& bit10
#define BCU1CT_Selftest_active_1_B1                   g_dataBuffer_Display[466]& bit9
#define BCU1CT_Last_selftest_aborted_1_B1             g_dataBuffer_Display[466]& bit8

#define BCU1CT_CanID_B1                               g_dataBuffer_Display[466]& bit6
#define BCU1CT_Drive_active_1_B1                      g_dataBuffer_Display[466]& bit5
#define BCU1CT_Brake_active_1_B1                      g_dataBuffer_Display[466]& bit4
#define BCU1CT_EmergencyDrive_active_1_B1             g_dataBuffer_Display[466]& bit3
#define BCU1CT_Fastbrake_active_1_B1                  g_dataBuffer_Display[466]& bit2
#define BCU1CT_RESERVE_1_B1                           g_dataBuffer_Display[466]& bit1
#define BCU1CT_EB_active_in_CAN_seg_1_1_B1            g_dataBuffer_Display[466]& bit0

#define BCU1CT_IMember_Valid_6_B1                     g_dataBuffer_Display[467]& bit13
#define BCU1CT_IMember_Valid_5_B1                     g_dataBuffer_Display[467]& bit12
#define BCU1CT_IMember_Valid_4_B1                     g_dataBuffer_Display[467]& bit11
#define BCU1CT_IMember_Valid_3_B1                     g_dataBuffer_Display[467]& bit10
#define BCU1CT_IMember_Valid_2_B1                     g_dataBuffer_Display[467]& bit9
#define BCU1CT_IMember_Valid_1_B1                     g_dataBuffer_Display[467]& bit8

#define BCU1CT_WheelDiameterInput_Status_B1           g_dataBuffer_Display[467]& bit5
#define BCU1CT_WheelDiameterInput_Ready_B1            g_dataBuffer_Display[467]& bit4
#define BCU1CT_ED_Brake_effort_C_valid_B1             g_dataBuffer_Display[467]& bit3
#define BCU1CT_ED_Brake_effort_B_valid_B1             g_dataBuffer_Display[467]& bit2
#define BCU1CT_ED_Cutout_C_B1                         g_dataBuffer_Display[467]& bit1
#define BCU1CT_ED_Cutout_B_B1                         g_dataBuffer_Display[467]& bit0

#define BCU1CT_ED_Brake_effort_B1_I16                 (int16_t)Change_BigEen(g_dataBuffer_Display[468])
#define BCU1CT_ED_Brake_effort_C1_I16                 (int16_t)Change_BigEen(g_dataBuffer_Display[469])

#define BCU1CT_Mass_2_Valid_B1                        g_dataBuffer_Display[470]& bit15
#define BCU1CT_EP_OK_2_B1                             g_dataBuffer_Display[470]& bit14
#define BCU1CT_Brake_Applied_2_B1                     g_dataBuffer_Display[470]& bit11
#define BCU1CT_Remote_Releae_2_B1                     g_dataBuffer_Display[470]& bit10
#define BCU1CT_Emergency_brake_active_2_B1            g_dataBuffer_Display[470]& bit9
#define BCU1CT_Active_slide_2_B1                      g_dataBuffer_Display[470]& bit8

#define BCU1CT_TC_Mass_2_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[471])

#define BCU1CT_Mass_3_Valid_B1                        g_dataBuffer_Display[472]& bit15
#define BCU1CT_EP_OK_3_B1                             g_dataBuffer_Display[472]& bit14
#define BCU1CT_Brake_Applied_3_B1                     g_dataBuffer_Display[472]& bit11
#define BCU1CT_Remote_Releae_3_B1                     g_dataBuffer_Display[472]& bit10
#define BCU1CT_Emergency_brake_active_3_B1            g_dataBuffer_Display[472]& bit9
#define BCU1CT_Active_slide_3_B1                      g_dataBuffer_Display[472]& bit8

#define BCU1CT_TC_Mass_3_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[473])

#define BCU1CT_Mass_4_Valid_B1                        g_dataBuffer_Display[474]& bit15
#define BCU1CT_EP_OK_4_B1                             g_dataBuffer_Display[474]& bit14
#define BCU1CT_Brake_Applied_4_B1                     g_dataBuffer_Display[474]& bit11
#define BCU1CT_Remote_Releae_4_B1                     g_dataBuffer_Display[474]& bit10
#define BCU1CT_Emergency_brake_active_4_B1            g_dataBuffer_Display[474]& bit9
#define BCU1CT_Active_slide_4_B1                      g_dataBuffer_Display[474]& bit8

#define BCU1CT_TC_Mass_4_I16                            (int16_t)Change_BigEen(g_dataBuffer_Display[475])

#define BCU1CT_Mass_5_Valid_B1                        g_dataBuffer_Display[476]& bit15
#define BCU1CT_EP_OK_5_B1                             g_dataBuffer_Display[476]& bit14
#define BCU1CT_Brake_Applied_5_B1                     g_dataBuffer_Display[476]& bit11
#define BCU1CT_Remote_Releae_5_B1                     g_dataBuffer_Display[476]& bit10
#define BCU1CT_Emergency_brake_active_5_B1            g_dataBuffer_Display[476]& bit9
#define BCU1CT_Active_slide_5_B1                      g_dataBuffer_Display[476]& bit8

#define BCU1CT_TC_Mass_5_I16                          (int16_t)Change_BigEen(g_dataBuffer_Display[477])

#define BCU1CT_Mass_6_Valid_B1                        g_dataBuffer_Display[478]& bit15
#define BCU1CT_EP_OK_6_B1                             g_dataBuffer_Display[478]& bit14
#define BCU1CT_Brake_Applied_6_B1                     g_dataBuffer_Display[478]& bit11
#define BCU1CT_Remote_Releae_6_B1                     g_dataBuffer_Display[478]& bit10
#define BCU1CT_Emergency_brake_active_6_B1            g_dataBuffer_Display[478]& bit9
#define BCU1CT_Active_slide_6_B1                      g_dataBuffer_Display[478]& bit8

#define BCU1CT_TC_Mass_6_I16                          (int16_t)Change_BigEen(g_dataBuffer_Display[479])
//0x511
#define BCU1CT_BCU_A1_WDActive_B1                     g_dataBuffer_Display[480]& bit4
#define BCU1CT_BCU_A1_SpeedActive_4_B1                g_dataBuffer_Display[480]& bit3
#define BCU1CT_BCU_A1_SpeedActive_3_B1                g_dataBuffer_Display[480]& bit2
#define BCU1CT_BCU_A1_SpeedActive_2_B1                g_dataBuffer_Display[480]& bit1
#define BCU1CT_BCU_A1_SpeedActive_1_B1                g_dataBuffer_Display[480]& bit0

#define BCU1CT_BCU_A1_Speed_1_U16                     Change_BigEen(g_dataBuffer_Display[482])
#define BCU1CT_BCU_A1_Speed_2_U16                     Change_BigEen(g_dataBuffer_Display[483])
#define BCU1CT_BCU_A1_Speed_3_U16                     Change_BigEen(g_dataBuffer_Display[484])
#define BCU1CT_BCU_A1_Speed_4_U16                     Change_BigEen(g_dataBuffer_Display[485])

#define BCU1CT_BCU_BCU_A1_WheelDia_U16                Change_BigEen(g_dataBuffer_Display[486])
#define BCU1CT_EP_possible_1_U16                      Change_BigEen(g_dataBuffer_Display[490])
#define BCU1CT_EP_possible_2_U16                      Change_BigEen(g_dataBuffer_Display[491])
#define BCU1CT_EP_possible_3_U16                      Change_BigEen(g_dataBuffer_Display[492])
#define BCU1CT_EP_possible_4_U16                      Change_BigEen(g_dataBuffer_Display[493])
#define BCU1CT_EP_possible_5_U16                      Change_BigEen(g_dataBuffer_Display[494])
#define BCU1CT_EP_possible_6_U16                      Change_BigEen(g_dataBuffer_Display[495])

//0x512
#define BCU1CT_BSR_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[496])
#define BCU1CT_BRK_cyl_pressure_1_U16                 Change_BigEen(g_dataBuffer_Display[498])
#define BCU1CT_Air_spring_pressure_1_U16              Change_BigEen(g_dataBuffer_Display[499])
#define BCU1CT_MRE_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[500])
#define BCU1CT_BSR_pressure_2_U16                     Change_BigEen(g_dataBuffer_Display[501])
#define BCU1CT_Park_pressure_2_U16                    Change_BigEen(g_dataBuffer_Display[502])
#define BCU1CT_BRK_cyl_pressure_2_U16                 Change_BigEen(g_dataBuffer_Display[503])
#define BCU1CT_Air_spring_pressure_2_U16              Change_BigEen(g_dataBuffer_Display[504])

#define BCU1CT_Air_spr_pressure_2_Active_B1           g_dataBuffer_Display[508]& bit11
#define BCU1CT_BRK_cyl_pressure_2_Active_B1           g_dataBuffer_Display[508]& bit10
#define BCU1CT_Park_pressure_2_Atcive_B1              g_dataBuffer_Display[508]& bit9
#define BCU1CT_BSR_pressure_2_Active_B1               g_dataBuffer_Display[508]& bit8

#define BCU1CT_MRE_pressure_1_Atcive_B1                g_dataBuffer_Display[508]& bit4
#define BCU1CT_Air_spr_pressure_1_Active_B1            g_dataBuffer_Display[508]& bit3
#define BCU1CT_BRK_cyl_pressure_1_Active_B1            g_dataBuffer_Display[508]& bit2
#define BCU1CT_BSR_pressure_1_Active_B1                g_dataBuffer_Display[508]& bit0

//0x513
#define BCU1CT_BSR_pressure_3_U16                     Change_BigEen(g_dataBuffer_Display[496+16])
#define BCU1CT_BRK_cyl_pressure_3_U16                 Change_BigEen(g_dataBuffer_Display[498+16])
#define BCU1CT_Air_spring_pressure_3_U16              Change_BigEen(g_dataBuffer_Display[499+16])
#define BCU1CT_Bp_pressure_3_U16                      Change_BigEen(g_dataBuffer_Display[500+16])
#define BCU1CT_BSR_pressure_4_U16                     Change_BigEen(g_dataBuffer_Display[501+16])
#define BCU1CT_Park_pressure_4_U16                    Change_BigEen(g_dataBuffer_Display[502+16])
#define BCU1CT_BRK_cyl_pressure_4_U16                 Change_BigEen(g_dataBuffer_Display[503+16])
#define BCU1CT_Air_spring_pressure_4_U16              Change_BigEen(g_dataBuffer_Display[504+16])

#define BCU1CT_Air_spr_pressure_4_Active_B1           g_dataBuffer_Display[508+16]& bit11
#define BCU1CT_BRK_cyl_pressure_4_Active_B1           g_dataBuffer_Display[508+16]& bit10
#define BCU1CT_Park_pressure_4_Atcive_B1              g_dataBuffer_Display[508+16]& bit9
#define BCU1CT_BSR_pressure_4_Active_B1               g_dataBuffer_Display[508+16]& bit8

#define BCU1CT_Bp_pressure_3_Atcive_B1                 g_dataBuffer_Display[508+16]& bit4
#define BCU1CT_Air_spr_pressure_3_Active_B1            g_dataBuffer_Display[508+16]& bit3
#define BCU1CT_BRK_cyl_pressure_3_Active_B1            g_dataBuffer_Display[508+16]& bit2
#define BCU1CT_BSR_pressure_3_Active_B1                g_dataBuffer_Display[508+16]& bit0

//0x514
#define BCU1CT_BSR_pressure_5_U16                     Change_BigEen(g_dataBuffer_Display[496+32])
#define BCU1CT_BRK_cyl_pressure_5_U16                 Change_BigEen(g_dataBuffer_Display[498+32])
#define BCU1CT_Air_spring_pressure_5_U16              Change_BigEen(g_dataBuffer_Display[499+32])

#define BCU1CT_BSR_pressure_6_U16                     Change_BigEen(g_dataBuffer_Display[501+32])
#define BCU1CT_Park_pressure_6_U16                    Change_BigEen(g_dataBuffer_Display[502+32])
#define BCU1CT_BRK_cyl_pressure_6_U16                 Change_BigEen(g_dataBuffer_Display[503+32])
#define BCU1CT_Air_spring_pressure_6_U16              Change_BigEen(g_dataBuffer_Display[504+32])

#define BCU1CT_Air_spr_pressure_6_Active_B1           g_dataBuffer_Display[508+32]& bit11
#define BCU1CT_BRK_cyl_pressure_6_Active_B1           g_dataBuffer_Display[508+32]& bit10
#define BCU1CT_Park_pressure_6_Atcive_B1              g_dataBuffer_Display[508+32]& bit9
#define BCU1CT_BSR_pressure_6_Active_B1               g_dataBuffer_Display[508+32]& bit8


#define BCU1CT_Air_spr_pressure_5_Active_B1            g_dataBuffer_Display[508+32]& bit3
#define BCU1CT_BRK_cyl_pressure_5_Active_B1            g_dataBuffer_Display[508+32]& bit2
#define BCU1CT_BSR_pressure_5_Active_B1                g_dataBuffer_Display[508+32]& bit0

//0x515
#define BCU1CT_AllPbrReleased_PerCAN_B1                g_dataBuffer_Display[545]& bit8


//0x530
#define BCU3CT_Mass_1_Valid_B1                        g_dataBuffer_Display[464+192]& bit15
#define BCU3CT_EP_OK_1_B1                            g_dataBuffer_Display[464+192]& bit14
#define BCU3CT_Brake_Applied_1_B1                     g_dataBuffer_Display[464+192]& bit11
#define BCU3CT_Remote_Releae_1_B1                     g_dataBuffer_Display[464+192]& bit10
#define BCU3CT_Emergency_brake_active_1_B1            g_dataBuffer_Display[464+192]& bit9
#define BCU3CT_Active_slide_1_B1                      g_dataBuffer_Display[464+192]& bit8


#define BCU3CT_BCU_LifeData_U8                         g_dataBuffer_Display[464+192]%256


#define BCU3CT_TC_Mass_1_I16                        (int16_t)Change_BigEen(g_dataBuffer_Display[465+192])

#define BCU3CT_Prime_GV_B1                            g_dataBuffer_Display[466+192]& bit14

//#define BCU3CT_Prime_GV_B1                            g_dataBuffer_Display[466+192]& bit6
#define BCU3CT_Selftest_Expired_26h_1_B1              g_dataBuffer_Display[466+192]& bit13
#define BCU3CT_Selftest_Expired_24h_1_B1              g_dataBuffer_Display[466+192]& bit12
#define BCU3CT_Selftest_failed_1_B1                   g_dataBuffer_Display[466+192]& bit11
#define BCU3CT_Selftest_succces_1_B1                  g_dataBuffer_Display[466+192]& bit10
#define BCU3CT_Selftest_active_1_B1                   g_dataBuffer_Display[466+192]& bit9
#define BCU3CT_Last_selftest_aborted_1_B1             g_dataBuffer_Display[466+192]& bit8

#define BCU3CT_CanID_B1                               g_dataBuffer_Display[466+192]& bit6
#define BCU3CT_Drive_active_1_B1                      g_dataBuffer_Display[466+192]& bit5
#define BCU3CT_Brake_active_1_B1                      g_dataBuffer_Display[466+192]& bit4
#define BCU3CT_EmergencyDrive_active_1_B1             g_dataBuffer_Display[466+192]& bit3
#define BCU3CT_Fastbrake_active_1_B1                  g_dataBuffer_Display[466+192]& bit2
#define BCU3CT_RESERVE_1_B1                           g_dataBuffer_Display[466+192]& bit1
#define BCU3CT_EB_active_in_CAN_seg_1_1_B1            g_dataBuffer_Display[466+192]& bit0

#define BCU3CT_IMember_Valid_6_B1                     g_dataBuffer_Display[467+192]& bit13
#define BCU3CT_IMember_Valid_5_B1                     g_dataBuffer_Display[467+192]& bit12
#define BCU3CT_IMember_Valid_4_B1                     g_dataBuffer_Display[467+192]& bit11
#define BCU3CT_IMember_Valid_3_B1                     g_dataBuffer_Display[467+192]& bit10
#define BCU3CT_IMember_Valid_2_B1                     g_dataBuffer_Display[467+192]& bit9
#define BCU3CT_IMember_Valid_1_B1                     g_dataBuffer_Display[467+192]& bit8

#define BCU3CT_WheelDiameterInput_Status_B1           g_dataBuffer_Display[467+192]& bit5
#define BCU3CT_WheelDiameterInput_Ready_B1            g_dataBuffer_Display[467+192]& bit4
#define BCU3CT_ED_Brake_effort_C_valid_B1             g_dataBuffer_Display[467+192]& bit3
#define BCU3CT_ED_Brake_effort_B_valid_B1             g_dataBuffer_Display[467+192]& bit2
#define BCU3CT_ED_Cutout_C_B1                         g_dataBuffer_Display[467+192]& bit1
#define BCU3CT_ED_Cutout_B_B1                         g_dataBuffer_Display[467+192]& bit0

#define BCU3CT_ED_Brake_effort_B1_I16                  (int16_t)Change_BigEen(g_dataBuffer_Display[468+192])
#define BCU3CT_ED_Brake_effort_C1_I16                  (int16_t)Change_BigEen(g_dataBuffer_Display[469+192])

#define BCU3CT_Mass_2_Valid_B1                        g_dataBuffer_Display[470+192]& bit15
#define BCU3CT_EP_OK_2_B1                             g_dataBuffer_Display[470+192]& bit14
#define BCU3CT_Brake_Applied_2_B1                     g_dataBuffer_Display[470+192]& bit11
#define BCU3CT_Remote_Releae_2_B1                     g_dataBuffer_Display[470+192]& bit10
#define BCU3CT_Emergency_brake_active_2_B1            g_dataBuffer_Display[470+192]& bit9
#define BCU3CT_Active_slide_2_B1                      g_dataBuffer_Display[470+192]& bit8

#define BCU3CT_TC_Mass_2_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[471+192])

#define BCU3CT_Mass_3_Valid_B1                        g_dataBuffer_Display[472+192]& bit15
#define BCU3CT_EP_OK_3_B1                             g_dataBuffer_Display[472+192]& bit14
#define BCU3CT_Brake_Applied_3_B1                     g_dataBuffer_Display[472+192]& bit11
#define BCU3CT_Remote_Releae_3_B1                     g_dataBuffer_Display[472+192]& bit10
#define BCU3CT_Emergency_brake_active_3_B1            g_dataBuffer_Display[472+192]& bit9
#define BCU3CT_Active_slide_3_B1                      g_dataBuffer_Display[472+192]& bit8

#define BCU3CT_TC_Mass_3_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[473+192])

#define BCU3CT_Mass_4_Valid_B1                        g_dataBuffer_Display[474+192]& bit15
#define BCU3CT_EP_OK_4_B1                             g_dataBuffer_Display[474+192]& bit14
#define BCU3CT_Brake_Applied_4_B1                     g_dataBuffer_Display[474+192]& bit11
#define BCU3CT_Remote_Releae_4_B1                     g_dataBuffer_Display[474+192]& bit10
#define BCU3CT_Emergency_brake_active_4_B1            g_dataBuffer_Display[474+192]& bit9
#define BCU3CT_Active_slide_4_B1                      g_dataBuffer_Display[474+192]& bit8

#define BCU3CT_TC_Mass_4_I16                             (int16_t)Change_BigEen(g_dataBuffer_Display[475+192])

#define BCU3CT_Mass_5_Valid_B1                        g_dataBuffer_Display[476+192]& bit15
#define BCU3CT_EP_OK_5_B1                             g_dataBuffer_Display[476+192]& bit14
#define BCU3CT_Brake_Applied_5_B1                     g_dataBuffer_Display[476+192]& bit11
#define BCU3CT_Remote_Releae_5_B1                     g_dataBuffer_Display[476+192]& bit10
#define BCU3CT_Emergency_brake_active_5_B1            g_dataBuffer_Display[476+192]& bit9
#define BCU3CT_Active_slide_5_B1                      g_dataBuffer_Display[476+192]& bit8

#define BCU3CT_TC_Mass_5_I16                           (int16_t)Change_BigEen(g_dataBuffer_Display[477+192])

#define BCU3CT_Mass_6_Valid_B1                        g_dataBuffer_Display[478+192]& bit15
#define BCU3CT_EP_OK_6_B1                             g_dataBuffer_Display[478+192]& bit14
#define BCU3CT_Brake_Applied_6_B1                     g_dataBuffer_Display[478+192]& bit11
#define BCU3CT_Remote_Releae_6_B1                     g_dataBuffer_Display[478+192]& bit10
#define BCU3CT_Emergency_brake_active_6_B1            g_dataBuffer_Display[478+192]& bit9
#define BCU3CT_Active_slide_6_B1                      g_dataBuffer_Display[478+192]& bit8

#define BCU3CT_TC_Mass_6_I16                           (int16_t)Change_BigEen(g_dataBuffer_Display[479+192])
//0x531
#define BCU3CT_BCU_A1_WDActive_B1                     g_dataBuffer_Display[480+192]& bit4
#define BCU3CT_BCU_A1_SpeedActive_4_B1                g_dataBuffer_Display[480+192]& bit3
#define BCU3CT_BCU_A1_SpeedActive_3_B1                g_dataBuffer_Display[480+192]& bit2
#define BCU3CT_BCU_A1_SpeedActive_2_B1                g_dataBuffer_Display[480+192]& bit1
#define BCU3CT_BCU_A1_SpeedActive_1_B1                g_dataBuffer_Display[480+192]& bit0

#define BCU3CT_BCU_A1_Speed_1_U16                     Change_BigEen(g_dataBuffer_Display[482+192])
#define BCU3CT_BCU_A1_Speed_2_U16                     Change_BigEen(g_dataBuffer_Display[483+192])
#define BCU3CT_BCU_A1_Speed_3_U16                     Change_BigEen(g_dataBuffer_Display[484+192])
#define BCU3CT_BCU_A1_Speed_4_U16                     Change_BigEen(g_dataBuffer_Display[485+192])

#define BCU3CT_BCU_BCU_A1_WheelDia_U16                Change_BigEen(g_dataBuffer_Display[486+192])
#define BCU3CT_EP_possible_1_U16                      Change_BigEen(g_dataBuffer_Display[490+192])
#define BCU3CT_EP_possible_2_U16                      Change_BigEen(g_dataBuffer_Display[491+192])
#define BCU3CT_EP_possible_3_U16                      Change_BigEen(g_dataBuffer_Display[492+192])
#define BCU3CT_EP_possible_4_U16                      Change_BigEen(g_dataBuffer_Display[493+192])
#define BCU3CT_EP_possible_5_U16                      Change_BigEen(g_dataBuffer_Display[494+192])
#define BCU3CT_EP_possible_6_U16                      Change_BigEen(g_dataBuffer_Display[495+192])

//0x532
#define BCU3CT_BSR_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[496+192])
#define BCU3CT_BRK_cyl_pressure_1_U16                 Change_BigEen(g_dataBuffer_Display[498+192])
#define BCU3CT_Air_spring_pressure_1_U16              Change_BigEen(g_dataBuffer_Display[499+192])
#define BCU3CT_MRE_pressure_1_U16                     Change_BigEen(g_dataBuffer_Display[500+192])
#define BCU3CT_BSR_pressure_2_U16                     Change_BigEen(g_dataBuffer_Display[501+192])
#define BCU3CT_Park_pressure_2_U16                    Change_BigEen(g_dataBuffer_Display[502+192])
#define BCU3CT_BRK_cyl_pressure_2_U16                 Change_BigEen(g_dataBuffer_Display[503+192])
#define BCU3CT_Air_spring_pressure_2_U16              Change_BigEen(g_dataBuffer_Display[504+192])

#define BCU3CT_Air_spr_pressure_2_Active_B1           g_dataBuffer_Display[508+192]& bit11
#define BCU3CT_BRK_cyl_pressure_2_Active_B1           g_dataBuffer_Display[508+192]& bit10
#define BCU3CT_Park_pressure_2_Atcive_B1              g_dataBuffer_Display[508+192]& bit9
#define BCU3CT_BSR_pressure_2_Active_B1               g_dataBuffer_Display[508+192]& bit8

#define BCU3CT_MRE_pressure_1_Atcive_B1                g_dataBuffer_Display[508+192]& bit4
#define BCU3CT_Air_spr_pressure_1_Active_B1            g_dataBuffer_Display[508+192]& bit3
#define BCU3CT_BRK_cyl_pressure_1_Active_B1            g_dataBuffer_Display[508+192]& bit2
#define BCU3CT_BSR_pressure_1_Active_B1                g_dataBuffer_Display[508+192]& bit0

//0x533
#define BCU3CT_BSR_pressure_3_U16                     Change_BigEen(g_dataBuffer_Display[496+16+192])
#define BCU3CT_BRK_cyl_pressure_3_U16                 Change_BigEen(g_dataBuffer_Display[498+16+192])
#define BCU3CT_Air_spring_pressure_3_U16              Change_BigEen(g_dataBuffer_Display[499+16+192])
#define BCU3CT_Bp_pressure_3_U16                      Change_BigEen(g_dataBuffer_Display[500+16+192])
#define BCU3CT_BSR_pressure_4_U16                     Change_BigEen(g_dataBuffer_Display[501+16+192])
#define BCU3CT_Park_pressure_4_U16                    Change_BigEen(g_dataBuffer_Display[502+16+192])
#define BCU3CT_BRK_cyl_pressure_4_U16                 Change_BigEen(g_dataBuffer_Display[503+16+192])
#define BCU3CT_Air_spring_pressure_4_U16              Change_BigEen(g_dataBuffer_Display[504+16+192])

#define BCU3CT_Air_spr_pressure_4_Active_B1           g_dataBuffer_Display[508+16+192]& bit11
#define BCU3CT_BRK_cyl_pressure_4_Active_B1           g_dataBuffer_Display[508+16+192]& bit10
#define BCU3CT_Park_pressure_4_Atcive_B1              g_dataBuffer_Display[508+16+192]& bit9
#define BCU3CT_BSR_pressure_4_Active_B1               g_dataBuffer_Display[508+16+192]& bit8

#define BCU3CT_Bp_pressure_3_Atcive_B1                 g_dataBuffer_Display[508+16+192]& bit4
#define BCU3CT_Air_spr_pressure_3_Active_B1            g_dataBuffer_Display[508+16+192]& bit3
#define BCU3CT_BRK_cyl_pressure_3_Active_B1            g_dataBuffer_Display[508+16+192]& bit2
#define BCU3CT_BSR_pressure_3_Active_B1                g_dataBuffer_Display[508+16+192]& bit0

//0x534
#define BCU3CT_BSR_pressure_5_U16                     Change_BigEen(g_dataBuffer_Display[496+32+192])
#define BCU3CT_BRK_cyl_pressure_5_U16                 Change_BigEen(g_dataBuffer_Display[498+32+192])
#define BCU3CT_Air_spring_pressure_5_U16              Change_BigEen(g_dataBuffer_Display[499+32+192])

#define BCU3CT_BSR_pressure_6_U16                     Change_BigEen(g_dataBuffer_Display[501+32+192])
#define BCU3CT_Park_pressure_6_U16                    Change_BigEen(g_dataBuffer_Display[502+32+192])
#define BCU3CT_BRK_cyl_pressure_6_U16                 Change_BigEen(g_dataBuffer_Display[503+32+192])
#define BCU3CT_Air_spring_pressure_6_U16              Change_BigEen(g_dataBuffer_Display[504+32+192])

#define BCU3CT_Air_spr_pressure_6_Active_B1           g_dataBuffer_Display[508+32+192]& bit11
#define BCU3CT_BRK_cyl_pressure_6_Active_B1           g_dataBuffer_Display[508+32+192]& bit10
#define BCU3CT_Park_pressure_6_Atcive_B1              g_dataBuffer_Display[508+32+192]& bit9
#define BCU3CT_BSR_pressure_6_Active_B1               g_dataBuffer_Display[508+32+192]& bit8


#define BCU3CT_Air_spr_pressure_5_Active_B1            g_dataBuffer_Display[508+32+192]& bit3
#define BCU3CT_BRK_cyl_pressure_5_Active_B1            g_dataBuffer_Display[508+32+192]& bit2
#define BCU3CT_BSR_pressure_5_Active_B1                g_dataBuffer_Display[508+32+192]& bit0

//0x535
#define BCU3CT_AllPbrReleased_PerCAN_B1                g_dataBuffer_Display[545+192]& bit8

//0x610
#define DR1CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[656+192])
#define DR1CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[656+192+1])

#define DR1CT_ShortContCtrlState_B1                  g_dataBuffer_Display[656+192+2]&bit5
#define DR1CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[656+192+2]&bit4
#define DR1CT_ChargContCtrlState_B1                  g_dataBuffer_Display[656+192+2]&bit3
#define DR1CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[656+192+2]&bit2
#define DR1CT_MainCutState_B1                        g_dataBuffer_Display[656+192+2]&bit1
#define DR1CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[656+192+2]&bit0
#define DR1CT_SMCChopCmd_B1                          g_dataBuffer_Display[656+192+2]&bit15
#define DR1CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[656+192+2]&bit14
#define DR1CT_WheelIdle_B1                           g_dataBuffer_Display[656+192+2]&bit12
#define DR1CT_VVVFCutOffState_B1                     g_dataBuffer_Display[656+192+2]&bit10
#define DR1CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[656+192+2]&bit8

#define DR1CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[656+192+3]&bit7
#define DR1CT_BrakeRsFanState_B1                     g_dataBuffer_Display[656+192+3]&bit6
#define DR1CT_BackState_B1                           g_dataBuffer_Display[656+192+3]&bit3
#define DR1CT_ForwardState_B1                        g_dataBuffer_Display[656+192+3]&bit2
#define DR1CT_BrakeState_B1                          g_dataBuffer_Display[656+192+3]&bit1
#define DR1CT_TractionState_B1                       g_dataBuffer_Display[656+192+3]&bit0
#define DR1CT_PHWorkLineState_B1                     g_dataBuffer_Display[656+192+3]&bit14
#define DR1CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[656+192+3]&bit13
#define DR1CT_MushroomState_B1                       g_dataBuffer_Display[656+192+3]&bit12
#define DR1CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[656+192+3]&bit11
#define DR1CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[656+192+3]&bit10
#define DR1CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[656+192+3]&bit9
#define DR1CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[656+192+3]&bit8

#define DR1CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[656+192+4]&bit7
#define DR1CT_LineCmdTractionState_B1                g_dataBuffer_Display[656+192+4]&bit6
#define DR1CT_LineCmdBackState_B1                    g_dataBuffer_Display[656+192+4]&bit5
#define DR1CT_LineCmdForwardState_B1                 g_dataBuffer_Display[656+192+4]&bit4
#define DR1CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[656+192+4]&bit3
#define DR1CT_NetCmdTractionState_B1                 g_dataBuffer_Display[656+192+4]&bit2
#define DR1CT_NetCmdBackState_B1                     g_dataBuffer_Display[656+192+4]&bit1
#define DR1CT_NetCmdForwardState_B1                  g_dataBuffer_Display[656+192+4]&bit0
#define DR1CT_LineTracEnableState_B1                 g_dataBuffer_Display[656+192+4]&bit14
#define DR1CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[656+192+4]&bit13
#define DR1CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[656+192+4]&bit12
#define DR1CT_LineRestState_B1                       g_dataBuffer_Display[656+192+4]&bit8

#define DR1CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[656+192+5])
#define DR1CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[656+192+6])
#define DR1CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[656+192+7])
#define DR1CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[656+192+8])
#define DR1CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[656+192+9])
#define DR1CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[656+192+10])
#define DR1CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[656+192+11])
#define DR1CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[656+192+12])
#define DR1CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[656+192+13])
#define DR1CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[656+192+14])


//0x611
#define DR1CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[672+192])
#define DR1CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+1])
#define DR1CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+2])
#define DR1CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+3])
#define DR1CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[672+192+4])
#define DR1CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+5])
#define DR1CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+6])
#define DR1CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+7])
#define DR1CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[672+192+8])
#define DR1CT_SMCVersion_U16                          Change_BigEen(g_dataBuffer_Display[672+192+14])
#define DR1CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[672+192+15])

//0x612


//0x620
#define DR2CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[704+192])
#define DR2CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[704+192+1])

#define DR2CT_ShortContCtrlState_B1                  g_dataBuffer_Display[704+192+2]&bit5
#define DR2CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[704+192+2]&bit4
#define DR2CT_ChargContCtrlState_B1                  g_dataBuffer_Display[704+192+2]&bit3
#define DR2CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[704+192+2]&bit2
#define DR2CT_MainCutState_B1                        g_dataBuffer_Display[704+192+2]&bit1
#define DR2CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[704+192+2]&bit0
#define DR2CT_SMCChopCmd_B1                          g_dataBuffer_Display[704+192+2]&bit15
#define DR2CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[704+192+2]&bit14
#define DR2CT_WheelIdle_B1                           g_dataBuffer_Display[704+192+2]&bit12
#define DR2CT_VVVFCutOffState_B1                     g_dataBuffer_Display[704+192+2]&bit10
#define DR2CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[704+192+2]&bit8

#define DR2CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[704+192+3]&bit7
#define DR2CT_BrakeRsFanState_B1                     g_dataBuffer_Display[704+192+3]&bit6
#define DR2CT_BackState_B1                           g_dataBuffer_Display[704+192+3]&bit3
#define DR2CT_ForwardState_B1                        g_dataBuffer_Display[704+192+3]&bit2
#define DR2CT_BrakeState_B1                          g_dataBuffer_Display[704+192+3]&bit1
#define DR2CT_TractionState_B1                       g_dataBuffer_Display[704+192+3]&bit0
#define DR2CT_PHWorkLineState_B1                     g_dataBuffer_Display[704+192+3]&bit14
#define DR2CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[704+192+3]&bit13
#define DR2CT_MushroomState_B1                       g_dataBuffer_Display[704+192+3]&bit12
#define DR2CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[704+192+3]&bit11
#define DR2CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[704+192+3]&bit10
#define DR2CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[704+192+3]&bit9
#define DR2CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[704+192+3]&bit8

#define DR2CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[704+192+4]&bit7
#define DR2CT_LineCmdTractionState_B1                g_dataBuffer_Display[704+192+4]&bit6
#define DR2CT_LineCmdBackState_B1                    g_dataBuffer_Display[704+192+4]&bit5
#define DR2CT_LineCmdForwardState_B1                 g_dataBuffer_Display[704+192+4]&bit4
#define DR2CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[704+192+4]&bit3
#define DR2CT_NetCmdTractionState_B1                 g_dataBuffer_Display[704+192+4]&bit2
#define DR2CT_NetCmdBackState_B1                     g_dataBuffer_Display[704+192+4]&bit1
#define DR2CT_NetCmdForwardState_B1                  g_dataBuffer_Display[704+192+4]&bit0
#define DR2CT_LineTracEnableState_B1                 g_dataBuffer_Display[704+192+4]&bit14
#define DR2CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[704+192+4]&bit13
#define DR2CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[704+192+4]&bit12
#define DR2CT_LineRestState_B1                       g_dataBuffer_Display[704+192+4]&bit8

#define DR2CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[704+192+5])
#define DR2CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[704+192+6])
#define DR2CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[704+192+7])
#define DR2CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[704+192+8])
#define DR2CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[704+192+9])
#define DR2CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[704+192+10])
#define DR2CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[704+192+11])
#define DR2CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[704+192+12])
#define DR2CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[704+192+13])
#define DR2CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[704+192+14])


//0x621
#define DR2CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[720+192])
#define DR2CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+1])
#define DR2CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+2])
#define DR2CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+3])
#define DR2CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[720+192+4])
#define DR2CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+5])
#define DR2CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+6])
#define DR2CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+7])
#define DR2CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[720+192+8])
#define DR2CT_SMCVersion_U16                          Change_BigEen(g_dataBuffer_Display[720+192+14])
#define DR2CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[720+192+15])

//0x622

//0x630
#define DR3CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[752+192])
#define DR3CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[752+192+1])

#define DR3CT_ShortContCtrlState_B1                  g_dataBuffer_Display[752+192+2]&bit5
#define DR3CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[752+192+2]&bit4
#define DR3CT_ChargContCtrlState_B1                  g_dataBuffer_Display[752+192+2]&bit3
#define DR3CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[752+192+2]&bit2
#define DR3CT_MainCutState_B1                        g_dataBuffer_Display[752+192+2]&bit1
#define DR3CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[752+192+2]&bit0
#define DR3CT_SMCChopCmd_B1                          g_dataBuffer_Display[752+192+2]&bit15
#define DR3CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[752+192+2]&bit14
#define DR3CT_WheelIdle_B1                           g_dataBuffer_Display[752+192+2]&bit12
#define DR3CT_VVVFCutOffState_B1                     g_dataBuffer_Display[752+192+2]&bit10
#define DR3CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[752+192+2]&bit8

#define DR3CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[752+192+3]&bit7
#define DR3CT_BrakeRsFanState_B1                     g_dataBuffer_Display[752+192+3]&bit6
#define DR3CT_BackState_B1                           g_dataBuffer_Display[752+192+3]&bit3
#define DR3CT_ForwardState_B1                        g_dataBuffer_Display[752+192+3]&bit2
#define DR3CT_BrakeState_B1                          g_dataBuffer_Display[752+192+3]&bit1
#define DR3CT_TractionState_B1                       g_dataBuffer_Display[752+192+3]&bit0
#define DR3CT_PHWorkLineState_B1                     g_dataBuffer_Display[752+192+3]&bit14
#define DR3CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[752+192+3]&bit13
#define DR3CT_MushroomState_B1                       g_dataBuffer_Display[752+192+3]&bit12
#define DR3CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[752+192+3]&bit11
#define DR3CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[752+192+3]&bit10
#define DR3CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[752+192+3]&bit9
#define DR3CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[752+192+3]&bit8

#define DR3CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[752+192+4]&bit7
#define DR3CT_LineCmdTractionState_B1                g_dataBuffer_Display[752+192+4]&bit6
#define DR3CT_LineCmdBackState_B1                    g_dataBuffer_Display[752+192+4]&bit5
#define DR3CT_LineCmdForwardState_B1                 g_dataBuffer_Display[752+192+4]&bit4
#define DR3CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[752+192+4]&bit3
#define DR3CT_NetCmdTractionState_B1                 g_dataBuffer_Display[752+192+4]&bit2
#define DR3CT_NetCmdBackState_B1                     g_dataBuffer_Display[752+192+4]&bit1
#define DR3CT_NetCmdForwardState_B1                  g_dataBuffer_Display[752+192+4]&bit0
#define DR3CT_LineTracEnableState_B1                 g_dataBuffer_Display[752+192+4]&bit14
#define DR3CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[752+192+4]&bit13
#define DR3CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[752+192+4]&bit12
#define DR3CT_LineRestState_B1                       g_dataBuffer_Display[752+192+4]&bit8

#define DR3CT_SMCSetMCCForce_U16                      Change_BigEen(g_dataBuffer_Display[752+192+5])
#define DR3CT_RealTracOrBrakeForce_U16                Change_BigEen(g_dataBuffer_Display[752+192+6])
#define DR3CT_ElectricBrakeForce_U16                  Change_BigEen(g_dataBuffer_Display[752+192+7])
#define DR3CT_ChopOpenTimes_U16                       Change_BigEen(g_dataBuffer_Display[752+192+8])
#define DR3CT_IntermediateVoltage_U16                 Change_BigEen(g_dataBuffer_Display[752+192+9])
#define DR3CT_IntermediateCurrent_U16                  (int16_t)Change_BigEen(g_dataBuffer_Display[752+192+10])
#define DR3CT_LineVoltage_U16                         Change_BigEen(g_dataBuffer_Display[752+192+11])
#define DR3CT_InverseCurrent_U16                      Change_BigEen(g_dataBuffer_Display[752+192+12])
#define DR3CT_Ichop1_U16                              Change_BigEen(g_dataBuffer_Display[752+192+13])
#define DR3CT_Ichop2_U16                              Change_BigEen(g_dataBuffer_Display[752+192+14])


//0x631
#define DR3CT_MotorVelocity_U16                       Change_BigEen(g_dataBuffer_Display[768+192])
#define DR3CT_Motor1Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+1])
#define DR3CT_Motor2Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+2])
#define DR3CT_Motor3Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+3])
#define DR3CT_Motor4Velocity_U16                      Change_BigEen(g_dataBuffer_Display[768+192+4])
#define DR3CT_Motor1Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+5])
#define DR3CT_Motor2Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+6])
#define DR3CT_Motor3Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+7])
#define DR3CT_Motor4Temp_U16                           (int16_t)Change_BigEen(g_dataBuffer_Display[768+192+8])
#define DR3CT_SMCVersion_U16                          Change_BigEen(g_dataBuffer_Display[768+192+14])
#define DR3CT_MCUVersion_U16                          Change_BigEen(g_dataBuffer_Display[768+192+15])

//0x632


//0x640
#define DR4CT_SMCLifeSign_U16                        Change_BigEen(g_dataBuffer_Display[800+192])
#define DR4CT_MCULifeSign_U16                        Change_BigEen(g_dataBuffer_Display[800+192+1])

#define DR4CT_ShortContCtrlState_B1                  g_dataBuffer_Display[800+192+2]&bit5
#define DR4CT_ShortContCtrlCmd_B1                    g_dataBuffer_Display[800+192+2]&bit4
#define DR4CT_ChargContCtrlState_B1                  g_dataBuffer_Display[800+192+2]&bit3
#define DR4CT_ChargContactorCtrlCmd_B1               g_dataBuffer_Display[800+192+2]&bit2
#define DR4CT_MainCutState_B1                        g_dataBuffer_Display[800+192+2]&bit1
#define DR4CT_DCUMainCutEnable_B1                    g_dataBuffer_Display[800+192+2]&bit0
#define DR4CT_SMCChopCmd_B1                          g_dataBuffer_Display[800+192+2]&bit15
#define DR4CT_OverVoltageChopEnable_B1               g_dataBuffer_Display[800+192+2]&bit14
#define DR4CT_WheelIdle_B1                           g_dataBuffer_Display[800+192+2]&bit12
#define DR4CT_VVVFCutOffState_B1                     g_dataBuffer_Display[800+192+2]&bit10
#define DR4CT_MCCStartOrStopCmd_B1                   g_dataBuffer_Display[800+192+2]&bit8

#define DR4CT_BrakeRsFanStartCmd_B1                  g_dataBuffer_Display[800+192+3]&bit7
#define DR4CT_BrakeRsFanState_B1                     g_dataBuffer_Display[800+192+3]&bit6
#define DR4CT_BackState_B1                           g_dataBuffer_Display[800+192+3]&bit3
#define DR4CT_ForwardState_B1                        g_dataBuffer_Display[800+192+3]&bit2
#define DR4CT_BrakeState_B1                          g_dataBuffer_Display[800+192+3]&bit1
#define DR4CT_TractionState_B1                       g_dataBuffer_Display[800+192+3]&bit0
#define DR4CT_PHWorkLineState_B1                     g_dataBuffer_Display[800+192+3]&bit14
#define DR4CT_VVVFLineCutOffState_B1                 g_dataBuffer_Display[800+192+3]&bit13
#define DR4CT_MushroomState_B1                       g_dataBuffer_Display[800+192+3]&bit12
#define DR4CT_ElectricBrakeSlide_B1                  g_dataBuffer_Display[800+192+3]&bit11
#define DR4CT_ElectricBrakeDecay_B1                  g_dataBuffer_Display[800+192+3]&bit10
#define DR4CT_ElectricBrakeIsValid_B1                g_dataBuffer_Display[800+192+3]&bit9
#define DR4CT_ElectricBrakeOk_B1                     g_dataBuffer_Display[800+192+3]&bit8

#define DR4CT_LineCmdBrakeState_B1                   g_dataBuffer_Display[800+192+4]&bit7
#define DR4CT_LineCmdTractionState_B1                g_dataBuffer_Display[800+192+4]&bit6
#define DR4CT_LineCmdBackState_B1                    g_dataBuffer_Display[800+192+4]&bit5
#define DR4CT_LineCmdForwardState_B1                 g_dataBuffer_Display[800+192+4]&bit4
#define DR4CT_NetCmdBrakeState_B1                    g_dataBuffer_Display[800+192+4]&bit3
#define DR4CT_NetCmdTractionState_B1                 g_dataBuffer_Display[800+192+4]&bit2
#define DR4CT_NetCmdBackState_B1                     g_dataBuffer_Display[800+192+4]&bit1
#define DR4CT_NetCmdForwardState_B1                  g_dataBuffer_Display[800+192+4]&bit0
#define DR4CT_LineTracEnableState_B1                 g_dataBuffer_Display[800+192+4]&bit14
#define DR4CT_LineEmgcyBrakeState_B1                 g_dataBuffer_Display[800+192+4]&bit13
#define DR4CT_LineEmgcyTractionState_B1              g_dataBuffer_Display[800+192+4]&bit12
#define DR4CT_LineRestState_B1                       g_dataBuffer_Display[800+192+4]&bit8

#define DR4CT_SMCSetMCCForce_U16                     Change_BigEen(g_dataBuffer_Display[800+192+5])
#define DR4CT_RealTracOrBrakeForce_U16               Change_BigEen(g_dataBuffer_Display[800+192+6])
#define DR4CT_ElectricBrakeForce_U16                 Change_BigEen(g_dataBuffer_Display[800+192+7])
#define DR4CT_ChopOpenTimes_U16                      Change_BigEen(g_dataBuffer_Display[800+192+8])
#define DR4CT_IntermediateVoltage_U16                Change_BigEen(g_dataBuffer_Display[800+192+9])
#define DR4CT_IntermediateCurrent_U16                 (int16_t)Change_BigEen(g_dataBuffer_Display[800+192+10])
#define DR4CT_LineVoltage_U16                        Change_BigEen(g_dataBuffer_Display[800+192+11])
#define DR4CT_InverseCurrent_U16                     Change_BigEen(g_dataBuffer_Display[800+192+12])
#define DR4CT_Ichop1_U16                             Change_BigEen(g_dataBuffer_Display[800+192+13])
#define DR4CT_Ichop2_U16                             Change_BigEen(g_dataBuffer_Display[800+192+14])


//0x641
#define DR4CT_MotorVelocity_U16                      Change_BigEen(g_dataBuffer_Display[816+192])
#define DR4CT_Motor1Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+1])
#define DR4CT_Motor2Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+2])
#define DR4CT_Motor3Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+3])
#define DR4CT_Motor4Velocity_U16                     Change_BigEen(g_dataBuffer_Display[816+192+4])
#define DR4CT_Motor1Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+5])
#define DR4CT_Motor2Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+6])
#define DR4CT_Motor3Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+7])
#define DR4CT_Motor4Temp_U16                          (int16_t)Change_BigEen(g_dataBuffer_Display[816+192+8])
#define DR4CT_SMCVersion_U16                         Change_BigEen(g_dataBuffer_Display[816+192+14])
#define DR4CT_MCUVersion_U16                         Change_BigEen(g_dataBuffer_Display[816+192+15])

//0x642



//0x710
#define SIV1CT_SIVDSPLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[848+192])
#define SIV1CT_SIVDSPVersion_U16                     Change_BigEen(g_dataBuffer_Display[848+192+1])
#define SIV1CT_SIVPPCLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[848+192+2])
#define SIV1CT_SIVPPCVersion_U16                     Change_BigEen(g_dataBuffer_Display[848+192+3])
#define SIV1CT_SIVChargeLifeSign_U16                 Change_BigEen(g_dataBuffer_Display[848+192+4])
#define SIV1CT_SIVChargeVersion_U16                  Change_BigEen(g_dataBuffer_Display[848+192+5])

#define SIV1CT_REST_B1                               g_dataBuffer_Display[848+192+9]&bit15
#define SIV1CT_YJST_B1                               g_dataBuffer_Display[848+192+9]&bit14
#define SIV1CT_FANS_B1                               g_dataBuffer_Display[848+192+9]&bit13
#define SIV1CT_KMAS_B1                               g_dataBuffer_Display[848+192+9]&bit12
#define SIV1CT_A10H_B1                               g_dataBuffer_Display[848+192+9]&bit11
#define SIV1CT_KM2State_B1                           g_dataBuffer_Display[848+192+9]&bit10
#define SIV1CT_KM1State_B1                           g_dataBuffer_Display[848+192+9]&bit9
#define SIV1CT_StartSiv_B1                           g_dataBuffer_Display[848+192+9]&bit8

#define SIV1CT_KM11_B1                               g_dataBuffer_Display[848+192+11]&bit14
#define SIV1CT_DC110VOk_B1                           g_dataBuffer_Display[848+192+11]&bit12
#define SIV1CT_ChargeOverTemp_B1                     g_dataBuffer_Display[848+192+11]&bit10
#define SIV1CT_QF11_B1                               g_dataBuffer_Display[848+192+11]&bit8

#define SIV1CT_ACU_OK_B1                             g_dataBuffer_Display[848+192+12]&bit12
#define SIV1CT_KMA_ON_B1                             g_dataBuffer_Display[848+192+12]&bit11
#define SIV1CT_KM2_ON_B1                             g_dataBuffer_Display[848+192+12]&bit9
#define SIV1CT_KM1_ON_B1                             g_dataBuffer_Display[848+192+12]&bit8

#define SIV1CT_InputVoltageUd_U16                    Change_BigEen(g_dataBuffer_Display[848+192+13])
#define SIV1CT_InputCurrentId_U16                    (int16_t)Change_BigEen(g_dataBuffer_Display[848+192+14])
#define SIV1CT_OutputVoltageUu_U16                   Change_BigEen(g_dataBuffer_Display[848+192+15])

//0x711

#define SIV1CT_InverseVoltageUu_U16                  Change_BigEen(g_dataBuffer_Display[864+192])
#define SIV1CT_InverseVoltageUv_U16                  Change_BigEen(g_dataBuffer_Display[864+192+1])
#define SIV1CT_InverseCurrentIa_U16                  Change_BigEen(g_dataBuffer_Display[864+192+2])
#define SIV1CT_InverseCurrentIc_U16                  Change_BigEen(g_dataBuffer_Display[864+192+3])
#define SIV1CT_InverseCurrentIu_U16                  Change_BigEen(g_dataBuffer_Display[864+192+4])
#define SIV1CT_InverseCurrentIv_U16                  Change_BigEen(g_dataBuffer_Display[864+192+5])
#define SIV1CT_InverseCurrentIw_U16                  Change_BigEen(g_dataBuffer_Display[864+192+6])
#define SIV1CT_InverseFrequency_U16                  Change_BigEen(g_dataBuffer_Display[864+192+7])
#define SIV1CT_ChargeDirectCurrent_U16               Change_BigEen(g_dataBuffer_Display[864+192+8])
#define SIV1CT_ChargeOutVoltage_U16                  Change_BigEen(g_dataBuffer_Display[864+192+9])
#define SIV1CT_ChargeOutCurrent_U16                  Change_BigEen(g_dataBuffer_Display[864+192+10])
#define SIV1CT_ChargeCurrent_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[864+192+11])
#define SIV1CT_BatteryTemp_U16                       (int16_t)Change_BigEen(g_dataBuffer_Display[864+192+12])




//0x720
#define SIV2CT_SIVDSPLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[880+192])
#define SIV2CT_SIVDSPVersion_U16                     Change_BigEen(g_dataBuffer_Display[880+192+1])
#define SIV2CT_SIVPPCLifeSign_U16                    Change_BigEen(g_dataBuffer_Display[880+192+2])
#define SIV2CT_SIVPPCVersion_U16                     Change_BigEen(g_dataBuffer_Display[880+192+3])
#define SIV2CT_SIVChargeLifeSign_U16                 Change_BigEen(g_dataBuffer_Display[880+192+4])
#define SIV2CT_SIVChargeVersion_U16                  Change_BigEen(g_dataBuffer_Display[880+192+5])

#define SIV2CT_REST_B1                               g_dataBuffer_Display[880+192+9]&bit15
#define SIV2CT_YJST_B1                               g_dataBuffer_Display[880+192+9]&bit14
#define SIV2CT_FANS_B1                               g_dataBuffer_Display[880+192+9]&bit13
#define SIV2CT_KMAS_B1                               g_dataBuffer_Display[880+192+9]&bit12
#define SIV2CT_A10H_B1                               g_dataBuffer_Display[880+192+9]&bit11
#define SIV2CT_KM2State_B1                           g_dataBuffer_Display[880+192+9]&bit10
#define SIV2CT_KM1State_B1                           g_dataBuffer_Display[880+192+9]&bit9
#define SIV2CT_StartSiv_B1                           g_dataBuffer_Display[880+192+9]&bit8

#define SIV2CT_KM11_B1                               g_dataBuffer_Display[880+192+11]&bit14
#define SIV2CT_DC110VOk_B1                           g_dataBuffer_Display[880+192+11]&bit12
#define SIV2CT_ChargeOverTemp_B1                     g_dataBuffer_Display[880+192+11]&bit10
#define SIV2CT_QF11_B1                               g_dataBuffer_Display[880+192+11]&bit8

#define SIV2CT_ACU_OK_B1                             g_dataBuffer_Display[880+192+12]&bit12
#define SIV2CT_KMA_ON_B1                             g_dataBuffer_Display[880+192+12]&bit11
#define SIV2CT_KM2_ON_B1                             g_dataBuffer_Display[880+192+12]&bit9
#define SIV2CT_KM1_ON_B1                             g_dataBuffer_Display[880+192+12]&bit8

#define SIV2CT_InputVoltageUd_U16                    Change_BigEen(g_dataBuffer_Display[880+192+13])
#define SIV2CT_InputCurrentId_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[880+192+14])
#define SIV2CT_OutputVoltageUu_U16                   Change_BigEen(g_dataBuffer_Display[880+192+15])

//0x721

#define SIV2CT_InverseVoltageUu_U16                  Change_BigEen(g_dataBuffer_Display[896+192])
#define SIV2CT_InverseVoltageUv_U16                  Change_BigEen(g_dataBuffer_Display[896+192+1])
#define SIV2CT_InverseCurrentIa_U16                  Change_BigEen(g_dataBuffer_Display[896+192+2])
#define SIV2CT_InverseCurrentIc_U16                  Change_BigEen(g_dataBuffer_Display[896+192+3])
#define SIV2CT_InverseCurrentIu_U16                  Change_BigEen(g_dataBuffer_Display[896+192+4])
#define SIV2CT_InverseCurrentIv_U16                  Change_BigEen(g_dataBuffer_Display[896+192+5])
#define SIV2CT_InverseCurrentIw_U16                  Change_BigEen(g_dataBuffer_Display[896+192+6])
#define SIV2CT_InverseFrequency_U16                  Change_BigEen(g_dataBuffer_Display[896+192+7])
#define SIV2CT_ChargeDirectCurrent_U16               Change_BigEen(g_dataBuffer_Display[896+192+8])
#define SIV2CT_ChargeOutVoltage_U16                  Change_BigEen(g_dataBuffer_Display[896+192+9])
#define SIV2CT_ChargeOutCurrent_U16                  Change_BigEen(g_dataBuffer_Display[896+192+10])
#define SIV2CT_ChargeCurrent_U16                     (int16_t)Change_BigEen(g_dataBuffer_Display[896+192+11])
#define SIV2CT_BatteryTemp_U16                       (int16_t)Change_BigEen(g_dataBuffer_Display[896+192+12])


//0x810

#define EDR1CT_LifeSign_U16                         g_dataBuffer_Display[944+160]
#define EDR1CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[944+160+1]&bit7
#define EDR1CT_Door1IsOpen_B1                       g_dataBuffer_Display[944+160+1]&bit6
#define EDR1CT_Door1IsClosed_B1                     g_dataBuffer_Display[944+160+1]&bit5
#define EDR1CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+1]&bit4
#define EDR1CT_Door1IsIsolated_B1                   g_dataBuffer_Display[944+160+1]&bit3
#define EDR1CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+1]&bit2
#define EDR1CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[944+160+1]&bit1
#define EDR1CT_Door1SetOK_B1                        g_dataBuffer_Display[944+160+1]&bit0

#define EDR1CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[944+160+2]&bit7
#define EDR1CT_Door2IsOpen_B1                       g_dataBuffer_Display[944+160+2]&bit6
#define EDR1CT_Door2IsClosed_B1                     g_dataBuffer_Display[944+160+2]&bit5
#define EDR1CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+2]&bit4
#define EDR1CT_Door2IsIsolated_B1                   g_dataBuffer_Display[944+160+2]&bit3
#define EDR1CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+2]&bit2
#define EDR1CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[944+160+2]&bit1
#define EDR1CT_Door2SetOK_B1                        g_dataBuffer_Display[944+160+2]&bit0

#define EDR1CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[944+160+3]&bit7
#define EDR1CT_Door3IsOpen_B1                       g_dataBuffer_Display[944+160+3]&bit6
#define EDR1CT_Door3IsClosed_B1                     g_dataBuffer_Display[944+160+3]&bit5
#define EDR1CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+3]&bit4
#define EDR1CT_Door3IsIsolated_B1                   g_dataBuffer_Display[944+160+3]&bit3
#define EDR1CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+3]&bit2
#define EDR1CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[944+160+3]&bit1
#define EDR1CT_Door3SetOK_B1                        g_dataBuffer_Display[944+160+3]&bit0

#define EDR1CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[944+160+4]&bit7
#define EDR1CT_Door4IsOpen_B1                       g_dataBuffer_Display[944+160+4]&bit6
#define EDR1CT_Door4IsClosed_B1                     g_dataBuffer_Display[944+160+4]&bit5
#define EDR1CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+4]&bit4
#define EDR1CT_Door4IsIsolated_B1                   g_dataBuffer_Display[944+160+4]&bit3
#define EDR1CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+4]&bit2
#define EDR1CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[944+160+4]&bit1
#define EDR1CT_Door4SetOK_B1                        g_dataBuffer_Display[944+160+4]&bit0


#define EDR1CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[944+160+5]&bit7
#define EDR1CT_Door5IsOpen_B1                       g_dataBuffer_Display[944+160+5]&bit6
#define EDR1CT_Door5IsClosed_B1                     g_dataBuffer_Display[944+160+5]&bit5
#define EDR1CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+5]&bit4
#define EDR1CT_Door5IsIsolated_B1                   g_dataBuffer_Display[944+160+5]&bit3
#define EDR1CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+5]&bit2
#define EDR1CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[944+160+5]&bit1
#define EDR1CT_Door5SetOK_B1                        g_dataBuffer_Display[944+160+5]&bit0

#define EDR1CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[944+160+6]&bit7
#define EDR1CT_Door6IsOpen_B1                       g_dataBuffer_Display[944+160+6]&bit6
#define EDR1CT_Door6IsClosed_B1                     g_dataBuffer_Display[944+160+6]&bit5
#define EDR1CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+6]&bit4
#define EDR1CT_Door6IsIsolated_B1                   g_dataBuffer_Display[944+160+6]&bit3
#define EDR1CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+6]&bit2
#define EDR1CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[944+160+6]&bit1
#define EDR1CT_Door6SetOK_B1                        g_dataBuffer_Display[944+160+6]&bit0

#define EDR1CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[944+160+7]&bit7
#define EDR1CT_Door7IsOpen_B1                       g_dataBuffer_Display[944+160+7]&bit6
#define EDR1CT_Door7IsClosed_B1                     g_dataBuffer_Display[944+160+7]&bit5
#define EDR1CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+7]&bit4
#define EDR1CT_Door7IsIsolated_B1                   g_dataBuffer_Display[944+160+7]&bit3
#define EDR1CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+7]&bit2
#define EDR1CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[944+160+7]&bit1
#define EDR1CT_Door7SetOK_B1                        g_dataBuffer_Display[944+160+7]&bit0

#define EDR1CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[944+160+8]&bit7
#define EDR1CT_Door8IsOpen_B1                       g_dataBuffer_Display[944+160+8]&bit6
#define EDR1CT_Door8IsClosed_B1                     g_dataBuffer_Display[944+160+8]&bit5
#define EDR1CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[944+160+8]&bit4
#define EDR1CT_Door8IsIsolated_B1                   g_dataBuffer_Display[944+160+8]&bit3
#define EDR1CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[944+160+8]&bit2
#define EDR1CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[944+160+8]&bit1
#define EDR1CT_Door8SetOK_B1                        g_dataBuffer_Display[944+160+8]&bit0

#define EDR1CT_Edcu2Version_U8                      g_dataBuffer_Display[944+160+13]%256
#define EDR1CT_Edcu1Version_U8                      g_dataBuffer_Display[944+160+13]/256
#define EDR1CT_EdcuState_U8                         g_dataBuffer_Display[944+160+14]%256

//0x811

#define EDR1CT_Door1IsValid_B1                       g_dataBuffer_Display[960+160]&bit7
#define EDR1CT_Door2IsValid_B1                       g_dataBuffer_Display[960+160]&bit6
#define EDR1CT_Door3IsValid_B1                       g_dataBuffer_Display[960+160]&bit5
#define EDR1CT_Door4IsValid_B1                       g_dataBuffer_Display[960+160]&bit4
#define EDR1CT_Door5IsValid_B1                       g_dataBuffer_Display[960+160]&bit3
#define EDR1CT_Door6IsValid_B1                       g_dataBuffer_Display[960+160]&bit2
#define EDR1CT_Door7IsValid_B1                       g_dataBuffer_Display[960+160]&bit1
#define EDR1CT_Door8IsValid_B1                       g_dataBuffer_Display[960+160]&bit0

#define EDR1CT_Door1Fault_U16                        g_dataBuffer_Display[960+160+1]
#define EDR1CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+1]&bit7
#define EDR1CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[960+160+1]&bit6
#define EDR1CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[960+160+1]&bit5
#define EDR1CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[960+160+1]&bit4
#define EDR1CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+1]&bit3
#define EDR1CT_Door1EncoderFault_B1                  g_dataBuffer_Display[960+160+1]&bit2
#define EDR1CT_Door1OperationOverTime_B1             g_dataBuffer_Display[960+160+1]&bit1
#define EDR1CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[960+160+1]&bit0
#define EDR1CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[960+160+1]&bit15

#define EDR1CT_Door2Fault_U16                        g_dataBuffer_Display[960+160+2]
#define EDR1CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+2]&bit7
#define EDR1CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[960+160+2]&bit6
#define EDR1CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[960+160+2]&bit5
#define EDR1CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[960+160+2]&bit4
#define EDR1CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+2]&bit3
#define EDR1CT_Door2EncoderFault_B1                  g_dataBuffer_Display[960+160+2]&bit2
#define EDR1CT_Door2OperationOverTime_B1             g_dataBuffer_Display[960+160+2]&bit1
#define EDR1CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[960+160+2]&bit0
#define EDR1CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[960+160+2]&bit15

#define EDR1CT_Door3Fault_U16                        g_dataBuffer_Display[960+160+3]
#define EDR1CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+3]&bit7
#define EDR1CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[960+160+3]&bit6
#define EDR1CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[960+160+3]&bit5
#define EDR1CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[960+160+3]&bit4
#define EDR1CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+3]&bit3
#define EDR1CT_Door3EncoderFault_B1                  g_dataBuffer_Display[960+160+3]&bit2
#define EDR1CT_Door3OperationOverTime_B1             g_dataBuffer_Display[960+160+3]&bit1
#define EDR1CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[960+160+3]&bit0
#define EDR1CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[960+160+3]&bit15

#define EDR1CT_Door4Fault_U16                        g_dataBuffer_Display[960+160+4]
#define EDR1CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+4]&bit7
#define EDR1CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[960+160+4]&bit6
#define EDR1CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[960+160+4]&bit5
#define EDR1CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[960+160+4]&bit4
#define EDR1CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+4]&bit3
#define EDR1CT_Door4EncoderFault_B1                  g_dataBuffer_Display[960+160+4]&bit2
#define EDR1CT_Door4OperationOverTime_B1             g_dataBuffer_Display[960+160+4]&bit1
#define EDR1CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[960+160+4]&bit0
#define EDR1CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[960+160+4]&bit15

#define EDR1CT_Door5Fault_U16                        g_dataBuffer_Display[960+160+5]
#define EDR1CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+5]&bit7
#define EDR1CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[960+160+5]&bit6
#define EDR1CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[960+160+5]&bit5
#define EDR1CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[960+160+5]&bit4
#define EDR1CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+5]&bit3
#define EDR1CT_Door5EncoderFault_B1                  g_dataBuffer_Display[960+160+5]&bit2
#define EDR1CT_Door5OperationOverTime_B1             g_dataBuffer_Display[960+160+5]&bit1
#define EDR1CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[960+160+5]&bit0
#define EDR1CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[960+160+5]&bit15

#define EDR1CT_Door6Fault_U16                        g_dataBuffer_Display[960+160+6]
#define EDR1CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+6]&bit7
#define EDR1CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[960+160+6]&bit6
#define EDR1CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[960+160+6]&bit5
#define EDR1CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[960+160+6]&bit4
#define EDR1CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+6]&bit3
#define EDR1CT_Door6EncoderFault_B1                  g_dataBuffer_Display[960+160+6]&bit2
#define EDR1CT_Door6OperationOverTime_B1             g_dataBuffer_Display[960+160+6]&bit1
#define EDR1CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[960+160+6]&bit0
#define EDR1CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[960+160+6]&bit15

#define EDR1CT_Door7Fault_U16                        g_dataBuffer_Display[960+160+7]
#define EDR1CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+7]&bit7
#define EDR1CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[960+160+7]&bit6
#define EDR1CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[960+160+7]&bit5
#define EDR1CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[960+160+7]&bit4
#define EDR1CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+7]&bit3
#define EDR1CT_Door7EncoderFault_B1                  g_dataBuffer_Display[960+160+7]&bit2
#define EDR1CT_Door7OperationOverTime_B1             g_dataBuffer_Display[960+160+7]&bit1
#define EDR1CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[960+160+7]&bit0
#define EDR1CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[960+160+7]&bit15

#define EDR1CT_Door8Fault_U16                        g_dataBuffer_Display[960+160+8]
#define EDR1CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[960+160+8]&bit7
#define EDR1CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[960+160+8]&bit6
#define EDR1CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[960+160+8]&bit5
#define EDR1CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[960+160+8]&bit4
#define EDR1CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[960+160+8]&bit3
#define EDR1CT_Door8EncoderFault_B1                  g_dataBuffer_Display[960+160+8]&bit2
#define EDR1CT_Door8OperationOverTime_B1             g_dataBuffer_Display[960+160+8]&bit1
#define EDR1CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[960+160+8]&bit0
#define EDR1CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[960+160+8]&bit15

//0x820

#define EDR2CT_LifeSign_U16                         g_dataBuffer_Display[976+160]
#define EDR2CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[976+160+1]&bit7
#define EDR2CT_Door1IsOpen_B1                       g_dataBuffer_Display[976+160+1]&bit6
#define EDR2CT_Door1IsClosed_B1                     g_dataBuffer_Display[976+160+1]&bit5
#define EDR2CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+1]&bit4
#define EDR2CT_Door1IsIsolated_B1                   g_dataBuffer_Display[976+160+1]&bit3
#define EDR2CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+1]&bit2
#define EDR2CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[976+160+1]&bit1

#define EDR2CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[976+160+2]&bit7
#define EDR2CT_Door2IsOpen_B1                       g_dataBuffer_Display[976+160+2]&bit6
#define EDR2CT_Door2IsClosed_B1                     g_dataBuffer_Display[976+160+2]&bit5
#define EDR2CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+2]&bit4
#define EDR2CT_Door2IsIsolated_B1                   g_dataBuffer_Display[976+160+2]&bit3
#define EDR2CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+2]&bit2
#define EDR2CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[976+160+2]&bit1

#define EDR2CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[976+160+3]&bit7
#define EDR2CT_Door3IsOpen_B1                       g_dataBuffer_Display[976+160+3]&bit6
#define EDR2CT_Door3IsClosed_B1                     g_dataBuffer_Display[976+160+3]&bit5
#define EDR2CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+3]&bit4
#define EDR2CT_Door3IsIsolated_B1                   g_dataBuffer_Display[976+160+3]&bit3
#define EDR2CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+3]&bit2
#define EDR2CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[976+160+3]&bit1

#define EDR2CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[976+160+4]&bit7
#define EDR2CT_Door4IsOpen_B1                       g_dataBuffer_Display[976+160+4]&bit6
#define EDR2CT_Door4IsClosed_B1                     g_dataBuffer_Display[976+160+4]&bit5
#define EDR2CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+4]&bit4
#define EDR2CT_Door4IsIsolated_B1                   g_dataBuffer_Display[976+160+4]&bit3
#define EDR2CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+4]&bit2
#define EDR2CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[976+160+4]&bit1

#define EDR2CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[976+160+5]&bit7
#define EDR2CT_Door5IsOpen_B1                       g_dataBuffer_Display[976+160+5]&bit6
#define EDR2CT_Door5IsClosed_B1                     g_dataBuffer_Display[976+160+5]&bit5
#define EDR2CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+5]&bit4
#define EDR2CT_Door5IsIsolated_B1                   g_dataBuffer_Display[976+160+5]&bit3
#define EDR2CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+5]&bit2
#define EDR2CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[976+160+5]&bit1

#define EDR2CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[976+160+6]&bit7
#define EDR2CT_Door6IsOpen_B1                       g_dataBuffer_Display[976+160+6]&bit6
#define EDR2CT_Door6IsClosed_B1                     g_dataBuffer_Display[976+160+6]&bit5
#define EDR2CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+6]&bit4
#define EDR2CT_Door6IsIsolated_B1                   g_dataBuffer_Display[976+160+6]&bit3
#define EDR2CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+6]&bit2
#define EDR2CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[976+160+6]&bit1

#define EDR2CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[976+160+7]&bit7
#define EDR2CT_Door7IsOpen_B1                       g_dataBuffer_Display[976+160+7]&bit6
#define EDR2CT_Door7IsClosed_B1                     g_dataBuffer_Display[976+160+7]&bit5
#define EDR2CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+7]&bit4
#define EDR2CT_Door7IsIsolated_B1                   g_dataBuffer_Display[976+160+7]&bit3
#define EDR2CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+7]&bit2
#define EDR2CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[976+160+7]&bit1

#define EDR2CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[976+160+8]&bit7
#define EDR2CT_Door8IsOpen_B1                       g_dataBuffer_Display[976+160+8]&bit6
#define EDR2CT_Door8IsClosed_B1                     g_dataBuffer_Display[976+160+8]&bit5
#define EDR2CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[976+160+8]&bit4
#define EDR2CT_Door8IsIsolated_B1                   g_dataBuffer_Display[976+160+8]&bit3
#define EDR2CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[976+160+8]&bit2
#define EDR2CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[976+160+8]&bit1

#define EDR2CT_Edcu2Version_U8                      g_dataBuffer_Display[976+160+13]%256
#define EDR2CT_Edcu1Version_U8                      g_dataBuffer_Display[976+160+13]/256
#define EDR2CT_EdcuState_U8                         g_dataBuffer_Display[976+160+14]%256

//0x821

#define EDR2CT_Door1IsValid_B1                       g_dataBuffer_Display[992+160]&bit7
#define EDR2CT_Door2IsValid_B1                       g_dataBuffer_Display[992+160]&bit6
#define EDR2CT_Door3IsValid_B1                       g_dataBuffer_Display[992+160]&bit5
#define EDR2CT_Door4IsValid_B1                       g_dataBuffer_Display[992+160]&bit4
#define EDR2CT_Door5IsValid_B1                       g_dataBuffer_Display[992+160]&bit3
#define EDR2CT_Door6IsValid_B1                       g_dataBuffer_Display[992+160]&bit2
#define EDR2CT_Door7IsValid_B1                       g_dataBuffer_Display[992+160]&bit1
#define EDR2CT_Door8IsValid_B1                       g_dataBuffer_Display[992+160]&bit0

#define EDR2CT_Door1Fault_U16                        g_dataBuffer_Display[992+160+1]
#define EDR2CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+1]&bit7
#define EDR2CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[992+160+1]&bit6
#define EDR2CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[992+160+1]&bit5
#define EDR2CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[992+160+1]&bit4
#define EDR2CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+1]&bit3
#define EDR2CT_Door1EncoderFault_B1                  g_dataBuffer_Display[992+160+1]&bit2
#define EDR2CT_Door1OperationOverTime_B1             g_dataBuffer_Display[992+160+1]&bit1
#define EDR2CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[992+160+1]&bit0
#define EDR2CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[992+160+1]&bit15

#define EDR2CT_Door2Fault_U16                        g_dataBuffer_Display[992+160+2]
#define EDR2CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+2]&bit7
#define EDR2CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[992+160+2]&bit6
#define EDR2CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[992+160+2]&bit5
#define EDR2CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[992+160+2]&bit4
#define EDR2CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+2]&bit3
#define EDR2CT_Door2EncoderFault_B1                  g_dataBuffer_Display[992+160+2]&bit2
#define EDR2CT_Door2OperationOverTime_B1             g_dataBuffer_Display[992+160+2]&bit1
#define EDR2CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[992+160+2]&bit0
#define EDR2CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[992+160+2]&bit15

#define EDR2CT_Door3Fault_U16                        g_dataBuffer_Display[992+160+3]
#define EDR2CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+3]&bit7
#define EDR2CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[992+160+3]&bit6
#define EDR2CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[992+160+3]&bit5
#define EDR2CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[992+160+3]&bit4
#define EDR2CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+3]&bit3
#define EDR2CT_Door3EncoderFault_B1                  g_dataBuffer_Display[992+160+3]&bit2
#define EDR2CT_Door3OperationOverTime_B1             g_dataBuffer_Display[992+160+3]&bit1
#define EDR2CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[992+160+3]&bit0
#define EDR2CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[992+160+3]&bit15

#define EDR2CT_Door4Fault_U16                        g_dataBuffer_Display[992+160+4]
#define EDR2CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+4]&bit7
#define EDR2CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[992+160+4]&bit6
#define EDR2CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[992+160+4]&bit5
#define EDR2CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[992+160+4]&bit4
#define EDR2CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+4]&bit3
#define EDR2CT_Door4EncoderFault_B1                  g_dataBuffer_Display[992+160+4]&bit2
#define EDR2CT_Door4OperationOverTime_B1             g_dataBuffer_Display[992+160+4]&bit1
#define EDR2CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[992+160+4]&bit0
#define EDR2CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[992+160+4]&bit15

#define EDR2CT_Door5Fault_U16                        g_dataBuffer_Display[992+160+5]
#define EDR2CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+5]&bit7
#define EDR2CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[992+160+5]&bit6
#define EDR2CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[992+160+5]&bit5
#define EDR2CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[992+160+5]&bit4
#define EDR2CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+5]&bit3
#define EDR2CT_Door5EncoderFault_B1                  g_dataBuffer_Display[992+160+5]&bit2
#define EDR2CT_Door5OperationOverTime_B1             g_dataBuffer_Display[992+160+5]&bit1
#define EDR2CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[992+160+5]&bit0
#define EDR2CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[992+160+5]&bit15

#define EDR2CT_Door6Fault_U16                        g_dataBuffer_Display[992+160+6]
#define EDR2CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+6]&bit7
#define EDR2CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[992+160+6]&bit6
#define EDR2CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[992+160+6]&bit5
#define EDR2CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[992+160+6]&bit4
#define EDR2CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+6]&bit3
#define EDR2CT_Door6EncoderFault_B1                  g_dataBuffer_Display[992+160+6]&bit2
#define EDR2CT_Door6OperationOverTime_B1             g_dataBuffer_Display[992+160+6]&bit1
#define EDR2CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[992+160+6]&bit0
#define EDR2CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[992+160+6]&bit15

#define EDR2CT_Door7Fault_U16                        g_dataBuffer_Display[992+160+7]
#define EDR2CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+7]&bit7
#define EDR2CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[992+160+7]&bit6
#define EDR2CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[992+160+7]&bit5
#define EDR2CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[992+160+7]&bit4
#define EDR2CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+7]&bit3
#define EDR2CT_Door7EncoderFault_B1                  g_dataBuffer_Display[992+160+7]&bit2
#define EDR2CT_Door7OperationOverTime_B1             g_dataBuffer_Display[992+160+7]&bit1
#define EDR2CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[992+160+7]&bit0
#define EDR2CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[992+160+7]&bit15

#define EDR2CT_Door8Fault_U16                        g_dataBuffer_Display[992+160+8]
#define EDR2CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[992+160+8]&bit7
#define EDR2CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[992+160+8]&bit6
#define EDR2CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[992+160+8]&bit5
#define EDR2CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[992+160+8]&bit4
#define EDR2CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[992+160+8]&bit3
#define EDR2CT_Door8EncoderFault_B1                  g_dataBuffer_Display[992+160+8]&bit2
#define EDR2CT_Door8OperationOverTime_B1             g_dataBuffer_Display[992+160+8]&bit1
#define EDR2CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[992+160+8]&bit0
#define EDR2CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[992+160+8]&bit15

//0x830

#define EDR3CT_LifeSign_U16                         g_dataBuffer_Display[1008+160]
#define EDR3CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1008+160+1]&bit7
#define EDR3CT_Door1IsOpen_B1                       g_dataBuffer_Display[1008+160+1]&bit6
#define EDR3CT_Door1IsClosed_B1                     g_dataBuffer_Display[1008+160+1]&bit5
#define EDR3CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+1]&bit4
#define EDR3CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1008+160+1]&bit3
#define EDR3CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+1]&bit2
#define EDR3CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+1]&bit1
#define EDR3CT_Door1SetOK_B1                        g_dataBuffer_Display[1008+160+1]&bit0

#define EDR3CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1008+160+2]&bit7
#define EDR3CT_Door2IsOpen_B1                       g_dataBuffer_Display[1008+160+2]&bit6
#define EDR3CT_Door2IsClosed_B1                     g_dataBuffer_Display[1008+160+2]&bit5
#define EDR3CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+2]&bit4
#define EDR3CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1008+160+2]&bit3
#define EDR3CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+2]&bit2
#define EDR3CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+2]&bit1
#define EDR3CT_Door2SetOK_B1                        g_dataBuffer_Display[1008+160+2]&bit0

#define EDR3CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1008+160+3]&bit7
#define EDR3CT_Door3IsOpen_B1                       g_dataBuffer_Display[1008+160+3]&bit6
#define EDR3CT_Door3IsClosed_B1                     g_dataBuffer_Display[1008+160+3]&bit5
#define EDR3CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+3]&bit4
#define EDR3CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1008+160+3]&bit3
#define EDR3CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+3]&bit2
#define EDR3CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+3]&bit1
#define EDR3CT_Door3SetOK_B1                        g_dataBuffer_Display[1008+160+3]&bit0

#define EDR3CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1008+160+4]&bit7
#define EDR3CT_Door4IsOpen_B1                       g_dataBuffer_Display[1008+160+4]&bit6
#define EDR3CT_Door4IsClosed_B1                     g_dataBuffer_Display[1008+160+4]&bit5
#define EDR3CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+4]&bit4
#define EDR3CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1008+160+4]&bit3
#define EDR3CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+4]&bit2
#define EDR3CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+4]&bit1
#define EDR3CT_Door4SetOK_B1                        g_dataBuffer_Display[1008+160+4]&bit0

#define EDR3CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1008+160+5]&bit7
#define EDR3CT_Door5IsOpen_B1                       g_dataBuffer_Display[1008+160+5]&bit6
#define EDR3CT_Door5IsClosed_B1                     g_dataBuffer_Display[1008+160+5]&bit5
#define EDR3CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+5]&bit4
#define EDR3CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1008+160+5]&bit3
#define EDR3CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+5]&bit2
#define EDR3CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+5]&bit1
#define EDR3CT_Door5SetOK_B1                        g_dataBuffer_Display[1008+160+5]&bit0


#define EDR3CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1008+160+6]&bit7
#define EDR3CT_Door6IsOpen_B1                       g_dataBuffer_Display[1008+160+6]&bit6
#define EDR3CT_Door6IsClosed_B1                     g_dataBuffer_Display[1008+160+6]&bit5
#define EDR3CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+6]&bit4
#define EDR3CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1008+160+6]&bit3
#define EDR3CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+6]&bit2
#define EDR3CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+6]&bit1
#define EDR3CT_Door6SetOK_B1                        g_dataBuffer_Display[1008+160+6]&bit0

#define EDR3CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1008+160+7]&bit7
#define EDR3CT_Door7IsOpen_B1                       g_dataBuffer_Display[1008+160+7]&bit6
#define EDR3CT_Door7IsClosed_B1                     g_dataBuffer_Display[1008+160+7]&bit5
#define EDR3CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+7]&bit4
#define EDR3CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1008+160+7]&bit3
#define EDR3CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+7]&bit2
#define EDR3CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+7]&bit1
#define EDR3CT_Door7SetOK_B1                        g_dataBuffer_Display[1008+160+7]&bit0

#define EDR3CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1008+160+8]&bit7
#define EDR3CT_Door8IsOpen_B1                       g_dataBuffer_Display[1008+160+8]&bit6
#define EDR3CT_Door8IsClosed_B1                     g_dataBuffer_Display[1008+160+8]&bit5
#define EDR3CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1008+160+8]&bit4
#define EDR3CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1008+160+8]&bit3
#define EDR3CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1008+160+8]&bit2
#define EDR3CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1008+160+8]&bit1
#define EDR3CT_Door8SetOK_B1                        g_dataBuffer_Display[1008+160+8]&bit0

#define EDR3CT_Edcu2Version_U8                      g_dataBuffer_Display[1008+160+13]%256
#define EDR3CT_Edcu1Version_U8                      g_dataBuffer_Display[1008+160+13]/256
#define EDR3CT_EdcuState_U8                         g_dataBuffer_Display[1008+160+14]%256

//0x831

#define EDR3CT_Door1IsValid_B1                       g_dataBuffer_Display[1024+160]&bit7
#define EDR3CT_Door2IsValid_B1                       g_dataBuffer_Display[1024+160]&bit6
#define EDR3CT_Door3IsValid_B1                       g_dataBuffer_Display[1024+160]&bit5
#define EDR3CT_Door4IsValid_B1                       g_dataBuffer_Display[1024+160]&bit4
#define EDR3CT_Door5IsValid_B1                       g_dataBuffer_Display[1024+160]&bit3
#define EDR3CT_Door6IsValid_B1                       g_dataBuffer_Display[1024+160]&bit2
#define EDR3CT_Door7IsValid_B1                       g_dataBuffer_Display[1024+160]&bit1
#define EDR3CT_Door8IsValid_B1                       g_dataBuffer_Display[1024+160]&bit0
#define EDR3CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+1]&bit7
#define EDR3CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+1]&bit6
#define EDR3CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+1]&bit5
#define EDR3CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1024+160+1]&bit4
#define EDR3CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+1]&bit3
#define EDR3CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1024+160+1]&bit2
#define EDR3CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1024+160+1]&bit1
#define EDR3CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+1]&bit0
#define EDR3CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1024+160+1]&bit15

#define EDR3CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+2]&bit7
#define EDR3CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+2]&bit6
#define EDR3CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+2]&bit5
#define EDR3CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1024+160+2]&bit4
#define EDR3CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+2]&bit3
#define EDR3CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1024+160+2]&bit2
#define EDR3CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1024+160+2]&bit1
#define EDR3CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+2]&bit0
#define EDR3CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1024+160+2]&bit15

#define EDR3CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+3]&bit7
#define EDR3CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+3]&bit6
#define EDR3CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+3]&bit5
#define EDR3CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1024+160+3]&bit4
#define EDR3CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+3]&bit3
#define EDR3CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1024+160+3]&bit2
#define EDR3CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1024+160+3]&bit1
#define EDR3CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+3]&bit0
#define EDR3CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1024+160+3]&bit15

#define EDR3CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+4]&bit7
#define EDR3CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+4]&bit6
#define EDR3CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+4]&bit5
#define EDR3CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1024+160+4]&bit4
#define EDR3CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+4]&bit3
#define EDR3CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1024+160+4]&bit2
#define EDR3CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1024+160+4]&bit1
#define EDR3CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+4]&bit0
#define EDR3CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1024+160+4]&bit15

#define EDR3CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+5]&bit7
#define EDR3CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+5]&bit6
#define EDR3CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+5]&bit5
#define EDR3CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1024+160+5]&bit4
#define EDR3CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+5]&bit3
#define EDR3CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1024+160+5]&bit2
#define EDR3CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1024+160+5]&bit1
#define EDR3CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+5]&bit0
#define EDR3CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1024+160+5]&bit15

#define EDR3CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+6]&bit7
#define EDR3CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+6]&bit6
#define EDR3CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+6]&bit5
#define EDR3CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1024+160+6]&bit4
#define EDR3CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+6]&bit3
#define EDR3CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1024+160+6]&bit2
#define EDR3CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1024+160+6]&bit1
#define EDR3CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+6]&bit0
#define EDR3CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1024+160+6]&bit15

#define EDR3CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+7]&bit7
#define EDR3CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+7]&bit6
#define EDR3CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+7]&bit5
#define EDR3CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1024+160+7]&bit4
#define EDR3CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+7]&bit3
#define EDR3CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1024+160+7]&bit2
#define EDR3CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1024+160+7]&bit1
#define EDR3CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+7]&bit0
#define EDR3CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1024+160+7]&bit15

#define EDR3CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1024+160+8]&bit7
#define EDR3CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1024+160+8]&bit6
#define EDR3CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1024+160+8]&bit5
#define EDR3CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1024+160+8]&bit4
#define EDR3CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1024+160+8]&bit3
#define EDR3CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1024+160+8]&bit2
#define EDR3CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1024+160+8]&bit1
#define EDR3CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1024+160+8]&bit0
#define EDR3CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1024+160+8]&bit15


//0x840

#define EDR4CT_LifeSign_U16                         g_dataBuffer_Display[1040+160]
#define EDR4CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1040+160+1]&bit7
#define EDR4CT_Door1IsOpen_B1                       g_dataBuffer_Display[1040+160+1]&bit6
#define EDR4CT_Door1IsClosed_B1                     g_dataBuffer_Display[1040+160+1]&bit5
#define EDR4CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+1]&bit4
#define EDR4CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1040+160+1]&bit3
#define EDR4CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+1]&bit2
#define EDR4CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+1]&bit1

#define EDR4CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1040+160+2]&bit7
#define EDR4CT_Door2IsOpen_B1                       g_dataBuffer_Display[1040+160+2]&bit6
#define EDR4CT_Door2IsClosed_B1                     g_dataBuffer_Display[1040+160+2]&bit5
#define EDR4CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+2]&bit4
#define EDR4CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1040+160+2]&bit3
#define EDR4CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+2]&bit2
#define EDR4CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+2]&bit1

#define EDR4CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1040+160+3]&bit7
#define EDR4CT_Door3IsOpen_B1                       g_dataBuffer_Display[1040+160+3]&bit6
#define EDR4CT_Door3IsClosed_B1                     g_dataBuffer_Display[1040+160+3]&bit5
#define EDR4CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+3]&bit4
#define EDR4CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1040+160+3]&bit3
#define EDR4CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+3]&bit2
#define EDR4CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+3]&bit1

#define EDR4CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1040+160+4]&bit7
#define EDR4CT_Door4IsOpen_B1                       g_dataBuffer_Display[1040+160+4]&bit6
#define EDR4CT_Door4IsClosed_B1                     g_dataBuffer_Display[1040+160+4]&bit5
#define EDR4CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+4]&bit4
#define EDR4CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1040+160+4]&bit3
#define EDR4CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+4]&bit2
#define EDR4CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+4]&bit1

#define EDR4CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1040+160+5]&bit7
#define EDR4CT_Door5IsOpen_B1                       g_dataBuffer_Display[1040+160+5]&bit6
#define EDR4CT_Door5IsClosed_B1                     g_dataBuffer_Display[1040+160+5]&bit5
#define EDR4CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+5]&bit4
#define EDR4CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1040+160+5]&bit3
#define EDR4CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+5]&bit2
#define EDR4CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+5]&bit1

#define EDR4CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1040+160+6]&bit7
#define EDR4CT_Door6IsOpen_B1                       g_dataBuffer_Display[1040+160+6]&bit6
#define EDR4CT_Door6IsClosed_B1                     g_dataBuffer_Display[1040+160+6]&bit5
#define EDR4CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+6]&bit4
#define EDR4CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1040+160+6]&bit3
#define EDR4CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+6]&bit2
#define EDR4CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+6]&bit1

#define EDR4CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1040+160+7]&bit7
#define EDR4CT_Door7IsOpen_B1                       g_dataBuffer_Display[1040+160+7]&bit6
#define EDR4CT_Door7IsClosed_B1                     g_dataBuffer_Display[1040+160+7]&bit5
#define EDR4CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+7]&bit4
#define EDR4CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1040+160+7]&bit3
#define EDR4CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+7]&bit2
#define EDR4CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+7]&bit1

#define EDR4CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1040+160+8]&bit7
#define EDR4CT_Door8IsOpen_B1                       g_dataBuffer_Display[1040+160+8]&bit6
#define EDR4CT_Door8IsClosed_B1                     g_dataBuffer_Display[1040+160+8]&bit5
#define EDR4CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1040+160+8]&bit4
#define EDR4CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1040+160+8]&bit3
#define EDR4CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1040+160+8]&bit2
#define EDR4CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1040+160+8]&bit1

#define EDR4CT_Edcu2Version_U8                      g_dataBuffer_Display[1040+160+13]%256
#define EDR4CT_Edcu1Version_U8                      g_dataBuffer_Display[1040+160+13]/256
#define EDR4CT_EdcuState_U8                         g_dataBuffer_Display[1040+160+14]%256

//0x841

#define EDR4CT_Door1IsValid_B1                       g_dataBuffer_Display[1056+160]&bit7
#define EDR4CT_Door2IsValid_B1                       g_dataBuffer_Display[1056+160]&bit6
#define EDR4CT_Door3IsValid_B1                       g_dataBuffer_Display[1056+160]&bit5
#define EDR4CT_Door4IsValid_B1                       g_dataBuffer_Display[1056+160]&bit4
#define EDR4CT_Door5IsValid_B1                       g_dataBuffer_Display[1056+160]&bit3
#define EDR4CT_Door6IsValid_B1                       g_dataBuffer_Display[1056+160]&bit2
#define EDR4CT_Door7IsValid_B1                       g_dataBuffer_Display[1056+160]&bit1
#define EDR4CT_Door8IsValid_B1                       g_dataBuffer_Display[1056+160]&bit0
#define EDR4CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+1]&bit7
#define EDR4CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+1]&bit6
#define EDR4CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+1]&bit5
#define EDR4CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1056+160+1]&bit4
#define EDR4CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+1]&bit3
#define EDR4CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1056+160+1]&bit2
#define EDR4CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1056+160+1]&bit1
#define EDR4CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+1]&bit0
#define EDR4CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1056+160+1]&bit15

#define EDR4CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+2]&bit7
#define EDR4CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+2]&bit6
#define EDR4CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+2]&bit5
#define EDR4CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1056+160+2]&bit4
#define EDR4CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+2]&bit3
#define EDR4CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1056+160+2]&bit2
#define EDR4CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1056+160+2]&bit1
#define EDR4CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+2]&bit0
#define EDR4CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1056+160+2]&bit15

#define EDR4CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+3]&bit7
#define EDR4CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+3]&bit6
#define EDR4CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+3]&bit5
#define EDR4CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1056+160+3]&bit4
#define EDR4CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+3]&bit3
#define EDR4CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1056+160+3]&bit2
#define EDR4CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1056+160+3]&bit1
#define EDR4CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+3]&bit0
#define EDR4CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1056+160+3]&bit15

#define EDR4CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+4]&bit7
#define EDR4CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+4]&bit6
#define EDR4CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+4]&bit5
#define EDR4CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1056+160+4]&bit4
#define EDR4CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+4]&bit3
#define EDR4CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1056+160+4]&bit2
#define EDR4CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1056+160+4]&bit1
#define EDR4CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+4]&bit0
#define EDR4CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1056+160+4]&bit15

#define EDR4CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+5]&bit7
#define EDR4CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+5]&bit6
#define EDR4CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+5]&bit5
#define EDR4CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1056+160+5]&bit4
#define EDR4CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+5]&bit3
#define EDR4CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1056+160+5]&bit2
#define EDR4CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1056+160+5]&bit1
#define EDR4CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+5]&bit0
#define EDR4CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1056+160+5]&bit15

#define EDR4CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+6]&bit7
#define EDR4CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+6]&bit6
#define EDR4CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+6]&bit5
#define EDR4CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1056+160+6]&bit4
#define EDR4CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+6]&bit3
#define EDR4CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1056+160+6]&bit2
#define EDR4CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1056+160+6]&bit1
#define EDR4CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+6]&bit0
#define EDR4CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1056+160+6]&bit15

#define EDR4CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+7]&bit7
#define EDR4CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+7]&bit6
#define EDR4CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+7]&bit5
#define EDR4CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1056+160+7]&bit4
#define EDR4CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+7]&bit3
#define EDR4CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1056+160+7]&bit2
#define EDR4CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1056+160+7]&bit1
#define EDR4CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+7]&bit0
#define EDR4CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1056+160+7]&bit15

#define EDR4CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1056+160+8]&bit7
#define EDR4CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1056+160+8]&bit6
#define EDR4CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1056+160+8]&bit5
#define EDR4CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1056+160+8]&bit4
#define EDR4CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1056+160+8]&bit3
#define EDR4CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1056+160+8]&bit2
#define EDR4CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1056+160+8]&bit1
#define EDR4CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1056+160+8]&bit0
#define EDR4CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1056+160+8]&bit15



//0x850

#define EDR5CT_LifeSign_U16                         g_dataBuffer_Display[1072+160]
#define EDR5CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1072+160+1]&bit7
#define EDR5CT_Door1IsOpen_B1                       g_dataBuffer_Display[1072+160+1]&bit6
#define EDR5CT_Door1IsClosed_B1                     g_dataBuffer_Display[1072+160+1]&bit5
#define EDR5CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+1]&bit4
#define EDR5CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1072+160+1]&bit3
#define EDR5CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+1]&bit2
#define EDR5CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+1]&bit1
#define EDR5CT_Door1SetOK_B1                        g_dataBuffer_Display[1072+160+1]&bit0

#define EDR5CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1072+160+2]&bit7
#define EDR5CT_Door2IsOpen_B1                       g_dataBuffer_Display[1072+160+2]&bit6
#define EDR5CT_Door2IsClosed_B1                     g_dataBuffer_Display[1072+160+2]&bit5
#define EDR5CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+2]&bit4
#define EDR5CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1072+160+2]&bit3
#define EDR5CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+2]&bit2
#define EDR5CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+2]&bit1
#define EDR5CT_Door2SetOK_B1                        g_dataBuffer_Display[1072+160+2]&bit0

#define EDR5CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1072+160+3]&bit7
#define EDR5CT_Door3IsOpen_B1                       g_dataBuffer_Display[1072+160+3]&bit6
#define EDR5CT_Door3IsClosed_B1                     g_dataBuffer_Display[1072+160+3]&bit5
#define EDR5CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+3]&bit4
#define EDR5CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1072+160+3]&bit3
#define EDR5CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+3]&bit2
#define EDR5CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+3]&bit1
#define EDR5CT_Door3SetOK_B1                        g_dataBuffer_Display[1072+160+3]&bit0

#define EDR5CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1072+160+4]&bit7
#define EDR5CT_Door4IsOpen_B1                       g_dataBuffer_Display[1072+160+4]&bit6
#define EDR5CT_Door4IsClosed_B1                     g_dataBuffer_Display[1072+160+4]&bit5
#define EDR5CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+4]&bit4
#define EDR5CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1072+160+4]&bit3
#define EDR5CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+4]&bit2
#define EDR5CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+4]&bit1
#define EDR5CT_Door4SetOK_B1                        g_dataBuffer_Display[1072+160+4]&bit0

#define EDR5CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1072+160+5]&bit7
#define EDR5CT_Door5IsOpen_B1                       g_dataBuffer_Display[1072+160+5]&bit6
#define EDR5CT_Door5IsClosed_B1                     g_dataBuffer_Display[1072+160+5]&bit5
#define EDR5CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+5]&bit4
#define EDR5CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1072+160+5]&bit3
#define EDR5CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+5]&bit2
#define EDR5CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+5]&bit1
#define EDR5CT_Door5SetOK_B1                        g_dataBuffer_Display[1072+160+5]&bit0

#define EDR5CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1072+160+6]&bit7
#define EDR5CT_Door6IsOpen_B1                       g_dataBuffer_Display[1072+160+6]&bit6
#define EDR5CT_Door6IsClosed_B1                     g_dataBuffer_Display[1072+160+6]&bit5
#define EDR5CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+6]&bit4
#define EDR5CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1072+160+6]&bit3
#define EDR5CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+6]&bit2
#define EDR5CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+6]&bit1
#define EDR5CT_Door6SetOK_B1                        g_dataBuffer_Display[1072+160+6]&bit0

#define EDR5CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1072+160+7]&bit7
#define EDR5CT_Door7IsOpen_B1                       g_dataBuffer_Display[1072+160+7]&bit6
#define EDR5CT_Door7IsClosed_B1                     g_dataBuffer_Display[1072+160+7]&bit5
#define EDR5CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+7]&bit4
#define EDR5CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1072+160+7]&bit3
#define EDR5CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+7]&bit2
#define EDR5CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+7]&bit1
#define EDR5CT_Door7SetOK_B1                        g_dataBuffer_Display[1072+160+7]&bit0

#define EDR5CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1072+160+8]&bit7
#define EDR5CT_Door8IsOpen_B1                       g_dataBuffer_Display[1072+160+8]&bit6
#define EDR5CT_Door8IsClosed_B1                     g_dataBuffer_Display[1072+160+8]&bit5
#define EDR5CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1072+160+8]&bit4
#define EDR5CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1072+160+8]&bit3
#define EDR5CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1072+160+8]&bit2
#define EDR5CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1072+160+8]&bit1
#define EDR5CT_Door8SetOK_B1                        g_dataBuffer_Display[1072+160+8]&bit0

#define EDR5CT_Edcu2Version_U8                      g_dataBuffer_Display[1072+160+13]%256
#define EDR5CT_Edcu1Version_U8                      g_dataBuffer_Display[1072+160+13]/256
#define EDR5CT_EdcuState_U8                         g_dataBuffer_Display[1072+160+14]%256

//0x851

#define EDR5CT_Door1IsValid_B1                       g_dataBuffer_Display[1088+160]&bit7
#define EDR5CT_Door2IsValid_B1                       g_dataBuffer_Display[1088+160]&bit6
#define EDR5CT_Door3IsValid_B1                       g_dataBuffer_Display[1088+160]&bit5
#define EDR5CT_Door4IsValid_B1                       g_dataBuffer_Display[1088+160]&bit4
#define EDR5CT_Door5IsValid_B1                       g_dataBuffer_Display[1088+160]&bit3
#define EDR5CT_Door6IsValid_B1                       g_dataBuffer_Display[1088+160]&bit2
#define EDR5CT_Door7IsValid_B1                       g_dataBuffer_Display[1088+160]&bit1
#define EDR5CT_Door8IsValid_B1                       g_dataBuffer_Display[1088+160]&bit0
#define EDR5CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+1]&bit7
#define EDR5CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+1]&bit6
#define EDR5CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+1]&bit5
#define EDR5CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1088+160+1]&bit4
#define EDR5CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+1]&bit3
#define EDR5CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1088+160+1]&bit2
#define EDR5CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1088+160+1]&bit1
#define EDR5CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+1]&bit0
#define EDR5CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1088+160+1]&bit15

#define EDR5CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+2]&bit7
#define EDR5CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+2]&bit6
#define EDR5CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+2]&bit5
#define EDR5CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1088+160+2]&bit4
#define EDR5CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+2]&bit3
#define EDR5CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1088+160+2]&bit2
#define EDR5CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1088+160+2]&bit1
#define EDR5CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+2]&bit0
#define EDR5CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1088+160+2]&bit15

#define EDR5CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+3]&bit7
#define EDR5CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+3]&bit6
#define EDR5CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+3]&bit5
#define EDR5CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1088+160+3]&bit4
#define EDR5CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+3]&bit3
#define EDR5CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1088+160+3]&bit2
#define EDR5CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1088+160+3]&bit1
#define EDR5CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+3]&bit0
#define EDR5CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1088+160+3]&bit15

#define EDR5CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+4]&bit7
#define EDR5CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+4]&bit6
#define EDR5CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+4]&bit5
#define EDR5CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1088+160+4]&bit4
#define EDR5CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+4]&bit3
#define EDR5CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1088+160+4]&bit2
#define EDR5CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1088+160+4]&bit1
#define EDR5CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+4]&bit0
#define EDR5CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1088+160+4]&bit15

#define EDR5CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+5]&bit7
#define EDR5CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+5]&bit6
#define EDR5CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+5]&bit5
#define EDR5CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1088+160+5]&bit4
#define EDR5CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+5]&bit3
#define EDR5CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1088+160+5]&bit2
#define EDR5CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1088+160+5]&bit1
#define EDR5CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+5]&bit0
#define EDR5CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1088+160+5]&bit15

#define EDR5CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+6]&bit7
#define EDR5CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+6]&bit6
#define EDR5CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+6]&bit5
#define EDR5CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1088+160+6]&bit4
#define EDR5CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+6]&bit3
#define EDR5CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1088+160+6]&bit2
#define EDR5CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1088+160+6]&bit1
#define EDR5CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+6]&bit0
#define EDR5CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1088+160+6]&bit15

#define EDR5CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+7]&bit7
#define EDR5CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+7]&bit6
#define EDR5CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+7]&bit5
#define EDR5CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1088+160+7]&bit4
#define EDR5CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+7]&bit3
#define EDR5CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1088+160+7]&bit2
#define EDR5CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1088+160+7]&bit1
#define EDR5CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+7]&bit0
#define EDR5CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1088+160+7]&bit15

#define EDR5CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1088+160+8]&bit7
#define EDR5CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1088+160+8]&bit6
#define EDR5CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1088+160+8]&bit5
#define EDR5CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1088+160+8]&bit4
#define EDR5CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1088+160+8]&bit3
#define EDR5CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1088+160+8]&bit2
#define EDR5CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1088+160+8]&bit1
#define EDR5CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1088+160+8]&bit0
#define EDR5CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1088+160+8]&bit15




//0x860

#define EDR6CT_LifeSign_U16                         g_dataBuffer_Display[1104+160]
#define EDR6CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1104+160+1]&bit7
#define EDR6CT_Door1IsOpen_B1                       g_dataBuffer_Display[1104+160+1]&bit6
#define EDR6CT_Door1IsClosed_B1                     g_dataBuffer_Display[1104+160+1]&bit5
#define EDR6CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+1]&bit4
#define EDR6CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1104+160+1]&bit3
#define EDR6CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+1]&bit2
#define EDR6CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+1]&bit1

#define EDR6CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1104+160+2]&bit7
#define EDR6CT_Door2IsOpen_B1                       g_dataBuffer_Display[1104+160+2]&bit6
#define EDR6CT_Door2IsClosed_B1                     g_dataBuffer_Display[1104+160+2]&bit5
#define EDR6CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+2]&bit4
#define EDR6CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1104+160+2]&bit3
#define EDR6CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+2]&bit2
#define EDR6CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+2]&bit1

#define EDR6CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1104+160+3]&bit7
#define EDR6CT_Door3IsOpen_B1                       g_dataBuffer_Display[1104+160+3]&bit6
#define EDR6CT_Door3IsClosed_B1                     g_dataBuffer_Display[1104+160+3]&bit5
#define EDR6CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+3]&bit4
#define EDR6CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1104+160+3]&bit3
#define EDR6CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+3]&bit2
#define EDR6CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+3]&bit1

#define EDR6CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1104+160+4]&bit7
#define EDR6CT_Door4IsOpen_B1                       g_dataBuffer_Display[1104+160+4]&bit6
#define EDR6CT_Door4IsClosed_B1                     g_dataBuffer_Display[1104+160+4]&bit5
#define EDR6CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+4]&bit4
#define EDR6CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1104+160+4]&bit3
#define EDR6CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+4]&bit2
#define EDR6CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+4]&bit1

#define EDR6CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1104+160+5]&bit7
#define EDR6CT_Door5IsOpen_B1                       g_dataBuffer_Display[1104+160+5]&bit6
#define EDR6CT_Door5IsClosed_B1                     g_dataBuffer_Display[1104+160+5]&bit5
#define EDR6CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+5]&bit4
#define EDR6CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1104+160+5]&bit3
#define EDR6CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+5]&bit2
#define EDR6CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+5]&bit1

#define EDR6CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1104+160+6]&bit7
#define EDR6CT_Door6IsOpen_B1                       g_dataBuffer_Display[1104+160+6]&bit6
#define EDR6CT_Door6IsClosed_B1                     g_dataBuffer_Display[1104+160+6]&bit5
#define EDR6CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+6]&bit4
#define EDR6CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1104+160+6]&bit3
#define EDR6CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+6]&bit2
#define EDR6CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+6]&bit1

#define EDR6CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1104+160+7]&bit7
#define EDR6CT_Door7IsOpen_B1                       g_dataBuffer_Display[1104+160+7]&bit6
#define EDR6CT_Door7IsClosed_B1                     g_dataBuffer_Display[1104+160+7]&bit5
#define EDR6CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+7]&bit4
#define EDR6CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1104+160+7]&bit3
#define EDR6CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+7]&bit2
#define EDR6CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+7]&bit1

#define EDR6CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1104+160+8]&bit7
#define EDR6CT_Door8IsOpen_B1                       g_dataBuffer_Display[1104+160+8]&bit6
#define EDR6CT_Door8IsClosed_B1                     g_dataBuffer_Display[1104+160+8]&bit5
#define EDR6CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1104+160+8]&bit4
#define EDR6CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1104+160+8]&bit3
#define EDR6CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1104+160+8]&bit2
#define EDR6CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1104+160+8]&bit1

#define EDR6CT_Edcu2Version_U8                      g_dataBuffer_Display[1104+160+13]%256
#define EDR6CT_Edcu1Version_U8                      g_dataBuffer_Display[1104+160+13]/256
#define EDR6CT_EdcuState_U8                         g_dataBuffer_Display[1104+160+14]%256

//0x861

#define EDR6CT_Door1IsValid_B1                       g_dataBuffer_Display[1120+160]&bit7
#define EDR6CT_Door2IsValid_B1                       g_dataBuffer_Display[1120+160]&bit6
#define EDR6CT_Door3IsValid_B1                       g_dataBuffer_Display[1120+160]&bit5
#define EDR6CT_Door4IsValid_B1                       g_dataBuffer_Display[1120+160]&bit4
#define EDR6CT_Door5IsValid_B1                       g_dataBuffer_Display[1120+160]&bit3
#define EDR6CT_Door6IsValid_B1                       g_dataBuffer_Display[1120+160]&bit2
#define EDR6CT_Door7IsValid_B1                       g_dataBuffer_Display[1120+160]&bit1
#define EDR6CT_Door8IsValid_B1                       g_dataBuffer_Display[1120+160]&bit0
#define EDR6CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+1]&bit7
#define EDR6CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+1]&bit6
#define EDR6CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+1]&bit5
#define EDR6CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1120+160+1]&bit4
#define EDR6CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+1]&bit3
#define EDR6CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1120+160+1]&bit2
#define EDR6CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1120+160+1]&bit1
#define EDR6CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+1]&bit0
#define EDR6CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1120+160+1]&bit15

#define EDR6CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+2]&bit7
#define EDR6CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+2]&bit6
#define EDR6CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+2]&bit5
#define EDR6CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1120+160+2]&bit4
#define EDR6CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+2]&bit3
#define EDR6CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1120+160+2]&bit2
#define EDR6CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1120+160+2]&bit1
#define EDR6CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+2]&bit0
#define EDR6CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1120+160+2]&bit15

#define EDR6CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+3]&bit7
#define EDR6CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+3]&bit6
#define EDR6CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+3]&bit5
#define EDR6CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1120+160+3]&bit4
#define EDR6CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+3]&bit3
#define EDR6CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1120+160+3]&bit2
#define EDR6CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1120+160+3]&bit1
#define EDR6CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+3]&bit0
#define EDR6CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1120+160+3]&bit15

#define EDR6CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+4]&bit7
#define EDR6CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+4]&bit6
#define EDR6CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+4]&bit5
#define EDR6CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1120+160+4]&bit4
#define EDR6CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+4]&bit3
#define EDR6CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1120+160+4]&bit2
#define EDR6CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1120+160+4]&bit1
#define EDR6CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+4]&bit0
#define EDR6CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1120+160+4]&bit15

#define EDR6CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+5]&bit7
#define EDR6CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+5]&bit6
#define EDR6CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+5]&bit5
#define EDR6CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1120+160+5]&bit4
#define EDR6CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+5]&bit3
#define EDR6CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1120+160+5]&bit2
#define EDR6CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1120+160+5]&bit1
#define EDR6CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+5]&bit0
#define EDR6CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1120+160+5]&bit15

#define EDR6CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+6]&bit7
#define EDR6CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+6]&bit6
#define EDR6CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+6]&bit5
#define EDR6CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1120+160+6]&bit4
#define EDR6CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+6]&bit3
#define EDR6CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1120+160+6]&bit2
#define EDR6CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1120+160+6]&bit1
#define EDR6CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+6]&bit0
#define EDR6CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1120+160+6]&bit15

#define EDR6CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+7]&bit7
#define EDR6CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+7]&bit6
#define EDR6CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+7]&bit5
#define EDR6CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1120+160+7]&bit4
#define EDR6CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+7]&bit3
#define EDR6CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1120+160+7]&bit2
#define EDR6CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1120+160+7]&bit1
#define EDR6CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+7]&bit0
#define EDR6CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1120+160+7]&bit15

#define EDR6CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1120+160+8]&bit7
#define EDR6CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1120+160+8]&bit6
#define EDR6CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1120+160+8]&bit5
#define EDR6CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1120+160+8]&bit4
#define EDR6CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1120+160+8]&bit3
#define EDR6CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1120+160+8]&bit2
#define EDR6CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1120+160+8]&bit1
#define EDR6CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1120+160+8]&bit0
#define EDR6CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1120+160+8]&bit15

//0x870

#define EDR7CT_LifeSign_U16                         g_dataBuffer_Display[1136+160]
#define EDR7CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1136+160+1]&bit7
#define EDR7CT_Door1IsOpen_B1                       g_dataBuffer_Display[1136+160+1]&bit6
#define EDR7CT_Door1IsClosed_B1                     g_dataBuffer_Display[1136+160+1]&bit5
#define EDR7CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+1]&bit4
#define EDR7CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1136+160+1]&bit3
#define EDR7CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+1]&bit2
#define EDR7CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+1]&bit1
#define EDR7CT_Door1SetOK_B1                        g_dataBuffer_Display[1136+160+1]&bit0

#define EDR7CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1136+160+2]&bit7
#define EDR7CT_Door2IsOpen_B1                       g_dataBuffer_Display[1136+160+2]&bit6
#define EDR7CT_Door2IsClosed_B1                     g_dataBuffer_Display[1136+160+2]&bit5
#define EDR7CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+2]&bit4
#define EDR7CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1136+160+2]&bit3
#define EDR7CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+2]&bit2
#define EDR7CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+2]&bit1
#define EDR7CT_Door2SetOK_B1                        g_dataBuffer_Display[1136+160+2]&bit0

#define EDR7CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1136+160+3]&bit7
#define EDR7CT_Door3IsOpen_B1                       g_dataBuffer_Display[1136+160+3]&bit6
#define EDR7CT_Door3IsClosed_B1                     g_dataBuffer_Display[1136+160+3]&bit5
#define EDR7CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+3]&bit4
#define EDR7CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1136+160+3]&bit3
#define EDR7CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+3]&bit2
#define EDR7CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+3]&bit1
#define EDR7CT_Door3SetOK_B1                        g_dataBuffer_Display[1136+160+3]&bit0

#define EDR7CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1136+160+4]&bit7
#define EDR7CT_Door4IsOpen_B1                       g_dataBuffer_Display[1136+160+4]&bit6
#define EDR7CT_Door4IsClosed_B1                     g_dataBuffer_Display[1136+160+4]&bit5
#define EDR7CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+4]&bit4
#define EDR7CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1136+160+4]&bit3
#define EDR7CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+4]&bit2
#define EDR7CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+4]&bit1
#define EDR7CT_Door4SetOK_B1                        g_dataBuffer_Display[1136+160+4]&bit0

#define EDR7CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1136+160+5]&bit7
#define EDR7CT_Door5IsOpen_B1                       g_dataBuffer_Display[1136+160+5]&bit6
#define EDR7CT_Door5IsClosed_B1                     g_dataBuffer_Display[1136+160+5]&bit5
#define EDR7CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+5]&bit4
#define EDR7CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1136+160+5]&bit3
#define EDR7CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+5]&bit2
#define EDR7CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+5]&bit1
#define EDR7CT_Door5SetOK_B1                        g_dataBuffer_Display[1136+160+5]&bit0

#define EDR7CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1136+160+6]&bit7
#define EDR7CT_Door6IsOpen_B1                       g_dataBuffer_Display[1136+160+6]&bit6
#define EDR7CT_Door6IsClosed_B1                     g_dataBuffer_Display[1136+160+6]&bit5
#define EDR7CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+6]&bit4
#define EDR7CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1136+160+6]&bit3
#define EDR7CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+6]&bit2
#define EDR7CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+6]&bit1
#define EDR7CT_Door6SetOK_B1                        g_dataBuffer_Display[1136+160+6]&bit0

#define EDR7CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1136+160+7]&bit7
#define EDR7CT_Door7IsOpen_B1                       g_dataBuffer_Display[1136+160+7]&bit6
#define EDR7CT_Door7IsClosed_B1                     g_dataBuffer_Display[1136+160+7]&bit5
#define EDR7CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+7]&bit4
#define EDR7CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1136+160+7]&bit3
#define EDR7CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+7]&bit2
#define EDR7CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+7]&bit1
#define EDR7CT_Door7SetOK_B1                        g_dataBuffer_Display[1136+160+7]&bit0

#define EDR7CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1136+160+8]&bit7
#define EDR7CT_Door8IsOpen_B1                       g_dataBuffer_Display[1136+160+8]&bit6
#define EDR7CT_Door8IsClosed_B1                     g_dataBuffer_Display[1136+160+8]&bit5
#define EDR7CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1136+160+8]&bit4
#define EDR7CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1136+160+8]&bit3
#define EDR7CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1136+160+8]&bit2
#define EDR7CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1136+160+8]&bit1
#define EDR7CT_Door8SetOK_B1                        g_dataBuffer_Display[1136+160+8]&bit0

#define EDR7CT_Edcu2Version_U8                      g_dataBuffer_Display[1136+160+13]%256
#define EDR7CT_Edcu1Version_U8                      g_dataBuffer_Display[1136+160+13]/256
#define EDR7CT_EdcuState_U8                         g_dataBuffer_Display[1136+160+14]%256

//0x871

#define EDR7CT_Door1IsValid_B1                       g_dataBuffer_Display[1152+160]&bit7
#define EDR7CT_Door2IsValid_B1                       g_dataBuffer_Display[1152+160]&bit6
#define EDR7CT_Door3IsValid_B1                       g_dataBuffer_Display[1152+160]&bit5
#define EDR7CT_Door4IsValid_B1                       g_dataBuffer_Display[1152+160]&bit4
#define EDR7CT_Door5IsValid_B1                       g_dataBuffer_Display[1152+160]&bit3
#define EDR7CT_Door6IsValid_B1                       g_dataBuffer_Display[1152+160]&bit2
#define EDR7CT_Door7IsValid_B1                       g_dataBuffer_Display[1152+160]&bit1
#define EDR7CT_Door8IsValid_B1                       g_dataBuffer_Display[1152+160]&bit0
#define EDR7CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+1]&bit7
#define EDR7CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+1]&bit6
#define EDR7CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+1]&bit5
#define EDR7CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1152+160+1]&bit4
#define EDR7CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+1]&bit3
#define EDR7CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1152+160+1]&bit2
#define EDR7CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1152+160+1]&bit1
#define EDR7CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+1]&bit0
#define EDR7CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1152+160+1]&bit15

#define EDR7CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+2]&bit7
#define EDR7CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+2]&bit6
#define EDR7CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+2]&bit5
#define EDR7CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1152+160+2]&bit4
#define EDR7CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+2]&bit3
#define EDR7CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1152+160+2]&bit2
#define EDR7CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1152+160+2]&bit1
#define EDR7CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+2]&bit0
#define EDR7CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1152+160+2]&bit15

#define EDR7CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+3]&bit7
#define EDR7CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+3]&bit6
#define EDR7CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+3]&bit5
#define EDR7CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1152+160+3]&bit4
#define EDR7CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+3]&bit3
#define EDR7CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1152+160+3]&bit2
#define EDR7CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1152+160+3]&bit1
#define EDR7CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+3]&bit0
#define EDR7CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1152+160+3]&bit15

#define EDR7CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+4]&bit7
#define EDR7CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+4]&bit6
#define EDR7CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+4]&bit5
#define EDR7CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1152+160+4]&bit4
#define EDR7CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+4]&bit3
#define EDR7CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1152+160+4]&bit2
#define EDR7CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1152+160+4]&bit1
#define EDR7CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+4]&bit0
#define EDR7CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1152+160+4]&bit15

#define EDR7CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+5]&bit7
#define EDR7CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+5]&bit6
#define EDR7CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+5]&bit5
#define EDR7CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1152+160+5]&bit4
#define EDR7CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+5]&bit3
#define EDR7CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1152+160+5]&bit2
#define EDR7CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1152+160+5]&bit1
#define EDR7CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+5]&bit0
#define EDR7CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1152+160+5]&bit15

#define EDR7CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+6]&bit7
#define EDR7CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+6]&bit6
#define EDR7CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+6]&bit5
#define EDR7CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1152+160+6]&bit4
#define EDR7CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+6]&bit3
#define EDR7CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1152+160+6]&bit2
#define EDR7CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1152+160+6]&bit1
#define EDR7CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+6]&bit0
#define EDR7CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1152+160+6]&bit15

#define EDR7CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+7]&bit7
#define EDR7CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+7]&bit6
#define EDR7CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+7]&bit5
#define EDR7CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1152+160+7]&bit4
#define EDR7CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+7]&bit3
#define EDR7CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1152+160+7]&bit2
#define EDR7CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1152+160+7]&bit1
#define EDR7CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+7]&bit0
#define EDR7CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1152+160+7]&bit15

#define EDR7CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1152+160+8]&bit7
#define EDR7CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1152+160+8]&bit6
#define EDR7CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1152+160+8]&bit5
#define EDR7CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1152+160+8]&bit4
#define EDR7CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1152+160+8]&bit3
#define EDR7CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1152+160+8]&bit2
#define EDR7CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1152+160+8]&bit1
#define EDR7CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1152+160+8]&bit0
#define EDR7CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1152+160+8]&bit15


//0x880

#define EDR8CT_LifeSign_U16                         g_dataBuffer_Display[1168+160]
#define EDR8CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1168+160+1]&bit7
#define EDR8CT_Door1IsOpen_B1                       g_dataBuffer_Display[1168+160+1]&bit6
#define EDR8CT_Door1IsClosed_B1                     g_dataBuffer_Display[1168+160+1]&bit5
#define EDR8CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+1]&bit4
#define EDR8CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1168+160+1]&bit3
#define EDR8CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+1]&bit2
#define EDR8CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+1]&bit1

#define EDR8CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1168+160+2]&bit7
#define EDR8CT_Door2IsOpen_B1                       g_dataBuffer_Display[1168+160+2]&bit6
#define EDR8CT_Door2IsClosed_B1                     g_dataBuffer_Display[1168+160+2]&bit5
#define EDR8CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+2]&bit4
#define EDR8CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1168+160+2]&bit3
#define EDR8CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+2]&bit2
#define EDR8CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+2]&bit1

#define EDR8CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1168+160+3]&bit7
#define EDR8CT_Door3IsOpen_B1                       g_dataBuffer_Display[1168+160+3]&bit6
#define EDR8CT_Door3IsClosed_B1                     g_dataBuffer_Display[1168+160+3]&bit5
#define EDR8CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+3]&bit4
#define EDR8CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1168+160+3]&bit3
#define EDR8CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+3]&bit2
#define EDR8CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+3]&bit1

#define EDR8CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1168+160+4]&bit7
#define EDR8CT_Door4IsOpen_B1                       g_dataBuffer_Display[1168+160+4]&bit6
#define EDR8CT_Door4IsClosed_B1                     g_dataBuffer_Display[1168+160+4]&bit5
#define EDR8CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+4]&bit4
#define EDR8CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1168+160+4]&bit3
#define EDR8CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+4]&bit2
#define EDR8CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+4]&bit1

#define EDR8CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1168+160+5]&bit7
#define EDR8CT_Door5IsOpen_B1                       g_dataBuffer_Display[1168+160+5]&bit6
#define EDR8CT_Door5IsClosed_B1                     g_dataBuffer_Display[1168+160+5]&bit5
#define EDR8CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+5]&bit4
#define EDR8CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1168+160+5]&bit3
#define EDR8CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+5]&bit2
#define EDR8CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+5]&bit1

#define EDR8CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1168+160+6]&bit7
#define EDR8CT_Door6IsOpen_B1                       g_dataBuffer_Display[1168+160+6]&bit6
#define EDR8CT_Door6IsClosed_B1                     g_dataBuffer_Display[1168+160+6]&bit5
#define EDR8CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+6]&bit4
#define EDR8CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1168+160+6]&bit3
#define EDR8CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+6]&bit2
#define EDR8CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+6]&bit1

#define EDR8CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1168+160+7]&bit7
#define EDR8CT_Door7IsOpen_B1                       g_dataBuffer_Display[1168+160+7]&bit6
#define EDR8CT_Door7IsClosed_B1                     g_dataBuffer_Display[1168+160+7]&bit5
#define EDR8CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+7]&bit4
#define EDR8CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1168+160+7]&bit3
#define EDR8CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+7]&bit2
#define EDR8CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+7]&bit1

#define EDR8CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1168+160+8]&bit7
#define EDR8CT_Door8IsOpen_B1                       g_dataBuffer_Display[1168+160+8]&bit6
#define EDR8CT_Door8IsClosed_B1                     g_dataBuffer_Display[1168+160+8]&bit5
#define EDR8CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1168+160+8]&bit4
#define EDR8CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1168+160+8]&bit3
#define EDR8CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1168+160+8]&bit2
#define EDR8CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1168+160+8]&bit1

#define EDR8CT_Edcu2Version_U8                      g_dataBuffer_Display[1168+160+13]%256
#define EDR8CT_Edcu1Version_U8                      g_dataBuffer_Display[1168+160+13]/256
#define EDR8CT_EdcuState_U8                         g_dataBuffer_Display[1168+160+14]%256

//0x881

#define EDR8CT_Door1IsValid_B1                       g_dataBuffer_Display[1184+160]&bit7
#define EDR8CT_Door2IsValid_B1                       g_dataBuffer_Display[1184+160]&bit6
#define EDR8CT_Door3IsValid_B1                       g_dataBuffer_Display[1184+160]&bit5
#define EDR8CT_Door4IsValid_B1                       g_dataBuffer_Display[1184+160]&bit4
#define EDR8CT_Door5IsValid_B1                       g_dataBuffer_Display[1184+160]&bit3
#define EDR8CT_Door6IsValid_B1                       g_dataBuffer_Display[1184+160]&bit2
#define EDR8CT_Door7IsValid_B1                       g_dataBuffer_Display[1184+160]&bit1
#define EDR8CT_Door8IsValid_B1                       g_dataBuffer_Display[1184+160]&bit0
#define EDR8CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+1]&bit7
#define EDR8CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+1]&bit6
#define EDR8CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+1]&bit5
#define EDR8CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1184+160+1]&bit4
#define EDR8CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+1]&bit3
#define EDR8CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1184+160+1]&bit2
#define EDR8CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1184+160+1]&bit1
#define EDR8CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+1]&bit0
#define EDR8CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1184+160+1]&bit15

#define EDR8CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+2]&bit7
#define EDR8CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+2]&bit6
#define EDR8CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+2]&bit5
#define EDR8CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1184+160+2]&bit4
#define EDR8CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+2]&bit3
#define EDR8CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1184+160+2]&bit2
#define EDR8CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1184+160+2]&bit1
#define EDR8CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+2]&bit0
#define EDR8CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1184+160+2]&bit15

#define EDR8CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+3]&bit7
#define EDR8CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+3]&bit6
#define EDR8CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+3]&bit5
#define EDR8CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1184+160+3]&bit4
#define EDR8CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+3]&bit3
#define EDR8CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1184+160+3]&bit2
#define EDR8CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1184+160+3]&bit1
#define EDR8CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+3]&bit0
#define EDR8CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1184+160+3]&bit15

#define EDR8CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+4]&bit7
#define EDR8CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+4]&bit6
#define EDR8CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+4]&bit5
#define EDR8CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1184+160+4]&bit4
#define EDR8CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+4]&bit3
#define EDR8CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1184+160+4]&bit2
#define EDR8CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1184+160+4]&bit1
#define EDR8CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+4]&bit0
#define EDR8CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1184+160+4]&bit15

#define EDR8CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+5]&bit7
#define EDR8CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+5]&bit6
#define EDR8CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+5]&bit5
#define EDR8CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1184+160+5]&bit4
#define EDR8CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+5]&bit3
#define EDR8CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1184+160+5]&bit2
#define EDR8CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1184+160+5]&bit1
#define EDR8CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+5]&bit0
#define EDR8CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1184+160+5]&bit15

#define EDR8CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+6]&bit7
#define EDR8CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+6]&bit6
#define EDR8CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+6]&bit5
#define EDR8CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1184+160+6]&bit4
#define EDR8CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+6]&bit3
#define EDR8CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1184+160+6]&bit2
#define EDR8CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1184+160+6]&bit1
#define EDR8CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+6]&bit0
#define EDR8CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1184+160+6]&bit15

#define EDR8CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+7]&bit7
#define EDR8CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+7]&bit6
#define EDR8CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+7]&bit5
#define EDR8CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1184+160+7]&bit4
#define EDR8CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+7]&bit3
#define EDR8CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1184+160+7]&bit2
#define EDR8CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1184+160+7]&bit1
#define EDR8CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+7]&bit0
#define EDR8CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1184+160+7]&bit15

#define EDR8CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1184+160+8]&bit7
#define EDR8CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1184+160+8]&bit6
#define EDR8CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1184+160+8]&bit5
#define EDR8CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1184+160+8]&bit4
#define EDR8CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1184+160+8]&bit3
#define EDR8CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1184+160+8]&bit2
#define EDR8CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1184+160+8]&bit1
#define EDR8CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1184+160+8]&bit0
#define EDR8CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1184+160+8]&bit15


//0x890

#define EDR9CT_LifeSign_U16                         g_dataBuffer_Display[1200+160]
#define EDR9CT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1200+160+1]&bit7
#define EDR9CT_Door1IsOpen_B1                       g_dataBuffer_Display[1200+160+1]&bit6
#define EDR9CT_Door1IsClosed_B1                     g_dataBuffer_Display[1200+160+1]&bit5
#define EDR9CT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+1]&bit4
#define EDR9CT_Door1IsIsolated_B1                   g_dataBuffer_Display[1200+160+1]&bit3
#define EDR9CT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+1]&bit2
#define EDR9CT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+1]&bit1
#define EDR9CT_Door1SetOK_B1                        g_dataBuffer_Display[1200+160+1]&bit0

#define EDR9CT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1200+160+2]&bit7
#define EDR9CT_Door2IsOpen_B1                       g_dataBuffer_Display[1200+160+2]&bit6
#define EDR9CT_Door2IsClosed_B1                     g_dataBuffer_Display[1200+160+2]&bit5
#define EDR9CT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+2]&bit4
#define EDR9CT_Door2IsIsolated_B1                   g_dataBuffer_Display[1200+160+2]&bit3
#define EDR9CT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+2]&bit2
#define EDR9CT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+2]&bit1
#define EDR9CT_Door2SetOK_B1                        g_dataBuffer_Display[1200+160+2]&bit0

#define EDR9CT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1200+160+3]&bit7
#define EDR9CT_Door3IsOpen_B1                       g_dataBuffer_Display[1200+160+3]&bit6
#define EDR9CT_Door3IsClosed_B1                     g_dataBuffer_Display[1200+160+3]&bit5
#define EDR9CT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+3]&bit4
#define EDR9CT_Door3IsIsolated_B1                   g_dataBuffer_Display[1200+160+3]&bit3
#define EDR9CT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+3]&bit2
#define EDR9CT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+3]&bit1
#define EDR9CT_Door3SetOK_B1                        g_dataBuffer_Display[1200+160+3]&bit0


#define EDR9CT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1200+160+4]&bit7
#define EDR9CT_Door4IsOpen_B1                       g_dataBuffer_Display[1200+160+4]&bit6
#define EDR9CT_Door4IsClosed_B1                     g_dataBuffer_Display[1200+160+4]&bit5
#define EDR9CT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+4]&bit4
#define EDR9CT_Door4IsIsolated_B1                   g_dataBuffer_Display[1200+160+4]&bit3
#define EDR9CT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+4]&bit2
#define EDR9CT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+4]&bit1
#define EDR9CT_Door4SetOK_B1                        g_dataBuffer_Display[1200+160+4]&bit0

#define EDR9CT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1200+160+5]&bit7
#define EDR9CT_Door5IsOpen_B1                       g_dataBuffer_Display[1200+160+5]&bit6
#define EDR9CT_Door5IsClosed_B1                     g_dataBuffer_Display[1200+160+5]&bit5
#define EDR9CT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+5]&bit4
#define EDR9CT_Door5IsIsolated_B1                   g_dataBuffer_Display[1200+160+5]&bit3
#define EDR9CT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+5]&bit2
#define EDR9CT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+5]&bit1
#define EDR9CT_Door5SetOK_B1                        g_dataBuffer_Display[1200+160+5]&bit0

#define EDR9CT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1200+160+6]&bit7
#define EDR9CT_Door6IsOpen_B1                       g_dataBuffer_Display[1200+160+6]&bit6
#define EDR9CT_Door6IsClosed_B1                     g_dataBuffer_Display[1200+160+6]&bit5
#define EDR9CT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+6]&bit4
#define EDR9CT_Door6IsIsolated_B1                   g_dataBuffer_Display[1200+160+6]&bit3
#define EDR9CT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+6]&bit2
#define EDR9CT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+6]&bit1
#define EDR9CT_Door6SetOK_B1                        g_dataBuffer_Display[1200+160+6]&bit0

#define EDR9CT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1200+160+7]&bit7
#define EDR9CT_Door7IsOpen_B1                       g_dataBuffer_Display[1200+160+7]&bit6
#define EDR9CT_Door7IsClosed_B1                     g_dataBuffer_Display[1200+160+7]&bit5
#define EDR9CT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+7]&bit4
#define EDR9CT_Door7IsIsolated_B1                   g_dataBuffer_Display[1200+160+7]&bit3
#define EDR9CT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+7]&bit2
#define EDR9CT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+7]&bit1
#define EDR9CT_Door7SetOK_B1                        g_dataBuffer_Display[1200+160+7]&bit0

#define EDR9CT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1200+160+8]&bit7
#define EDR9CT_Door8IsOpen_B1                       g_dataBuffer_Display[1200+160+8]&bit6
#define EDR9CT_Door8IsClosed_B1                     g_dataBuffer_Display[1200+160+8]&bit5
#define EDR9CT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1200+160+8]&bit4
#define EDR9CT_Door8IsIsolated_B1                   g_dataBuffer_Display[1200+160+8]&bit3
#define EDR9CT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1200+160+8]&bit2
#define EDR9CT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1200+160+8]&bit1
#define EDR9CT_Door8SetOK_B1                        g_dataBuffer_Display[1200+160+8]&bit0

#define EDR9CT_Edcu2Version_U8                      g_dataBuffer_Display[1200+160+13]%256
#define EDR9CT_Edcu1Version_U8                      g_dataBuffer_Display[1200+160+13]/256
#define EDR9CT_EdcuState_U8                         g_dataBuffer_Display[1200+160+14]%256

//0x891

#define EDR9CT_Door1IsValid_B1                       g_dataBuffer_Display[1216+160]&bit7
#define EDR9CT_Door2IsValid_B1                       g_dataBuffer_Display[1216+160]&bit6
#define EDR9CT_Door3IsValid_B1                       g_dataBuffer_Display[1216+160]&bit5
#define EDR9CT_Door4IsValid_B1                       g_dataBuffer_Display[1216+160]&bit4
#define EDR9CT_Door5IsValid_B1                       g_dataBuffer_Display[1216+160]&bit3
#define EDR9CT_Door6IsValid_B1                       g_dataBuffer_Display[1216+160]&bit2
#define EDR9CT_Door7IsValid_B1                       g_dataBuffer_Display[1216+160]&bit1
#define EDR9CT_Door8IsValid_B1                       g_dataBuffer_Display[1216+160]&bit0
#define EDR9CT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+1]&bit7
#define EDR9CT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+1]&bit6
#define EDR9CT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+1]&bit5
#define EDR9CT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1216+160+1]&bit4
#define EDR9CT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+1]&bit3
#define EDR9CT_Door1EncoderFault_B1                  g_dataBuffer_Display[1216+160+1]&bit2
#define EDR9CT_Door1OperationOverTime_B1             g_dataBuffer_Display[1216+160+1]&bit1
#define EDR9CT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+1]&bit0
#define EDR9CT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1216+160+1]&bit15

#define EDR9CT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+2]&bit7
#define EDR9CT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+2]&bit6
#define EDR9CT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+2]&bit5
#define EDR9CT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1216+160+2]&bit4
#define EDR9CT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+2]&bit3
#define EDR9CT_Door2EncoderFault_B1                  g_dataBuffer_Display[1216+160+2]&bit2
#define EDR9CT_Door2OperationOverTime_B1             g_dataBuffer_Display[1216+160+2]&bit1
#define EDR9CT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+2]&bit0
#define EDR9CT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1216+160+2]&bit15

#define EDR9CT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+3]&bit7
#define EDR9CT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+3]&bit6
#define EDR9CT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+3]&bit5
#define EDR9CT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1216+160+3]&bit4
#define EDR9CT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+3]&bit3
#define EDR9CT_Door3EncoderFault_B1                  g_dataBuffer_Display[1216+160+3]&bit2
#define EDR9CT_Door3OperationOverTime_B1             g_dataBuffer_Display[1216+160+3]&bit1
#define EDR9CT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+3]&bit0
#define EDR9CT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1216+160+3]&bit15

#define EDR9CT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+4]&bit7
#define EDR9CT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+4]&bit6
#define EDR9CT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+4]&bit5
#define EDR9CT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1216+160+4]&bit4
#define EDR9CT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+4]&bit3
#define EDR9CT_Door4EncoderFault_B1                  g_dataBuffer_Display[1216+160+4]&bit2
#define EDR9CT_Door4OperationOverTime_B1             g_dataBuffer_Display[1216+160+4]&bit1
#define EDR9CT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+4]&bit0
#define EDR9CT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1216+160+4]&bit15

#define EDR9CT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+5]&bit7
#define EDR9CT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+5]&bit6
#define EDR9CT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+5]&bit5
#define EDR9CT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1216+160+5]&bit4
#define EDR9CT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+5]&bit3
#define EDR9CT_Door5EncoderFault_B1                  g_dataBuffer_Display[1216+160+5]&bit2
#define EDR9CT_Door5OperationOverTime_B1             g_dataBuffer_Display[1216+160+5]&bit1
#define EDR9CT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+5]&bit0
#define EDR9CT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1216+160+5]&bit15

#define EDR9CT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+6]&bit7
#define EDR9CT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+6]&bit6
#define EDR9CT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+6]&bit5
#define EDR9CT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1216+160+6]&bit4
#define EDR9CT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+6]&bit3
#define EDR9CT_Door6EncoderFault_B1                  g_dataBuffer_Display[1216+160+6]&bit2
#define EDR9CT_Door6OperationOverTime_B1             g_dataBuffer_Display[1216+160+6]&bit1
#define EDR9CT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+6]&bit0
#define EDR9CT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1216+160+6]&bit15

#define EDR9CT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+7]&bit7
#define EDR9CT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+7]&bit6
#define EDR9CT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+7]&bit5
#define EDR9CT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1216+160+7]&bit4
#define EDR9CT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+7]&bit3
#define EDR9CT_Door7EncoderFault_B1                  g_dataBuffer_Display[1216+160+7]&bit2
#define EDR9CT_Door7OperationOverTime_B1             g_dataBuffer_Display[1216+160+7]&bit1
#define EDR9CT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+7]&bit0
#define EDR9CT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1216+160+7]&bit15

#define EDR9CT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1216+160+8]&bit7
#define EDR9CT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1216+160+8]&bit6
#define EDR9CT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1216+160+8]&bit5
#define EDR9CT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1216+160+8]&bit4
#define EDR9CT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1216+160+8]&bit3
#define EDR9CT_Door8EncoderFault_B1                  g_dataBuffer_Display[1216+160+8]&bit2
#define EDR9CT_Door8OperationOverTime_B1             g_dataBuffer_Display[1216+160+8]&bit1
#define EDR9CT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1216+160+8]&bit0
#define EDR9CT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1216+160+8]&bit15

//0x8A0

#define EDRACT_LifeSign_U16                         g_dataBuffer_Display[1232+160]
#define EDRACT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1232+160+1]&bit7
#define EDRACT_Door1IsOpen_B1                       g_dataBuffer_Display[1232+160+1]&bit6
#define EDRACT_Door1IsClosed_B1                     g_dataBuffer_Display[1232+160+1]&bit5
#define EDRACT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+1]&bit4
#define EDRACT_Door1IsIsolated_B1                   g_dataBuffer_Display[1232+160+1]&bit3
#define EDRACT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+1]&bit2
#define EDRACT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+1]&bit1


#define EDRACT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1232+160+2]&bit7
#define EDRACT_Door2IsOpen_B1                       g_dataBuffer_Display[1232+160+2]&bit6
#define EDRACT_Door2IsClosed_B1                     g_dataBuffer_Display[1232+160+2]&bit5
#define EDRACT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+2]&bit4
#define EDRACT_Door2IsIsolated_B1                   g_dataBuffer_Display[1232+160+2]&bit3
#define EDRACT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+2]&bit2
#define EDRACT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+2]&bit1


#define EDRACT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1232+160+3]&bit7
#define EDRACT_Door3IsOpen_B1                       g_dataBuffer_Display[1232+160+3]&bit6
#define EDRACT_Door3IsClosed_B1                     g_dataBuffer_Display[1232+160+3]&bit5
#define EDRACT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+3]&bit4
#define EDRACT_Door3IsIsolated_B1                   g_dataBuffer_Display[1232+160+3]&bit3
#define EDRACT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+3]&bit2
#define EDRACT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+3]&bit1

#define EDRACT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1232+160+4]&bit7
#define EDRACT_Door4IsOpen_B1                       g_dataBuffer_Display[1232+160+4]&bit6
#define EDRACT_Door4IsClosed_B1                     g_dataBuffer_Display[1232+160+4]&bit5
#define EDRACT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+4]&bit4
#define EDRACT_Door4IsIsolated_B1                   g_dataBuffer_Display[1232+160+4]&bit3
#define EDRACT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+4]&bit2
#define EDRACT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+4]&bit1


#define EDRACT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1232+160+5]&bit7
#define EDRACT_Door5IsOpen_B1                       g_dataBuffer_Display[1232+160+5]&bit6
#define EDRACT_Door5IsClosed_B1                     g_dataBuffer_Display[1232+160+5]&bit5
#define EDRACT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+5]&bit4
#define EDRACT_Door5IsIsolated_B1                   g_dataBuffer_Display[1232+160+5]&bit3
#define EDRACT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+5]&bit2
#define EDRACT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+5]&bit1


#define EDRACT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1232+160+6]&bit7
#define EDRACT_Door6IsOpen_B1                       g_dataBuffer_Display[1232+160+6]&bit6
#define EDRACT_Door6IsClosed_B1                     g_dataBuffer_Display[1232+160+6]&bit5
#define EDRACT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+6]&bit4
#define EDRACT_Door6IsIsolated_B1                   g_dataBuffer_Display[1232+160+6]&bit3
#define EDRACT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+6]&bit2
#define EDRACT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+6]&bit1


#define EDRACT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1232+160+7]&bit7
#define EDRACT_Door7IsOpen_B1                       g_dataBuffer_Display[1232+160+7]&bit6
#define EDRACT_Door7IsClosed_B1                     g_dataBuffer_Display[1232+160+7]&bit5
#define EDRACT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+7]&bit4
#define EDRACT_Door7IsIsolated_B1                   g_dataBuffer_Display[1232+160+7]&bit3
#define EDRACT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+7]&bit2
#define EDRACT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+7]&bit1


#define EDRACT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1232+160+8]&bit7
#define EDRACT_Door8IsOpen_B1                       g_dataBuffer_Display[1232+160+8]&bit6
#define EDRACT_Door8IsClosed_B1                     g_dataBuffer_Display[1232+160+8]&bit5
#define EDRACT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1232+160+8]&bit4
#define EDRACT_Door8IsIsolated_B1                   g_dataBuffer_Display[1232+160+8]&bit3
#define EDRACT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1232+160+8]&bit2
#define EDRACT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1232+160+8]&bit1


#define EDRACT_Edcu2Version_U8                      g_dataBuffer_Display[1232+160+13]%256
#define EDRACT_Edcu1Version_U8                      g_dataBuffer_Display[1232+160+13]/256
#define EDRACT_EdcuState_U8                         g_dataBuffer_Display[1232+160+14]%256

//0x8A1

#define EDRACT_Door1IsValid_B1                       g_dataBuffer_Display[1248+160]&bit7
#define EDRACT_Door2IsValid_B1                       g_dataBuffer_Display[1248+160]&bit6
#define EDRACT_Door3IsValid_B1                       g_dataBuffer_Display[1248+160]&bit5
#define EDRACT_Door4IsValid_B1                       g_dataBuffer_Display[1248+160]&bit4
#define EDRACT_Door5IsValid_B1                       g_dataBuffer_Display[1248+160]&bit3
#define EDRACT_Door6IsValid_B1                       g_dataBuffer_Display[1248+160]&bit2
#define EDRACT_Door7IsValid_B1                       g_dataBuffer_Display[1248+160]&bit1
#define EDRACT_Door8IsValid_B1                       g_dataBuffer_Display[1248+160]&bit0
#define EDRACT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+1]&bit7
#define EDRACT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+1]&bit6
#define EDRACT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+1]&bit5
#define EDRACT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1248+160+1]&bit4
#define EDRACT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+1]&bit3
#define EDRACT_Door1EncoderFault_B1                  g_dataBuffer_Display[1248+160+1]&bit2
#define EDRACT_Door1OperationOverTime_B1             g_dataBuffer_Display[1248+160+1]&bit1
#define EDRACT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+1]&bit0
#define EDRACT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1248+160+1]&bit15

#define EDRACT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+2]&bit7
#define EDRACT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+2]&bit6
#define EDRACT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+2]&bit5
#define EDRACT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1248+160+2]&bit4
#define EDRACT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+2]&bit3
#define EDRACT_Door2EncoderFault_B1                  g_dataBuffer_Display[1248+160+2]&bit2
#define EDRACT_Door2OperationOverTime_B1             g_dataBuffer_Display[1248+160+2]&bit1
#define EDRACT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+2]&bit0
#define EDRACT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1248+160+2]&bit15

#define EDRACT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+3]&bit7
#define EDRACT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+3]&bit6
#define EDRACT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+3]&bit5
#define EDRACT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1248+160+3]&bit4
#define EDRACT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+3]&bit3
#define EDRACT_Door3EncoderFault_B1                  g_dataBuffer_Display[1248+160+3]&bit2
#define EDRACT_Door3OperationOverTime_B1             g_dataBuffer_Display[1248+160+3]&bit1
#define EDRACT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+3]&bit0
#define EDRACT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1248+160+3]&bit15

#define EDRACT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+4]&bit7
#define EDRACT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+4]&bit6
#define EDRACT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+4]&bit5
#define EDRACT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1248+160+4]&bit4
#define EDRACT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+4]&bit3
#define EDRACT_Door4EncoderFault_B1                  g_dataBuffer_Display[1248+160+4]&bit2
#define EDRACT_Door4OperationOverTime_B1             g_dataBuffer_Display[1248+160+4]&bit1
#define EDRACT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+4]&bit0
#define EDRACT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1248+160+4]&bit15

#define EDRACT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+5]&bit7
#define EDRACT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+5]&bit6
#define EDRACT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+5]&bit5
#define EDRACT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1248+160+5]&bit4
#define EDRACT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+5]&bit3
#define EDRACT_Door5EncoderFault_B1                  g_dataBuffer_Display[1248+160+5]&bit2
#define EDRACT_Door5OperationOverTime_B1             g_dataBuffer_Display[1248+160+5]&bit1
#define EDRACT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+5]&bit0
#define EDRACT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1248+160+5]&bit15

#define EDRACT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+6]&bit7
#define EDRACT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+6]&bit6
#define EDRACT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+6]&bit5
#define EDRACT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1248+160+6]&bit4
#define EDRACT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+6]&bit3
#define EDRACT_Door6EncoderFault_B1                  g_dataBuffer_Display[1248+160+6]&bit2
#define EDRACT_Door6OperationOverTime_B1             g_dataBuffer_Display[1248+160+6]&bit1
#define EDRACT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+6]&bit0
#define EDRACT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1248+160+6]&bit15

#define EDRACT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+7]&bit7
#define EDRACT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+7]&bit6
#define EDRACT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+7]&bit5
#define EDRACT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1248+160+7]&bit4
#define EDRACT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+7]&bit3
#define EDRACT_Door7EncoderFault_B1                  g_dataBuffer_Display[1248+160+7]&bit2
#define EDRACT_Door7OperationOverTime_B1             g_dataBuffer_Display[1248+160+7]&bit1
#define EDRACT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+7]&bit0
#define EDRACT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1248+160+7]&bit15

#define EDRACT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1248+160+8]&bit7
#define EDRACT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1248+160+8]&bit6
#define EDRACT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1248+160+8]&bit5
#define EDRACT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1248+160+8]&bit4
#define EDRACT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1248+160+8]&bit3
#define EDRACT_Door8EncoderFault_B1                  g_dataBuffer_Display[1248+160+8]&bit2
#define EDRACT_Door8OperationOverTime_B1             g_dataBuffer_Display[1248+160+8]&bit1
#define EDRACT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1248+160+8]&bit0
#define EDRACT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1248+160+8]&bit15

//0x8B0

#define EDRBCT_LifeSign_U16                         g_dataBuffer_Display[1264+160]
#define EDRBCT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1264+160+1]&bit7
#define EDRBCT_Door1IsOpen_B1                       g_dataBuffer_Display[1264+160+1]&bit6
#define EDRBCT_Door1IsClosed_B1                     g_dataBuffer_Display[1264+160+1]&bit5
#define EDRBCT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+1]&bit4
#define EDRBCT_Door1IsIsolated_B1                   g_dataBuffer_Display[1264+160+1]&bit3
#define EDRBCT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+1]&bit2
#define EDRBCT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+1]&bit1
#define EDRBCT_Door1SetOK_B1                        g_dataBuffer_Display[1264+160+1]&bit0

#define EDRBCT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1264+160+2]&bit7
#define EDRBCT_Door2IsOpen_B1                       g_dataBuffer_Display[1264+160+2]&bit6
#define EDRBCT_Door2IsClosed_B1                     g_dataBuffer_Display[1264+160+2]&bit5
#define EDRBCT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+2]&bit4
#define EDRBCT_Door2IsIsolated_B1                   g_dataBuffer_Display[1264+160+2]&bit3
#define EDRBCT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+2]&bit2
#define EDRBCT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+2]&bit1
#define EDRBCT_Door2SetOK_B1                        g_dataBuffer_Display[1264+160+2]&bit0

#define EDRBCT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1264+160+3]&bit7
#define EDRBCT_Door3IsOpen_B1                       g_dataBuffer_Display[1264+160+3]&bit6
#define EDRBCT_Door3IsClosed_B1                     g_dataBuffer_Display[1264+160+3]&bit5
#define EDRBCT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+3]&bit4
#define EDRBCT_Door3IsIsolated_B1                   g_dataBuffer_Display[1264+160+3]&bit3
#define EDRBCT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+3]&bit2
#define EDRBCT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+3]&bit1
#define EDRBCT_Door3SetOK_B1                        g_dataBuffer_Display[1264+160+3]&bit0

#define EDRBCT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1264+160+4]&bit7
#define EDRBCT_Door4IsOpen_B1                       g_dataBuffer_Display[1264+160+4]&bit6
#define EDRBCT_Door4IsClosed_B1                     g_dataBuffer_Display[1264+160+4]&bit5
#define EDRBCT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+4]&bit4
#define EDRBCT_Door4IsIsolated_B1                   g_dataBuffer_Display[1264+160+4]&bit3
#define EDRBCT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+4]&bit2
#define EDRBCT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+4]&bit1
#define EDRBCT_Door4SetOK_B1                        g_dataBuffer_Display[1264+160+4]&bit0

#define EDRBCT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1264+160+5]&bit7
#define EDRBCT_Door5IsOpen_B1                       g_dataBuffer_Display[1264+160+5]&bit6
#define EDRBCT_Door5IsClosed_B1                     g_dataBuffer_Display[1264+160+5]&bit5
#define EDRBCT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+5]&bit4
#define EDRBCT_Door5IsIsolated_B1                   g_dataBuffer_Display[1264+160+5]&bit3
#define EDRBCT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+5]&bit2
#define EDRBCT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+5]&bit1
#define EDRBCT_Door5SetOK_B1                        g_dataBuffer_Display[1264+160+5]&bit0

#define EDRBCT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1264+160+6]&bit7
#define EDRBCT_Door6IsOpen_B1                       g_dataBuffer_Display[1264+160+6]&bit6
#define EDRBCT_Door6IsClosed_B1                     g_dataBuffer_Display[1264+160+6]&bit5
#define EDRBCT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+6]&bit4
#define EDRBCT_Door6IsIsolated_B1                   g_dataBuffer_Display[1264+160+6]&bit3
#define EDRBCT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+6]&bit2
#define EDRBCT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+6]&bit1
#define EDRBCT_Door6SetOK_B1                        g_dataBuffer_Display[1264+160+6]&bit0

#define EDRBCT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1264+160+7]&bit7
#define EDRBCT_Door7IsOpen_B1                       g_dataBuffer_Display[1264+160+7]&bit6
#define EDRBCT_Door7IsClosed_B1                     g_dataBuffer_Display[1264+160+7]&bit5
#define EDRBCT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+7]&bit4
#define EDRBCT_Door7IsIsolated_B1                   g_dataBuffer_Display[1264+160+7]&bit3
#define EDRBCT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+7]&bit2
#define EDRBCT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+7]&bit1
#define EDRBCT_Door7SetOK_B1                        g_dataBuffer_Display[1264+160+7]&bit0


#define EDRBCT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1264+160+8]&bit7
#define EDRBCT_Door8IsOpen_B1                       g_dataBuffer_Display[1264+160+8]&bit6
#define EDRBCT_Door8IsClosed_B1                     g_dataBuffer_Display[1264+160+8]&bit5
#define EDRBCT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1264+160+8]&bit4
#define EDRBCT_Door8IsIsolated_B1                   g_dataBuffer_Display[1264+160+8]&bit3
#define EDRBCT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1264+160+8]&bit2
#define EDRBCT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1264+160+8]&bit1
#define EDRBCT_Door8SetOK_B1                        g_dataBuffer_Display[1264+160+8]&bit0

#define EDRBCT_Edcu2Version_U8                      g_dataBuffer_Display[1264+160+13]%256
#define EDRBCT_Edcu1Version_U8                      g_dataBuffer_Display[1264+160+13]/256
#define EDRBCT_EdcuState_U8                         g_dataBuffer_Display[1264+160+14]%256

//0x8B1

#define EDRBCT_Door1IsValid_B1                       g_dataBuffer_Display[1280+160]&bit7
#define EDRBCT_Door2IsValid_B1                       g_dataBuffer_Display[1280+160]&bit6
#define EDRBCT_Door3IsValid_B1                       g_dataBuffer_Display[1280+160]&bit5
#define EDRBCT_Door4IsValid_B1                       g_dataBuffer_Display[1280+160]&bit4
#define EDRBCT_Door5IsValid_B1                       g_dataBuffer_Display[1280+160]&bit3
#define EDRBCT_Door6IsValid_B1                       g_dataBuffer_Display[1280+160]&bit2
#define EDRBCT_Door7IsValid_B1                       g_dataBuffer_Display[1280+160]&bit1
#define EDRBCT_Door8IsValid_B1                       g_dataBuffer_Display[1280+160]&bit0
#define EDRBCT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+1]&bit7
#define EDRBCT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+1]&bit6
#define EDRBCT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+1]&bit5
#define EDRBCT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1280+160+1]&bit4
#define EDRBCT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+1]&bit3
#define EDRBCT_Door1EncoderFault_B1                  g_dataBuffer_Display[1280+160+1]&bit2
#define EDRBCT_Door1OperationOverTime_B1             g_dataBuffer_Display[1280+160+1]&bit1
#define EDRBCT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+1]&bit0
#define EDRBCT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1280+160+1]&bit15

#define EDRBCT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+2]&bit7
#define EDRBCT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+2]&bit6
#define EDRBCT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+2]&bit5
#define EDRBCT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1280+160+2]&bit4
#define EDRBCT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+2]&bit3
#define EDRBCT_Door2EncoderFault_B1                  g_dataBuffer_Display[1280+160+2]&bit2
#define EDRBCT_Door2OperationOverTime_B1             g_dataBuffer_Display[1280+160+2]&bit1
#define EDRBCT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+2]&bit0
#define EDRBCT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1280+160+2]&bit15

#define EDRBCT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+3]&bit7
#define EDRBCT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+3]&bit6
#define EDRBCT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+3]&bit5
#define EDRBCT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1280+160+3]&bit4
#define EDRBCT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+3]&bit3
#define EDRBCT_Door3EncoderFault_B1                  g_dataBuffer_Display[1280+160+3]&bit2
#define EDRBCT_Door3OperationOverTime_B1             g_dataBuffer_Display[1280+160+3]&bit1
#define EDRBCT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+3]&bit0
#define EDRBCT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1280+160+3]&bit15

#define EDRBCT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+4]&bit7
#define EDRBCT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+4]&bit6
#define EDRBCT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+4]&bit5
#define EDRBCT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1280+160+4]&bit4
#define EDRBCT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+4]&bit3
#define EDRBCT_Door4EncoderFault_B1                  g_dataBuffer_Display[1280+160+4]&bit2
#define EDRBCT_Door4OperationOverTime_B1             g_dataBuffer_Display[1280+160+4]&bit1
#define EDRBCT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+4]&bit0
#define EDRBCT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1280+160+4]&bit15

#define EDRBCT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+5]&bit7
#define EDRBCT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+5]&bit6
#define EDRBCT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+5]&bit5
#define EDRBCT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1280+160+5]&bit4
#define EDRBCT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+5]&bit3
#define EDRBCT_Door5EncoderFault_B1                  g_dataBuffer_Display[1280+160+5]&bit2
#define EDRBCT_Door5OperationOverTime_B1             g_dataBuffer_Display[1280+160+5]&bit1
#define EDRBCT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+5]&bit0
#define EDRBCT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1280+160+5]&bit15

#define EDRBCT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+6]&bit7
#define EDRBCT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+6]&bit6
#define EDRBCT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+6]&bit5
#define EDRBCT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1280+160+6]&bit4
#define EDRBCT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+6]&bit3
#define EDRBCT_Door6EncoderFault_B1                  g_dataBuffer_Display[1280+160+6]&bit2
#define EDRBCT_Door6OperationOverTime_B1             g_dataBuffer_Display[1280+160+6]&bit1
#define EDRBCT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+6]&bit0
#define EDRBCT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1280+160+6]&bit15

#define EDRBCT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+7]&bit7
#define EDRBCT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+7]&bit6
#define EDRBCT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+7]&bit5
#define EDRBCT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1280+160+7]&bit4
#define EDRBCT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+7]&bit3
#define EDRBCT_Door7EncoderFault_B1                  g_dataBuffer_Display[1280+160+7]&bit2
#define EDRBCT_Door7OperationOverTime_B1             g_dataBuffer_Display[1280+160+7]&bit1
#define EDRBCT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+7]&bit0
#define EDRBCT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1280+160+7]&bit15

#define EDRBCT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1280+160+8]&bit7
#define EDRBCT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1280+160+8]&bit6
#define EDRBCT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1280+160+8]&bit5
#define EDRBCT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1280+160+8]&bit4
#define EDRBCT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1280+160+8]&bit3
#define EDRBCT_Door8EncoderFault_B1                  g_dataBuffer_Display[1280+160+8]&bit2
#define EDRBCT_Door8OperationOverTime_B1             g_dataBuffer_Display[1280+160+8]&bit1
#define EDRBCT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1280+160+8]&bit0
#define EDRBCT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1280+160+8]&bit15

//0x8C0

#define EDRCCT_LifeSign_U16                         g_dataBuffer_Display[1296+160]
#define EDRCCT_Door1OpenEnabled_B1                  g_dataBuffer_Display[1296+160+1]&bit7
#define EDRCCT_Door1IsOpen_B1                       g_dataBuffer_Display[1296+160+1]&bit6
#define EDRCCT_Door1IsClosed_B1                     g_dataBuffer_Display[1296+160+1]&bit5
#define EDRCCT_Door1IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+1]&bit4
#define EDRCCT_Door1IsIsolated_B1                   g_dataBuffer_Display[1296+160+1]&bit3
#define EDRCCT_Door1ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+1]&bit2
#define EDRCCT_Door1ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+1]&bit1

#define EDRCCT_Door2OpenEnabled_B1                  g_dataBuffer_Display[1296+160+2]&bit7
#define EDRCCT_Door2IsOpen_B1                       g_dataBuffer_Display[1296+160+2]&bit6
#define EDRCCT_Door2IsClosed_B1                     g_dataBuffer_Display[1296+160+2]&bit5
#define EDRCCT_Door2IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+2]&bit4
#define EDRCCT_Door2IsIsolated_B1                   g_dataBuffer_Display[1296+160+2]&bit3
#define EDRCCT_Door2ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+2]&bit2
#define EDRCCT_Door2ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+2]&bit1

#define EDRCCT_Door3OpenEnabled_B1                  g_dataBuffer_Display[1296+160+3]&bit7
#define EDRCCT_Door3IsOpen_B1                       g_dataBuffer_Display[1296+160+3]&bit6
#define EDRCCT_Door3IsClosed_B1                     g_dataBuffer_Display[1296+160+3]&bit5
#define EDRCCT_Door3IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+3]&bit4
#define EDRCCT_Door3IsIsolated_B1                   g_dataBuffer_Display[1296+160+3]&bit3
#define EDRCCT_Door3ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+3]&bit2
#define EDRCCT_Door3ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+3]&bit1

#define EDRCCT_Door4OpenEnabled_B1                  g_dataBuffer_Display[1296+160+4]&bit7
#define EDRCCT_Door4IsOpen_B1                       g_dataBuffer_Display[1296+160+4]&bit6
#define EDRCCT_Door4IsClosed_B1                     g_dataBuffer_Display[1296+160+4]&bit5
#define EDRCCT_Door4IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+4]&bit4
#define EDRCCT_Door4IsIsolated_B1                   g_dataBuffer_Display[1296+160+4]&bit3
#define EDRCCT_Door4ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+4]&bit2
#define EDRCCT_Door4ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+4]&bit1

#define EDRCCT_Door5OpenEnabled_B1                  g_dataBuffer_Display[1296+160+5]&bit7
#define EDRCCT_Door5IsOpen_B1                       g_dataBuffer_Display[1296+160+5]&bit6
#define EDRCCT_Door5IsClosed_B1                     g_dataBuffer_Display[1296+160+5]&bit5
#define EDRCCT_Door5IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+5]&bit4
#define EDRCCT_Door5IsIsolated_B1                   g_dataBuffer_Display[1296+160+5]&bit3
#define EDRCCT_Door5ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+5]&bit2
#define EDRCCT_Door5ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+5]&bit1

#define EDRCCT_Door6OpenEnabled_B1                  g_dataBuffer_Display[1296+160+6]&bit7
#define EDRCCT_Door6IsOpen_B1                       g_dataBuffer_Display[1296+160+6]&bit6
#define EDRCCT_Door6IsClosed_B1                     g_dataBuffer_Display[1296+160+6]&bit5
#define EDRCCT_Door6IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+6]&bit4
#define EDRCCT_Door6IsIsolated_B1                   g_dataBuffer_Display[1296+160+6]&bit3
#define EDRCCT_Door6ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+6]&bit2
#define EDRCCT_Door6ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+6]&bit1

#define EDRCCT_Door7OpenEnabled_B1                  g_dataBuffer_Display[1296+160+7]&bit7
#define EDRCCT_Door7IsOpen_B1                       g_dataBuffer_Display[1296+160+7]&bit6
#define EDRCCT_Door7IsClosed_B1                     g_dataBuffer_Display[1296+160+7]&bit5
#define EDRCCT_Door7IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+7]&bit4
#define EDRCCT_Door7IsIsolated_B1                   g_dataBuffer_Display[1296+160+7]&bit3
#define EDRCCT_Door7ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+7]&bit2
#define EDRCCT_Door7ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+7]&bit1

#define EDRCCT_Door8OpenEnabled_B1                  g_dataBuffer_Display[1296+160+8]&bit7
#define EDRCCT_Door8IsOpen_B1                       g_dataBuffer_Display[1296+160+8]&bit6
#define EDRCCT_Door8IsClosed_B1                     g_dataBuffer_Display[1296+160+8]&bit5
#define EDRCCT_Door8IsEmgcyUnlock_B1                g_dataBuffer_Display[1296+160+8]&bit4
#define EDRCCT_Door8IsIsolated_B1                   g_dataBuffer_Display[1296+160+8]&bit3
#define EDRCCT_Door8ExtrusionProtecting_B1          g_dataBuffer_Display[1296+160+8]&bit2
#define EDRCCT_Door8ExtrusionStoped_B1              g_dataBuffer_Display[1296+160+8]&bit1

#define EDRCCT_Edcu2Version_U8                      g_dataBuffer_Display[1296+160+13]%256
#define EDRCCT_Edcu1Version_U8                      g_dataBuffer_Display[1296+160+13]/256
#define EDRCCT_EdcuState_U8                         g_dataBuffer_Display[1296+160+14]%256

//0x8C1

#define EDRCCT_Door1IsValid_B1                       g_dataBuffer_Display[1312+160]&bit7
#define EDRCCT_Door2IsValid_B1                       g_dataBuffer_Display[1312+160]&bit6
#define EDRCCT_Door3IsValid_B1                       g_dataBuffer_Display[1312+160]&bit5
#define EDRCCT_Door4IsValid_B1                       g_dataBuffer_Display[1312+160]&bit4
#define EDRCCT_Door5IsValid_B1                       g_dataBuffer_Display[1312+160]&bit3
#define EDRCCT_Door6IsValid_B1                       g_dataBuffer_Display[1312+160]&bit2
#define EDRCCT_Door7IsValid_B1                       g_dataBuffer_Display[1312+160]&bit1
#define EDRCCT_Door8IsValid_B1                       g_dataBuffer_Display[1312+160]&bit0
#define EDRCCT_Door1MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+1]&bit7
#define EDRCCT_Door1MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+1]&bit6
#define EDRCCT_Door1PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+1]&bit5
#define EDRCCT_Door1LockSwitchFault_B1               g_dataBuffer_Display[1312+160+1]&bit4
#define EDRCCT_Door1ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+1]&bit3
#define EDRCCT_Door1EncoderFault_B1                  g_dataBuffer_Display[1312+160+1]&bit2
#define EDRCCT_Door1OperationOverTime_B1             g_dataBuffer_Display[1312+160+1]&bit1
#define EDRCCT_Door1OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+1]&bit0
#define EDRCCT_Door1GreenLoopFault_B1                g_dataBuffer_Display[1312+160+1]&bit15

#define EDRCCT_Door2MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+2]&bit7
#define EDRCCT_Door2MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+2]&bit6
#define EDRCCT_Door2PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+2]&bit5
#define EDRCCT_Door2LockSwitchFault_B1               g_dataBuffer_Display[1312+160+2]&bit4
#define EDRCCT_Door2ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+2]&bit3
#define EDRCCT_Door2EncoderFault_B1                  g_dataBuffer_Display[1312+160+2]&bit2
#define EDRCCT_Door2OperationOverTime_B1             g_dataBuffer_Display[1312+160+2]&bit1
#define EDRCCT_Door2OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+2]&bit0
#define EDRCCT_Door2GreenLoopFault_B1                g_dataBuffer_Display[1312+160+2]&bit15

#define EDRCCT_Door3MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+3]&bit7
#define EDRCCT_Door3MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+3]&bit6
#define EDRCCT_Door3PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+3]&bit5
#define EDRCCT_Door3LockSwitchFault_B1               g_dataBuffer_Display[1312+160+3]&bit4
#define EDRCCT_Door3ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+3]&bit3
#define EDRCCT_Door3EncoderFault_B1                  g_dataBuffer_Display[1312+160+3]&bit2
#define EDRCCT_Door3OperationOverTime_B1             g_dataBuffer_Display[1312+160+3]&bit1
#define EDRCCT_Door3OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+3]&bit0
#define EDRCCT_Door3GreenLoopFault_B1                g_dataBuffer_Display[1312+160+3]&bit15

#define EDRCCT_Door4MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+4]&bit7
#define EDRCCT_Door4MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+4]&bit6
#define EDRCCT_Door4PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+4]&bit5
#define EDRCCT_Door4LockSwitchFault_B1               g_dataBuffer_Display[1312+160+4]&bit4
#define EDRCCT_Door4ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+4]&bit3
#define EDRCCT_Door4EncoderFault_B1                  g_dataBuffer_Display[1312+160+4]&bit2
#define EDRCCT_Door4OperationOverTime_B1             g_dataBuffer_Display[1312+160+4]&bit1
#define EDRCCT_Door4OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+4]&bit0
#define EDRCCT_Door4GreenLoopFault_B1                g_dataBuffer_Display[1312+160+4]&bit15

#define EDRCCT_Door5MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+5]&bit7
#define EDRCCT_Door5MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+5]&bit6
#define EDRCCT_Door5PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+5]&bit5
#define EDRCCT_Door5LockSwitchFault_B1               g_dataBuffer_Display[1312+160+5]&bit4
#define EDRCCT_Door5ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+5]&bit3
#define EDRCCT_Door5EncoderFault_B1                  g_dataBuffer_Display[1312+160+5]&bit2
#define EDRCCT_Door5OperationOverTime_B1             g_dataBuffer_Display[1312+160+5]&bit1
#define EDRCCT_Door5OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+5]&bit0
#define EDRCCT_Door5GreenLoopFault_B1                g_dataBuffer_Display[1312+160+5]&bit15

#define EDRCCT_Door6MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+6]&bit7
#define EDRCCT_Door6MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+6]&bit6
#define EDRCCT_Door6PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+6]&bit5
#define EDRCCT_Door6LockSwitchFault_B1               g_dataBuffer_Display[1312+160+6]&bit4
#define EDRCCT_Door6ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+6]&bit3
#define EDRCCT_Door6EncoderFault_B1                  g_dataBuffer_Display[1312+160+6]&bit2
#define EDRCCT_Door6OperationOverTime_B1             g_dataBuffer_Display[1312+160+6]&bit1
#define EDRCCT_Door6OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+6]&bit0
#define EDRCCT_Door6GreenLoopFault_B1                g_dataBuffer_Display[1312+160+6]&bit15

#define EDRCCT_Door7MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+7]&bit7
#define EDRCCT_Door7MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+7]&bit6
#define EDRCCT_Door7PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+7]&bit5
#define EDRCCT_Door7LockSwitchFault_B1               g_dataBuffer_Display[1312+160+7]&bit4
#define EDRCCT_Door7ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+7]&bit3
#define EDRCCT_Door7EncoderFault_B1                  g_dataBuffer_Display[1312+160+7]&bit2
#define EDRCCT_Door7OperationOverTime_B1             g_dataBuffer_Display[1312+160+7]&bit1
#define EDRCCT_Door7OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+7]&bit0
#define EDRCCT_Door7GreenLoopFault_B1                g_dataBuffer_Display[1312+160+7]&bit15

#define EDRCCT_Door8MotorIsOpenCircuit_B1            g_dataBuffer_Display[1312+160+8]&bit7
#define EDRCCT_Door8MotorOverCurrent_B1              g_dataBuffer_Display[1312+160+8]&bit6
#define EDRCCT_Door8PlateSwitchFault_B1              g_dataBuffer_Display[1312+160+8]&bit5
#define EDRCCT_Door8LockSwitchFault_B1               g_dataBuffer_Display[1312+160+8]&bit4
#define EDRCCT_Door8ElectroMagnetFault_B1            g_dataBuffer_Display[1312+160+8]&bit3
#define EDRCCT_Door8EncoderFault_B1                  g_dataBuffer_Display[1312+160+8]&bit2
#define EDRCCT_Door8OperationOverTime_B1             g_dataBuffer_Display[1312+160+8]&bit1
#define EDRCCT_Door8OutputShortCircuit_B1            g_dataBuffer_Display[1312+160+8]&bit0
#define EDRCCT_Door8GreenLoopFault_B1                g_dataBuffer_Display[1312+160+8]&bit15




//0x910
#define AC1CT_LifeSign_U16                          g_dataBuffer_Display[1440+48]
#define AC1CT_Version1_U8                           g_dataBuffer_Display[1440+48+1]%256
#define AC1CT_Version2_U8                           g_dataBuffer_Display[1440+48+1]/256
#define AC1CT_WorkMode_U8                           g_dataBuffer_Display[1440+48+2]%256
#define AC1CT_IndoorTemp_U8                         g_dataBuffer_Display[1440+48+2]/256
#define AC1CT_OutdoorTemp_U8                        g_dataBuffer_Display[1440+48+3]%256
#define AC1CT_SetTemp_U8                            g_dataBuffer_Display[1440+48+3]/256
#define AC1CT_ControlMode_B1                        g_dataBuffer_Display[1440+48+4]&bit7
#define AC1CT_HalfRunState_B1                       g_dataBuffer_Display[1440+48+4]&bit6
#define AC1CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1440+48+4]&bit5

#define AC1CT_1_1FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit7
#define AC1CT_1_2FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit6
#define AC1CT_2_1FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit5
#define AC1CT_2_2FanState_B1                        g_dataBuffer_Display[1440+48+5]&bit4
#define AC1CT_1_1CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit3
#define AC1CT_1_2CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit2
#define AC1CT_2_1CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit1
#define AC1CT_2_2CompressorState_B1                 g_dataBuffer_Display[1440+48+5]&bit0
#define AC1CT_1_1CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit15
#define AC1CT_1_2CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit14
#define AC1CT_2_1CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit13
#define AC1CT_2_2CondensateState_B1                 g_dataBuffer_Display[1440+48+5]&bit12
#define AC1CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit11
#define AC1CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit10
#define AC1CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit9
#define AC1CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1440+48+5]&bit8


//0x920
#define AC2CT_LifeSign_U16                          g_dataBuffer_Display[1456+48]
#define AC2CT_Version1_U8                           g_dataBuffer_Display[1456+48+1]%256
#define AC2CT_Version2_U8                           g_dataBuffer_Display[1456+48+1]/256
#define AC2CT_WorkMode_U8                           g_dataBuffer_Display[1456+48+2]%256
#define AC2CT_IndoorTemp_U8                         g_dataBuffer_Display[1456+48+2]/256
#define AC2CT_OutdoorTemp_U8                        g_dataBuffer_Display[1456+48+3]%256
#define AC2CT_SetTemp_U8                            g_dataBuffer_Display[1456+48+3]/256
#define AC2CT_ControlMode_B1                        g_dataBuffer_Display[1456+48+4]&bit7
#define AC2CT_HalfRunState_B1                        g_dataBuffer_Display[1456+48+4]&bit6
#define AC2CT_HeaterControlCmd_B1                    g_dataBuffer_Display[1456+48+4]&bit5

#define AC2CT_1_1FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit7
#define AC2CT_1_2FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit6
#define AC2CT_2_1FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit5
#define AC2CT_2_2FanState_B1                        g_dataBuffer_Display[1456+48+5]&bit4
#define AC2CT_1_1CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit3
#define AC2CT_1_2CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit2
#define AC2CT_2_1CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit1
#define AC2CT_2_2CompressorState_B1                 g_dataBuffer_Display[1456+48+5]&bit0
#define AC2CT_1_1CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit15
#define AC2CT_1_2CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit14
#define AC2CT_2_1CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit13
#define AC2CT_2_2CondensateState_B1                 g_dataBuffer_Display[1456+48+5]&bit12
#define AC2CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit11
#define AC2CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit10
#define AC2CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit9
#define AC2CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1456+48+5]&bit8


//0x930
#define AC3CT_LifeSign_U16                          g_dataBuffer_Display[1472+48]
#define AC3CT_Version1_U8                           g_dataBuffer_Display[1472+48+1]%256
#define AC3CT_Version2_U8                           g_dataBuffer_Display[1472+48+1]/256
#define AC3CT_WorkMode_U8                           g_dataBuffer_Display[1472+48+2]%256
#define AC3CT_IndoorTemp_U8                         g_dataBuffer_Display[1472+48+2]/256
#define AC3CT_OutdoorTemp_U8                        g_dataBuffer_Display[1472+48+3]%256
#define AC3CT_SetTemp_U8                            g_dataBuffer_Display[1472+48+3]/256
#define AC3CT_ControlMode_B1                        g_dataBuffer_Display[1472+48+4]&bit7
#define AC3CT_HalfRunState_B1                        g_dataBuffer_Display[1472+48+4]&bit6
#define AC3CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1472+48+4]&bit5


#define AC3CT_1_1FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit7
#define AC3CT_1_2FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit6
#define AC3CT_2_1FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit5
#define AC3CT_2_2FanState_B1                        g_dataBuffer_Display[1472+48+5]&bit4
#define AC3CT_1_1CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit3
#define AC3CT_1_2CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit2
#define AC3CT_2_1CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit1
#define AC3CT_2_2CompressorState_B1                 g_dataBuffer_Display[1472+48+5]&bit0
#define AC3CT_1_1CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit15
#define AC3CT_1_2CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit14
#define AC3CT_2_1CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit13
#define AC3CT_2_2CondensateState_B1                 g_dataBuffer_Display[1472+48+5]&bit12
#define AC3CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit11
#define AC3CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit10
#define AC3CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit9
#define AC3CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1472+48+5]&bit8


//0x940
#define AC4CT_LifeSign_U16                          g_dataBuffer_Display[1488+48]
#define AC4CT_Version1_U8                           g_dataBuffer_Display[1488+48+1]%256
#define AC4CT_Version2_U8                           g_dataBuffer_Display[1488+48+1]/256
#define AC4CT_WorkMode_U8                           g_dataBuffer_Display[1488+48+2]%256
#define AC4CT_IndoorTemp_U8                         g_dataBuffer_Display[1488+48+2]/256
#define AC4CT_OutdoorTemp_U8                        g_dataBuffer_Display[1488+48+3]%256
#define AC4CT_SetTemp_U8                            g_dataBuffer_Display[1488+48+3]/256
#define AC4CT_ControlMode_B1                        g_dataBuffer_Display[1488+48+4]&bit7
#define AC4CT_HalfRunState_B1                        g_dataBuffer_Display[1488+48+4]&bit6
#define AC4CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1488+48+4]&bit5

#define AC4CT_1_1FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit7
#define AC4CT_1_2FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit6
#define AC4CT_2_1FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit5
#define AC4CT_2_2FanState_B1                        g_dataBuffer_Display[1488+48+5]&bit4
#define AC4CT_1_1CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit3
#define AC4CT_1_2CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit2
#define AC4CT_2_1CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit1
#define AC4CT_2_2CompressorState_B1                 g_dataBuffer_Display[1488+48+5]&bit0
#define AC4CT_1_1CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit15
#define AC4CT_1_2CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit14
#define AC4CT_2_1CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit13
#define AC4CT_2_2CondensateState_B1                 g_dataBuffer_Display[1488+48+5]&bit12
#define AC4CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit11
#define AC4CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit10
#define AC4CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit9
#define AC4CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1488+48+5]&bit8


//0x950
#define AC5CT_LifeSign_U16                          g_dataBuffer_Display[1504+48]
#define AC5CT_Version1_U8                           g_dataBuffer_Display[1504+48+1]%256
#define AC5CT_Version2_U8                           g_dataBuffer_Display[1504+48+1]/256
#define AC5CT_WorkMode_U8                           g_dataBuffer_Display[1504+48+2]%256
#define AC5CT_IndoorTemp_U8                         g_dataBuffer_Display[1504+48+2]/256
#define AC5CT_OutdoorTemp_U8                        g_dataBuffer_Display[1504+48+3]%256
#define AC5CT_SetTemp_U8                            g_dataBuffer_Display[1504+48+3]/256
#define AC5CT_ControlMode_B1                        g_dataBuffer_Display[1504+48+4]&bit7
#define AC5CT_HalfRunState_B1                       g_dataBuffer_Display[1504+48+4]&bit6
#define AC5CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1504+48+4]&bit5

#define AC5CT_1_1FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit7
#define AC5CT_1_2FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit6
#define AC5CT_2_1FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit5
#define AC5CT_2_2FanState_B1                        g_dataBuffer_Display[1504+48+5]&bit4
#define AC5CT_1_1CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit3
#define AC5CT_1_2CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit2
#define AC5CT_2_1CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit1
#define AC5CT_2_2CompressorState_B1                 g_dataBuffer_Display[1504+48+5]&bit0
#define AC5CT_1_1CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit15
#define AC5CT_1_2CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit14
#define AC5CT_2_1CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit13
#define AC5CT_2_2CondensateState_B1                 g_dataBuffer_Display[1504+48+5]&bit12
#define AC5CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit11
#define AC5CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit10
#define AC5CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit9
#define AC5CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1504+48+5]&bit8


//0x960
#define AC6CT_LifeSign_U16                          g_dataBuffer_Display[1520+48]
#define AC6CT_Version1_U8                           g_dataBuffer_Display[1520+48+1]%256
#define AC6CT_Version2_U8                           g_dataBuffer_Display[1520+48+1]/256
#define AC6CT_WorkMode_U8                           g_dataBuffer_Display[1520+48+2]%256
#define AC6CT_IndoorTemp_U8                         g_dataBuffer_Display[1520+48+2]/256
#define AC6CT_OutdoorTemp_U8                        g_dataBuffer_Display[1520+48+3]%256
#define AC6CT_SetTemp_U8                            g_dataBuffer_Display[1520+48+3]/256
#define AC6CT_ControlMode_B1                        g_dataBuffer_Display[1520+48+4]&bit7
#define AC6CT_HalfRunState_B1                        g_dataBuffer_Display[1520+48+4]&bit6
#define AC6CT_HeaterControlCmd_B1                   g_dataBuffer_Display[1520+48+4]&bit5

#define AC6CT_1_1FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit7
#define AC6CT_1_2FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit6
#define AC6CT_2_1FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit5
#define AC6CT_2_2FanState_B1                        g_dataBuffer_Display[1520+48+5]&bit4
#define AC6CT_1_1CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit3
#define AC6CT_1_2CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit2
#define AC6CT_2_1CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit1
#define AC6CT_2_2CompressorState_B1                 g_dataBuffer_Display[1520+48+5]&bit0
#define AC6CT_1_1CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit15
#define AC6CT_1_2CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit14
#define AC6CT_2_1CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit13
#define AC6CT_2_2CondensateState_B1                 g_dataBuffer_Display[1520+48+5]&bit12
#define AC6CT_1_1PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit11
#define AC6CT_1_2PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit10
#define AC6CT_2_1PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit9
#define AC6CT_2_2PreHeaterState_B1                  g_dataBuffer_Display[1520+48+5]&bit8

//ATC_TEST*************2015_09_25


//A10
#define ATCTEST1CT_RunDirection_B1                          (g_dataBuffer_MVB[1584+4] & bit7)/128
#define ATCTEST1CT_ThisNoStop_B1                            (g_dataBuffer_MVB[1584+4] & bit6)/64
#define ATCTEST1CT_NextNoStop_B1                            (g_dataBuffer_MVB[1584+4] & bit5)/32
#define ATCTEST1CT_OpenRightDoor_B1                         (g_dataBuffer_MVB[1584+4] & bit3)/8
#define ATCTEST1CT_OpenLeftDoor_B1                          (g_dataBuffer_MVB[1584+4] & bit2)/4
#define ATCTEST1CT_StartStationID_U16                       g_dataBuffer_MVB[1584+5]
#define ATCTEST1CT_FinalStationID_U16                       g_dataBuffer_MVB[1584+6]
#define ATCTEST1CT_NextStationID_U16                        g_dataBuffer_MVB[1584+7]

#define ATCTEST1CT_DistanceToNextStation_U16                g_dataBuffer_MVB[1584+9]

//A20
#define ATCTEST2CT_RunDirection_B1                          (g_dataBuffer_MVB[1600+4] & bit7)/128
#define ATCTEST2CT_ThisNoStop_B1                            (g_dataBuffer_MVB[1600+4] & bit6)/64
#define ATCTEST2CT_NextNoStop_B1                            (g_dataBuffer_MVB[1600+4] & bit5)/32
#define ATCTEST2CT_OpenRightDoor_B1                         (g_dataBuffer_MVB[1600+4] & bit3)/8
#define ATCTEST2CT_OpenLeftDoor_B1                          (g_dataBuffer_MVB[1600+4] & bit2)/3
#define ATCTEST2CT_StartStationID_U16                       g_dataBuffer_MVB[1600+5]
#define ATCTEST2CT_FinalStationID_U16                       g_dataBuffer_MVB[1600+6]
#define ATCTEST2CT_NextStationID_U16                        g_dataBuffer_MVB[1600+7]

#define ATCTEST2CT_DistanceToNextStation_U16                g_dataBuffer_MVB[1600+9]


//B08

#define CTPISTEST_RunDirection_B1                             (g_dataBuffer_MVB[2224 + 3] & bit15)/32768
#define CTPISTEST_ThisNoStop_B1                               (g_dataBuffer_MVB[2224 + 3] & bit14)/16384
#define CTPISTEST_NextNoStop_B1                               (g_dataBuffer_MVB[2224 + 3] & bit13)/8192
#define CTPISTEST_OpenRightDoor_B1                            (g_dataBuffer_MVB[2224 + 3] & bit11)/2048
#define CTPISTEST_OpenLeftDoor_B1                             (g_dataBuffer_MVB[2224 + 3] & bit10)/1024
#define CTPISTEST_StartStationID_U16                          g_dataBuffer_MVB[2224 + 4]
#define CTPISTEST_FinalStationID_U16                          g_dataBuffer_MVB[2224 + 5]
#define CTPISTEST_NextStationID_U16                           g_dataBuffer_MVB[2224 + 6]
#define CTPISTEST_EmgcyBroadcastID_U16                        g_dataBuffer_MVB[2224 + 7]
#define CTPISTEST_DistanceToNextStation_U16                   g_dataBuffer_MVB[2224 + 8]

//B10
#define PISTEST1CT_RunDirection_B1                          (g_dataBuffer_MVB[1649] & bit15)/32768
#define PISTEST1CT_ThisNoStop_B1                            (g_dataBuffer_MVB[1649] & bit14)/16384
#define PISTEST1CT_NextNoStop_B1                            (g_dataBuffer_MVB[1649] & bit13)/8192
#define PISTEST1CT_OpenRightDoor_B1                         (g_dataBuffer_MVB[1649] & bit11)/2048
#define PISTEST1CT_OpenLeftDoor_B1                          (g_dataBuffer_MVB[1649] & bit10)/1024
#define PISTEST1CT_StartStationID_U16                       g_dataBuffer_MVB[1650]
#define PISTEST1CT_FinalStationID_U16                       g_dataBuffer_MVB[1651]
#define PISTEST1CT_NextStationID_U16                        g_dataBuffer_MVB[1652]
#define PISTEST1CT_EmgcyBroadcastID_U8                      g_dataBuffer_MVB[1653] % 256

//B20
#define PISTEST2CT_RunDirection_B1                          (g_dataBuffer_MVB[32+1649] & bit15)/32768
#define PISTEST2CT_ThisNoStop_B1                            (g_dataBuffer_MVB[32+1649] & bit14)/16384
#define PISTEST2CT_NextNoStop_B1                            (g_dataBuffer_MVB[32+1649] & bit13)/8192
#define PISTEST2CT_OpenRightDoor_B1                         (g_dataBuffer_MVB[32+1649] & bit11)/2048
#define PISTEST2CT_OpenLeftDoor_B1                          (g_dataBuffer_MVB[32+1649] & bit10)/1024
#define PISTEST2CT_StartStationID_U16                       g_dataBuffer_MVB[32+1650]
#define PISTEST2CT_FinalStationID_U16                       g_dataBuffer_MVB[32+1651]
#define PISTEST2CT_NextStationID_U16                        g_dataBuffer_MVB[32+1652]
#define PISTEST2CT_EmgcyBroadcastID_U8                      g_dataBuffer_MVB[1653] % 256

//ATC_TEST*************2015_09_25

//0xB10
#define PIS1CT_LifeSign_U16                              g_dataBuffer_Display[1648]
#define PIS1CT_Version_U8                               g_dataBuffer_Display[1649] % 256
#define PIS1CT_RunDirection_B1                          g_dataBuffer_Display[1649] & bit15
#define PIS1CT_ThisNoStop_B1                            g_dataBuffer_Display[1649] & bit14
#define PIS1CT_NextNoStop_B1                            g_dataBuffer_Display[1649] & bit13
#define PIS1CT_OpenRightDoor_B1                         g_dataBuffer_Display[1649] & bit11
#define PIS1CT_OpenLeftDoor_B1                          g_dataBuffer_Display[1649] & bit10
#define PIS1CT_StartStationID_U16                       Change_BigEen(g_dataBuffer_Display[1650])
#define PIS1CT_FinalStationID_U16                       Change_BigEen(g_dataBuffer_Display[1651])
#define PIS1CT_NextStationID_U16                        Change_BigEen(g_dataBuffer_Display[1652])
#define PIS1CT_EmgcyBroadcastID_U8                      g_dataBuffer_Display[1653] % 256
#define PIS1CT_PISMaster_B1                             g_dataBuffer_Display[1653] & bit15
#define PIS1CT_PISAutoMode_B1                           g_dataBuffer_Display[1653] & bit14
#define PIS1CT_CabCommunication_B1                      g_dataBuffer_Display[1653] & bit13
#define PIS1CT_IsBroadCasting_B1                        g_dataBuffer_Display[1653] & bit12
#define PIS1CT_OCCIsBroadCasting_B1                     g_dataBuffer_Display[1653] & bit11
#define PIS1CT_BroadcastID_U8                           g_dataBuffer_Display[1654] % 256
#define PIS1CT_Tc1EmgcyAlert1Active_B1                  g_dataBuffer_Display[1654] & bit15
#define PIS1CT_Tc1EmgcyAlert1Received_B1                g_dataBuffer_Display[1654] & bit14
#define PIS1CT_Tc1EmgcyAlert2Active_B1                  g_dataBuffer_Display[1654] & bit13
#define PIS1CT_Tc1EmgcyAlert2Received_B1                g_dataBuffer_Display[1654] & bit12
#define PIS1CT_Mp1EmgcyAlert1Active_B1                  g_dataBuffer_Display[1654] & bit11
#define PIS1CT_Mp1EmgcyAlert1Received_B1                g_dataBuffer_Display[1654] & bit10
#define PIS1CT_Mp1EmgcyAlert2Active_B1                  g_dataBuffer_Display[1654] & bit9
#define PIS1CT_Mp1EmgcyAlert2Received_B1                g_dataBuffer_Display[1654] & bit8
#define PIS1CT_M1EmgcyAlert1Active_B1                   g_dataBuffer_Display[1655] & bit7
#define PIS1CT_M1EmgcyAlert1Received_B1                 g_dataBuffer_Display[1655] & bit6
#define PIS1CT_M1EmgcyAlert2Active_B1                   g_dataBuffer_Display[1655] & bit5
#define PIS1CT_M1EmgcyAlert2Received_B1                 g_dataBuffer_Display[1655] & bit4
#define PIS1CT_M2EmgcyAlert1Active_B1                   g_dataBuffer_Display[1655] & bit3
#define PIS1CT_M2EmgcyAlert1Received_B1                 g_dataBuffer_Display[1655] & bit2
#define PIS1CT_M2EmgcyAlert2Active_B1                   g_dataBuffer_Display[1655] & bit1
#define PIS1CT_M2EmgcyAlert2Received_B1                 g_dataBuffer_Display[1655] & bit0
#define PIS1CT_Mp2EmgcyAlert1Active_B1                  g_dataBuffer_Display[1655] & bit15
#define PIS1CT_Mp2EmgcyAlert1Received_B1                g_dataBuffer_Display[1655] & bit14
#define PIS1CT_Mp2EmgcyAlert2Active_B1                  g_dataBuffer_Display[1655] & bit13
#define PIS1CT_Mp2EmgcyAlert2Received_B1                g_dataBuffer_Display[1655] & bit12
#define PIS1CT_Tc2EmgcyAlert1Active_B1                  g_dataBuffer_Display[1655] & bit11
#define PIS1CT_Tc2EmgcyAlert1Received_B1                g_dataBuffer_Display[1655] & bit10
#define PIS1CT_Tc2EmgcyAlert2Active_B1                  g_dataBuffer_Display[1655] & bit9
#define PIS1CT_Tc2EmgcyAlert2Received_B1                g_dataBuffer_Display[1655] & bit8


#define PIS1CT_Tc1EmgcyAlert3Active_B1                  g_dataBuffer_Display[1656] & bit7
#define PIS1CT_Tc1EmgcyAlert3Received_B1                g_dataBuffer_Display[1656] & bit6
#define PIS1CT_Tc1EmgcyAlert4Active_B1                  g_dataBuffer_Display[1656] & bit5
#define PIS1CT_Tc1EmgcyAlert4Received_B1                g_dataBuffer_Display[1656] & bit4
#define PIS1CT_Mp1EmgcyAlert3Active_B1                  g_dataBuffer_Display[1656] & bit3
#define PIS1CT_Mp1EmgcyAlert3Received_B1                g_dataBuffer_Display[1656] & bit2
#define PIS1CT_Mp1EmgcyAlert4Active_B1                  g_dataBuffer_Display[1656] & bit1
#define PIS1CT_Mp1EmgcyAlert4Received_B1                g_dataBuffer_Display[1656] & bit0
#define PIS1CT_M1EmgcyAlert3Active_B1                   g_dataBuffer_Display[1656] & bit15
#define PIS1CT_M1EmgcyAlert3Received_B1                 g_dataBuffer_Display[1656] & bit14
#define PIS1CT_M1EmgcyAlert4Active_B1                   g_dataBuffer_Display[1656] & bit13
#define PIS1CT_M1EmgcyAlert4Received_B1                 g_dataBuffer_Display[1656] & bit12
#define PIS1CT_M2EmgcyAlert3Active_B1                   g_dataBuffer_Display[1656] & bit11
#define PIS1CT_M2EmgcyAlert3Received_B1                 g_dataBuffer_Display[1656] & bit10
#define PIS1CT_M2EmgcyAlert4Active_B1                   g_dataBuffer_Display[1656] & bit9
#define PIS1CT_M2EmgcyAlert4Received_B1                 g_dataBuffer_Display[1656] & bit8
#define PIS1CT_Mp2EmgcyAlert3Active_B1                  g_dataBuffer_Display[1657] & bit7
#define PIS1CT_Mp2EmgcyAlert3Received_B1                g_dataBuffer_Display[1657] & bit6
#define PIS1CT_Mp2EmgcyAlert4Active_B1                  g_dataBuffer_Display[1657] & bit5
#define PIS1CT_Mp2EmgcyAlert4Received_B1                g_dataBuffer_Display[1657] & bit4
#define PIS1CT_Tc2EmgcyAlert3Active_B1                  g_dataBuffer_Display[1657] & bit3
#define PIS1CT_Tc2EmgcyAlert3Received_B1                g_dataBuffer_Display[1657] & bit2
#define PIS1CT_Tc2EmgcyAlert4Active_B1                  g_dataBuffer_Display[1657] & bit1
#define PIS1CT_Tc2EmgcyAlert4Received_B1                g_dataBuffer_Display[1657] & bit0


//0xB11

#define PIS1CT_Tc1CabControllerFault_B1                  g_dataBuffer_Display[1664] & bit7
#define PIS1CT_Tc1BroadcastControllerFault_B1            g_dataBuffer_Display[1664] & bit6
#define PIS1CT_Tc1FinalLedFault_B1                       g_dataBuffer_Display[1664] & bit5
#define PIS1CT_Tc1PassengerControllerFault_B1            g_dataBuffer_Display[1664] & bit4
#define PIS1CT_Tc1PassengerLed1Fault_B1                  g_dataBuffer_Display[1664] & bit3
#define PIS1CT_Tc1PassengerLed2Fault_B1                  g_dataBuffer_Display[1664] & bit2
#define PIS1CT_Tc1LedMap1Fault_B1                        g_dataBuffer_Display[1664] & bit1
#define PIS1CT_Tc1LedMap2Fault_B1                        g_dataBuffer_Display[1664] & bit0
#define PIS1CT_Tc1LedMap3Fault_B1                        g_dataBuffer_Display[1664] & bit15
#define PIS1CT_Tc1LedMap4Fault_B1                        g_dataBuffer_Display[1664] & bit14
#define PIS1CT_Tc1LedMap5Fault_B1                        g_dataBuffer_Display[1664] & bit13
#define PIS1CT_Tc1LedMap6Fault_B1                        g_dataBuffer_Display[1664] & bit12
#define PIS1CT_Tc1LedMap7Fault_B1                        g_dataBuffer_Display[1664] & bit11
#define PIS1CT_Tc1LedMap8Fault_B1                        g_dataBuffer_Display[1664] & bit10
#define PIS1CT_Mp1PassengerControllerFault_B1            g_dataBuffer_Display[1664] & bit9
#define PIS1CT_Mp1PassengerLed1Fault_B1                  g_dataBuffer_Display[1664] & bit8
#define PIS1CT_Mp1PassengerLed2Fault_B1                  g_dataBuffer_Display[1665] & bit7
#define PIS1CT_Mp1LedMap1Fault_B1                        g_dataBuffer_Display[1665] & bit6
#define PIS1CT_Mp1LedMap2Fault_B1                        g_dataBuffer_Display[1665] & bit5
#define PIS1CT_Mp1LedMap3Fault_B1                        g_dataBuffer_Display[1665] & bit4
#define PIS1CT_Mp1LedMap4Fault_B1                        g_dataBuffer_Display[1665] & bit3
#define PIS1CT_Mp1LedMap5Fault_B1                        g_dataBuffer_Display[1665] & bit2
#define PIS1CT_Mp1LedMap6Fault_B1                        g_dataBuffer_Display[1665] & bit1
#define PIS1CT_Mp1LedMap7Fault_B1                        g_dataBuffer_Display[1665] & bit0
#define PIS1CT_Mp1LedMap8Fault_B1                        g_dataBuffer_Display[1665] & bit15
#define PIS1CT_M1PassengerControllerFault_B1             g_dataBuffer_Display[1665] & bit14
#define PIS1CT_M1PassengerLed1Fault_B1                   g_dataBuffer_Display[1665] & bit13
#define PIS1CT_M1PassengerLed2Fault_B1                   g_dataBuffer_Display[1665] & bit12
#define PIS1CT_M1LedMap1Fault_B1                         g_dataBuffer_Display[1665] & bit11
#define PIS1CT_M1LedMap2Fault_B1                         g_dataBuffer_Display[1665] & bit10
#define PIS1CT_M1LedMap3Fault_B1                         g_dataBuffer_Display[1665] & bit9
#define PIS1CT_M1LedMap4Fault_B1                         g_dataBuffer_Display[1665] & bit8
#define PIS1CT_M1LedMap5Fault_B1                         g_dataBuffer_Display[1666] & bit7
#define PIS1CT_M1LedMap6Fault_B1                         g_dataBuffer_Display[1666] & bit6
#define PIS1CT_M1LedMap7Fault_B1                         g_dataBuffer_Display[1666] & bit5
#define PIS1CT_M1LedMap8Fault_B1                         g_dataBuffer_Display[1666] & bit4
#define PIS1CT_M2PassengerControllerFault_B1             g_dataBuffer_Display[1666] & bit3
#define PIS1CT_M2PassengerLed1Fault_B1                   g_dataBuffer_Display[1666] & bit2
#define PIS1CT_M2PassengerLed2Fault_B1                   g_dataBuffer_Display[1666] & bit1
#define PIS1CT_M2LedMap1Fault_B1                         g_dataBuffer_Display[1666] & bit0
#define PIS1CT_M2LedMap2Fault_B1                         g_dataBuffer_Display[1666] & bit15
#define PIS1CT_M2LedMap3Fault_B1                         g_dataBuffer_Display[1666] & bit14
#define PIS1CT_M2LedMap4Fault_B1                         g_dataBuffer_Display[1666] & bit13
#define PIS1CT_M2LedMap5Fault_B1                         g_dataBuffer_Display[1666] & bit12
#define PIS1CT_M2LedMap6Fault_B1                         g_dataBuffer_Display[1666] & bit11
#define PIS1CT_M2LedMap7Fault_B1                         g_dataBuffer_Display[1666] & bit10
#define PIS1CT_M2LedMap8Fault_B1                         g_dataBuffer_Display[1666] & bit9
#define PIS1CT_Mp2PassengerControllerFault_B1            g_dataBuffer_Display[1666] & bit8
#define PIS1CT_Mp2PassengerLed1Fault_B1                  g_dataBuffer_Display[1667] & bit7
#define PIS1CT_Mp2PassengerLed2Fault_B1                  g_dataBuffer_Display[1667] & bit6
#define PIS1CT_Mp2LedMap1Fault_B1                        g_dataBuffer_Display[1667] & bit5
#define PIS1CT_Mp2LedMap2Fault_B1                        g_dataBuffer_Display[1667] & bit4
#define PIS1CT_Mp2LedMap3Fault_B1                        g_dataBuffer_Display[1667] & bit3
#define PIS1CT_Mp2LedMap4Fault_B1                        g_dataBuffer_Display[1667] & bit2
#define PIS1CT_Mp2LedMap5Fault_B1                        g_dataBuffer_Display[1667] & bit1
#define PIS1CT_Mp2LedMap6Fault_B1                        g_dataBuffer_Display[1667] & bit0
#define PIS1CT_Mp2LedMap7Fault_B1                        g_dataBuffer_Display[1667] & bit15
#define PIS1CT_Mp2LedMap8Fault_B1                        g_dataBuffer_Display[1667] & bit14
#define PIS1CT_Tc2CabControllerFault_B1                  g_dataBuffer_Display[1667] & bit13
#define PIS1CT_Tc2BroadcastControllerFault_B1            g_dataBuffer_Display[1667] & bit12
#define PIS1CT_Tc2FinalLedFault_B1                       g_dataBuffer_Display[1667] & bit11
#define PIS1CT_Tc2PassengerControllerFault_B             g_dataBuffer_Display[1667] & bit10
#define PIS1CT_Tc2PassengerLed1Fault_B1                  g_dataBuffer_Display[1667] & bit9
#define PIS1CT_Tc2PassengerLed2Fault_B1                  g_dataBuffer_Display[1667] & bit8
#define PIS1CT_Tc2LedMap1Fault_B1                        g_dataBuffer_Display[1668] & bit7
#define PIS1CT_Tc2LedMap2Fault_B1                        g_dataBuffer_Display[1668] & bit6
#define PIS1CT_Tc2LedMap3Fault_B1                        g_dataBuffer_Display[1668] & bit5
#define PIS1CT_Tc2LedMap4Fault_B1                        g_dataBuffer_Display[1668] & bit4
#define PIS1CT_Tc2LedMap5Fault_B1                        g_dataBuffer_Display[1668] & bit3
#define PIS1CT_Tc2LedMap6Fault_B1                        g_dataBuffer_Display[1668] & bit2
#define PIS1CT_Tc2LedMap7Fault_B1                        g_dataBuffer_Display[1668] & bit1
#define PIS1CT_Tc2LedMap8Fault_B1                        g_dataBuffer_Display[1668] & bit0
#define PIS1CT_Tc1Camera1Fault_B1                        g_dataBuffer_Display[1668] & bit15
#define PIS1CT_Tc1Camera2Fault_B1                        g_dataBuffer_Display[1668] & bit14
#define PIS1CT_Tc1Camera3Fault_B1                        g_dataBuffer_Display[1668] & bit13
#define PIS1CT_Mp1Camera1Fault_B1                        g_dataBuffer_Display[1668] & bit12
#define PIS1CT_Mp1Camera2Fault_B1                        g_dataBuffer_Display[1668] & bit11
#define PIS1CT_M1Camera1Fault_B1                         g_dataBuffer_Display[1668] & bit10
#define PIS1CT_M1Camera2Fault_B1                         g_dataBuffer_Display[1668] & bit9
#define PIS1CT_M2Camera1Fault_B1                         g_dataBuffer_Display[1668] & bit8
#define PIS1CT_M2Camera2Fault_B1                         g_dataBuffer_Display[1669] & bit7
#define PIS1CT_Mp2Camera1Fault_B1                        g_dataBuffer_Display[1669] & bit6
#define PIS1CT_Mp2Camera2Fault_B1                        g_dataBuffer_Display[1669] & bit5
#define PIS1CT_Tc2Camera1Fault_B1                        g_dataBuffer_Display[1669] & bit4
#define PIS1CT_Tc2Camera2Fault_B1                        g_dataBuffer_Display[1669] & bit3
#define PIS1CT_Tc2Camera3Fault_B1                        g_dataBuffer_Display[1669] & bit2



//0xB20
#define PIS2CT_LifeSign_U16                             g_dataBuffer_Display[32+1648]
#define PIS2CT_Version_U8                               g_dataBuffer_Display[32+1649] % 256
#define PIS2CT_RunDirection_B1                          g_dataBuffer_Display[32+1649] & bit15
#define PIS2CT_ThisNoStop_B1                            g_dataBuffer_Display[32+1649] & bit14
#define PIS2CT_NextNoStop_B1                            g_dataBuffer_Display[32+1649] & bit13
#define PIS2CT_OpenRightDoor_B1                         g_dataBuffer_Display[32+1649] & bit11
#define PIS2CT_OpenLeftDoor_B1                          g_dataBuffer_Display[32+1649] & bit10
#define PIS2CT_StartStationID_U16                       Change_BigEen(g_dataBuffer_Display[32+1650])
#define PIS2CT_FinalStationID_U16                       Change_BigEen(g_dataBuffer_Display[32+1651])
#define PIS2CT_NextStationID_U16                        Change_BigEen(g_dataBuffer_Display[32+1652])
#define PIS2CT_EmgcyBroadcastID_U8                      g_dataBuffer_Display[32+1653] % 256
#define PIS2CT_PISMaster_B1                             g_dataBuffer_Display[32+1653] & bit15
#define PIS2CT_PISAutoMode_B1                           g_dataBuffer_Display[32+1653] & bit14
#define PIS2CT_CabCommunication_B1                      g_dataBuffer_Display[32+1653] & bit13
#define PIS2CT_IsBroadCasting_B1                        g_dataBuffer_Display[32+1653] & bit12
#define PIS2CT_OCCIsBroadCasting_B1                     g_dataBuffer_Display[32+1653] & bit11
#define PIS2CT_BroadcastID_U8                           g_dataBuffer_Display[32+1654] % 256
#define PIS2CT_Tc1EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1654] & bit15
#define PIS2CT_Tc1EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1654] & bit14
#define PIS2CT_Tc1EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1654] & bit13
#define PIS2CT_Tc1EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1654] & bit12
#define PIS2CT_Mp1EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1654] & bit11
#define PIS2CT_Mp1EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1654] & bit10
#define PIS2CT_Mp1EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1654] & bit9
#define PIS2CT_Mp1EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1654] & bit8
#define PIS2CT_M1EmgcyAlert1Active_B1                   g_dataBuffer_Display[32+1655] & bit7
#define PIS2CT_M1EmgcyAlert1Received_B1                 g_dataBuffer_Display[32+1655] & bit6
#define PIS2CT_M1EmgcyAlert2Active_B1                   g_dataBuffer_Display[32+1655] & bit5
#define PIS2CT_M1EmgcyAlert2Received_B1                 g_dataBuffer_Display[32+1655] & bit4
#define PIS2CT_M2EmgcyAlert1Active_B1                   g_dataBuffer_Display[32+1655] & bit3
#define PIS2CT_M2EmgcyAlert1Received_B1                 g_dataBuffer_Display[32+1655] & bit2
#define PIS2CT_M2EmgcyAlert2Active_B1                   g_dataBuffer_Display[32+1655] & bit1
#define PIS2CT_M2EmgcyAlert2Received_B1                 g_dataBuffer_Display[32+1655] & bit0
#define PIS2CT_Mp2EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1655] & bit15
#define PIS2CT_Mp2EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1655] & bit14
#define PIS2CT_Mp2EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1655] & bit13
#define PIS2CT_Mp2EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1655] & bit12
#define PIS2CT_Tc2EmgcyAlert1Active_B1                  g_dataBuffer_Display[32+1655] & bit11
#define PIS2CT_Tc2EmgcyAlert1Received_B1                g_dataBuffer_Display[32+1655] & bit10
#define PIS2CT_Tc2EmgcyAlert2Active_B1                  g_dataBuffer_Display[32+1655] & bit9
#define PIS2CT_Tc2EmgcyAlert2Received_B1                g_dataBuffer_Display[32+1655] & bit8

#define PIS2CT_Tc1EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1656] & bit7
#define PIS2CT_Tc1EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1656] & bit6
#define PIS2CT_Tc1EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1656] & bit5
#define PIS2CT_Tc1EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1656] & bit4
#define PIS2CT_Mp1EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1656] & bit3
#define PIS2CT_Mp1EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1656] & bit2
#define PIS2CT_Mp1EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1656] & bit1
#define PIS2CT_Mp1EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1656] & bit0
#define PIS2CT_M1EmgcyAlert3Active_B1                   g_dataBuffer_Display[32+1656] & bit15
#define PIS2CT_M1EmgcyAlert3Received_B1                 g_dataBuffer_Display[32+1656] & bit14
#define PIS2CT_M1EmgcyAlert4Active_B1                   g_dataBuffer_Display[32+1656] & bit13
#define PIS2CT_M1EmgcyAlert4Received_B1                 g_dataBuffer_Display[32+1656] & bit12
#define PIS2CT_M2EmgcyAlert3Active_B1                   g_dataBuffer_Display[32+1656] & bit11
#define PIS2CT_M2EmgcyAlert3Received_B1                 g_dataBuffer_Display[32+1656] & bit10
#define PIS2CT_M2EmgcyAlert4Active_B1                   g_dataBuffer_Display[32+1656] & bit9
#define PIS2CT_M2EmgcyAlert4Received_B1                 g_dataBuffer_Display[32+1656] & bit8
#define PIS2CT_Mp2EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1657] & bit7
#define PIS2CT_Mp2EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1657] & bit6
#define PIS2CT_Mp2EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1657] & bit5
#define PIS2CT_Mp2EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1657] & bit4
#define PIS2CT_Tc2EmgcyAlert3Active_B1                  g_dataBuffer_Display[32+1657] & bit3
#define PIS2CT_Tc2EmgcyAlert3Received_B1                g_dataBuffer_Display[32+1657] & bit2
#define PIS2CT_Tc2EmgcyAlert4Active_B1                  g_dataBuffer_Display[32+1657] & bit1
#define PIS2CT_Tc2EmgcyAlert4Received_B1                g_dataBuffer_Display[32+1657] & bit0




//0xB21

#define PIS2CT_Tc1CabControllerFault_B1                  g_dataBuffer_Display[32+1664] & bit7
#define PIS2CT_Tc1BroadcastControllerFault_B1            g_dataBuffer_Display[32+1664] & bit6
#define PIS2CT_Tc1FinalLedFault_B1                       g_dataBuffer_Display[32+1664] & bit5
#define PIS2CT_Tc1PassengerControllerFault_B1            g_dataBuffer_Display[32+1664] & bit4
#define PIS2CT_Tc1PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1664] & bit3
#define PIS2CT_Tc1PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1664] & bit2
#define PIS2CT_Tc1LedMap1Fault_B1                        g_dataBuffer_Display[32+1664] & bit1
#define PIS2CT_Tc1LedMap2Fault_B1                        g_dataBuffer_Display[32+1664] & bit0
#define PIS2CT_Tc1LedMap3Fault_B1                        g_dataBuffer_Display[32+1664] & bit15
#define PIS2CT_Tc1LedMap4Fault_B1                        g_dataBuffer_Display[32+1664] & bit14
#define PIS2CT_Tc1LedMap5Fault_B1                        g_dataBuffer_Display[32+1664] & bit13
#define PIS2CT_Tc1LedMap6Fault_B1                        g_dataBuffer_Display[32+1664] & bit12
#define PIS2CT_Tc1LedMap7Fault_B1                        g_dataBuffer_Display[32+1664] & bit11
#define PIS2CT_Tc1LedMap8Fault_B1                        g_dataBuffer_Display[32+1664] & bit10
#define PIS2CT_Mp1PassengerControllerFault_B1            g_dataBuffer_Display[32+1664] & bit9
#define PIS2CT_Mp1PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1664] & bit8
#define PIS2CT_Mp1PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1665] & bit7
#define PIS2CT_Mp1LedMap1Fault_B1                        g_dataBuffer_Display[32+1665] & bit6
#define PIS2CT_Mp1LedMap2Fault_B1                        g_dataBuffer_Display[32+1665] & bit5
#define PIS2CT_Mp1LedMap3Fault_B1                        g_dataBuffer_Display[32+1665] & bit4
#define PIS2CT_Mp1LedMap4Fault_B1                        g_dataBuffer_Display[32+1665] & bit3
#define PIS2CT_Mp1LedMap5Fault_B1                        g_dataBuffer_Display[32+1665] & bit2
#define PIS2CT_Mp1LedMap6Fault_B1                        g_dataBuffer_Display[32+1665] & bit1
#define PIS2CT_Mp1LedMap7Fault_B1                        g_dataBuffer_Display[32+1665] & bit0
#define PIS2CT_Mp1LedMap8Fault_B1                        g_dataBuffer_Display[32+1665] & bit15
#define PIS2CT_M1PassengerControllerFault_B1             g_dataBuffer_Display[32+1665] & bit14
#define PIS2CT_M1PassengerLed1Fault_B1                   g_dataBuffer_Display[32+1665] & bit13
#define PIS2CT_M1PassengerLed2Fault_B1                   g_dataBuffer_Display[32+1665] & bit12
#define PIS2CT_M1LedMap1Fault_B1                         g_dataBuffer_Display[32+1665] & bit11
#define PIS2CT_M1LedMap2Fault_B1                         g_dataBuffer_Display[32+1665] & bit10
#define PIS2CT_M1LedMap3Fault_B1                         g_dataBuffer_Display[32+1665] & bit9
#define PIS2CT_M1LedMap4Fault_B1                         g_dataBuffer_Display[32+1665] & bit8
#define PIS2CT_M1LedMap5Fault_B1                         g_dataBuffer_Display[32+1666] & bit7
#define PIS2CT_M1LedMap6Fault_B1                         g_dataBuffer_Display[32+1666] & bit6
#define PIS2CT_M1LedMap7Fault_B1                         g_dataBuffer_Display[32+1666] & bit5
#define PIS2CT_M1LedMap8Fault_B1                         g_dataBuffer_Display[32+1666] & bit4
#define PIS2CT_M2PassengerControllerFault_B1             g_dataBuffer_Display[32+1666] & bit3
#define PIS2CT_M2PassengerLed1Fault_B1                   g_dataBuffer_Display[32+1666] & bit2
#define PIS2CT_M2PassengerLed2Fault_B1                   g_dataBuffer_Display[32+1666] & bit1
#define PIS2CT_M2LedMap1Fault_B1                         g_dataBuffer_Display[32+1666] & bit0
#define PIS2CT_M2LedMap2Fault_B1                         g_dataBuffer_Display[32+1666] & bit15
#define PIS2CT_M2LedMap3Fault_B1                         g_dataBuffer_Display[32+1666] & bit14
#define PIS2CT_M2LedMap4Fault_B1                         g_dataBuffer_Display[32+1666] & bit13
#define PIS2CT_M2LedMap5Fault_B1                         g_dataBuffer_Display[32+1666] & bit12
#define PIS2CT_M2LedMap6Fault_B1                         g_dataBuffer_Display[32+1666] & bit11
#define PIS2CT_M2LedMap7Fault_B1                         g_dataBuffer_Display[32+1666] & bit10
#define PIS2CT_M2LedMap8Fault_B1                         g_dataBuffer_Display[32+1666] & bit9
#define PIS2CT_Mp2PassengerControllerFault_B1            g_dataBuffer_Display[32+1666] & bit8
#define PIS2CT_Mp2PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1667] & bit7
#define PIS2CT_Mp2PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1667] & bit6
#define PIS2CT_Mp2LedMap1Fault_B1                        g_dataBuffer_Display[32+1667] & bit5
#define PIS2CT_Mp2LedMap2Fault_B1                        g_dataBuffer_Display[32+1667] & bit4
#define PIS2CT_Mp2LedMap3Fault_B1                        g_dataBuffer_Display[32+1667] & bit3
#define PIS2CT_Mp2LedMap4Fault_B1                        g_dataBuffer_Display[32+1667] & bit2
#define PIS2CT_Mp2LedMap5Fault_B1                        g_dataBuffer_Display[32+1667] & bit1
#define PIS2CT_Mp2LedMap6Fault_B1                        g_dataBuffer_Display[32+1667] & bit0
#define PIS2CT_Mp2LedMap7Fault_B1                        g_dataBuffer_Display[32+1667] & bit15
#define PIS2CT_Mp2LedMap8Fault_B1                        g_dataBuffer_Display[32+1667] & bit14
#define PIS2CT_Tc2CabControllerFault_B1                  g_dataBuffer_Display[32+1667] & bit13
#define PIS2CT_Tc2BroadcastControllerFault_B1            g_dataBuffer_Display[32+1667] & bit12
#define PIS2CT_Tc2FinalLedFault_B1                       g_dataBuffer_Display[32+1667] & bit11
#define PIS2CT_Tc2PassengerControllerFault_B             g_dataBuffer_Display[32+1667] & bit10
#define PIS2CT_Tc2PassengerLed1Fault_B1                  g_dataBuffer_Display[32+1667] & bit9
#define PIS2CT_Tc2PassengerLed2Fault_B1                  g_dataBuffer_Display[32+1667] & bit8
#define PIS2CT_Tc2LedMap1Fault_B1                        g_dataBuffer_Display[32+1668] & bit7
#define PIS2CT_Tc2LedMap2Fault_B1                        g_dataBuffer_Display[32+1668] & bit6
#define PIS2CT_Tc2LedMap3Fault_B1                        g_dataBuffer_Display[32+1668] & bit5
#define PIS2CT_Tc2LedMap4Fault_B1                        g_dataBuffer_Display[32+1668] & bit4
#define PIS2CT_Tc2LedMap5Fault_B1                        g_dataBuffer_Display[32+1668] & bit3
#define PIS2CT_Tc2LedMap6Fault_B1                        g_dataBuffer_Display[32+1668] & bit2
#define PIS2CT_Tc2LedMap7Fault_B1                        g_dataBuffer_Display[32+1668] & bit1
#define PIS2CT_Tc2LedMap8Fault_B1                        g_dataBuffer_Display[32+1668] & bit0
#define PIS2CT_Tc1Camera1Fault_B1                        g_dataBuffer_Display[32+1668] & bit15
#define PIS2CT_Tc1Camera2Fault_B1                        g_dataBuffer_Display[32+1668] & bit14
#define PIS2CT_Tc1Camera3Fault_B1                        g_dataBuffer_Display[32+1668] & bit13
#define PIS2CT_Mp1Camera1Fault_B1                        g_dataBuffer_Display[32+1668] & bit12
#define PIS2CT_Mp1Camera2Fault_B1                        g_dataBuffer_Display[32+1668] & bit11
#define PIS2CT_M1Camera1Fault_B1                         g_dataBuffer_Display[32+1668] & bit10
#define PIS2CT_M1Camera2Fault_B1                         g_dataBuffer_Display[32+1668] & bit9
#define PIS2CT_M2Camera1Fault_B1                         g_dataBuffer_Display[32+1668] & bit8
#define PIS2CT_M2Camera2Fault_B1                         g_dataBuffer_Display[32+1669] & bit7
#define PIS2CT_Mp2Camera1Fault_B1                        g_dataBuffer_Display[32+1669] & bit6
#define PIS2CT_Mp2Camera2Fault_B1                        g_dataBuffer_Display[32+1669] & bit5
#define PIS2CT_Tc2Camera1Fault_B1                        g_dataBuffer_Display[32+1669] & bit4
#define PIS2CT_Tc2Camera2Fault_B1                        g_dataBuffer_Display[32+1669] & bit3
#define PIS2CT_Tc2Camera3Fault_B1                        g_dataBuffer_Display[32+1669] & bit2



//0xB08

#define CTPIS_TrainVelocity_U16                           g_dataBuffer_Display[2408]
#define CTPIS_EmgcyBroadcastID_U8                         g_dataBuffer_Display[2409] % 256
#define CTPIS_ATCLifeSign_U8                              g_dataBuffer_Display[2411] % 256
#define CTPIS_RunDirection_B1                             g_dataBuffer_Display[2411] & bit15
#define CTPIS_ThisNoStop_B1                               g_dataBuffer_Display[2411] & bit14
#define CTPIS_NextNoStop_B1                               g_dataBuffer_Display[2411] & bit13
#define CTPIS_OpenRightDoor_B1                            g_dataBuffer_Display[2411] & bit12
#define CTPIS_OpenLeftDoor_B1                             g_dataBuffer_Display[2411] & bit11
#define CTPIS_StartStationID_U16                          g_dataBuffer_Display[2412]
#define CTPIS_FinalStationID_U16                          g_dataBuffer_Display[2413]
#define CTPIS_NextStationID_U16                           g_dataBuffer_Display[2414]
#define CTPIS_EmgcyBroadcastID_U16                        g_dataBuffer_Display[2415]
#define CTPIS_DistanceToNextStation_U16                   g_dataBuffer_Display[2416]
#define CTPIS_Tc1IsActive_B1                              g_dataBuffer_Display[2418] & bit7
#define CTPIS_Tc2IsActive_B1                              g_dataBuffer_Display[2418] & bit6
#define CTPIS_CloseRightDoorCMD_B1                        g_dataBuffer_Display[2418] & bit5
#define CTPIS_OpenRightDoorCMD_B1                         g_dataBuffer_Display[2418] & bit4
#define CTPIS_CloseLeftDoorC_B1                           g_dataBuffer_Display[2418] & bit3
#define CTPIS_OpenLeftDoorCMD_B1                          g_dataBuffer_Display[2418] & bit2
#define CTPIS_AllDoorClosed_B1                            g_dataBuffer_Display[2418] & bit1
#define CTPIS_ATOIsActive_B1                              g_dataBuffer_Display[2418] & bit0
#define CTPIS_Cab1CameraActive_B1                         g_dataBuffer_Display[2418] & bit15
#define CTPIS_Tc1Camera1Active_B1                         g_dataBuffer_Display[2418] & bit14
#define CTPIS_Tc1Camera2Active_B1                         g_dataBuffer_Display[2418] & bit13
#define CTPIS_Mp1Camera1Active_B1                         g_dataBuffer_Display[2418] & bit12
#define CTPIS_Mp1Camera2Active_B1                         g_dataBuffer_Display[2418] & bit11
#define CTPIS_M1Camera1Active_B1                          g_dataBuffer_Display[2418] & bit10
#define CTPIS_M1Camera2Active_B1                          g_dataBuffer_Display[2418] & bit9
#define CTPIS_M2Camera1Active_B1                          g_dataBuffer_Display[2418] & bit8
#define CTPIS_M2Camera2Active_B1                          g_dataBuffer_Display[2418] & bit8
#define CTPIS_Mp2Camera1Active_B1                         g_dataBuffer_Display[2419] & bit7
#define CTPIS_Mp2Camera2Active_B1                         g_dataBuffer_Display[2419] & bit6
#define CTPIS_Tc2Camera1Active_B1                         g_dataBuffer_Display[2419] & bit5
#define CTPIS_Tc2Camera2Active_B1                         g_dataBuffer_Display[2419] & bit4
#define CTPIS_Cab2CameraActive_B1                         g_dataBuffer_Display[2419] & bit3

#define CTPIS_Fault1_B1                                   g_dataBuffer_Display[2419] & bit15
#define CTPIS_Fault2_B1                                   g_dataBuffer_Display[2419] & bit14
#define CTPIS_Fault3_B1                                   g_dataBuffer_Display[2419] & bit13
#define CTPIS_Fault4_B1                                   g_dataBuffer_Display[2419] & bit12
#define CTPIS_Fault5_B1                                   g_dataBuffer_Display[2419] & bit11
#define CTPIS_Fault6_B1                                   g_dataBuffer_Display[2419] & bit10
#define CTPIS_Fault7_B1                                   g_dataBuffer_Display[2419] & bit9
#define CTPIS_Fault8_B1                                   g_dataBuffer_Display[2419] & bit8
#define CTPIS_Fault9_B1                                   g_dataBuffer_Display[2420] & bit7
#define CTPIS_Fault10_B1                                  g_dataBuffer_Display[2420] & bit6
#define CTPIS_Fault11_B1                                  g_dataBuffer_Display[2420] & bit5
#define CTPIS_Fault12_B1                                  g_dataBuffer_Display[2420] & bit4
#define CTPIS_Fault13_B1                                  g_dataBuffer_Display[2420] & bit3
#define CTPIS_Fault14_B1                                  g_dataBuffer_Display[2420] & bit2
#define CTPIS_Fault15_B1                                  g_dataBuffer_Display[2420] & bit1
#define CTPIS_Fault16_B1                                  g_dataBuffer_Display[2420] & bit0
#define CTPIS_Fault17_B1                                  g_dataBuffer_Display[2420 & bit15
#define CTPIS_Fault18_B1                                  g_dataBuffer_Display[2420] & bit14
#define CTPIS_Fault19_B1                                  g_dataBuffer_Display[2420] & bit13
#define CTPIS_Fault20_B1                                  g_dataBuffer_Display[2420] & bit12
#define CTPIS_Fault21_B1                                   g_dataBuffer_Display[2420] & bit11
#define CTPIS_Fault22_B1                                   g_dataBuffer_Display[2420] & bit10
#define CTPIS_Fault23_B1                                   g_dataBuffer_Display[2420] & bit9
#define CTPIS_Fault24_B1                                   g_dataBuffer_Display[2420] & bit8
#define CTPIS_Fault25_B1                                   g_dataBuffer_Display[2421] & bit7
#define CTPIS_Fault26_B1                                   g_dataBuffer_Display[2421] & bit6
#define CTPIS_Fault27_B1                                   g_dataBuffer_Display[2421] & bit5
#define CTPIS_Fault28_B1                                   g_dataBuffer_Display[2421] & bit4
#define CTPIS_Fault29_B1                                   g_dataBuffer_Display[2421] & bit3
#define CTPIS_Fault30_B1                                  g_dataBuffer_Display[2421] & bit2
#define CTPIS_Fault31_B1                                  g_dataBuffer_Display[2421] & bit1
#define CTPIS_Fault32_B1                                  g_dataBuffer_Display[2421] & bit0
#define CTPIS_Fault33_B1                                  g_dataBuffer_Display[2421] & bit15
#define CTPIS_Fault34_B1                                  g_dataBuffer_Display[2421] & bit14
#define CTPIS_Fault35_B1                                  g_dataBuffer_Display[2421] & bit13
#define CTPIS_Fault36_B1                                  g_dataBuffer_Display[2421] & bit12
#define CTPIS_Fault37_B1                                  g_dataBuffer_Display[2421] & bit11
#define CTPIS_Fault38_B1                                  g_dataBuffer_Display[2421] & bit10
#define CTPIS_Fault39_B1                                  g_dataBuffer_Display[2421] & bit9
#define CTPIS_Fault40_B1                                  g_dataBuffer_Display[2421] & bit8
#define CTPIS_Fault41_B1                                  g_dataBuffer_Display[2422] & bit7
#define CTPIS_Fault42_B1                                  g_dataBuffer_Display[2422] & bit6
#define CTPIS_Fault43_B1                                  g_dataBuffer_Display[2422] & bit5
#define CTPIS_Fault44_B1                                  g_dataBuffer_Display[2422] & bit4
#define CTPIS_Fault45_B1                                  g_dataBuffer_Display[2422] & bit3
#define CTPIS_Fault46_B1                                  g_dataBuffer_Display[2422] & bit2
#define CTPIS_Fault47_B1                                  g_dataBuffer_Display[2422] & bit1
#define CTPIS_Fault48_B1                                  g_dataBuffer_Display[2422] & bit0
#define CTPIS_Fault49_B1                                  g_dataBuffer_Display[2422] & bit15
#define CTPIS_Fault50_B1                                  g_dataBuffer_Display[2422] & bit14
#define CTPIS_Fault51_B1                                  g_dataBuffer_Display[2422] & bit13
#define CTPIS_Fault52_B1                                  g_dataBuffer_Display[2422] & bit12
#define CTPIS_Fault53_B1                                  g_dataBuffer_Display[2422] & bit11
#define CTPIS_Fault54_B1                                  g_dataBuffer_Display[2422] & bit10
#define CTPIS_Fault55_B1                                  g_dataBuffer_Display[2422] & bit9
#define CTPIS_Fault56_B1                                  g_dataBuffer_Display[2422] & bit8
#define CTPIS_Fault57_B1                                  g_dataBuffer_Display[2423] & bit7
#define CTPIS_Fault58_B1                                  g_dataBuffer_Display[2423] & bit6
#define CTPIS_Fault59_B1                                  g_dataBuffer_Display[2423] & bit5
#define CTPIS_Fault60_B1                                  g_dataBuffer_Display[2423] & bit4
#define CTPIS_Fault61_B1                                  g_dataBuffer_Display[2423] & bit3
#define CTPIS_Fault62_B1                                  g_dataBuffer_Display[2423] & bit2
#define CTPIS_Fault63_B1                                  g_dataBuffer_Display[2423] & bit1
#define CTPIS_Fault64_B1                                  g_dataBuffer_Display[2423] & bit0
#define CTPIS_Fault65_B1                                  g_dataBuffer_Display[2423] & bit15
#define CTPIS_Fault66_B1                                  g_dataBuffer_Display[2423] & bit14
#define CTPIS_Fault67_B1                                  g_dataBuffer_Display[2423] & bit13
#define CTPIS_Fault68_B1                                  g_dataBuffer_Display[2423] & bit12
#define CTPIS_Fault69_B1                                  g_dataBuffer_Display[2423] & bit11
#define CTPIS_Fault70_B1                                  g_dataBuffer_Display[2423] & bit10
#define CTPIS_Fault71_B1                                  g_dataBuffer_Display[2423] & bit9
#define CTPIS_Fault72_B1                                  g_dataBuffer_Display[2423] & bit8

//0XC10

#define FAU1CT_LifeSign_U8                     g_dataBuffer_Display[1712]%256
#define FAU1CT_CommuFaultBtwnFDCU_B1           g_dataBuffer_Display[1712]&bit15
#define FAU1CT_VersionX_U8                     g_dataBuffer_Display[1713]%256
#define FAU1CT_VersionY_U8                     g_dataBuffer_Display[1713]/256

#define FAU1CT_FAU1Iso_B1                      g_dataBuffer_Display[1714]&bit7
#define FAU1CT_FAU1FaultShortCircuit_B1        g_dataBuffer_Display[1714]&bit5
#define FAU1CT_FAU1FaultOpenCircuit_B1         g_dataBuffer_Display[1714]&bit4
#define FAU1CT_FAU1FaultFan_B1                 g_dataBuffer_Display[1714]&bit3
#define FAU1CT_FAU1Pollute_B1                  g_dataBuffer_Display[1714]&bit2
#define FAU1CT_FAU1FaultCommu_B1               g_dataBuffer_Display[1714]&bit1
#define FAU1CT_FAU1FireAlert_B1                g_dataBuffer_Display[1714]&bit0

#define FAU1CT_FAU2Iso_B1                      g_dataBuffer_Display[1714]&bit15
#define FAU1CT_FAU2FaultShortCircuit_B1        g_dataBuffer_Display[1714]&bit13
#define FAU1CT_FAU2FaultOpenCircuit_B1         g_dataBuffer_Display[1714]&bit12
#define FAU1CT_FAU2FaultFan_B1                 g_dataBuffer_Display[1714]&bit11
#define FAU1CT_FAU2Pollute_B1                  g_dataBuffer_Display[1714]&bit10
#define FAU1CT_FAU2FaultCommu_B1               g_dataBuffer_Display[1714]&bit9
#define FAU1CT_FAU2FireAlert_B1                g_dataBuffer_Display[1714]&bit8

#define FAU1CT_FAU3Iso_B1                      g_dataBuffer_Display[1715]&bit7
#define FAU1CT_FAU3FaultShortCircuit_B1        g_dataBuffer_Display[1715]&bit5
#define FAU1CT_FAU3FaultOpenCircuit_B1         g_dataBuffer_Display[1715]&bit4
#define FAU1CT_FAU3FaultFan_B1                 g_dataBuffer_Display[1715]&bit3
#define FAU1CT_FAU3Pollute_B1                  g_dataBuffer_Display[1715]&bit2
#define FAU1CT_FAU3FaultCommu_B1               g_dataBuffer_Display[1715]&bit1
#define FAU1CT_FAU3FireAlert_B1                g_dataBuffer_Display[1715]&bit0

#define FAU1CT_FAU4Iso_B1                      g_dataBuffer_Display[1715]&bit15
#define FAU1CT_FAU4FaultShortCircuit_B1        g_dataBuffer_Display[1715]&bit13
#define FAU1CT_FAU4FaultOpenCircuit_B1         g_dataBuffer_Display[1715]&bit12
#define FAU1CT_FAU4FaultFan_B1                 g_dataBuffer_Display[1715]&bit11
#define FAU1CT_FAU4Pollute_B1                  g_dataBuffer_Display[1715]&bit10
#define FAU1CT_FAU4FaultCommu_B1               g_dataBuffer_Display[1715]&bit9
#define FAU1CT_FAU4FireAlert_B1                g_dataBuffer_Display[1715]&bit8

#define FAU1CT_FAU5Iso_B1                      g_dataBuffer_Display[1716]&bit7
#define FAU1CT_FAU5FaultShortCircuit_B1        g_dataBuffer_Display[1716]&bit5
#define FAU1CT_FAU5FaultOpenCircuit_B1         g_dataBuffer_Display[1716]&bit4
#define FAU1CT_FAU5FaultFan_B1                 g_dataBuffer_Display[1716]&bit3
#define FAU1CT_FAU5Pollute_B1                  g_dataBuffer_Display[1716]&bit2
#define FAU1CT_FAU5FaultCommu_B1               g_dataBuffer_Display[1716]&bit1
#define FAU1CT_FAU5FireAlert_B1                g_dataBuffer_Display[1716]&bit0

#define FAU1CT_FAU6Iso_B1                      g_dataBuffer_Display[1716]&bit15
#define FAU1CT_FAU6FaultShortCircuit_B1        g_dataBuffer_Display[1716]&bit13
#define FAU1CT_FAU6FaultOpenCircuit_B1         g_dataBuffer_Display[1716]&bit12
#define FAU1CT_FAU6FaultFan_B1                 g_dataBuffer_Display[1716]&bit11
#define FAU1CT_FAU6Pollute_B1                  g_dataBuffer_Display[1716]&bit10
#define FAU1CT_FAU6FaultCommu_B1               g_dataBuffer_Display[1716]&bit9
#define FAU1CT_FAU6FireAlert_B1                g_dataBuffer_Display[1716]&bit8

#define FAU1CT_FAU7Iso_B1                      g_dataBuffer_Display[1717]&bit7
#define FAU1CT_FAU7FaultShortCircuit_B1        g_dataBuffer_Display[1717]&bit5
#define FAU1CT_FAU7FaultOpenCircuit_B1         g_dataBuffer_Display[1717]&bit4
#define FAU1CT_FAU7FaultFan_B1                 g_dataBuffer_Display[1717]&bit3
#define FAU1CT_FAU7Pollute_B1                  g_dataBuffer_Display[1717]&bit2
#define FAU1CT_FAU7FaultCommu_B1               g_dataBuffer_Display[1717]&bit1
#define FAU1CT_FAU7FireAlert_B1                g_dataBuffer_Display[1717]&bit0

#define FAU1CT_FAU8Iso_B1                      g_dataBuffer_Display[1717]&bit15
#define FAU1CT_FAU8FaultShortCircuit_B1        g_dataBuffer_Display[1717]&bit13
#define FAU1CT_FAU8FaultOpenCircuit_B1         g_dataBuffer_Display[1717]&bit12
#define FAU1CT_FAU8FaultFan_B1                 g_dataBuffer_Display[1717]&bit11
#define FAU1CT_FAU8Pollute_B1                  g_dataBuffer_Display[1717]&bit10
#define FAU1CT_FAU8FaultCommu_B1               g_dataBuffer_Display[1717]&bit9
#define FAU1CT_FAU8FireAlert_B1                g_dataBuffer_Display[1717]&bit8

#define FAU1CT_FAU9Iso_B1                      g_dataBuffer_Display[1718]&bit7
#define FAU1CT_FAU9FaultShortCircuit_B1        g_dataBuffer_Display[1718]&bit5
#define FAU1CT_FAU9FaultOpenCircuit_B1         g_dataBuffer_Display[1718]&bit4
#define FAU1CT_FAU9FaultFan_B1                 g_dataBuffer_Display[1718]&bit3
#define FAU1CT_FAU9Pollute_B1                  g_dataBuffer_Display[1718]&bit2
#define FAU1CT_FAU9FaultCommu_B1               g_dataBuffer_Display[1718]&bit1
#define FAU1CT_FAU9FireAlert_B1                g_dataBuffer_Display[1718]&bit0

#define FAU1CT_FAU10Iso_B1                      g_dataBuffer_Display[1718]&bit15
#define FAU1CT_FAU10FaultShortCircuit_B1        g_dataBuffer_Display[1718]&bit13
#define FAU1CT_FAU10FaultOpenCircuit_B1         g_dataBuffer_Display[1718]&bit12
#define FAU1CT_FAU10FaultFan_B1                 g_dataBuffer_Display[1718]&bit11
#define FAU1CT_FAU10Pollute_B1                  g_dataBuffer_Display[1718]&bit10
#define FAU1CT_FAU10FaultCommu_B1               g_dataBuffer_Display[1718]&bit9
#define FAU1CT_FAU10FireAlert_B1                g_dataBuffer_Display[1718]&bit8

#define FAU1CT_FAU11Iso_B1                      g_dataBuffer_Display[1719]&bit7
#define FAU1CT_FAU11FaultShortCircuit_B1        g_dataBuffer_Display[1719]&bit5
#define FAU1CT_FAU11FaultOpenCircuit_B1         g_dataBuffer_Display[1719]&bit4
#define FAU1CT_FAU11FaultFan_B1                 g_dataBuffer_Display[1719]&bit3
#define FAU1CT_FAU11Pollute_B1                  g_dataBuffer_Display[1719]&bit2
#define FAU1CT_FAU11FaultCommu_B1               g_dataBuffer_Display[1719]&bit1
#define FAU1CT_FAU11FireAlert_B1                g_dataBuffer_Display[1719]&bit0

#define FAU1CT_FAU12Iso_B1                      g_dataBuffer_Display[1719]&bit15
#define FAU1CT_FAU12FaultShortCircuit_B1        g_dataBuffer_Display[1719]&bit13
#define FAU1CT_FAU12FaultOpenCircuit_B1         g_dataBuffer_Display[1719]&bit12
#define FAU1CT_FAU12FaultFan_B1                 g_dataBuffer_Display[1719]&bit11
#define FAU1CT_FAU12Pollute_B1                  g_dataBuffer_Display[1719]&bit10
#define FAU1CT_FAU12FaultCommu_B1               g_dataBuffer_Display[1719]&bit9
#define FAU1CT_FAU12FireAlert_B1                g_dataBuffer_Display[1719]&bit8

#define FAU1CT_FAU13Iso_B1                      g_dataBuffer_Display[1720]&bit7
#define FAU1CT_FAU13FaultShortCircuit_B1        g_dataBuffer_Display[1720]&bit5
#define FAU1CT_FAU13FaultOpenCircuit_B1         g_dataBuffer_Display[1720]&bit4
#define FAU1CT_FAU13FaultFan_B1                 g_dataBuffer_Display[1720]&bit3
#define FAU1CT_FAU13Pollute_B1                  g_dataBuffer_Display[1720]&bit2
#define FAU1CT_FAU13FaultCommu_B1               g_dataBuffer_Display[1720]&bit1
#define FAU1CT_FAU13FireAlert_B1                g_dataBuffer_Display[1720]&bit0

#define FAU1CT_FAU14Iso_B1                      g_dataBuffer_Display[1720]&bit15
#define FAU1CT_FAU14FaultShortCircuit_B1        g_dataBuffer_Display[1720]&bit13
#define FAU1CT_FAU14FaultOpenCircuit_B1         g_dataBuffer_Display[1720]&bit12
#define FAU1CT_FAU14FaultFan_B1                 g_dataBuffer_Display[1720]&bit11
#define FAU1CT_FAU14Pollute_B1                  g_dataBuffer_Display[1720]&bit10
#define FAU1CT_FAU14FaultCommu_B1               g_dataBuffer_Display[1720]&bit9
#define FAU1CT_FAU14FireAlert_B1                g_dataBuffer_Display[1720]&bit8

#define FAU1CT_FAU15Iso_B1                      g_dataBuffer_Display[1721]&bit7
#define FAU1CT_FAU15FaultShortCircuit_B1        g_dataBuffer_Display[1721]&bit5
#define FAU1CT_FAU15FaultOpenCircuit_B1         g_dataBuffer_Display[1721]&bit4
#define FAU1CT_FAU15FaultFan_B1                 g_dataBuffer_Display[1721]&bit3
#define FAU1CT_FAU15Pollute_B1                  g_dataBuffer_Display[1721]&bit2
#define FAU1CT_FAU15FaultCommu_B1               g_dataBuffer_Display[1721]&bit1
#define FAU1CT_FAU15FireAlert_B1                g_dataBuffer_Display[1721]&bit0

#define FAU1CT_FAU16Iso_B1                      g_dataBuffer_Display[1721]&bit15
#define FAU1CT_FAU16FaultShortCircuit_B1        g_dataBuffer_Display[1721]&bit13
#define FAU1CT_FAU16FaultOpenCircuit_B1         g_dataBuffer_Display[1721]&bit12
#define FAU1CT_FAU16FaultFan_B1                 g_dataBuffer_Display[1721]&bit11
#define FAU1CT_FAU16Pollute_B1                  g_dataBuffer_Display[1721]&bit10
#define FAU1CT_FAU16FaultCommu_B1               g_dataBuffer_Display[1721]&bit9
#define FAU1CT_FAU16FireAlert_B1                g_dataBuffer_Display[1721]&bit8

#define FAU1CT_FAU17Iso_B1                      g_dataBuffer_Display[1722]&bit7
#define FAU1CT_FAU17FaultShortCircuit_B1        g_dataBuffer_Display[1722]&bit5
#define FAU1CT_FAU17FaultOpenCircuit_B1         g_dataBuffer_Display[1722]&bit4
#define FAU1CT_FAU17FaultFan_B1                 g_dataBuffer_Display[1722]&bit3
#define FAU1CT_FAU17Pollute_B1                  g_dataBuffer_Display[1722]&bit2
#define FAU1CT_FAU17FaultCommu_B1               g_dataBuffer_Display[1722]&bit1
#define FAU1CT_FAU17FireAlert_B1                g_dataBuffer_Display[1722]&bit0

#define FAU1CT_FAU18Iso_B1                      g_dataBuffer_Display[1722]&bit15
#define FAU1CT_FAU18FaultShortCircuit_B1        g_dataBuffer_Display[1722]&bit13
#define FAU1CT_FAU18FaultOpenCircuit_B1         g_dataBuffer_Display[1722]&bit12
#define FAU1CT_FAU18FaultFan_B1                 g_dataBuffer_Display[1722]&bit11
#define FAU1CT_FAU18Pollute_B1                  g_dataBuffer_Display[1722]&bit10
#define FAU1CT_FAU18FaultCommu_B1               g_dataBuffer_Display[1722]&bit9
#define FAU1CT_FAU18FireAlert_B1                g_dataBuffer_Display[1722]&bit8

#define FAU1CT_FAU19Iso_B1                      g_dataBuffer_Display[1723]&bit7
#define FAU1CT_FAU19FaultShortCircuit_B1        g_dataBuffer_Display[1723]&bit5
#define FAU1CT_FAU19FaultOpenCircuit_B1         g_dataBuffer_Display[1723]&bit4
#define FAU1CT_FAU19FaultFan_B1                 g_dataBuffer_Display[1723]&bit3
#define FAU1CT_FAU19Pollute_B1                  g_dataBuffer_Display[1723]&bit2
#define FAU1CT_FAU19FaultCommu_B1               g_dataBuffer_Display[1723]&bit1
#define FAU1CT_FAU19FireAlert_B1                g_dataBuffer_Display[1723]&bit0

#define FAU1CT_FAU20Iso_B1                      g_dataBuffer_Display[1723]&bit15
#define FAU1CT_FAU20FaultShortCircuit_B1        g_dataBuffer_Display[1723]&bit13
#define FAU1CT_FAU20FaultOpenCircuit_B1         g_dataBuffer_Display[1723]&bit12
#define FAU1CT_FAU20FaultFan_B1                 g_dataBuffer_Display[1723]&bit11
#define FAU1CT_FAU20Pollute_B1                  g_dataBuffer_Display[1723]&bit10
#define FAU1CT_FAU20FaultCommu_B1               g_dataBuffer_Display[1723]&bit9
#define FAU1CT_FAU20FireAlert_B1                g_dataBuffer_Display[1723]&bit8

#define FAU1CT_FAU21Iso_B1                      g_dataBuffer_Display[1724]&bit7
#define FAU1CT_FAU21FaultShortCircuit_B1        g_dataBuffer_Display[1724]&bit5
#define FAU1CT_FAU21FaultOpenCircuit_B1         g_dataBuffer_Display[1724]&bit4
#define FAU1CT_FAU21FaultFan_B1                 g_dataBuffer_Display[1724]&bit3
#define FAU1CT_FAU21Pollute_B1                  g_dataBuffer_Display[1724]&bit2
#define FAU1CT_FAU21FaultCommu_B1               g_dataBuffer_Display[1724]&bit1
#define FAU1CT_FAU21FireAlert_B1                g_dataBuffer_Display[1724]&bit0

#define FAU1CT_FAU22Iso_B1                      g_dataBuffer_Display[1724]&bit15
#define FAU1CT_FAU22FaultShortCircuit_B1        g_dataBuffer_Display[1724]&bit13
#define FAU1CT_FAU22FaultOpenCircuit_B1         g_dataBuffer_Display[1724]&bit12
#define FAU1CT_FAU22FaultFan_B1                 g_dataBuffer_Display[1724]&bit11
#define FAU1CT_FAU22Pollute_B1                  g_dataBuffer_Display[1724]&bit10
#define FAU1CT_FAU22FaultCommu_B1               g_dataBuffer_Display[1724]&bit9
#define FAU1CT_FAU22FireAlert_B1                g_dataBuffer_Display[1724]&bit8

#define FAU1CT_FAU23Iso_B1                      g_dataBuffer_Display[1725]&bit7
#define FAU1CT_FAU23FaultShortCircuit_B1        g_dataBuffer_Display[1725]&bit5
#define FAU1CT_FAU23FaultOpenCircuit_B1         g_dataBuffer_Display[1725]&bit4
#define FAU1CT_FAU23FaultFan_B1                 g_dataBuffer_Display[1725]&bit3
#define FAU1CT_FAU23Pollute_B1                  g_dataBuffer_Display[1725]&bit2
#define FAU1CT_FAU23FaultCommu_B1               g_dataBuffer_Display[1725]&bit1
#define FAU1CT_FAU23FireAlert_B1                g_dataBuffer_Display[1725]&bit0

#define FAU1CT_FAU24Iso_B1                      g_dataBuffer_Display[1725]&bit15
#define FAU1CT_FAU24FaultShortCircuit_B1        g_dataBuffer_Display[1725]&bit13
#define FAU1CT_FAU24FaultOpenCircuit_B1         g_dataBuffer_Display[1725]&bit12
#define FAU1CT_FAU24FaultFan_B1                 g_dataBuffer_Display[1725]&bit11
#define FAU1CT_FAU24Pollute_B1                  g_dataBuffer_Display[1725]&bit10
#define FAU1CT_FAU24FaultCommu_B1               g_dataBuffer_Display[1725]&bit9
#define FAU1CT_FAU24FireAlert_B1                g_dataBuffer_Display[1725]&bit8

#define FAU1CT_FAU25Iso_B1                      g_dataBuffer_Display[1726]&bit7
#define FAU1CT_FAU25FaultShortCircuit_B1        g_dataBuffer_Display[1726]&bit5
#define FAU1CT_FAU25FaultOpenCircuit_B1         g_dataBuffer_Display[1726]&bit4
#define FAU1CT_FAU25FaultFan_B1                 g_dataBuffer_Display[1726]&bit3
#define FAU1CT_FAU25Pollute_B1                  g_dataBuffer_Display[1726]&bit2
#define FAU1CT_FAU25FaultCommu_B1               g_dataBuffer_Display[1726]&bit1
#define FAU1CT_FAU25FireAlert_B1                g_dataBuffer_Display[1726]&bit0

#define FAU1CT_FAU26Iso_B1                      g_dataBuffer_Display[1726]&bit15
#define FAU1CT_FAU26FaultShortCircuit_B1        g_dataBuffer_Display[1726]&bit13
#define FAU1CT_FAU26FaultOpenCircuit_B1         g_dataBuffer_Display[1726]&bit12
#define FAU1CT_FAU26FaultFan_B1                 g_dataBuffer_Display[1726]&bit11
#define FAU1CT_FAU26Pollute_B1                  g_dataBuffer_Display[1726]&bit10
#define FAU1CT_FAU26FaultCommu_B1               g_dataBuffer_Display[1726]&bit9
#define FAU1CT_FAU26FireAlert_B1                g_dataBuffer_Display[1726]&bit8

#define FAU1CT_FAU27Iso_B1                      g_dataBuffer_Display[1727]&bit7
#define FAU1CT_FAU27FaultShortCircuit_B1        g_dataBuffer_Display[1727]&bit5
#define FAU1CT_FAU27FaultOpenCircuit_B1         g_dataBuffer_Display[1727]&bit4
#define FAU1CT_FAU27FaultFan_B1                 g_dataBuffer_Display[1727]&bit3
#define FAU1CT_FAU27Pollute_B1                  g_dataBuffer_Display[1727]&bit2
#define FAU1CT_FAU27FaultCommu_B1               g_dataBuffer_Display[1727]&bit1
#define FAU1CT_FAU27FireAlert_B1                g_dataBuffer_Display[1727]&bit0

#define FAU1CT_FAU28Iso_B1                      g_dataBuffer_Display[1727]&bit15
#define FAU1CT_FAU28FaultShortCircuit_B1        g_dataBuffer_Display[1727]&bit13
#define FAU1CT_FAU28FaultOpenCircuit_B1         g_dataBuffer_Display[1727]&bit12
#define FAU1CT_FAU28FaultFan_B1                 g_dataBuffer_Display[1727]&bit11
#define FAU1CT_FAU28Pollute_B1                  g_dataBuffer_Display[1727]&bit10
#define FAU1CT_FAU28FaultCommu_B1               g_dataBuffer_Display[1727]&bit9
#define FAU1CT_FAU28FireAlert_B1                g_dataBuffer_Display[1727]&bit8

//0XC20

#define FAU2CT_LifeSign_U8                     g_dataBuffer_Display[16+1712]%256
#define FAU2CT_CommuFaultBtwnFDCU_B1           g_dataBuffer_Display[16+1712]&bit15
#define FAU2CT_VersionX_U8                     g_dataBuffer_Display[16+1713]%256
#define FAU2CT_VersionY_U8                     g_dataBuffer_Display[16+1713]/256

#define FAU2CT_FAU1Iso_B1                      g_dataBuffer_Display[16+1714]&bit7
#define FAU2CT_FAU1FaultShortCircuit_B1        g_dataBuffer_Display[16+1714]&bit5
#define FAU2CT_FAU1FaultOpenCircuit_B1         g_dataBuffer_Display[16+1714]&bit4
#define FAU2CT_FAU1FaultFan_B1                 g_dataBuffer_Display[16+1714]&bit3
#define FAU2CT_FAU1Pollute_B1                  g_dataBuffer_Display[16+1714]&bit2
#define FAU2CT_FAU1FaultCommu_B1               g_dataBuffer_Display[16+1714]&bit1
#define FAU2CT_FAU1FireAlert_B1                g_dataBuffer_Display[16+1714]&bit0

#define FAU2CT_FAU2Iso_B1                      g_dataBuffer_Display[16+1714]&bit15
#define FAU2CT_FAU2FaultShortCircuit_B1        g_dataBuffer_Display[16+1714]&bit13
#define FAU2CT_FAU2FaultOpenCircuit_B1         g_dataBuffer_Display[16+1714]&bit12
#define FAU2CT_FAU2FaultFan_B1                 g_dataBuffer_Display[16+1714]&bit11
#define FAU2CT_FAU2Pollute_B1                  g_dataBuffer_Display[16+1714]&bit10
#define FAU2CT_FAU2FaultCommu_B1               g_dataBuffer_Display[16+1714]&bit9
#define FAU2CT_FAU2FireAlert_B1                g_dataBuffer_Display[16+1714]&bit8

#define FAU2CT_FAU3Iso_B1                      g_dataBuffer_Display[16+1715]&bit7
#define FAU2CT_FAU3FaultShortCircuit_B1        g_dataBuffer_Display[16+1715]&bit5
#define FAU2CT_FAU3FaultOpenCircuit_B1         g_dataBuffer_Display[16+1715]&bit4
#define FAU2CT_FAU3FaultFan_B1                 g_dataBuffer_Display[16+1715]&bit3
#define FAU2CT_FAU3Pollute_B1                  g_dataBuffer_Display[16+1715]&bit2
#define FAU2CT_FAU3FaultCommu_B1               g_dataBuffer_Display[16+1715]&bit1
#define FAU2CT_FAU3FireAlert_B1                g_dataBuffer_Display[16+1715]&bit0

#define FAU2CT_FAU4Iso_B1                      g_dataBuffer_Display[16+1715]&bit15
#define FAU2CT_FAU4FaultShortCircuit_B1        g_dataBuffer_Display[16+1715]&bit13
#define FAU2CT_FAU4FaultOpenCircuit_B1         g_dataBuffer_Display[16+1715]&bit12
#define FAU2CT_FAU4FaultFan_B1                 g_dataBuffer_Display[16+1715]&bit11
#define FAU2CT_FAU4Pollute_B1                  g_dataBuffer_Display[16+1715]&bit10
#define FAU2CT_FAU4FaultCommu_B1               g_dataBuffer_Display[16+1715]&bit9
#define FAU2CT_FAU4FireAlert_B1                g_dataBuffer_Display[16+1715]&bit8

#define FAU2CT_FAU5Iso_B1                      g_dataBuffer_Display[16+1716]&bit7
#define FAU2CT_FAU5FaultShortCircuit_B1        g_dataBuffer_Display[16+1716]&bit5
#define FAU2CT_FAU5FaultOpenCircuit_B1         g_dataBuffer_Display[16+1716]&bit4
#define FAU2CT_FAU5FaultFan_B1                 g_dataBuffer_Display[16+1716]&bit3
#define FAU2CT_FAU5Pollute_B1                  g_dataBuffer_Display[16+1716]&bit2
#define FAU2CT_FAU5FaultCommu_B1               g_dataBuffer_Display[16+1716]&bit1
#define FAU2CT_FAU5FireAlert_B1                g_dataBuffer_Display[16+1716]&bit0

#define FAU2CT_FAU6Iso_B1                      g_dataBuffer_Display[16+1716]&bit15
#define FAU2CT_FAU6FaultShortCircuit_B1        g_dataBuffer_Display[16+1716]&bit13
#define FAU2CT_FAU6FaultOpenCircuit_B1         g_dataBuffer_Display[16+1716]&bit12
#define FAU2CT_FAU6FaultFan_B1                 g_dataBuffer_Display[16+1716]&bit11
#define FAU2CT_FAU6Pollute_B1                  g_dataBuffer_Display[16+1716]&bit10
#define FAU2CT_FAU6FaultCommu_B1               g_dataBuffer_Display[16+1716]&bit9
#define FAU2CT_FAU6FireAlert_B1                g_dataBuffer_Display[16+1716]&bit8

#define FAU2CT_FAU7Iso_B1                      g_dataBuffer_Display[16+1717]&bit7
#define FAU2CT_FAU7FaultShortCircuit_B1        g_dataBuffer_Display[16+1717]&bit5
#define FAU2CT_FAU7FaultOpenCircuit_B1         g_dataBuffer_Display[16+1717]&bit4
#define FAU2CT_FAU7FaultFan_B1                 g_dataBuffer_Display[16+1717]&bit3
#define FAU2CT_FAU7Pollute_B1                  g_dataBuffer_Display[16+1717]&bit2
#define FAU2CT_FAU7FaultCommu_B1               g_dataBuffer_Display[16+1717]&bit1
#define FAU2CT_FAU7FireAlert_B1                g_dataBuffer_Display[16+1717]&bit0

#define FAU2CT_FAU8Iso_B1                      g_dataBuffer_Display[16+1717]&bit15
#define FAU2CT_FAU8FaultShortCircuit_B1        g_dataBuffer_Display[16+1717]&bit13
#define FAU2CT_FAU8FaultOpenCircuit_B1         g_dataBuffer_Display[16+1717]&bit12
#define FAU2CT_FAU8FaultFan_B1                 g_dataBuffer_Display[16+1717]&bit11
#define FAU2CT_FAU8Pollute_B1                  g_dataBuffer_Display[16+1717]&bit10
#define FAU2CT_FAU8FaultCommu_B1               g_dataBuffer_Display[16+1717]&bit9
#define FAU2CT_FAU8FireAlert_B1                g_dataBuffer_Display[16+1717]&bit8

#define FAU2CT_FAU9Iso_B1                      g_dataBuffer_Display[16+1718]&bit7
#define FAU2CT_FAU9FaultShortCircuit_B1        g_dataBuffer_Display[16+1718]&bit5
#define FAU2CT_FAU9FaultOpenCircuit_B1         g_dataBuffer_Display[16+1718]&bit4
#define FAU2CT_FAU9FaultFan_B1                 g_dataBuffer_Display[16+1718]&bit3
#define FAU2CT_FAU9Pollute_B1                  g_dataBuffer_Display[16+1718]&bit2
#define FAU2CT_FAU9FaultCommu_B1               g_dataBuffer_Display[16+1718]&bit1
#define FAU2CT_FAU9FireAlert_B1                g_dataBuffer_Display[16+1718]&bit0

#define FAU2CT_FAU10Iso_B1                      g_dataBuffer_Display[16+1718]&bit15
#define FAU2CT_FAU10FaultShortCircuit_B1        g_dataBuffer_Display[16+1718]&bit13
#define FAU2CT_FAU10FaultOpenCircuit_B1         g_dataBuffer_Display[16+1718]&bit12
#define FAU2CT_FAU10FaultFan_B1                 g_dataBuffer_Display[16+1718]&bit11
#define FAU2CT_FAU10Pollute_B1                  g_dataBuffer_Display[16+1718]&bit10
#define FAU2CT_FAU10FaultCommu_B1               g_dataBuffer_Display[16+1718]&bit9
#define FAU2CT_FAU10FireAlert_B1                g_dataBuffer_Display[16+1718]&bit8

#define FAU2CT_FAU11Iso_B1                      g_dataBuffer_Display[16+1719]&bit7
#define FAU2CT_FAU11FaultShortCircuit_B1        g_dataBuffer_Display[16+1719]&bit5
#define FAU2CT_FAU11FaultOpenCircuit_B1         g_dataBuffer_Display[16+1719]&bit4
#define FAU2CT_FAU11FaultFan_B1                 g_dataBuffer_Display[16+1719]&bit3
#define FAU2CT_FAU11Pollute_B1                  g_dataBuffer_Display[16+1719]&bit2
#define FAU2CT_FAU11FaultCommu_B1               g_dataBuffer_Display[16+1719]&bit1
#define FAU2CT_FAU11FireAlert_B1                g_dataBuffer_Display[16+1719]&bit0

#define FAU2CT_FAU12Iso_B1                      g_dataBuffer_Display[16+1719]&bit15
#define FAU2CT_FAU12FaultShortCircuit_B1        g_dataBuffer_Display[16+1719]&bit13
#define FAU2CT_FAU12FaultOpenCircuit_B1         g_dataBuffer_Display[16+1719]&bit12
#define FAU2CT_FAU12FaultFan_B1                 g_dataBuffer_Display[16+1719]&bit11
#define FAU2CT_FAU12Pollute_B1                  g_dataBuffer_Display[16+1719]&bit10
#define FAU2CT_FAU12FaultCommu_B1               g_dataBuffer_Display[16+1719]&bit9
#define FAU2CT_FAU12FireAlert_B1                g_dataBuffer_Display[16+1719]&bit8

#define FAU2CT_FAU13Iso_B1                      g_dataBuffer_Display[16+1720]&bit7
#define FAU2CT_FAU13FaultShortCircuit_B1        g_dataBuffer_Display[16+1720]&bit5
#define FAU2CT_FAU13FaultOpenCircuit_B1         g_dataBuffer_Display[16+1720]&bit4
#define FAU2CT_FAU13FaultFan_B1                 g_dataBuffer_Display[16+1720]&bit3
#define FAU2CT_FAU13Pollute_B1                  g_dataBuffer_Display[16+1720]&bit2
#define FAU2CT_FAU13FaultCommu_B1               g_dataBuffer_Display[16+1720]&bit1
#define FAU2CT_FAU13FireAlert_B1                g_dataBuffer_Display[16+1720]&bit0

#define FAU2CT_FAU14Iso_B1                      g_dataBuffer_Display[16+1720]&bit15
#define FAU2CT_FAU14FaultShortCircuit_B1        g_dataBuffer_Display[16+1720]&bit13
#define FAU2CT_FAU14FaultOpenCircuit_B1         g_dataBuffer_Display[16+1720]&bit12
#define FAU2CT_FAU14FaultFan_B1                 g_dataBuffer_Display[16+1720]&bit11
#define FAU2CT_FAU14Pollute_B1                  g_dataBuffer_Display[16+1720]&bit10
#define FAU2CT_FAU14FaultCommu_B1               g_dataBuffer_Display[16+1720]&bit9
#define FAU2CT_FAU14FireAlert_B1                g_dataBuffer_Display[16+1720]&bit8

#define FAU2CT_FAU15Iso_B1                      g_dataBuffer_Display[16+1721]&bit7
#define FAU2CT_FAU15FaultShortCircuit_B1        g_dataBuffer_Display[16+1721]&bit5
#define FAU2CT_FAU15FaultOpenCircuit_B1         g_dataBuffer_Display[16+1721]&bit4
#define FAU2CT_FAU15FaultFan_B1                 g_dataBuffer_Display[16+1721]&bit3
#define FAU2CT_FAU15Pollute_B1                  g_dataBuffer_Display[16+1721]&bit2
#define FAU2CT_FAU15FaultCommu_B1               g_dataBuffer_Display[16+1721]&bit1
#define FAU2CT_FAU15FireAlert_B1                g_dataBuffer_Display[16+1721]&bit0

#define FAU2CT_FAU16Iso_B1                      g_dataBuffer_Display[16+1721]&bit15
#define FAU2CT_FAU16FaultShortCircuit_B1        g_dataBuffer_Display[16+1721]&bit13
#define FAU2CT_FAU16FaultOpenCircuit_B1         g_dataBuffer_Display[16+1721]&bit12
#define FAU2CT_FAU16FaultFan_B1                 g_dataBuffer_Display[16+1721]&bit11
#define FAU2CT_FAU16Pollute_B1                  g_dataBuffer_Display[16+1721]&bit10
#define FAU2CT_FAU16FaultCommu_B1               g_dataBuffer_Display[16+1721]&bit9
#define FAU2CT_FAU16FireAlert_B1                g_dataBuffer_Display[16+1721]&bit8

#define FAU2CT_FAU17Iso_B1                      g_dataBuffer_Display[16+1722]&bit7
#define FAU2CT_FAU17FaultShortCircuit_B1        g_dataBuffer_Display[16+1722]&bit5
#define FAU2CT_FAU17FaultOpenCircuit_B1         g_dataBuffer_Display[16+1722]&bit4
#define FAU2CT_FAU17FaultFan_B1                 g_dataBuffer_Display[16+1722]&bit3
#define FAU2CT_FAU17Pollute_B1                  g_dataBuffer_Display[16+1722]&bit2
#define FAU2CT_FAU17FaultCommu_B1               g_dataBuffer_Display[16+1722]&bit1
#define FAU2CT_FAU17FireAlert_B1                g_dataBuffer_Display[16+1722]&bit0

#define FAU2CT_FAU18Iso_B1                      g_dataBuffer_Display[16+1722]&bit15
#define FAU2CT_FAU18FaultShortCircuit_B1        g_dataBuffer_Display[16+1722]&bit13
#define FAU2CT_FAU18FaultOpenCircuit_B1         g_dataBuffer_Display[16+1722]&bit12
#define FAU2CT_FAU18FaultFan_B1                 g_dataBuffer_Display[16+1722]&bit11
#define FAU2CT_FAU18Pollute_B1                  g_dataBuffer_Display[16+1722]&bit10
#define FAU2CT_FAU18FaultCommu_B1               g_dataBuffer_Display[16+1722]&bit9
#define FAU2CT_FAU18FireAlert_B1                g_dataBuffer_Display[16+1722]&bit8

#define FAU2CT_FAU19Iso_B1                      g_dataBuffer_Display[16+1723]&bit7
#define FAU2CT_FAU19FaultShortCircuit_B1        g_dataBuffer_Display[16+1723]&bit5
#define FAU2CT_FAU19FaultOpenCircuit_B1         g_dataBuffer_Display[16+1723]&bit4
#define FAU2CT_FAU19FaultFan_B1                 g_dataBuffer_Display[16+1723]&bit3
#define FAU2CT_FAU19Pollute_B1                  g_dataBuffer_Display[16+1723]&bit2
#define FAU2CT_FAU19FaultCommu_B1               g_dataBuffer_Display[16+1723]&bit1
#define FAU2CT_FAU19FireAlert_B1                g_dataBuffer_Display[16+1723]&bit0

#define FAU2CT_FAU20Iso_B1                      g_dataBuffer_Display[16+1723]&bit15
#define FAU2CT_FAU20FaultShortCircuit_B1        g_dataBuffer_Display[16+1723]&bit13
#define FAU2CT_FAU20FaultOpenCircuit_B1         g_dataBuffer_Display[16+1723]&bit12
#define FAU2CT_FAU20FaultFan_B1                 g_dataBuffer_Display[16+1723]&bit11
#define FAU2CT_FAU20Pollute_B1                  g_dataBuffer_Display[16+1723]&bit10
#define FAU2CT_FAU20FaultCommu_B1               g_dataBuffer_Display[16+1723]&bit9
#define FAU2CT_FAU20FireAlert_B1                g_dataBuffer_Display[16+1723]&bit8

#define FAU2CT_FAU21Iso_B1                      g_dataBuffer_Display[16+1724]&bit7
#define FAU2CT_FAU21FaultShortCircuit_B1        g_dataBuffer_Display[16+1724]&bit5
#define FAU2CT_FAU21FaultOpenCircuit_B1         g_dataBuffer_Display[16+1724]&bit4
#define FAU2CT_FAU21FaultFan_B1                 g_dataBuffer_Display[16+1724]&bit3
#define FAU2CT_FAU21Pollute_B1                  g_dataBuffer_Display[16+1724]&bit2
#define FAU2CT_FAU21FaultCommu_B1               g_dataBuffer_Display[16+1724]&bit1
#define FAU2CT_FAU21FireAlert_B1                g_dataBuffer_Display[16+1724]&bit0

#define FAU2CT_FAU22Iso_B1                      g_dataBuffer_Display[16+1724]&bit15
#define FAU2CT_FAU22FaultShortCircuit_B1        g_dataBuffer_Display[16+1724]&bit13
#define FAU2CT_FAU22FaultOpenCircuit_B1         g_dataBuffer_Display[16+1724]&bit12
#define FAU2CT_FAU22FaultFan_B1                 g_dataBuffer_Display[16+1724]&bit11
#define FAU2CT_FAU22Pollute_B1                  g_dataBuffer_Display[16+1724]&bit10
#define FAU2CT_FAU22FaultCommu_B1               g_dataBuffer_Display[16+1724]&bit9
#define FAU2CT_FAU22FireAlert_B1                g_dataBuffer_Display[16+1724]&bit8

#define FAU2CT_FAU23Iso_B1                      g_dataBuffer_Display[16+1725]&bit7
#define FAU2CT_FAU23FaultShortCircuit_B1        g_dataBuffer_Display[16+1725]&bit5
#define FAU2CT_FAU23FaultOpenCircuit_B1         g_dataBuffer_Display[16+1725]&bit4
#define FAU2CT_FAU23FaultFan_B1                 g_dataBuffer_Display[16+1725]&bit3
#define FAU2CT_FAU23Pollute_B1                  g_dataBuffer_Display[16+1725]&bit2
#define FAU2CT_FAU23FaultCommu_B1               g_dataBuffer_Display[16+1725]&bit1
#define FAU2CT_FAU23FireAlert_B1                g_dataBuffer_Display[16+1725]&bit0

#define FAU2CT_FAU24Iso_B1                      g_dataBuffer_Display[16+1725]&bit15
#define FAU2CT_FAU24FaultShortCircuit_B1        g_dataBuffer_Display[16+1725]&bit13
#define FAU2CT_FAU24FaultOpenCircuit_B1         g_dataBuffer_Display[16+1725]&bit12
#define FAU2CT_FAU24FaultFan_B1                 g_dataBuffer_Display[16+1725]&bit11
#define FAU2CT_FAU24Pollute_B1                  g_dataBuffer_Display[16+1725]&bit10
#define FAU2CT_FAU24FaultCommu_B1               g_dataBuffer_Display[16+1725]&bit9
#define FAU2CT_FAU24FireAlert_B1                g_dataBuffer_Display[16+1725]&bit8

#define FAU2CT_FAU25Iso_B1                      g_dataBuffer_Display[16+1726]&bit7
#define FAU2CT_FAU25FaultShortCircuit_B1        g_dataBuffer_Display[16+1726]&bit5
#define FAU2CT_FAU25FaultOpenCircuit_B1         g_dataBuffer_Display[16+1726]&bit4
#define FAU2CT_FAU25FaultFan_B1                 g_dataBuffer_Display[16+1726]&bit3
#define FAU2CT_FAU25Pollute_B1                  g_dataBuffer_Display[16+1726]&bit2
#define FAU2CT_FAU25FaultCommu_B1               g_dataBuffer_Display[16+1726]&bit1
#define FAU2CT_FAU25FireAlert_B1                g_dataBuffer_Display[16+1726]&bit0

#define FAU2CT_FAU26Iso_B1                      g_dataBuffer_Display[16+1726]&bit15
#define FAU2CT_FAU26FaultShortCircuit_B1        g_dataBuffer_Display[16+1726]&bit13
#define FAU2CT_FAU26FaultOpenCircuit_B1         g_dataBuffer_Display[16+1726]&bit12
#define FAU2CT_FAU26FaultFan_B1                 g_dataBuffer_Display[16+1726]&bit11
#define FAU2CT_FAU26Pollute_B1                  g_dataBuffer_Display[16+1726]&bit10
#define FAU2CT_FAU26FaultCommu_B1               g_dataBuffer_Display[16+1726]&bit9
#define FAU2CT_FAU26FireAlert_B1                g_dataBuffer_Display[16+1726]&bit8

#define FAU2CT_FAU27Iso_B1                      g_dataBuffer_Display[16+1727]&bit7
#define FAU2CT_FAU27FaultShortCircuit_B1        g_dataBuffer_Display[16+1727]&bit5
#define FAU2CT_FAU27FaultOpenCircuit_B1         g_dataBuffer_Display[16+1727]&bit4
#define FAU2CT_FAU27FaultFan_B1                 g_dataBuffer_Display[16+1727]&bit3
#define FAU2CT_FAU27Pollute_B1                  g_dataBuffer_Display[16+1727]&bit2
#define FAU2CT_FAU27FaultCommu_B1               g_dataBuffer_Display[16+1727]&bit1
#define FAU2CT_FAU27FireAlert_B1                g_dataBuffer_Display[16+1727]&bit0

#define FAU2CT_FAU28Iso_B1                      g_dataBuffer_Display[16+1727]&bit15
#define FAU2CT_FAU28FaultShortCircuit_B1        g_dataBuffer_Display[16+1727]&bit13
#define FAU2CT_FAU28FaultOpenCircuit_B1         g_dataBuffer_Display[16+1727]&bit12
#define FAU2CT_FAU28FaultFan_B1                 g_dataBuffer_Display[16+1727]&bit11
#define FAU2CT_FAU28Pollute_B1                  g_dataBuffer_Display[16+1727]&bit10
#define FAU2CT_FAU28FaultCommu_B1               g_dataBuffer_Display[16+1727]&bit9
#define FAU2CT_FAU28FireAlert_B1                g_dataBuffer_Display[16+1727]&bit8




extern WORD PIS_Master_9i0_1;
extern WORD PIS_Master_9i0_2;
extern WORD PIS_Master_9i0_3;
extern WORD PIS_Master_9i0_4;
extern WORD PIS_Master_9i0_5;
extern WORD PIS_Master_9i0_6;
extern WORD PIS_Master_9i0_7;
extern WORD PIS_Master_9i0_8;
extern WORD PIS_Master_9i0_9;
extern WORD PIS_Master_9i0_10;
extern WORD PIS_Master_9i0_11;
extern WORD PIS_Master_9i0_12;
extern WORD PIS_Master_9i0_13;
extern WORD PIS_Master_9i0_14;
extern WORD PIS_Master_9i0_15;
extern WORD PIS_Master_9i0_16;

extern WORD PIS_Master_9i1_1;
extern WORD PIS_Master_9i1_2;
extern WORD PIS_Master_9i1_3;
extern WORD PIS_Master_9i1_4;
extern WORD PIS_Master_9i1_5;
extern WORD PIS_Master_9i1_6;
extern WORD PIS_Master_9i1_7;
extern WORD PIS_Master_9i1_8;
extern WORD PIS_Master_9i1_9;
extern WORD PIS_Master_9i1_10;
extern WORD PIS_Master_9i1_11;
extern WORD PIS_Master_9i1_12;
extern WORD PIS_Master_9i1_13;
extern WORD PIS_Master_9i1_14;
extern WORD PIS_Master_9i1_15;
extern WORD PIS_Master_9i1_16;

extern WORD  FAS_Master_Bi0_1;
extern WORD  FAS_Master_Bi0_2;
extern WORD  FAS_Master_Bi0_3;
extern WORD  FAS_Master_Bi0_4;
extern WORD  FAS_Master_Bi0_5;
extern WORD  FAS_Master_Bi0_6;
extern WORD  FAS_Master_Bi0_7;
extern WORD  FAS_Master_Bi0_8;
extern WORD  FAS_Master_Bi0_9;
extern WORD  FAS_Master_Bi0_10;
extern WORD  FAS_Master_Bi0_11;
extern WORD  FAS_Master_Bi0_12;
extern WORD  FAS_Master_Bi0_13;
extern WORD  FAS_Master_Bi0_14;
extern WORD  FAS_Master_Bi0_15;
extern WORD  FAS_Master_Bi0_16;

extern WORD DI_110_1 ;
extern WORD DI_110_2 ;
extern WORD DI_110_3 ;
extern WORD DI_110_4 ;
extern WORD DI_110_5 ;
extern WORD DI_110_6 ;
extern WORD DI_110_7 ;
extern WORD DI_110_8 ;
extern WORD DI_110_9 ;
extern WORD DI_110_10 ;
extern WORD DI_110_11 ;
extern WORD DI_110_12 ;
extern WORD DI_110_13 ;
extern WORD DI_110_14 ;
extern WORD DI_110_15 ;
extern WORD DI_110_16 ;

extern WORD AX_114_1 ;
extern WORD AX_114_2 ;
extern WORD AX_114_3 ;
extern WORD AX_114_4 ;
extern WORD AX_114_5 ;
extern WORD AX_114_6 ;
extern WORD AX_114_7 ;
extern WORD AX_114_8 ;
extern WORD AX_114_9 ;
extern WORD AX_114_10 ;
extern WORD AX_114_11 ;
extern WORD AX_114_12 ;
extern WORD AX_114_13 ;
extern WORD AX_114_14 ;
extern WORD AX_114_15 ;
extern WORD AX_114_16 ;

extern WORD DI_120_1 ;
extern WORD DI_120_2 ;
extern WORD DI_120_3 ;
extern WORD DI_120_4 ;
extern WORD DI_120_5 ;
extern WORD DI_120_6 ;
extern WORD DI_120_7 ;
extern WORD DI_120_8 ;
extern WORD DI_120_9 ;
extern WORD DI_120_10 ;
extern WORD DI_120_11 ;
extern WORD DI_120_12 ;
extern WORD DI_120_13 ;
extern WORD DI_120_14 ;
extern WORD DI_120_15 ;
extern WORD DI_120_16 ;

extern WORD DI_130_1 ;
extern WORD DI_130_2 ;
extern WORD DI_130_3 ;
extern WORD DI_130_4 ;
extern WORD DI_130_5 ;
extern WORD DI_130_6 ;
extern WORD DI_130_7 ;
extern WORD DI_130_8 ;
extern WORD DI_130_9 ;
extern WORD DI_130_10 ;
extern WORD DI_130_11 ;
extern WORD DI_130_12 ;
extern WORD DI_130_13 ;
extern WORD DI_130_14 ;
extern WORD DI_130_15 ;
extern WORD DI_130_16 ;

extern WORD DI_140_1 ;
extern WORD DI_140_2 ;
extern WORD DI_140_3 ;
extern WORD DI_140_4 ;
extern WORD DI_140_5 ;
extern WORD DI_140_6 ;
extern WORD DI_140_7 ;
extern WORD DI_140_8 ;
extern WORD DI_140_9 ;
extern WORD DI_140_10 ;
extern WORD DI_140_11 ;
extern WORD DI_140_12 ;
extern WORD DI_140_13 ;
extern WORD DI_140_14 ;
extern WORD DI_140_15 ;
extern WORD DI_140_16 ;

extern WORD DI_150_1 ;
extern WORD DI_150_2 ;
extern WORD DI_150_3 ;
extern WORD DI_150_4 ;
extern WORD DI_150_5 ;
extern WORD DI_150_6 ;
extern WORD DI_150_7 ;
extern WORD DI_150_8 ;
extern WORD DI_150_9 ;
extern WORD DI_150_10 ;
extern WORD DI_150_11 ;
extern WORD DI_150_12 ;
extern WORD DI_150_13 ;
extern WORD DI_150_14 ;
extern WORD DI_150_15 ;
extern WORD DI_150_16 ;

extern WORD DI_160_1 ;
extern WORD DI_160_2 ;
extern WORD DI_160_3 ;
extern WORD DI_160_4 ;
extern WORD DI_160_5 ;
extern WORD DI_160_6 ;
extern WORD DI_160_7 ;
extern WORD DI_160_8 ;
extern WORD DI_160_9 ;
extern WORD DI_160_10 ;
extern WORD DI_160_11 ;
extern WORD DI_160_12 ;
extern WORD DI_160_13 ;
extern WORD DI_160_14 ;
extern WORD DI_160_15 ;
extern WORD DI_160_16 ;

extern WORD DI_170_1 ;
extern WORD DI_170_2 ;
extern WORD DI_170_3 ;
extern WORD DI_170_4 ;
extern WORD DI_170_5 ;
extern WORD DI_170_6 ;
extern WORD DI_170_7 ;
extern WORD DI_170_8 ;
extern WORD DI_170_9 ;
extern WORD DI_170_10 ;
extern WORD DI_170_11 ;
extern WORD DI_170_12 ;
extern WORD DI_170_13 ;
extern WORD DI_170_14 ;
extern WORD DI_170_15 ;
extern WORD DI_170_16 ;

extern WORD DI_180_1 ;
extern WORD DI_180_2 ;
extern WORD DI_180_3 ;
extern WORD DI_180_4 ;
extern WORD DI_180_5 ;
extern WORD DI_180_6 ;
extern WORD DI_180_7 ;
extern WORD DI_180_8 ;
extern WORD DI_180_9 ;
extern WORD DI_180_10 ;
extern WORD DI_180_11 ;
extern WORD DI_180_12 ;
extern WORD DI_180_13 ;
extern WORD DI_180_14 ;
extern WORD DI_180_15 ;
extern WORD DI_180_16 ;

extern WORD AX_184_1 ;
extern WORD AX_184_2 ;
extern WORD AX_184_3 ;
extern WORD AX_184_4 ;
extern WORD AX_184_5 ;
extern WORD AX_184_6 ;
extern WORD AX_184_7 ;
extern WORD AX_184_8 ;
extern WORD AX_184_9 ;
extern WORD AX_184_10 ;
extern WORD AX_184_11 ;
extern WORD AX_184_12 ;
extern WORD AX_184_13 ;
extern WORD AX_184_14 ;
extern WORD AX_184_15 ;
extern WORD AX_184_16 ;


extern WORD HMI_200_1;
extern WORD HMI_280_1;


extern WORD HMI_202_1;
extern WORD HMI_202_2;
extern WORD HMI_282_1;
extern WORD HMI_282_2;


extern WORD BCU_410_1;
extern WORD BCU_410_2;
extern WORD BCU_410_3;
extern WORD BCU_410_4;
extern WORD BCU_410_5;
extern WORD BCU_410_6;
extern WORD BCU_410_7;
extern WORD BCU_410_8;
extern WORD BCU_410_9;
extern WORD BCU_410_10;
extern WORD BCU_410_11;
extern WORD BCU_410_12;
extern WORD BCU_410_13;
extern WORD BCU_410_14;
extern WORD BCU_410_15;
extern WORD BCU_410_16;

extern WORD BCU_411_1;
extern WORD BCU_411_2;
extern WORD BCU_411_3;
extern WORD BCU_411_4;
extern WORD BCU_411_5;
extern WORD BCU_411_6;
extern WORD BCU_411_7;
extern WORD BCU_411_8;
extern WORD BCU_411_9;
extern WORD BCU_411_10;
extern WORD BCU_411_11;
extern WORD BCU_411_12;
extern WORD BCU_411_13;
extern WORD BCU_411_14;
extern WORD BCU_411_15;
extern WORD BCU_411_16;

extern WORD BCU_412_1;
extern WORD BCU_412_2;
extern WORD BCU_412_3;
extern WORD BCU_412_4;
extern WORD BCU_412_5;
extern WORD BCU_412_6;
extern WORD BCU_412_7;
extern WORD BCU_412_8;
extern WORD BCU_412_9;
extern WORD BCU_412_10;
extern WORD BCU_412_11;
extern WORD BCU_412_12;
extern WORD BCU_412_13;
extern WORD BCU_412_14;
extern WORD BCU_412_15;
extern WORD BCU_412_16;

extern WORD BCU_413_1;
extern WORD BCU_413_2;
extern WORD BCU_413_3;
extern WORD BCU_413_4;
extern WORD BCU_413_5;
extern WORD BCU_413_6;
extern WORD BCU_413_7;
extern WORD BCU_413_8;
extern WORD BCU_413_9;
extern WORD BCU_413_10;
extern WORD BCU_413_11;
extern WORD BCU_413_12;
extern WORD BCU_413_13;
extern WORD BCU_413_14;
extern WORD BCU_413_15;
extern WORD BCU_413_16;

extern WORD BCU_414_1;
extern WORD BCU_414_2;
extern WORD BCU_414_3;
extern WORD BCU_414_4;
extern WORD BCU_414_5;
extern WORD BCU_414_6;
extern WORD BCU_414_7;
extern WORD BCU_414_8;
extern WORD BCU_414_9;
extern WORD BCU_414_10;
extern WORD BCU_414_11;
extern WORD BCU_414_12;
extern WORD BCU_414_13;
extern WORD BCU_414_14;
extern WORD BCU_414_15;
extern WORD BCU_414_16;

extern WORD BCU_420_1;
extern WORD BCU_420_2;
extern WORD BCU_420_3;
extern WORD BCU_420_4;
extern WORD BCU_420_5;
extern WORD BCU_420_6;
extern WORD BCU_420_7;
extern WORD BCU_420_8;
extern WORD BCU_420_9;
extern WORD BCU_420_10;
extern WORD BCU_420_11;
extern WORD BCU_420_12;
extern WORD BCU_420_13;
extern WORD BCU_420_14;
extern WORD BCU_420_15;
extern WORD BCU_420_16;

extern WORD BCU_421_1;
extern WORD BCU_421_2;
extern WORD BCU_421_3;
extern WORD BCU_421_4;
extern WORD BCU_421_5;
extern WORD BCU_421_6;
extern WORD BCU_421_7;
extern WORD BCU_421_8;
extern WORD BCU_421_9;
extern WORD BCU_421_10;
extern WORD BCU_421_11;
extern WORD BCU_421_12;
extern WORD BCU_421_13;
extern WORD BCU_421_14;
extern WORD BCU_421_15;
extern WORD BCU_421_16;

extern WORD BCU_422_1;
extern WORD BCU_422_2;
extern WORD BCU_422_3;
extern WORD BCU_422_4;
extern WORD BCU_422_5;
extern WORD BCU_422_6;
extern WORD BCU_422_7;
extern WORD BCU_422_8;
extern WORD BCU_422_9;
extern WORD BCU_422_10;
extern WORD BCU_422_11;
extern WORD BCU_422_12;
extern WORD BCU_422_13;
extern WORD BCU_422_14;
extern WORD BCU_422_15;
extern WORD BCU_422_16;

extern WORD BCU_423_1;
extern WORD BCU_423_2;
extern WORD BCU_423_3;
extern WORD BCU_423_4;
extern WORD BCU_423_5;
extern WORD BCU_423_6;
extern WORD BCU_423_7;
extern WORD BCU_423_8;
extern WORD BCU_423_9;
extern WORD BCU_423_10;
extern WORD BCU_423_11;
extern WORD BCU_423_12;
extern WORD BCU_423_13;
extern WORD BCU_423_14;
extern WORD BCU_423_15;
extern WORD BCU_423_16;

extern WORD BCU_424_1;
extern WORD BCU_424_2;
extern WORD BCU_424_3;
extern WORD BCU_424_4;
extern WORD BCU_424_5;
extern WORD BCU_424_6;
extern WORD BCU_424_7;
extern WORD BCU_424_8;
extern WORD BCU_424_9;
extern WORD BCU_424_10;
extern WORD BCU_424_11;
extern WORD BCU_424_12;
extern WORD BCU_424_13;
extern WORD BCU_424_14;
extern WORD BCU_424_15;
extern WORD BCU_424_16;

extern WORD BCU_430_1;
extern WORD BCU_430_2;
extern WORD BCU_430_3;
extern WORD BCU_430_4;
extern WORD BCU_430_5;
extern WORD BCU_430_6;
extern WORD BCU_430_7;
extern WORD BCU_430_8;
extern WORD BCU_430_9;
extern WORD BCU_430_10;
extern WORD BCU_430_11;
extern WORD BCU_430_12;
extern WORD BCU_430_13;
extern WORD BCU_430_14;
extern WORD BCU_430_15;
extern WORD BCU_430_16;

extern WORD BCU_431_1;
extern WORD BCU_431_2;
extern WORD BCU_431_3;
extern WORD BCU_431_4;
extern WORD BCU_431_5;
extern WORD BCU_431_6;
extern WORD BCU_431_7;
extern WORD BCU_431_8;
extern WORD BCU_431_9;
extern WORD BCU_431_10;
extern WORD BCU_431_11;
extern WORD BCU_431_12;
extern WORD BCU_431_13;
extern WORD BCU_431_14;
extern WORD BCU_431_15;
extern WORD BCU_431_16;

extern WORD BCU_432_1;
extern WORD BCU_432_2;
extern WORD BCU_432_3;
extern WORD BCU_432_4;
extern WORD BCU_432_5;
extern WORD BCU_432_6;
extern WORD BCU_432_7;
extern WORD BCU_432_8;
extern WORD BCU_432_9;
extern WORD BCU_432_10;
extern WORD BCU_432_11;
extern WORD BCU_432_12;
extern WORD BCU_432_13;
extern WORD BCU_432_14;
extern WORD BCU_432_15;
extern WORD BCU_432_16;

extern WORD BCU_433_1;
extern WORD BCU_433_2;
extern WORD BCU_433_3;
extern WORD BCU_433_4;
extern WORD BCU_433_5;
extern WORD BCU_433_6;
extern WORD BCU_433_7;
extern WORD BCU_433_8;
extern WORD BCU_433_9;
extern WORD BCU_433_10;
extern WORD BCU_433_11;
extern WORD BCU_433_12;
extern WORD BCU_433_13;
extern WORD BCU_433_14;
extern WORD BCU_433_15;
extern WORD BCU_433_16;

extern WORD BCU_434_1;
extern WORD BCU_434_2;
extern WORD BCU_434_3;
extern WORD BCU_434_4;
extern WORD BCU_434_5;
extern WORD BCU_434_6;
extern WORD BCU_434_7;
extern WORD BCU_434_8;
extern WORD BCU_434_9;
extern WORD BCU_434_10;
extern WORD BCU_434_11;
extern WORD BCU_434_12;
extern WORD BCU_434_13;
extern WORD BCU_434_14;
extern WORD BCU_434_15;
extern WORD BCU_434_16;

extern WORD BCU_440_1;
extern WORD BCU_440_2;
extern WORD BCU_440_3;
extern WORD BCU_440_4;
extern WORD BCU_440_5;
extern WORD BCU_440_6;
extern WORD BCU_440_7;
extern WORD BCU_440_8;
extern WORD BCU_440_9;
extern WORD BCU_440_10;
extern WORD BCU_440_11;
extern WORD BCU_440_12;
extern WORD BCU_440_13;
extern WORD BCU_440_14;
extern WORD BCU_440_15;
extern WORD BCU_440_16;

extern WORD BCU_441_1;
extern WORD BCU_441_2;
extern WORD BCU_441_3;
extern WORD BCU_441_4;
extern WORD BCU_441_5;
extern WORD BCU_441_6;
extern WORD BCU_441_7;
extern WORD BCU_441_8;
extern WORD BCU_441_9;
extern WORD BCU_441_10;
extern WORD BCU_441_11;
extern WORD BCU_441_12;
extern WORD BCU_441_13;
extern WORD BCU_441_14;
extern WORD BCU_441_15;
extern WORD BCU_441_16;

extern WORD BCU_442_1;
extern WORD BCU_442_2;
extern WORD BCU_442_3;
extern WORD BCU_442_4;
extern WORD BCU_442_5;
extern WORD BCU_442_6;
extern WORD BCU_442_7;
extern WORD BCU_442_8;
extern WORD BCU_442_9;
extern WORD BCU_442_10;
extern WORD BCU_442_11;
extern WORD BCU_442_12;
extern WORD BCU_442_13;
extern WORD BCU_442_14;
extern WORD BCU_442_15;
extern WORD BCU_442_16;

extern WORD BCU_443_1;
extern WORD BCU_443_2;
extern WORD BCU_443_3;
extern WORD BCU_443_4;
extern WORD BCU_443_5;
extern WORD BCU_443_6;
extern WORD BCU_443_7;
extern WORD BCU_443_8;
extern WORD BCU_443_9;
extern WORD BCU_443_10;
extern WORD BCU_443_11;
extern WORD BCU_443_12;
extern WORD BCU_443_13;
extern WORD BCU_443_14;
extern WORD BCU_443_15;
extern WORD BCU_443_16;

extern WORD BCU_444_1;
extern WORD BCU_444_2;
extern WORD BCU_444_3;
extern WORD BCU_444_4;
extern WORD BCU_444_5;
extern WORD BCU_444_6;
extern WORD BCU_444_7;
extern WORD BCU_444_8;
extern WORD BCU_444_9;
extern WORD BCU_444_10;
extern WORD BCU_444_11;
extern WORD BCU_444_12;
extern WORD BCU_444_13;
extern WORD BCU_444_14;
extern WORD BCU_444_15;
extern WORD BCU_444_16;



extern WORD TCU_510_1;
extern WORD TCU_510_2;
extern WORD TCU_510_3;
extern WORD TCU_510_4;
extern WORD TCU_510_5;
extern WORD TCU_510_6;
extern WORD TCU_510_7;
extern WORD TCU_510_8;
extern WORD TCU_510_9;
extern WORD TCU_510_10;
extern WORD TCU_510_11;
extern WORD TCU_510_12;
extern WORD TCU_510_13;
extern WORD TCU_510_14;
extern WORD TCU_510_15;
extern WORD TCU_510_16;

extern WORD TCU_520_1;
extern WORD TCU_520_2;
extern WORD TCU_520_3;
extern WORD TCU_520_4;
extern WORD TCU_520_5;
extern WORD TCU_520_6;
extern WORD TCU_520_7;
extern WORD TCU_520_8;
extern WORD TCU_520_9;
extern WORD TCU_520_10;
extern WORD TCU_520_11;
extern WORD TCU_520_12;
extern WORD TCU_520_13;
extern WORD TCU_520_14;
extern WORD TCU_520_15;
extern WORD TCU_520_16;

extern WORD TCU_530_1;
extern WORD TCU_530_2;
extern WORD TCU_530_3;
extern WORD TCU_530_4;
extern WORD TCU_530_5;
extern WORD TCU_530_6;
extern WORD TCU_530_7;
extern WORD TCU_530_8;
extern WORD TCU_530_9;
extern WORD TCU_530_10;
extern WORD TCU_530_11;
extern WORD TCU_530_12;
extern WORD TCU_530_13;
extern WORD TCU_530_14;
extern WORD TCU_530_15;
extern WORD TCU_530_16;

extern WORD TCU_540_1;
extern WORD TCU_540_2;
extern WORD TCU_540_3;
extern WORD TCU_540_4;
extern WORD TCU_540_5;
extern WORD TCU_540_6;
extern WORD TCU_540_7;
extern WORD TCU_540_8;
extern WORD TCU_540_9;
extern WORD TCU_540_10;
extern WORD TCU_540_11;
extern WORD TCU_540_12;
extern WORD TCU_540_13;
extern WORD TCU_540_14;
extern WORD TCU_540_15;
extern WORD TCU_540_16;

extern WORD TCU_550_1;
extern WORD TCU_550_2;
extern WORD TCU_550_3;
extern WORD TCU_550_4;
extern WORD TCU_550_5;
extern WORD TCU_550_6;
extern WORD TCU_550_7;
extern WORD TCU_550_8;
extern WORD TCU_550_9;
extern WORD TCU_550_10;
extern WORD TCU_550_11;
extern WORD TCU_550_12;
extern WORD TCU_550_13;
extern WORD TCU_550_14;
extern WORD TCU_550_15;
extern WORD TCU_550_16;

extern WORD TCU_560_1;
extern WORD TCU_560_2;
extern WORD TCU_560_3;
extern WORD TCU_560_4;
extern WORD TCU_560_5;
extern WORD TCU_560_6;
extern WORD TCU_560_7;
extern WORD TCU_560_8;
extern WORD TCU_560_9;
extern WORD TCU_560_10;
extern WORD TCU_560_11;
extern WORD TCU_560_12;
extern WORD TCU_560_13;
extern WORD TCU_560_14;
extern WORD TCU_560_15;
extern WORD TCU_560_16;

extern WORD TCU_511_1;
extern WORD TCU_511_2;
extern WORD TCU_511_3;
extern WORD TCU_511_4;
extern WORD TCU_511_5;
extern WORD TCU_511_6;
extern WORD TCU_511_7;
extern WORD TCU_511_8;
extern WORD TCU_511_9;
extern WORD TCU_511_10;
extern WORD TCU_511_11;
extern WORD TCU_511_12;
extern WORD TCU_511_13;
extern WORD TCU_511_14;
extern WORD TCU_511_15;
extern WORD TCU_511_16;

extern WORD TCU_521_1;
extern WORD TCU_521_2;
extern WORD TCU_521_3;
extern WORD TCU_521_4;
extern WORD TCU_521_5;
extern WORD TCU_521_6;
extern WORD TCU_521_7;
extern WORD TCU_521_8;
extern WORD TCU_521_9;
extern WORD TCU_521_10;
extern WORD TCU_521_11;
extern WORD TCU_521_12;
extern WORD TCU_521_13;
extern WORD TCU_521_14;
extern WORD TCU_521_15;
extern WORD TCU_521_16;

extern WORD TCU_531_1;
extern WORD TCU_531_2;
extern WORD TCU_531_3;
extern WORD TCU_531_4;
extern WORD TCU_531_5;
extern WORD TCU_531_6;
extern WORD TCU_531_7;
extern WORD TCU_531_8;
extern WORD TCU_531_9;
extern WORD TCU_531_10;
extern WORD TCU_531_11;
extern WORD TCU_531_12;
extern WORD TCU_531_13;
extern WORD TCU_531_14;
extern WORD TCU_531_15;
extern WORD TCU_531_16;

extern WORD TCU_541_1;
extern WORD TCU_541_2;
extern WORD TCU_541_3;
extern WORD TCU_541_4;
extern WORD TCU_541_5;
extern WORD TCU_541_6;
extern WORD TCU_541_7;
extern WORD TCU_541_8;
extern WORD TCU_541_9;
extern WORD TCU_541_10;
extern WORD TCU_541_11;
extern WORD TCU_541_12;
extern WORD TCU_541_13;
extern WORD TCU_541_14;
extern WORD TCU_541_15;
extern WORD TCU_541_16;

extern WORD TCU_551_1;
extern WORD TCU_551_2;
extern WORD TCU_551_3;
extern WORD TCU_551_4;
extern WORD TCU_551_5;
extern WORD TCU_551_6;
extern WORD TCU_551_7;
extern WORD TCU_551_8;
extern WORD TCU_551_9;
extern WORD TCU_551_10;
extern WORD TCU_551_11;
extern WORD TCU_551_12;
extern WORD TCU_551_13;
extern WORD TCU_551_14;
extern WORD TCU_551_15;
extern WORD TCU_551_16;

extern WORD TCU_561_1;
extern WORD TCU_561_2;
extern WORD TCU_561_3;
extern WORD TCU_561_4;
extern WORD TCU_561_5;
extern WORD TCU_561_6;
extern WORD TCU_561_7;
extern WORD TCU_561_8;
extern WORD TCU_561_9;
extern WORD TCU_561_10;
extern WORD TCU_561_11;
extern WORD TCU_561_12;
extern WORD TCU_561_13;
extern WORD TCU_561_14;
extern WORD TCU_561_15;
extern WORD TCU_561_16;

extern WORD ACU_610_1;
extern WORD ACU_610_2;
extern WORD ACU_610_3;
extern WORD ACU_610_4;
extern WORD ACU_610_5;
extern WORD ACU_610_6;
extern WORD ACU_610_7;
extern WORD ACU_610_8;
extern WORD ACU_610_9;
extern WORD ACU_610_10;
extern WORD ACU_610_11;
extern WORD ACU_610_12;
extern WORD ACU_610_13;
extern WORD ACU_610_14;
extern WORD ACU_610_15;
extern WORD ACU_610_16;

extern WORD ACU_611_1;
extern WORD ACU_611_2;
extern WORD ACU_611_3;
extern WORD ACU_611_4;
extern WORD ACU_611_5;
extern WORD ACU_611_6;
extern WORD ACU_611_7;
extern WORD ACU_611_8;
extern WORD ACU_611_9;
extern WORD ACU_611_10;
extern WORD ACU_611_11;
extern WORD ACU_611_12;
extern WORD ACU_611_13;
extern WORD ACU_611_14;
extern WORD ACU_611_15;
extern WORD ACU_611_16;

extern WORD ACU_620_1;
extern WORD ACU_620_2;
extern WORD ACU_620_3;
extern WORD ACU_620_4;
extern WORD ACU_620_5;
extern WORD ACU_620_6;
extern WORD ACU_620_7;
extern WORD ACU_620_8;
extern WORD ACU_620_9;
extern WORD ACU_620_10;
extern WORD ACU_620_11;
extern WORD ACU_620_12;
extern WORD ACU_620_13;
extern WORD ACU_620_14;
extern WORD ACU_620_15;
extern WORD ACU_620_16;

extern WORD ACU_621_1;
extern WORD ACU_621_2;
extern WORD ACU_621_3;
extern WORD ACU_621_4;
extern WORD ACU_621_5;
extern WORD ACU_621_6;
extern WORD ACU_621_7;
extern WORD ACU_621_8;
extern WORD ACU_621_9;
extern WORD ACU_621_10;
extern WORD ACU_621_11;
extern WORD ACU_621_12;
extern WORD ACU_621_13;
extern WORD ACU_621_14;
extern WORD ACU_621_15;
extern WORD ACU_621_16;

extern WORD DCU_710_1;
extern WORD DCU_710_2;
extern WORD DCU_710_3;
extern WORD DCU_710_4;
extern WORD DCU_710_5;
extern WORD DCU_710_6;
extern WORD DCU_710_7;
extern WORD DCU_710_8;
extern WORD DCU_710_9;
extern WORD DCU_710_10;
extern WORD DCU_710_11;
extern WORD DCU_710_12;
extern WORD DCU_710_13;
extern WORD DCU_710_14;
extern WORD DCU_710_15;
extern WORD DCU_710_16;

extern WORD DCU_711_1;
extern WORD DCU_711_2;
extern WORD DCU_711_3;
extern WORD DCU_711_4;
extern WORD DCU_711_5;
extern WORD DCU_711_6;
extern WORD DCU_711_7;
extern WORD DCU_711_8;
extern WORD DCU_711_9;
extern WORD DCU_711_10;
extern WORD DCU_711_11;
extern WORD DCU_711_12;
extern WORD DCU_711_13;
extern WORD DCU_711_14;
extern WORD DCU_711_15;
extern WORD DCU_711_16;

extern WORD DCU_720_1;
extern WORD DCU_720_2;
extern WORD DCU_720_3;
extern WORD DCU_720_4;
extern WORD DCU_720_5;
extern WORD DCU_720_6;
extern WORD DCU_720_7;
extern WORD DCU_720_8;
extern WORD DCU_720_9;
extern WORD DCU_720_10;
extern WORD DCU_720_11;
extern WORD DCU_720_12;
extern WORD DCU_720_13;
extern WORD DCU_720_14;
extern WORD DCU_720_15;
extern WORD DCU_720_16;

extern WORD DCU_721_1;
extern WORD DCU_721_2;
extern WORD DCU_721_3;
extern WORD DCU_721_4;
extern WORD DCU_721_5;
extern WORD DCU_721_6;
extern WORD DCU_721_7;
extern WORD DCU_721_8;
extern WORD DCU_721_9;
extern WORD DCU_721_10;
extern WORD DCU_721_11;
extern WORD DCU_721_12;
extern WORD DCU_721_13;
extern WORD DCU_721_14;
extern WORD DCU_721_15;
extern WORD DCU_721_16;

extern WORD DCU_730_1;
extern WORD DCU_730_2;
extern WORD DCU_730_3;
extern WORD DCU_730_4;
extern WORD DCU_730_5;
extern WORD DCU_730_6;
extern WORD DCU_730_7;
extern WORD DCU_730_8;
extern WORD DCU_730_9;
extern WORD DCU_730_10;
extern WORD DCU_730_11;
extern WORD DCU_730_12;
extern WORD DCU_730_13;
extern WORD DCU_730_14;
extern WORD DCU_730_15;
extern WORD DCU_730_16;

extern WORD DCU_731_1;
extern WORD DCU_731_2;
extern WORD DCU_731_3;
extern WORD DCU_731_4;
extern WORD DCU_731_5;
extern WORD DCU_731_6;
extern WORD DCU_731_7;
extern WORD DCU_731_8;
extern WORD DCU_731_9;
extern WORD DCU_731_10;
extern WORD DCU_731_11;
extern WORD DCU_731_12;
extern WORD DCU_731_13;
extern WORD DCU_731_14;
extern WORD DCU_731_15;
extern WORD DCU_731_16;

extern WORD DCU_740_1;
extern WORD DCU_740_2;
extern WORD DCU_740_3;
extern WORD DCU_740_4;
extern WORD DCU_740_5;
extern WORD DCU_740_6;
extern WORD DCU_740_7;
extern WORD DCU_740_8;
extern WORD DCU_740_9;
extern WORD DCU_740_10;
extern WORD DCU_740_11;
extern WORD DCU_740_12;
extern WORD DCU_740_13;
extern WORD DCU_740_14;
extern WORD DCU_740_15;
extern WORD DCU_740_16;

extern WORD DCU_741_1;
extern WORD DCU_741_2;
extern WORD DCU_741_3;
extern WORD DCU_741_4;
extern WORD DCU_741_5;
extern WORD DCU_741_6;
extern WORD DCU_741_7;
extern WORD DCU_741_8;
extern WORD DCU_741_9;
extern WORD DCU_741_10;
extern WORD DCU_741_11;
extern WORD DCU_741_12;
extern WORD DCU_741_13;
extern WORD DCU_741_14;
extern WORD DCU_741_15;
extern WORD DCU_741_16;

extern WORD DCU_750_1;
extern WORD DCU_750_2;
extern WORD DCU_750_3;
extern WORD DCU_750_4;
extern WORD DCU_750_5;
extern WORD DCU_750_6;
extern WORD DCU_750_7;
extern WORD DCU_750_8;
extern WORD DCU_750_9;
extern WORD DCU_750_10;
extern WORD DCU_750_11;
extern WORD DCU_750_12;
extern WORD DCU_750_13;
extern WORD DCU_750_14;
extern WORD DCU_750_15;
extern WORD DCU_750_16;

extern WORD DCU_751_1;
extern WORD DCU_751_2;
extern WORD DCU_751_3;
extern WORD DCU_751_4;
extern WORD DCU_751_5;
extern WORD DCU_751_6;
extern WORD DCU_751_7;
extern WORD DCU_751_8;
extern WORD DCU_751_9;
extern WORD DCU_751_10;
extern WORD DCU_751_11;
extern WORD DCU_751_12;
extern WORD DCU_751_13;
extern WORD DCU_751_14;
extern WORD DCU_751_15;
extern WORD DCU_751_16;

extern WORD DCU_760_1;
extern WORD DCU_760_2;
extern WORD DCU_760_3;
extern WORD DCU_760_4;
extern WORD DCU_760_5;
extern WORD DCU_760_6;
extern WORD DCU_760_7;
extern WORD DCU_760_8;
extern WORD DCU_760_9;
extern WORD DCU_760_10;
extern WORD DCU_760_11;
extern WORD DCU_760_12;
extern WORD DCU_760_13;
extern WORD DCU_760_14;
extern WORD DCU_760_15;
extern WORD DCU_760_16;

extern WORD DCU_761_1;
extern WORD DCU_761_2;
extern WORD DCU_761_3;
extern WORD DCU_761_4;
extern WORD DCU_761_5;
extern WORD DCU_761_6;
extern WORD DCU_761_7;
extern WORD DCU_761_8;
extern WORD DCU_761_9;
extern WORD DCU_761_10;
extern WORD DCU_761_11;
extern WORD DCU_761_12;
extern WORD DCU_761_13;
extern WORD DCU_761_14;
extern WORD DCU_761_15;
extern WORD DCU_761_16;

extern WORD DCU_770_1;
extern WORD DCU_770_2;
extern WORD DCU_770_3;
extern WORD DCU_770_4;
extern WORD DCU_770_5;
extern WORD DCU_770_6;
extern WORD DCU_770_7;
extern WORD DCU_770_8;
extern WORD DCU_770_9;
extern WORD DCU_770_10;
extern WORD DCU_770_11;
extern WORD DCU_770_12;
extern WORD DCU_770_13;
extern WORD DCU_770_14;
extern WORD DCU_770_15;
extern WORD DCU_770_16;

extern WORD DCU_771_1;
extern WORD DCU_771_2;
extern WORD DCU_771_3;
extern WORD DCU_771_4;
extern WORD DCU_771_5;
extern WORD DCU_771_6;
extern WORD DCU_771_7;
extern WORD DCU_771_8;
extern WORD DCU_771_9;
extern WORD DCU_771_10;
extern WORD DCU_771_11;
extern WORD DCU_771_12;
extern WORD DCU_771_13;
extern WORD DCU_771_14;
extern WORD DCU_771_15;
extern WORD DCU_771_16;

extern WORD DCU_780_1;
extern WORD DCU_780_2;
extern WORD DCU_780_3;
extern WORD DCU_780_4;
extern WORD DCU_780_5;
extern WORD DCU_780_6;
extern WORD DCU_780_7;
extern WORD DCU_780_8;
extern WORD DCU_780_9;
extern WORD DCU_780_10;
extern WORD DCU_780_11;
extern WORD DCU_780_12;
extern WORD DCU_780_13;
extern WORD DCU_780_14;
extern WORD DCU_780_15;
extern WORD DCU_780_16;

extern WORD DCU_781_1;
extern WORD DCU_781_2;
extern WORD DCU_781_3;
extern WORD DCU_781_4;
extern WORD DCU_781_5;
extern WORD DCU_781_6;
extern WORD DCU_781_7;
extern WORD DCU_781_8;
extern WORD DCU_781_9;
extern WORD DCU_781_10;
extern WORD DCU_781_11;
extern WORD DCU_781_12;
extern WORD DCU_781_13;
extern WORD DCU_781_14;
extern WORD DCU_781_15;
extern WORD DCU_781_16;

extern WORD DCU_OLD_710_1;
extern WORD DCU_OLD_710_2;
extern WORD DCU_OLD_710_3;
extern WORD DCU_OLD_710_4;
extern WORD DCU_OLD_710_5;
extern WORD DCU_OLD_710_6;
extern WORD DCU_OLD_710_7;
extern WORD DCU_OLD_710_8;
extern WORD DCU_OLD_710_9;
extern WORD DCU_OLD_710_10;
extern WORD DCU_OLD_710_11;
extern WORD DCU_OLD_710_12;
extern WORD DCU_OLD_710_13;
extern WORD DCU_OLD_710_14;
extern WORD DCU_OLD_710_15;
extern WORD DCU_OLD_710_16;

extern WORD DCU_OLD_711_1;
extern WORD DCU_OLD_711_2;
extern WORD DCU_OLD_711_3;
extern WORD DCU_OLD_711_4;
extern WORD DCU_OLD_711_5;
extern WORD DCU_OLD_711_6;
extern WORD DCU_OLD_711_7;
extern WORD DCU_OLD_711_8;
extern WORD DCU_OLD_711_9;
extern WORD DCU_OLD_711_10;
extern WORD DCU_OLD_711_11;
extern WORD DCU_OLD_711_12;
extern WORD DCU_OLD_711_13;
extern WORD DCU_OLD_711_14;
extern WORD DCU_OLD_711_15;
extern WORD DCU_OLD_711_16;

extern WORD DCU_OLD_720_1;
extern WORD DCU_OLD_720_2;
extern WORD DCU_OLD_720_3;
extern WORD DCU_OLD_720_4;
extern WORD DCU_OLD_720_5;
extern WORD DCU_OLD_720_6;
extern WORD DCU_OLD_720_7;
extern WORD DCU_OLD_720_8;
extern WORD DCU_OLD_720_9;
extern WORD DCU_OLD_720_10;
extern WORD DCU_OLD_720_11;
extern WORD DCU_OLD_720_12;
extern WORD DCU_OLD_720_13;
extern WORD DCU_OLD_720_14;
extern WORD DCU_OLD_720_15;
extern WORD DCU_OLD_720_16;

extern WORD DCU_OLD_721_1;
extern WORD DCU_OLD_721_2;
extern WORD DCU_OLD_721_3;
extern WORD DCU_OLD_721_4;
extern WORD DCU_OLD_721_5;
extern WORD DCU_OLD_721_6;
extern WORD DCU_OLD_721_7;
extern WORD DCU_OLD_721_8;
extern WORD DCU_OLD_721_9;
extern WORD DCU_OLD_721_10;
extern WORD DCU_OLD_721_11;
extern WORD DCU_OLD_721_12;
extern WORD DCU_OLD_721_13;
extern WORD DCU_OLD_721_14;
extern WORD DCU_OLD_721_15;
extern WORD DCU_OLD_721_16;

extern WORD DCU_OLD_730_1;
extern WORD DCU_OLD_730_2;
extern WORD DCU_OLD_730_3;
extern WORD DCU_OLD_730_4;
extern WORD DCU_OLD_730_5;
extern WORD DCU_OLD_730_6;
extern WORD DCU_OLD_730_7;
extern WORD DCU_OLD_730_8;
extern WORD DCU_OLD_730_9;
extern WORD DCU_OLD_730_10;
extern WORD DCU_OLD_730_11;
extern WORD DCU_OLD_730_12;
extern WORD DCU_OLD_730_13;
extern WORD DCU_OLD_730_14;
extern WORD DCU_OLD_730_15;
extern WORD DCU_OLD_730_16;

extern WORD DCU_OLD_731_1;
extern WORD DCU_OLD_731_2;
extern WORD DCU_OLD_731_3;
extern WORD DCU_OLD_731_4;
extern WORD DCU_OLD_731_5;
extern WORD DCU_OLD_731_6;
extern WORD DCU_OLD_731_7;
extern WORD DCU_OLD_731_8;
extern WORD DCU_OLD_731_9;
extern WORD DCU_OLD_731_10;
extern WORD DCU_OLD_731_11;
extern WORD DCU_OLD_731_12;
extern WORD DCU_OLD_731_13;
extern WORD DCU_OLD_731_14;
extern WORD DCU_OLD_731_15;
extern WORD DCU_OLD_731_16;

extern WORD DCU_OLD_740_1;
extern WORD DCU_OLD_740_2;
extern WORD DCU_OLD_740_3;
extern WORD DCU_OLD_740_4;
extern WORD DCU_OLD_740_5;
extern WORD DCU_OLD_740_6;
extern WORD DCU_OLD_740_7;
extern WORD DCU_OLD_740_8;
extern WORD DCU_OLD_740_9;
extern WORD DCU_OLD_740_10;
extern WORD DCU_OLD_740_11;
extern WORD DCU_OLD_740_12;
extern WORD DCU_OLD_740_13;
extern WORD DCU_OLD_740_14;
extern WORD DCU_OLD_740_15;
extern WORD DCU_OLD_740_16;

extern WORD DCU_OLD_741_1;
extern WORD DCU_OLD_741_2;
extern WORD DCU_OLD_741_3;
extern WORD DCU_OLD_741_4;
extern WORD DCU_OLD_741_5;
extern WORD DCU_OLD_741_6;
extern WORD DCU_OLD_741_7;
extern WORD DCU_OLD_741_8;
extern WORD DCU_OLD_741_9;
extern WORD DCU_OLD_741_10;
extern WORD DCU_OLD_741_11;
extern WORD DCU_OLD_741_12;
extern WORD DCU_OLD_741_13;
extern WORD DCU_OLD_741_14;
extern WORD DCU_OLD_741_15;
extern WORD DCU_OLD_741_16;

extern WORD DCU_OLD_750_1;
extern WORD DCU_OLD_750_2;
extern WORD DCU_OLD_750_3;
extern WORD DCU_OLD_750_4;
extern WORD DCU_OLD_750_5;
extern WORD DCU_OLD_750_6;
extern WORD DCU_OLD_750_7;
extern WORD DCU_OLD_750_8;
extern WORD DCU_OLD_750_9;
extern WORD DCU_OLD_750_10;
extern WORD DCU_OLD_750_11;
extern WORD DCU_OLD_750_12;
extern WORD DCU_OLD_750_13;
extern WORD DCU_OLD_750_14;
extern WORD DCU_OLD_750_15;
extern WORD DCU_OLD_750_16;

extern WORD DCU_OLD_751_1;
extern WORD DCU_OLD_751_2;
extern WORD DCU_OLD_751_3;
extern WORD DCU_OLD_751_4;
extern WORD DCU_OLD_751_5;
extern WORD DCU_OLD_751_6;
extern WORD DCU_OLD_751_7;
extern WORD DCU_OLD_751_8;
extern WORD DCU_OLD_751_9;
extern WORD DCU_OLD_751_10;
extern WORD DCU_OLD_751_11;
extern WORD DCU_OLD_751_12;
extern WORD DCU_OLD_751_13;
extern WORD DCU_OLD_751_14;
extern WORD DCU_OLD_751_15;
extern WORD DCU_OLD_751_16;

extern WORD DCU_OLD_760_1;
extern WORD DCU_OLD_760_2;
extern WORD DCU_OLD_760_3;
extern WORD DCU_OLD_760_4;
extern WORD DCU_OLD_760_5;
extern WORD DCU_OLD_760_6;
extern WORD DCU_OLD_760_7;
extern WORD DCU_OLD_760_8;
extern WORD DCU_OLD_760_9;
extern WORD DCU_OLD_760_10;
extern WORD DCU_OLD_760_11;
extern WORD DCU_OLD_760_12;
extern WORD DCU_OLD_760_13;
extern WORD DCU_OLD_760_14;
extern WORD DCU_OLD_760_15;
extern WORD DCU_OLD_760_16;

extern WORD DCU_OLD_761_1;
extern WORD DCU_OLD_761_2;
extern WORD DCU_OLD_761_3;
extern WORD DCU_OLD_761_4;
extern WORD DCU_OLD_761_5;
extern WORD DCU_OLD_761_6;
extern WORD DCU_OLD_761_7;
extern WORD DCU_OLD_761_8;
extern WORD DCU_OLD_761_9;
extern WORD DCU_OLD_761_10;
extern WORD DCU_OLD_761_11;
extern WORD DCU_OLD_761_12;
extern WORD DCU_OLD_761_13;
extern WORD DCU_OLD_761_14;
extern WORD DCU_OLD_761_15;
extern WORD DCU_OLD_761_16;

extern WORD DCU_OLD_770_1;
extern WORD DCU_OLD_770_2;
extern WORD DCU_OLD_770_3;
extern WORD DCU_OLD_770_4;
extern WORD DCU_OLD_770_5;
extern WORD DCU_OLD_770_6;
extern WORD DCU_OLD_770_7;
extern WORD DCU_OLD_770_8;
extern WORD DCU_OLD_770_9;
extern WORD DCU_OLD_770_10;
extern WORD DCU_OLD_770_11;
extern WORD DCU_OLD_770_12;
extern WORD DCU_OLD_770_13;
extern WORD DCU_OLD_770_14;
extern WORD DCU_OLD_770_15;
extern WORD DCU_OLD_770_16;

extern WORD DCU_OLD_771_1;
extern WORD DCU_OLD_771_2;
extern WORD DCU_OLD_771_3;
extern WORD DCU_OLD_771_4;
extern WORD DCU_OLD_771_5;
extern WORD DCU_OLD_771_6;
extern WORD DCU_OLD_771_7;
extern WORD DCU_OLD_771_8;
extern WORD DCU_OLD_771_9;
extern WORD DCU_OLD_771_10;
extern WORD DCU_OLD_771_11;
extern WORD DCU_OLD_771_12;
extern WORD DCU_OLD_771_13;
extern WORD DCU_OLD_771_14;
extern WORD DCU_OLD_771_15;
extern WORD DCU_OLD_771_16;

extern WORD DCU_OLD_780_1;
extern WORD DCU_OLD_780_2;
extern WORD DCU_OLD_780_3;
extern WORD DCU_OLD_780_4;
extern WORD DCU_OLD_780_5;
extern WORD DCU_OLD_780_6;
extern WORD DCU_OLD_780_7;
extern WORD DCU_OLD_780_8;
extern WORD DCU_OLD_780_9;
extern WORD DCU_OLD_780_10;
extern WORD DCU_OLD_780_11;
extern WORD DCU_OLD_780_12;
extern WORD DCU_OLD_780_13;
extern WORD DCU_OLD_780_14;
extern WORD DCU_OLD_780_15;
extern WORD DCU_OLD_780_16;

extern WORD DCU_OLD_781_1;
extern WORD DCU_OLD_781_2;
extern WORD DCU_OLD_781_3;
extern WORD DCU_OLD_781_4;
extern WORD DCU_OLD_781_5;
extern WORD DCU_OLD_781_6;
extern WORD DCU_OLD_781_7;
extern WORD DCU_OLD_781_8;
extern WORD DCU_OLD_781_9;
extern WORD DCU_OLD_781_10;
extern WORD DCU_OLD_781_11;
extern WORD DCU_OLD_781_12;
extern WORD DCU_OLD_781_13;
extern WORD DCU_OLD_781_14;
extern WORD DCU_OLD_781_15;
extern WORD DCU_OLD_781_16;

extern WORD DCU_OLD_790_1;
extern WORD DCU_OLD_790_2;
extern WORD DCU_OLD_790_3;
extern WORD DCU_OLD_790_4;
extern WORD DCU_OLD_790_5;
extern WORD DCU_OLD_790_6;
extern WORD DCU_OLD_790_7;
extern WORD DCU_OLD_790_8;
extern WORD DCU_OLD_790_9;
extern WORD DCU_OLD_790_10;
extern WORD DCU_OLD_790_11;
extern WORD DCU_OLD_790_12;
extern WORD DCU_OLD_790_13;
extern WORD DCU_OLD_790_14;
extern WORD DCU_OLD_790_15;
extern WORD DCU_OLD_790_16;

extern WORD DCU_OLD_791_1;
extern WORD DCU_OLD_791_2;
extern WORD DCU_OLD_791_3;
extern WORD DCU_OLD_791_4;
extern WORD DCU_OLD_791_5;
extern WORD DCU_OLD_791_6;
extern WORD DCU_OLD_791_7;
extern WORD DCU_OLD_791_8;
extern WORD DCU_OLD_791_9;
extern WORD DCU_OLD_791_10;
extern WORD DCU_OLD_791_11;
extern WORD DCU_OLD_791_12;
extern WORD DCU_OLD_791_13;
extern WORD DCU_OLD_791_14;
extern WORD DCU_OLD_791_15;
extern WORD DCU_OLD_791_16;

extern WORD DCU_OLD_7A0_1;
extern WORD DCU_OLD_7A0_2;
extern WORD DCU_OLD_7A0_3;
extern WORD DCU_OLD_7A0_4;
extern WORD DCU_OLD_7A0_5;
extern WORD DCU_OLD_7A0_6;
extern WORD DCU_OLD_7A0_7;
extern WORD DCU_OLD_7A0_8;
extern WORD DCU_OLD_7A0_9;
extern WORD DCU_OLD_7A0_10;
extern WORD DCU_OLD_7A0_11;
extern WORD DCU_OLD_7A0_12;
extern WORD DCU_OLD_7A0_13;
extern WORD DCU_OLD_7A0_14;
extern WORD DCU_OLD_7A0_15;
extern WORD DCU_OLD_7A0_16;

extern WORD DCU_OLD_7A1_1;
extern WORD DCU_OLD_7A1_2;
extern WORD DCU_OLD_7A1_3;
extern WORD DCU_OLD_7A1_4;
extern WORD DCU_OLD_7A1_5;
extern WORD DCU_OLD_7A1_6;
extern WORD DCU_OLD_7A1_7;
extern WORD DCU_OLD_7A1_8;
extern WORD DCU_OLD_7A1_9;
extern WORD DCU_OLD_7A1_10;
extern WORD DCU_OLD_7A1_11;
extern WORD DCU_OLD_7A1_12;
extern WORD DCU_OLD_7A1_13;
extern WORD DCU_OLD_7A1_14;
extern WORD DCU_OLD_7A1_15;
extern WORD DCU_OLD_7A1_16;

extern WORD DCU_OLD_7B0_1;
extern WORD DCU_OLD_7B0_2;
extern WORD DCU_OLD_7B0_3;
extern WORD DCU_OLD_7B0_4;
extern WORD DCU_OLD_7B0_5;
extern WORD DCU_OLD_7B0_6;
extern WORD DCU_OLD_7B0_7;
extern WORD DCU_OLD_7B0_8;
extern WORD DCU_OLD_7B0_9;
extern WORD DCU_OLD_7B0_10;
extern WORD DCU_OLD_7B0_11;
extern WORD DCU_OLD_7B0_12;
extern WORD DCU_OLD_7B0_13;
extern WORD DCU_OLD_7B0_14;
extern WORD DCU_OLD_7B0_15;
extern WORD DCU_OLD_7B0_16;

extern WORD DCU_OLD_7B1_1;
extern WORD DCU_OLD_7B1_2;
extern WORD DCU_OLD_7B1_3;
extern WORD DCU_OLD_7B1_4;
extern WORD DCU_OLD_7B1_5;
extern WORD DCU_OLD_7B1_6;
extern WORD DCU_OLD_7B1_7;
extern WORD DCU_OLD_7B1_8;
extern WORD DCU_OLD_7B1_9;
extern WORD DCU_OLD_7B1_10;
extern WORD DCU_OLD_7B1_11;
extern WORD DCU_OLD_7B1_12;
extern WORD DCU_OLD_7B1_13;
extern WORD DCU_OLD_7B1_14;
extern WORD DCU_OLD_7B1_15;
extern WORD DCU_OLD_7B1_16;

extern WORD DCU_OLD_7C0_1;
extern WORD DCU_OLD_7C0_2;
extern WORD DCU_OLD_7C0_3;
extern WORD DCU_OLD_7C0_4;
extern WORD DCU_OLD_7C0_5;
extern WORD DCU_OLD_7C0_6;
extern WORD DCU_OLD_7C0_7;
extern WORD DCU_OLD_7C0_8;
extern WORD DCU_OLD_7C0_9;
extern WORD DCU_OLD_7C0_10;
extern WORD DCU_OLD_7C0_11;
extern WORD DCU_OLD_7C0_12;
extern WORD DCU_OLD_7C0_13;
extern WORD DCU_OLD_7C0_14;
extern WORD DCU_OLD_7C0_15;
extern WORD DCU_OLD_7C0_16;

extern WORD DCU_OLD_7C1_1;
extern WORD DCU_OLD_7C1_2;
extern WORD DCU_OLD_7C1_3;
extern WORD DCU_OLD_7C1_4;
extern WORD DCU_OLD_7C1_5;
extern WORD DCU_OLD_7C1_6;
extern WORD DCU_OLD_7C1_7;
extern WORD DCU_OLD_7C1_8;
extern WORD DCU_OLD_7C1_9;
extern WORD DCU_OLD_7C1_10;
extern WORD DCU_OLD_7C1_11;
extern WORD DCU_OLD_7C1_12;
extern WORD DCU_OLD_7C1_13;
extern WORD DCU_OLD_7C1_14;
extern WORD DCU_OLD_7C1_15;
extern WORD DCU_OLD_7C1_16;

extern WORD DCU_OLD_7D0_1;
extern WORD DCU_OLD_7D0_2;
extern WORD DCU_OLD_7D0_3;
extern WORD DCU_OLD_7D0_4;
extern WORD DCU_OLD_7D0_5;
extern WORD DCU_OLD_7D0_6;
extern WORD DCU_OLD_7D0_7;
extern WORD DCU_OLD_7D0_8;
extern WORD DCU_OLD_7D0_9;
extern WORD DCU_OLD_7D0_10;
extern WORD DCU_OLD_7D0_11;
extern WORD DCU_OLD_7D0_12;
extern WORD DCU_OLD_7D0_13;
extern WORD DCU_OLD_7D0_14;
extern WORD DCU_OLD_7D0_15;
extern WORD DCU_OLD_7D0_16;

extern WORD DCU_OLD_7D1_1;
extern WORD DCU_OLD_7D1_2;
extern WORD DCU_OLD_7D1_3;
extern WORD DCU_OLD_7D1_4;
extern WORD DCU_OLD_7D1_5;
extern WORD DCU_OLD_7D1_6;
extern WORD DCU_OLD_7D1_7;
extern WORD DCU_OLD_7D1_8;
extern WORD DCU_OLD_7D1_9;
extern WORD DCU_OLD_7D1_10;
extern WORD DCU_OLD_7D1_11;
extern WORD DCU_OLD_7D1_12;
extern WORD DCU_OLD_7D1_13;
extern WORD DCU_OLD_7D1_14;
extern WORD DCU_OLD_7D1_15;
extern WORD DCU_OLD_7D1_16;

extern WORD DCU_OLD_7E0_1;
extern WORD DCU_OLD_7E0_2;
extern WORD DCU_OLD_7E0_3;
extern WORD DCU_OLD_7E0_4;
extern WORD DCU_OLD_7E0_5;
extern WORD DCU_OLD_7E0_6;
extern WORD DCU_OLD_7E0_7;
extern WORD DCU_OLD_7E0_8;
extern WORD DCU_OLD_7E0_9;
extern WORD DCU_OLD_7E0_10;
extern WORD DCU_OLD_7E0_11;
extern WORD DCU_OLD_7E0_12;
extern WORD DCU_OLD_7E0_13;
extern WORD DCU_OLD_7E0_14;
extern WORD DCU_OLD_7E0_15;
extern WORD DCU_OLD_7E0_16;

extern WORD DCU_OLD_7E1_1;
extern WORD DCU_OLD_7E1_2;
extern WORD DCU_OLD_7E1_3;
extern WORD DCU_OLD_7E1_4;
extern WORD DCU_OLD_7E1_5;
extern WORD DCU_OLD_7E1_6;
extern WORD DCU_OLD_7E1_7;
extern WORD DCU_OLD_7E1_8;
extern WORD DCU_OLD_7E1_9;
extern WORD DCU_OLD_7E1_10;
extern WORD DCU_OLD_7E1_11;
extern WORD DCU_OLD_7E1_12;
extern WORD DCU_OLD_7E1_13;
extern WORD DCU_OLD_7E1_14;
extern WORD DCU_OLD_7E1_15;
extern WORD DCU_OLD_7E1_16;

extern WORD DCU_OLD_7F0_1;
extern WORD DCU_OLD_7F0_2;
extern WORD DCU_OLD_7F0_3;
extern WORD DCU_OLD_7F0_4;
extern WORD DCU_OLD_7F0_5;
extern WORD DCU_OLD_7F0_6;
extern WORD DCU_OLD_7F0_7;
extern WORD DCU_OLD_7F0_8;
extern WORD DCU_OLD_7F0_9;
extern WORD DCU_OLD_7F0_10;
extern WORD DCU_OLD_7F0_11;
extern WORD DCU_OLD_7F0_12;
extern WORD DCU_OLD_7F0_13;
extern WORD DCU_OLD_7F0_14;
extern WORD DCU_OLD_7F0_15;
extern WORD DCU_OLD_7F0_16;

extern WORD DCU_OLD_7F1_1;
extern WORD DCU_OLD_7F1_2;
extern WORD DCU_OLD_7F1_3;
extern WORD DCU_OLD_7F1_4;
extern WORD DCU_OLD_7F1_5;
extern WORD DCU_OLD_7F1_6;
extern WORD DCU_OLD_7F1_7;
extern WORD DCU_OLD_7F1_8;
extern WORD DCU_OLD_7F1_9;
extern WORD DCU_OLD_7F1_10;
extern WORD DCU_OLD_7F1_11;
extern WORD DCU_OLD_7F1_12;
extern WORD DCU_OLD_7F1_13;
extern WORD DCU_OLD_7F1_14;
extern WORD DCU_OLD_7F1_15;
extern WORD DCU_OLD_7F1_16;

extern WORD DCU_OLD_700_1;
extern WORD DCU_OLD_700_2;
extern WORD DCU_OLD_700_3;
extern WORD DCU_OLD_700_4;
extern WORD DCU_OLD_700_5;
extern WORD DCU_OLD_700_6;
extern WORD DCU_OLD_700_7;
extern WORD DCU_OLD_700_8;
extern WORD DCU_OLD_700_9;
extern WORD DCU_OLD_700_10;
extern WORD DCU_OLD_700_11;
extern WORD DCU_OLD_700_12;
extern WORD DCU_OLD_700_13;
extern WORD DCU_OLD_700_14;
extern WORD DCU_OLD_700_15;
extern WORD DCU_OLD_700_16;

extern WORD DCU_OLD_701_1;
extern WORD DCU_OLD_701_2;
extern WORD DCU_OLD_701_3;
extern WORD DCU_OLD_701_4;
extern WORD DCU_OLD_701_5;
extern WORD DCU_OLD_701_6;
extern WORD DCU_OLD_701_7;
extern WORD DCU_OLD_701_8;
extern WORD DCU_OLD_701_9;
extern WORD DCU_OLD_701_10;
extern WORD DCU_OLD_701_11;
extern WORD DCU_OLD_701_12;
extern WORD DCU_OLD_701_13;
extern WORD DCU_OLD_701_14;
extern WORD DCU_OLD_701_15;
extern WORD DCU_OLD_701_16;

extern WORD HVAC_810_1;
extern WORD HVAC_810_2;
extern WORD HVAC_810_3;
extern WORD HVAC_810_4;
extern WORD HVAC_810_5;
extern WORD HVAC_810_6;
extern WORD HVAC_810_7;
extern WORD HVAC_810_8;
extern WORD HVAC_810_9;
extern WORD HVAC_810_10;
extern WORD HVAC_810_11;
extern WORD HVAC_810_12;
extern WORD HVAC_810_13;
extern WORD HVAC_810_14;
extern WORD HVAC_810_15;
extern WORD HVAC_810_16;

extern WORD HVAC_820_1;
extern WORD HVAC_820_2;
extern WORD HVAC_820_3;
extern WORD HVAC_820_4;
extern WORD HVAC_820_5;
extern WORD HVAC_820_6;
extern WORD HVAC_820_7;
extern WORD HVAC_820_8;
extern WORD HVAC_820_9;
extern WORD HVAC_820_10;
extern WORD HVAC_820_11;
extern WORD HVAC_820_12;
extern WORD HVAC_820_13;
extern WORD HVAC_820_14;
extern WORD HVAC_820_15;
extern WORD HVAC_820_16;

extern WORD HVAC_830_1;
extern WORD HVAC_830_2;
extern WORD HVAC_830_3;
extern WORD HVAC_830_4;
extern WORD HVAC_830_5;
extern WORD HVAC_830_6;
extern WORD HVAC_830_7;
extern WORD HVAC_830_8;
extern WORD HVAC_830_9;
extern WORD HVAC_830_10;
extern WORD HVAC_830_11;
extern WORD HVAC_830_12;
extern WORD HVAC_830_13;
extern WORD HVAC_830_14;
extern WORD HVAC_830_15;
extern WORD HVAC_830_16;

extern WORD HVAC_840_1;
extern WORD HVAC_840_2;
extern WORD HVAC_840_3;
extern WORD HVAC_840_4;
extern WORD HVAC_840_5;
extern WORD HVAC_840_6;
extern WORD HVAC_840_7;
extern WORD HVAC_840_8;
extern WORD HVAC_840_9;
extern WORD HVAC_840_10;
extern WORD HVAC_840_11;
extern WORD HVAC_840_12;
extern WORD HVAC_840_13;
extern WORD HVAC_840_14;
extern WORD HVAC_840_15;
extern WORD HVAC_840_16;

extern WORD HVAC_850_1;
extern WORD HVAC_850_2;
extern WORD HVAC_850_3;
extern WORD HVAC_850_4;
extern WORD HVAC_850_5;
extern WORD HVAC_850_6;
extern WORD HVAC_850_7;
extern WORD HVAC_850_8;
extern WORD HVAC_850_9;
extern WORD HVAC_850_10;
extern WORD HVAC_850_11;
extern WORD HVAC_850_12;
extern WORD HVAC_850_13;
extern WORD HVAC_850_14;
extern WORD HVAC_850_15;
extern WORD HVAC_850_16;

extern WORD HVAC_860_1;
extern WORD HVAC_860_2;
extern WORD HVAC_860_3;
extern WORD HVAC_860_4;
extern WORD HVAC_860_5;
extern WORD HVAC_860_6;
extern WORD HVAC_860_7;
extern WORD HVAC_860_8;
extern WORD HVAC_860_9;
extern WORD HVAC_860_10;
extern WORD HVAC_860_11;
extern WORD HVAC_860_12;
extern WORD HVAC_860_13;
extern WORD HVAC_860_14;
extern WORD HVAC_860_15;
extern WORD HVAC_860_16;

extern WORD HVAC_870_1;
extern WORD HVAC_870_2;
extern WORD HVAC_870_3;
extern WORD HVAC_870_4;
extern WORD HVAC_870_5;
extern WORD HVAC_870_6;
extern WORD HVAC_870_7;
extern WORD HVAC_870_8;
extern WORD HVAC_870_9;
extern WORD HVAC_870_10;
extern WORD HVAC_870_11;
extern WORD HVAC_870_12;
extern WORD HVAC_870_13;
extern WORD HVAC_870_14;
extern WORD HVAC_870_15;
extern WORD HVAC_870_16;

extern WORD HVAC_880_1;
extern WORD HVAC_880_2;
extern WORD HVAC_880_3;
extern WORD HVAC_880_4;
extern WORD HVAC_880_5;
extern WORD HVAC_880_6;
extern WORD HVAC_880_7;
extern WORD HVAC_880_8;
extern WORD HVAC_880_9;
extern WORD HVAC_880_10;
extern WORD HVAC_880_11;
extern WORD HVAC_880_12;
extern WORD HVAC_880_13;
extern WORD HVAC_880_14;
extern WORD HVAC_880_15;
extern WORD HVAC_880_16;

extern WORD PIS_910_1;
extern WORD PIS_910_2;
extern WORD PIS_910_3;
extern WORD PIS_910_4;
extern WORD PIS_910_5;
extern WORD PIS_910_6;
extern WORD PIS_910_7;
extern WORD PIS_910_8;
extern WORD PIS_910_9;
extern WORD PIS_910_10;
extern WORD PIS_910_11;
extern WORD PIS_910_12;
extern WORD PIS_910_13;
extern WORD PIS_910_14;
extern WORD PIS_910_15;
extern WORD PIS_910_16;

extern WORD PIS_911_1;
extern WORD PIS_911_2;
extern WORD PIS_911_3;
extern WORD PIS_911_4;
extern WORD PIS_911_5;
extern WORD PIS_911_6;
extern WORD PIS_911_7;
extern WORD PIS_911_8;
extern WORD PIS_911_9;
extern WORD PIS_911_10;
extern WORD PIS_911_11;
extern WORD PIS_911_12;
extern WORD PIS_911_13;
extern WORD PIS_911_14;
extern WORD PIS_911_15;
extern WORD PIS_911_16;

extern WORD PIS_920_1;
extern WORD PIS_920_2;
extern WORD PIS_920_3;
extern WORD PIS_920_4;
extern WORD PIS_920_5;
extern WORD PIS_920_6;
extern WORD PIS_920_7;
extern WORD PIS_920_8;
extern WORD PIS_920_9;
extern WORD PIS_920_10;
extern WORD PIS_920_11;
extern WORD PIS_920_12;
extern WORD PIS_920_13;
extern WORD PIS_920_14;
extern WORD PIS_920_15;
extern WORD PIS_920_16;

extern WORD PIS_921_1;
extern WORD PIS_921_2;
extern WORD PIS_921_3;
extern WORD PIS_921_4;
extern WORD PIS_921_5;
extern WORD PIS_921_6;
extern WORD PIS_921_7;
extern WORD PIS_921_8;
extern WORD PIS_921_9;
extern WORD PIS_921_10;
extern WORD PIS_921_11;
extern WORD PIS_921_12;
extern WORD PIS_921_13;
extern WORD PIS_921_14;
extern WORD PIS_921_15;
extern WORD PIS_921_16;

extern WORD ATC_A10_1;
extern WORD ATC_A10_2;
extern WORD ATC_A10_3;
extern WORD ATC_A10_4;
extern WORD ATC_A10_5;
extern WORD ATC_A10_6;
extern WORD ATC_A10_7;
extern WORD ATC_A10_8;
extern WORD ATC_A10_9;
extern WORD ATC_A10_10;
extern WORD ATC_A10_11;
extern WORD ATC_A10_12;
extern WORD ATC_A10_13;
extern WORD ATC_A10_14;
extern WORD ATC_A10_15;
extern WORD ATC_A10_16;

extern WORD ATC_A11_1;
extern WORD ATC_A11_2;
extern WORD ATC_A11_3;
extern WORD ATC_A11_4;
extern WORD ATC_A11_5;
extern WORD ATC_A11_6;
extern WORD ATC_A11_7;
extern WORD ATC_A11_8;
extern WORD ATC_A11_9;
extern WORD ATC_A11_10;
extern WORD ATC_A11_11;
extern WORD ATC_A11_12;
extern WORD ATC_A11_13;
extern WORD ATC_A11_14;
extern WORD ATC_A11_15;
extern WORD ATC_A11_16;

extern WORD  FAS_B10_1;
extern WORD  FAS_B10_2;
extern WORD  FAS_B10_3;
extern WORD  FAS_B10_4;
extern WORD  FAS_B10_5;
extern WORD  FAS_B10_6;
extern WORD  FAS_B10_7;
extern WORD  FAS_B10_8;
extern WORD  FAS_B10_9;
extern WORD  FAS_B10_10;
extern WORD  FAS_B10_11;
extern WORD  FAS_B10_12;
extern WORD  FAS_B10_13;
extern WORD  FAS_B10_14;
extern WORD  FAS_B10_15;
extern WORD  FAS_B10_16;

extern WORD  FAS_B20_1;
extern WORD  FAS_B20_2;
extern WORD  FAS_B20_3;
extern WORD  FAS_B20_4;
extern WORD  FAS_B20_5;
extern WORD  FAS_B20_6;
extern WORD  FAS_B20_7;
extern WORD  FAS_B20_8;
extern WORD  FAS_B20_9;
extern WORD  FAS_B20_10;
extern WORD  FAS_B20_11;
extern WORD  FAS_B20_12;
extern WORD  FAS_B20_13;
extern WORD  FAS_B20_14;
extern WORD  FAS_B20_15;
extern WORD  FAS_B20_16;

extern WORD ERM_F00_1;
extern WORD ERM_F00_2;
extern WORD ERM_F00_3;
extern WORD ERM_F00_4;
extern WORD ERM_F00_5;
extern WORD ERM_F00_6;
extern WORD ERM_F00_7;
extern WORD ERM_F00_8;
extern WORD ERM_F00_9;
extern WORD ERM_F00_10;
extern WORD ERM_F00_11;
extern WORD ERM_F00_12;
extern WORD ERM_F00_13;
extern WORD ERM_F00_14;
extern WORD ERM_F00_15;
extern WORD ERM_F00_16;

extern WORD ERM_F01_1;
extern WORD ERM_F01_2;
extern WORD ERM_F01_3;
extern WORD ERM_F01_4;
extern WORD ERM_F01_5;
extern WORD ERM_F01_6;
extern WORD ERM_F01_7;
extern WORD ERM_F01_8;
extern WORD ERM_F01_9;
extern WORD ERM_F01_10;
extern WORD ERM_F01_11;
extern WORD ERM_F01_12;
extern WORD ERM_F01_13;
extern WORD ERM_F01_14;
extern WORD ERM_F01_15;
extern WORD ERM_F01_16;

extern WORD ERM_F02_1;
extern WORD ERM_F02_2;
extern WORD ERM_F02_3;
extern WORD ERM_F02_4;
extern WORD ERM_F02_5;
extern WORD ERM_F02_6;
extern WORD ERM_F02_7;
extern WORD ERM_F02_8;
extern WORD ERM_F02_9;
extern WORD ERM_F02_10;
extern WORD ERM_F02_11;
extern WORD ERM_F02_12;
extern WORD ERM_F02_13;
extern WORD ERM_F02_14;
extern WORD ERM_F02_15;
extern WORD ERM_F02_16;

extern WORD ERM_F03_1;
extern WORD ERM_F03_2;
extern WORD ERM_F03_3;
extern WORD ERM_F03_4;
extern WORD ERM_F03_5;
extern WORD ERM_F03_6;
extern WORD ERM_F03_7;
extern WORD ERM_F03_8;
extern WORD ERM_F03_9;
extern WORD ERM_F03_10;
extern WORD ERM_F03_11;
extern WORD ERM_F03_12;
extern WORD ERM_F03_13;
extern WORD ERM_F03_14;
extern WORD ERM_F03_15;
extern WORD ERM_F03_16;

extern WORD ERM_F10_1;
extern WORD ERM_F10_2;
extern WORD ERM_F10_3;
extern WORD ERM_F10_4;
extern WORD ERM_F10_5;
extern WORD ERM_F10_6;
extern WORD ERM_F10_7;
extern WORD ERM_F10_8;
extern WORD ERM_F10_9;
extern WORD ERM_F10_10;
extern WORD ERM_F10_11;
extern WORD ERM_F10_12;
extern WORD ERM_F10_13;
extern WORD ERM_F10_14;
extern WORD ERM_F10_15;
extern WORD ERM_F10_16;

extern WORD ERM_F11_1;
extern WORD ERM_F11_2;
extern WORD ERM_F11_3;
extern WORD ERM_F11_4;
extern WORD ERM_F11_5;
extern WORD ERM_F11_6;
extern WORD ERM_F11_7;
extern WORD ERM_F11_8;
extern WORD ERM_F11_9;
extern WORD ERM_F11_10;
extern WORD ERM_F11_11;
extern WORD ERM_F11_12;
extern WORD ERM_F11_13;
extern WORD ERM_F11_14;
extern WORD ERM_F11_15;
extern WORD ERM_F11_16;

extern WORD ERM_F12_1;
extern WORD ERM_F12_2;
extern WORD ERM_F12_3;
extern WORD ERM_F12_4;
extern WORD ERM_F12_5;
extern WORD ERM_F12_6;
extern WORD ERM_F12_7;
extern WORD ERM_F12_8;
extern WORD ERM_F12_9;
extern WORD ERM_F12_10;
extern WORD ERM_F12_11;
extern WORD ERM_F12_12;
extern WORD ERM_F12_13;
extern WORD ERM_F12_14;
extern WORD ERM_F12_15;
extern WORD ERM_F12_16;

extern WORD ERM_F13_1;
extern WORD ERM_F13_2;
extern WORD ERM_F13_3;
extern WORD ERM_F13_4;
extern WORD ERM_F13_5;
extern WORD ERM_F13_6;
extern WORD ERM_F13_7;
extern WORD ERM_F13_8;
extern WORD ERM_F13_9;
extern WORD ERM_F13_10;
extern WORD ERM_F13_11;
extern WORD ERM_F13_12;
extern WORD ERM_F13_13;
extern WORD ERM_F13_14;
extern WORD ERM_F13_15;
extern WORD ERM_F13_16;

extern WORD CCU_HMI_220_1;
extern WORD CCU_HMI_220_2;
extern WORD CCU_HMI_220_3;
extern WORD CCU_HMI_220_4;
extern WORD CCU_HMI_220_5;
extern WORD CCU_HMI_220_6;
extern WORD CCU_HMI_220_7;
extern WORD CCU_HMI_220_8;
extern WORD CCU_HMI_220_9;
extern WORD CCU_HMI_220_10;
extern WORD CCU_HMI_220_11;
extern WORD CCU_HMI_220_12;
extern WORD CCU_HMI_220_13;
extern WORD CCU_HMI_220_14;
extern WORD CCU_HMI_220_15;
extern WORD CCU_HMI_220_16;

extern WORD CCU_HMI_221_1;
extern WORD CCU_HMI_221_2;
extern WORD CCU_HMI_221_3;
extern WORD CCU_HMI_221_4;
extern WORD CCU_HMI_221_5;
extern WORD CCU_HMI_221_6;
extern WORD CCU_HMI_221_7;
extern WORD CCU_HMI_221_8;
extern WORD CCU_HMI_221_9;
extern WORD CCU_HMI_221_10;
extern WORD CCU_HMI_221_11;
extern WORD CCU_HMI_221_12;
extern WORD CCU_HMI_221_13;
extern WORD CCU_HMI_221_14;
extern WORD CCU_HMI_221_15;
extern WORD CCU_HMI_221_16;

extern WORD CCU_HMI_222_1;
extern WORD CCU_HMI_222_2;
extern WORD CCU_HMI_222_3;
extern WORD CCU_HMI_222_4;
extern WORD CCU_HMI_222_5;
extern WORD CCU_HMI_222_6;
extern WORD CCU_HMI_222_7;
extern WORD CCU_HMI_222_8;
extern WORD CCU_HMI_222_9;
extern WORD CCU_HMI_222_10;
extern WORD CCU_HMI_222_11;
extern WORD CCU_HMI_222_12;
extern WORD CCU_HMI_222_13;
extern WORD CCU_HMI_222_14;
extern WORD CCU_HMI_222_15;
extern WORD CCU_HMI_222_16;

extern WORD CCU_HMI_223_1;
extern WORD CCU_HMI_223_2;
extern WORD CCU_HMI_223_3;
extern WORD CCU_HMI_223_4;
extern WORD CCU_HMI_223_5;
extern WORD CCU_HMI_223_6;
extern WORD CCU_HMI_223_7;
extern WORD CCU_HMI_223_8;
extern WORD CCU_HMI_223_9;
extern WORD CCU_HMI_223_10;
extern WORD CCU_HMI_223_11;
extern WORD CCU_HMI_223_12;
extern WORD CCU_HMI_223_13;
extern WORD CCU_HMI_223_14;
extern WORD CCU_HMI_223_15;
extern WORD CCU_HMI_223_16;


extern WORD comm_status_data1;
extern WORD comm_status_data2;
extern WORD comm_status_data3;
extern WORD comm_status_data4;
extern WORD comm_status_data5;
extern WORD comm_status_data6;
extern WORD comm_status_data7;
extern WORD comm_status_data8;
extern WORD comm_status_data9;
extern WORD comm_status_data10;
extern WORD comm_status_data11;
extern WORD comm_status_data12;
extern WORD comm_status_data13;
extern WORD comm_status_data14;
extern WORD comm_status_data15;
extern WORD comm_status_data16;
extern WORD comm_status_data17;
extern WORD comm_status_data18;
extern WORD comm_status_data19;
extern WORD comm_status_data20;
extern WORD comm_status_data21;
extern WORD comm_status_data22;
extern WORD comm_status_data23;
extern WORD comm_status_data24;
extern WORD comm_status_data25;
extern WORD comm_status_data26;
extern WORD comm_status_data27;
extern WORD comm_status_data28;
extern WORD comm_status_data29;
extern WORD comm_status_data30;
extern WORD comm_status_data31;
extern WORD comm_status_data32;
extern WORD comm_status_data33;
extern WORD comm_status_data34;
extern WORD comm_status_data35;
extern WORD comm_status_data36;
extern WORD comm_status_data37;
extern WORD comm_status_data38;
extern WORD comm_status_data39;
extern WORD comm_status_data40;
extern WORD comm_status_data41;
extern WORD comm_status_data42;
extern WORD comm_status_data43;
extern WORD comm_status_data44;
extern WORD comm_status_data45;
extern WORD comm_status_data46;
extern WORD comm_status_data47;
extern WORD comm_status_data48;
extern WORD comm_status_data49;
extern WORD comm_status_data50;
extern WORD comm_status_data51;
extern WORD comm_status_data52;
extern WORD comm_status_data53;
extern WORD comm_status_data54;
extern WORD comm_status_data55;
extern WORD comm_status_data56;
extern WORD comm_status_data57;
extern WORD comm_status_data58;
extern WORD comm_status_data59;
extern WORD comm_status_data60;
extern WORD comm_status_data61;
extern WORD comm_status_data62;
extern WORD comm_status_data63;
extern WORD comm_status_data64;
extern WORD comm_status_data65;
extern WORD comm_status_data66;
extern WORD comm_status_data67;
extern WORD comm_status_data68;
extern WORD comm_status_data69;
extern WORD comm_status_data70;
extern WORD comm_status_data71;
extern WORD comm_status_data72;
extern WORD comm_status_data73;
extern WORD comm_status_data74;
extern WORD comm_status_data75;
extern WORD comm_status_data76;
extern WORD comm_status_data77;
extern WORD comm_status_data78;
extern WORD comm_status_data79;
extern WORD comm_status_data80;
extern WORD comm_status_data81;
extern WORD comm_status_data82;
extern WORD comm_status_data83;
extern WORD comm_status_data84;
extern WORD comm_status_data85;
extern WORD comm_status_data86;
extern WORD comm_status_data87;
extern WORD comm_status_data88;
extern WORD comm_status_data89;
extern WORD comm_status_data90;
extern WORD comm_status_data91;
extern WORD error_code;
extern WORD error_code1;
extern WORD error_code2;
extern WORD error_code3;
extern WORD error_code4;
extern WORD error_code5;
extern WORD error_code6;
extern WORD error_code7;
extern WORD error_code8;
extern WORD error_code9;
extern WORD error_code10;
extern WORD error_code11;
extern WORD error_code12;
extern WORD error_code13;
extern WORD error_code14;
extern WORD error_code15;
extern WORD error_code16;
extern WORD error_code17;
extern WORD error_code18;
extern WORD error_code19;
extern WORD error_code20;
extern WORD error_code21;
extern WORD error_code22;
extern WORD error_code23;
extern WORD error_code24;
extern WORD error_code25;
extern WORD error_code26;
extern WORD error_code27;
extern WORD error_code28;
extern WORD error_code29;
extern WORD error_code30;
extern WORD error_code31;
extern WORD error_code32;
extern WORD error_code33;
extern WORD error_code34;
extern WORD error_code35;
extern WORD error_code36;
extern WORD error_code37;
extern WORD error_code38;
extern WORD error_code39;
extern WORD error_code40;
extern WORD error_code41;
extern WORD error_code42;
extern WORD error_code43;
extern WORD error_code44;
extern WORD error_code45;
extern WORD error_code46;
extern WORD error_code47;
extern WORD error_code48;
extern WORD error_code49;
extern WORD error_code50;
extern WORD error_code51;
extern WORD error_code52;
extern WORD error_code53;
extern WORD error_code54;
extern WORD error_code55;
extern WORD error_code56;
extern WORD error_code57;
extern WORD error_code58;
extern WORD error_code59;
extern WORD error_code60;
extern WORD currency_data1;
extern WORD currency_data2;
extern WORD currency_data3;
extern WORD currency_data4;
extern WORD currency_data5;
extern WORD currency_data6;
extern WORD currency_data7;
extern WORD run_status_data1;
extern WORD run_status_data2;
extern WORD run_status_data3;
extern WORD run_status_data4;
extern WORD run_status_data5;
extern WORD run_status_data6;
extern WORD run_status_data7;
extern WORD run_status_data8;
extern WORD run_status_data9;
extern WORD run_status_data10;
extern WORD run_status_data11;
extern WORD run_status_data12;
extern WORD run_status_data13;
extern WORD run_status_data14;
extern WORD run_status_data15;
extern WORD run_status_data16;
extern WORD run_status_data17;
extern WORD run_status_data18;
extern WORD run_status_data19;
extern WORD run_status_data20;
extern WORD run_status_data21;
extern WORD run_status_data22;
extern WORD run_status_data23;
extern WORD run_status_data24;
extern WORD run_status_data25;
extern WORD run_status_data26;
extern WORD run_status_data27;
extern WORD run_status_data28;
extern WORD run_status_data29;
extern WORD run_status_data30;
extern WORD run_status_data31;
extern WORD run_status_data32;
extern WORD run_status_data33;
extern WORD run_status_data34;
extern WORD run_status_data35;
extern WORD run_status_data36;
extern WORD run_status_data37;
extern WORD run_status_data38;
extern WORD run_status_data39;
extern WORD run_status_data40;
extern WORD run_status_data41;
extern WORD run_status_data42;
extern WORD run_status_data43;
extern WORD run_status_data44;
extern WORD run_status_data45;
extern WORD run_status_data46;
extern WORD run_status_data47;
extern WORD run_status_data48;
extern WORD run_status_data49;
extern WORD run_status_data50;
extern WORD run_status_data51;
extern WORD run_status_data52;
extern WORD run_status_data53;
extern WORD run_status_data54;
extern WORD run_status_data55;
extern WORD run_status_data56;
extern WORD run_status_data57;
extern WORD run_status_data58;
extern WORD run_status_data59;
extern WORD run_status_data60;
extern WORD run_status_data61;
extern WORD run_status_data62;
extern WORD run_status_data63;
extern WORD run_status_data64;
extern WORD run_status_data65;
extern WORD run_status_data66;
extern WORD run_status_data67;
extern WORD run_status_data68;
extern WORD run_status_data69;
extern WORD run_status_data70;
extern WORD run_status_data71;
extern WORD run_status_data72;
extern WORD run_status_data73;
extern WORD run_status_data74;
extern WORD run_status_data75;
extern WORD run_status_data76;
extern WORD run_status_data77;
extern WORD run_status_data78;
extern WORD run_status_data79;
extern WORD run_status_data80;
extern WORD run_status_data81;
extern WORD run_status_data82;
extern WORD run_status_data83;
extern WORD run_status_data84;
extern WORD run_status_data85;
extern WORD run_status_data86;
extern WORD run_status_data87;
extern WORD run_status_data88;
extern WORD run_status_data89;
extern WORD run_status_data90;
extern WORD run_status_data91;
extern WORD run_status_data92;
extern WORD run_status_data93;
extern WORD run_status_data94;
extern WORD run_status_data95;
extern WORD run_status_data96;
extern WORD run_status_data97;
extern WORD run_status_data98;
extern WORD run_status_data99;
extern WORD run_status_data100;
extern WORD run_status_data101;
extern WORD run_status_data102;
extern WORD run_status_data103;
extern WORD train_status_data1;
extern WORD train_status_data2;
extern WORD train_status_data3;
extern WORD train_status_data4;
extern WORD train_status_data5;
extern WORD train_status_data6;
extern WORD train_status_data7;
extern WORD train_status_data8;
extern WORD train_status_data9;
extern WORD train_status_data10;
extern WORD train_status_data11;
extern WORD train_status_data12;
extern WORD train_status_data13;
extern WORD train_status_data14;
extern WORD train_status_data15;
extern WORD train_status_data16;
extern WORD train_status_data17;
extern WORD train_status_data18;
extern WORD train_status_data19;
extern WORD train_status_data20;
extern WORD train_status_data21;
extern WORD train_status_data22;
extern WORD train_status_data23;
extern WORD train_status_data24;
extern WORD train_status_data25;
extern WORD train_status_data26;
extern WORD train_status_data27;
extern WORD train_status_data28;
extern WORD train_status_data29;
extern WORD train_status_data30;
extern WORD train_status_data31;
extern WORD train_status_data32;
extern WORD train_status_data33;
extern WORD train_status_data34;
extern WORD train_status2_data1;
extern WORD train_status2_data2;
extern WORD train_status2_data3;
extern WORD train_status2_data4;
extern WORD train_status2_data5;
extern WORD train_status2_data6;
extern WORD train_status2_data7;
extern WORD train_status2_data8;
extern WORD train_status2_data9;
extern WORD train_status2_data10;
extern WORD train_status2_data11;
extern WORD train_status2_data12;
extern WORD train_status2_data13;
extern WORD train_status2_data14;
extern WORD train_status2_data15;
extern WORD train_status2_data16;
extern WORD train_status2_data17;
extern WORD train_status2_data18;
extern WORD train_status2_data19;
extern WORD train_status2_data20;
extern WORD train_status2_data21;
extern WORD train_status3_data1;
extern WORD train_status3_data2;
extern WORD train_status3_data3;
extern WORD hvac_status_data1;
extern WORD hvac_status_data2;
extern WORD hvac_status_data3;
extern WORD hvac_status_data4;
extern WORD hvac_status_data5;
extern WORD hvac_status_data6;
extern WORD hvac_status_data7;
extern WORD hvac_status_data8;
extern WORD hvac_status_data9;
extern WORD hvac_status_data10;
extern WORD hvac_status_data11;
extern WORD hvac_status_data12;
extern WORD hvac_status_data13;
extern WORD hvac_status_data14;
extern WORD hvac_status_data15;
extern WORD hvac_status_data16;
extern WORD hvac_status_data17;
extern WORD hvac_status_data18;
extern WORD hvac_status_data19;
extern WORD hvac_status_data20;
extern WORD hvac_status_data21;
extern WORD hvac_status_data22;
extern WORD hvac_status_data23;
extern WORD hvac_status_data24;
extern WORD hvac_status_data25;
extern WORD hvac_status_data26;
extern WORD hvac_status_data27;
extern WORD hvac_status_data28;
extern WORD hvac_status_data29;
extern WORD hvac_status_data30;
extern WORD hvac_status_data31;
extern WORD hvac_status_data32;
extern WORD hvac_status_data33;
extern WORD hvac_status_data34;
extern WORD hvac_status_data35;
extern WORD hvac_status_data36;
extern WORD hvac_status_data37;
extern WORD hvac_status_data38;
extern WORD hvac_status_data39;
extern WORD hvac_status_data40;
extern WORD hvac_status_data41;
extern WORD hvac_status_data42;
extern WORD hvac_status_data43;
extern WORD hvac_status_data44;
extern WORD parameter_setting_data1;
extern WORD parameter_setting_data2;
extern WORD parameter_setting_data3;
extern WORD parameter_setting_data4;
extern WORD parameter_setting_data5;
extern WORD parameter_setting_data6;
extern WORD parameter_setting_data7;
extern WORD parameter_setting_data8;
extern WORD parameter_setting_data9;
extern WORD parameter_setting_data10;
extern WORD parameter_setting_data11;
extern WORD parameter_setting_data12;
extern WORD parameter_setting_data13;
extern WORD parameter_setting_data14;
extern WORD parameter_setting_data15;
extern WORD parameter_setting_data16;
extern WORD parameter_setting_data17;
extern WORD parameter_setting_data18;
extern WORD parameter_setting_data19;
extern WORD parameter_setting_data20;
extern WORD parameter_setting_data21;
extern WORD parameter_setting_data22;
extern WORD parameter_setting_data23;
extern WORD parameter_setting_data24;
extern WORD parameter_setting_data25;
extern WORD parameter_setting_data26;
extern WORD parameter_setting_data27;
extern WORD parameter_setting_data28;
extern WORD parameter_setting_data29;
extern WORD Door_test_data1;
extern WORD Door_test_data2;
extern WORD Door_test_data3;
extern WORD Door_test_data4;
extern WORD Door_test_data5;
extern WORD Door_test_data6;
extern WORD TCU_test_data1;
extern WORD TCU_test_data2;
extern WORD TCU_test_data3;
extern WORD TCU_test_data4;
extern WORD TCU_test_data5;
extern WORD TCU_test_data6;
extern WORD TCU_test_data7;
extern WORD TCU_test_data8;
extern WORD TCU_test_data9;
extern WORD TCU_test_data10;
extern WORD TCU_test_data11;
extern WORD TCU_test_data12;
extern WORD TCU_test_data13;
extern WORD TCU_test_data14;
extern WORD TCU_test_data15;
extern WORD TCU_test_data16;
extern WORD TCU_test_data17;
extern WORD TCU_test_data18;
extern WORD ACU_test_data1;
extern WORD ACU_test_data2;
extern WORD ACU_test_data3;
extern WORD ACU_test_data4;
extern WORD BCU_test_data1;
extern WORD BCU_test_data2;
extern WORD BCU_test_data3;
extern WORD BCU_test_data4;
extern WORD BCU_selftest_data1;
extern WORD BCU_selftest_data2;
extern WORD BCU_selftest_data3;
extern WORD BCU_selftest_data4;
extern WORD BCU_selftest_data5;
extern WORD BCU_selftest_data6;
extern WORD BCU_selftest_data7;
extern WORD BCU_selftest_data8;
extern WORD BCU_selftest_data9;
extern WORD BCU_selftest_data10;
extern WORD BCU_selftest_data11;
extern WORD BCU_selftest_data12;
extern WORD BCU_selftest_data13;
extern WORD BCU_selftest_data14;
extern WORD BCU_selftest_data15;
extern WORD BCU_selftest_data16;
extern WORD run_record_data1;
extern WORD run_record_data2;
extern WORD run_record_data3;
extern WORD run_record_data4;
extern WORD run_record_data5;
extern WORD run_record_data6;
extern WORD run_record_data7;
extern WORD run_record_data8;
extern WORD run_record_data9;
extern WORD run_record_data10;
extern WORD run_record_data11;
extern WORD run_record_data12;
extern WORD run_record_data13;
extern WORD run_record_data14;
extern WORD station_new_setting1;
extern WORD station_new_setting2;
extern WORD station_new_setting3;
extern WORD station_new_setting4;
extern WORD station_new_setting5;
extern WORD station_new_setting6;
extern WORD station_new_setting7;
extern WORD setting_time1;
extern WORD setting_time2;
extern WORD setting_time3;
extern WORD preoperation_acceleration;
extern WORD preoperation_brake_distance;
extern WORD preoperation_determine_kind;
extern WORD preoperation_level;
extern WORD preoperation_brake_start_speed;
extern WORD preoperation_reproduce;
extern WORD soft_version1;
extern WORD soft_version2;
extern WORD soft_version3;
extern WORD soft_version4;
extern WORD soft_version5;
extern WORD soft_version6;
extern WORD soft_version7;
extern WORD soft_version8;
extern WORD soft_version9;
extern WORD soft_version10;
extern WORD soft_version11;
extern WORD soft_version12;
extern WORD soft_version13;
extern WORD soft_version14;
extern WORD soft_version15;
extern WORD soft_version16;
extern WORD soft_version17;
extern WORD soft_version18;
extern WORD soft_version19;
extern WORD soft_version20;
extern WORD soft_version21;
extern WORD soft_version22;
extern WORD soft_version23;
extern WORD soft_version24;
extern WORD soft_version25;
extern WORD soft_version26;
extern WORD soft_version27;
extern WORD soft_version28;
extern WORD soft_version29;
extern WORD soft_version30;
extern WORD soft_version31;
extern WORD soft_version32;
extern WORD soft_version33;
extern WORD soft_version34;
extern WORD soft_version35;
extern WORD soft_version36;
extern WORD soft_version37;
extern WORD soft_version38;
extern WORD soft_version39;
extern WORD soft_version40;
extern WORD soft_version41;
extern WORD soft_version42;
extern WORD soft_version43;
extern WORD soft_version44;
extern WORD soft_version45;
extern WORD soft_version46;
extern WORD soft_version47;
extern WORD soft_version48;
extern WORD soft_version49;
extern WORD soft_version50;
extern WORD soft_version51;
extern WORD soft_version52;
extern WORD soft_version53;
extern WORD soft_version54;
extern WORD soft_version55;
extern WORD soft_version56;
extern WORD soft_version57;
extern WORD soft_version58;
extern WORD soft_version59;
extern WORD soft_version60;
extern WORD soft_version61;
extern WORD soft_version62;
extern WORD soft_version63;
extern WORD soft_version64;
extern WORD soft_version65;
extern WORD soft_version66;
extern WORD soft_version67;
extern WORD soft_version68;
extern WORD soft_version69;
extern WORD soft_version70;
extern WORD soft_version71;
extern WORD soft_version72;
extern WORD soft_version73;
extern WORD soft_version74;
extern WORD soft_version75;
extern WORD soft_version76;
extern WORD soft_version77;
extern WORD soft_version78;
extern WORD soft_version79;
extern WORD soft_version80;
extern WORD soft_version81;
extern WORD soft_version82;
extern WORD soft_version83;
extern WORD soft_version84;
extern WORD soft_version85;
extern WORD soft_version86;
extern WORD soft_version87;
extern WORD soft_version88;
extern WORD soft_version89;
extern WORD soft_version90;
extern WORD refresh_time1;
extern WORD refresh_time2;
extern WORD refresh_time3;
extern WORD refresh_time4;
extern WORD refresh_time5;
extern WORD refresh_time6;
extern WORD refresh_time7;
extern WORD refresh_time8;
extern WORD refresh_time9;
extern WORD refresh_time10;
extern WORD refresh_time11;
extern WORD refresh_time12;
extern WORD refresh_time13;
extern WORD refresh_time14;
extern WORD refresh_time15;
extern WORD refresh_time16;
extern WORD refresh_time17;
extern WORD refresh_time18;
extern WORD refresh_time19;
extern WORD refresh_time20;
extern WORD refresh_time21;
extern WORD refresh_time22;
extern WORD refresh_time23;
extern WORD refresh_time24;
extern WORD refresh_time25;
extern WORD refresh_time26;
extern WORD refresh_time27;
extern WORD refresh_time28;
extern WORD refresh_time29;
extern WORD refresh_time30;
extern WORD refresh_time31;
extern WORD refresh_time32;
extern WORD refresh_time33;
extern WORD refresh_time34;
extern WORD refresh_time35;
extern WORD refresh_time36;
extern WORD refresh_time37;
extern WORD refresh_time38;
extern WORD refresh_time39;
extern WORD refresh_time40;
extern WORD refresh_time41;
extern WORD refresh_time42;
extern WORD refresh_time43;
extern WORD refresh_time44;
extern WORD refresh_time45;
extern WORD refresh_time46;
extern WORD refresh_time47;
extern WORD refresh_time48;
extern WORD refresh_time49;
extern WORD refresh_time50;
extern WORD refresh_time51;
extern WORD refresh_time52;
extern WORD refresh_time53;
extern WORD refresh_time54;
extern WORD refresh_time55;
extern WORD refresh_time56;
extern WORD refresh_time57;
extern WORD refresh_time58;
extern WORD refresh_time59;
extern WORD refresh_time60;
extern WORD refresh_time61;
extern WORD refresh_time62;
extern WORD refresh_time63;
extern WORD refresh_time64;
extern WORD refresh_time65;
extern WORD refresh_time66;
extern WORD refresh_time67;
extern WORD refresh_time68;
extern WORD refresh_time69;
extern WORD refresh_time70;
extern WORD refresh_time71;
extern WORD refresh_time72;
extern WORD refresh_time73;
extern WORD refresh_time74;
extern WORD refresh_time75;
extern WORD refresh_time76;
extern WORD refresh_time77;
extern WORD refresh_time78;
extern WORD refresh_time79;
extern WORD refresh_time80;
extern WORD RIOM_Data1;
extern WORD RIOM_Data2;
extern WORD RIOM_Data3;
extern WORD RIOM_Data4;
extern WORD RIOM_Data5;
extern WORD RIOM_Data6;
extern WORD RIOM_Data7;
extern WORD RIOM_Data8;
extern WORD RIOM_Data9;
extern WORD RIOM_Data10;
extern WORD RIOM_Data11;
extern WORD RIOM_Data12;
extern WORD RIOM_Data13;
extern WORD RIOM_Data14;
extern WORD RIOM_Data15;
extern WORD RIOM_Data16;
extern WORD RIOM_Data17;
extern WORD RIOM_Data18;
extern WORD RIOM_Data19;
extern WORD RIOM_Data20;
extern WORD RIOM_Data21;
extern WORD RIOM_Data22;
extern WORD RIOM_Data23;
extern WORD RIOM_Data24;
extern WORD RIOM_Data25;
extern WORD RIOM_Data26;
extern WORD RIOM_Data27;
extern WORD RIOM_Data28;
extern WORD error_code61;
extern WORD error_code62;
extern WORD error_code63;
extern WORD error_code64;
extern WORD error_code65;
extern WORD error_code66;
extern WORD error_code67;
extern WORD error_code68;
extern WORD error_code69;
extern WORD error_code70;
extern WORD error_code71;
extern WORD error_code72;
extern WORD error_code73;
extern WORD error_code74;
extern WORD error_code75;
extern WORD error_code76;
extern WORD error_code77;
extern WORD error_code78;
extern WORD error_code79;
extern WORD error_code80;
extern WORD error_code81;
extern WORD error_code82;
extern WORD error_code83;
extern WORD error_code84;
extern WORD error_code85;
extern WORD error_code86;
extern WORD error_code87;
extern WORD error_code88;
extern WORD error_code89;
extern WORD error_code90;
extern WORD error_code91;
extern WORD error_code92;
extern WORD error_code93;
extern WORD error_code94;
extern WORD error_code95;
extern WORD error_code96;
extern WORD error_code97;
extern WORD error_code98;
extern WORD error_code99;
extern WORD error_code100;
extern WORD ATC_time_flag;
extern WORD ATC_time1;
extern WORD ATC_time2;
extern WORD ATC_time3;

extern WORD DO_118_1;
extern WORD DO_118_2;
extern WORD DO_118_3;
extern WORD DO_118_4;
extern WORD DO_118_5;
extern WORD DO_118_6;
extern WORD DO_118_7;
extern WORD DO_118_8;

extern WORD DO_128_1;
extern WORD DO_128_2;
extern WORD DO_128_3;
extern WORD DO_128_4;
extern WORD DO_128_5;
extern WORD DO_128_6;
extern WORD DO_128_7;
extern WORD DO_128_8;

extern WORD DO_138_1;
extern WORD DO_138_2;
extern WORD DO_138_3;
extern WORD DO_138_4;
extern WORD DO_138_5;
extern WORD DO_138_6;
extern WORD DO_138_7;
extern WORD DO_138_8;

extern WORD DO_148_1;
extern WORD DO_148_2;
extern WORD DO_148_3;
extern WORD DO_148_4;
extern WORD DO_148_5;
extern WORD DO_148_6;
extern WORD DO_148_7;
extern WORD DO_148_8;

extern WORD DO_158_1;
extern WORD DO_158_2;
extern WORD DO_158_3;
extern WORD DO_158_4;
extern WORD DO_158_5;
extern WORD DO_158_6;
extern WORD DO_158_7;
extern WORD DO_158_8;

extern WORD DO_168_1;
extern WORD DO_168_2;
extern WORD DO_168_3;
extern WORD DO_168_4;
extern WORD DO_168_5;
extern WORD DO_168_6;
extern WORD DO_168_7;
extern WORD DO_168_8;

extern WORD DO_178_1;
extern WORD DO_178_2;
extern WORD DO_178_3;
extern WORD DO_178_4;
extern WORD DO_178_5;
extern WORD DO_178_6;
extern WORD DO_178_7;
extern WORD DO_178_8;

extern WORD DO_188_1;
extern WORD DO_188_2;
extern WORD DO_188_3;
extern WORD DO_188_4;
extern WORD DO_188_5;
extern WORD DO_188_6;
extern WORD DO_188_7;
extern WORD DO_188_8;

extern WORD BCU_TC1_410_420_1;
extern WORD BCU_TC1_410_420_2;
extern WORD BCU_TC1_410_420_3;
extern WORD BCU_TC1_410_420_4;
extern WORD BCU_TC1_410_420_5;
extern WORD BCU_TC1_410_420_6;
extern WORD BCU_TC1_410_420_7;
extern WORD BCU_TC1_410_420_8;
extern WORD BCU_TC1_410_420_9;
extern WORD BCU_TC1_410_420_10;
extern WORD BCU_TC1_410_420_11;
extern WORD BCU_TC1_410_420_12;
extern WORD BCU_TC1_410_420_13;
extern WORD BCU_TC1_410_420_14;
extern WORD BCU_TC1_410_420_15;
extern WORD BCU_TC1_410_420_16;

extern WORD BCU_TC1_411_421_1;
extern WORD BCU_TC1_411_421_2;
extern WORD BCU_TC1_411_421_3;
extern WORD BCU_TC1_411_421_4;
extern WORD BCU_TC1_411_421_5;
extern WORD BCU_TC1_411_421_6;
extern WORD BCU_TC1_411_421_7;
extern WORD BCU_TC1_411_421_8;
extern WORD BCU_TC1_411_421_9;
extern WORD BCU_TC1_411_421_10;
extern WORD BCU_TC1_411_421_11;
extern WORD BCU_TC1_411_421_12;
extern WORD BCU_TC1_411_421_13;
extern WORD BCU_TC1_411_421_14;
extern WORD BCU_TC1_411_421_15;
extern WORD BCU_TC1_411_421_16;

extern WORD BCU_TC1_412_422_1;
extern WORD BCU_TC1_412_422_2;
extern WORD BCU_TC1_412_422_3;
extern WORD BCU_TC1_412_422_4;
extern WORD BCU_TC1_412_422_5;
extern WORD BCU_TC1_412_422_6;
extern WORD BCU_TC1_412_422_7;
extern WORD BCU_TC1_412_422_8;
extern WORD BCU_TC1_412_422_9;
extern WORD BCU_TC1_412_422_10;
extern WORD BCU_TC1_412_422_11;
extern WORD BCU_TC1_412_422_12;
extern WORD BCU_TC1_412_422_13;
extern WORD BCU_TC1_412_422_14;
extern WORD BCU_TC1_412_422_15;
extern WORD BCU_TC1_412_422_16;

extern WORD BCU_TC1_413_423_1;
extern WORD BCU_TC1_413_423_2;
extern WORD BCU_TC1_413_423_3;
extern WORD BCU_TC1_413_423_4;
extern WORD BCU_TC1_413_423_5;
extern WORD BCU_TC1_413_423_6;
extern WORD BCU_TC1_413_423_7;
extern WORD BCU_TC1_413_423_8;
extern WORD BCU_TC1_413_423_9;
extern WORD BCU_TC1_413_423_10;
extern WORD BCU_TC1_413_423_11;
extern WORD BCU_TC1_413_423_12;
extern WORD BCU_TC1_413_423_13;
extern WORD BCU_TC1_413_423_14;
extern WORD BCU_TC1_413_423_15;
extern WORD BCU_TC1_413_423_16;

extern WORD BCU_TC1_414_424_1;
extern WORD BCU_TC1_414_424_2;
extern WORD BCU_TC1_414_424_3;
extern WORD BCU_TC1_414_424_4;
extern WORD BCU_TC1_414_424_5;
extern WORD BCU_TC1_414_424_6;
extern WORD BCU_TC1_414_424_7;
extern WORD BCU_TC1_414_424_8;
extern WORD BCU_TC1_414_424_9;
extern WORD BCU_TC1_414_424_10;
extern WORD BCU_TC1_414_424_11;
extern WORD BCU_TC1_414_424_12;
extern WORD BCU_TC1_414_424_13;
extern WORD BCU_TC1_414_424_14;
extern WORD BCU_TC1_414_424_15;
extern WORD BCU_TC1_414_424_16;

extern WORD BCU_TC2_430_440_1;
extern WORD BCU_TC2_430_440_2;
extern WORD BCU_TC2_430_440_3;
extern WORD BCU_TC2_430_440_4;
extern WORD BCU_TC2_430_440_5;
extern WORD BCU_TC2_430_440_6;
extern WORD BCU_TC2_430_440_7;
extern WORD BCU_TC2_430_440_8;
extern WORD BCU_TC2_430_440_9;
extern WORD BCU_TC2_430_440_10;
extern WORD BCU_TC2_430_440_11;
extern WORD BCU_TC2_430_440_12;
extern WORD BCU_TC2_430_440_13;
extern WORD BCU_TC2_430_440_14;
extern WORD BCU_TC2_430_440_15;
extern WORD BCU_TC2_430_440_16;

extern WORD BCU_TC2_431_441_1;
extern WORD BCU_TC2_431_441_2;
extern WORD BCU_TC2_431_441_3;
extern WORD BCU_TC2_431_441_4;
extern WORD BCU_TC2_431_441_5;
extern WORD BCU_TC2_431_441_6;
extern WORD BCU_TC2_431_441_7;
extern WORD BCU_TC2_431_441_8;
extern WORD BCU_TC2_431_441_9;
extern WORD BCU_TC2_431_441_10;
extern WORD BCU_TC2_431_441_11;
extern WORD BCU_TC2_431_441_12;
extern WORD BCU_TC2_431_441_13;
extern WORD BCU_TC2_431_441_14;
extern WORD BCU_TC2_431_441_15;
extern WORD BCU_TC2_431_441_16;

extern WORD BCU_TC2_432_442_1;
extern WORD BCU_TC2_432_442_2;
extern WORD BCU_TC2_432_442_3;
extern WORD BCU_TC2_432_442_4;
extern WORD BCU_TC2_432_442_5;
extern WORD BCU_TC2_432_442_6;
extern WORD BCU_TC2_432_442_7;
extern WORD BCU_TC2_432_442_8;
extern WORD BCU_TC2_432_442_9;
extern WORD BCU_TC2_432_442_10;
extern WORD BCU_TC2_432_442_11;
extern WORD BCU_TC2_432_442_12;
extern WORD BCU_TC2_432_442_13;
extern WORD BCU_TC2_432_442_14;
extern WORD BCU_TC2_432_442_15;
extern WORD BCU_TC2_432_442_16;

extern WORD BCU_TC2_433_443_1;
extern WORD BCU_TC2_433_443_2;
extern WORD BCU_TC2_433_443_3;
extern WORD BCU_TC2_433_443_4;
extern WORD BCU_TC2_433_443_5;
extern WORD BCU_TC2_433_443_6;
extern WORD BCU_TC2_433_443_7;
extern WORD BCU_TC2_433_443_8;
extern WORD BCU_TC2_433_443_9;
extern WORD BCU_TC2_433_443_10;
extern WORD BCU_TC2_433_443_11;
extern WORD BCU_TC2_433_443_12;
extern WORD BCU_TC2_433_443_13;
extern WORD BCU_TC2_433_443_14;
extern WORD BCU_TC2_433_443_15;
extern WORD BCU_TC2_433_443_16;

extern WORD BCU_TC2_434_444_1;
extern WORD BCU_TC2_434_444_2;
extern WORD BCU_TC2_434_444_3;
extern WORD BCU_TC2_434_444_4;
extern WORD BCU_TC2_434_444_5;
extern WORD BCU_TC2_434_444_6;
extern WORD BCU_TC2_434_444_7;
extern WORD BCU_TC2_434_444_8;
extern WORD BCU_TC2_434_444_9;
extern WORD BCU_TC2_434_444_10;
extern WORD BCU_TC2_434_444_11;
extern WORD BCU_TC2_434_444_12;
extern WORD BCU_TC2_434_444_13;
extern WORD BCU_TC2_434_444_14;
extern WORD BCU_TC2_434_444_15;
extern WORD BCU_TC2_434_444_16;

extern WORD refresh_time_f;
extern WORD refresh_time_1;
extern WORD refresh_time_2;


extern WORD refresh_time_110;
extern WORD refresh_time_111;
extern WORD refresh_time_112;
extern WORD refresh_time_120;
extern WORD refresh_time_121;
extern WORD refresh_time_130;
extern WORD refresh_time_131;
extern WORD refresh_time_140;
extern WORD refresh_time_141;
extern WORD refresh_time_150;
extern WORD refresh_time_151;
extern WORD refresh_time_160;
extern WORD refresh_time_161;
extern WORD refresh_time_162;

extern WORD refresh_time_118;
extern WORD refresh_time_128;
extern WORD refresh_time_138;
extern WORD refresh_time_148;
extern WORD refresh_time_158;
extern WORD refresh_time_168;


extern WORD refresh_time_210;
extern WORD refresh_time_211;
extern WORD refresh_time_212;
extern WORD refresh_time_213;
extern WORD refresh_time_220;
extern WORD refresh_time_221;
extern WORD refresh_time_222;
extern WORD refresh_time_223;

extern WORD refresh_time_218;
extern WORD refresh_time_228;


extern WORD refresh_time_310;
extern WORD refresh_time_311;
extern WORD refresh_time_312;
extern WORD refresh_time_313;

extern WORD refresh_time_320;
extern WORD refresh_time_321;
extern WORD refresh_time_322;
extern WORD refresh_time_323;

extern WORD refresh_time_308;
extern WORD refresh_time_309;
extern WORD refresh_time_318;
extern WORD refresh_time_328;



extern WORD refresh_time_510;
extern WORD refresh_time_511;
extern WORD refresh_time_512;
extern WORD refresh_time_513;
extern WORD refresh_time_514;
extern WORD refresh_time_515;
extern WORD refresh_time_520;
extern WORD refresh_time_521;
extern WORD refresh_time_522;
extern WORD refresh_time_523;
extern WORD refresh_time_524;
extern WORD refresh_time_525;
extern WORD refresh_time_530;
extern WORD refresh_time_531;
extern WORD refresh_time_532;
extern WORD refresh_time_533;
extern WORD refresh_time_534;
extern WORD refresh_time_535;
extern WORD refresh_time_540;
extern WORD refresh_time_541;
extern WORD refresh_time_542;
extern WORD refresh_time_543;
extern WORD refresh_time_544;
extern WORD refresh_time_545;

extern WORD refresh_time_508;


extern WORD refresh_time_610;
extern WORD refresh_time_611;
extern WORD refresh_time_612;
extern WORD refresh_time_620;
extern WORD refresh_time_621;
extern WORD refresh_time_622;
extern WORD refresh_time_630;
extern WORD refresh_time_631;
extern WORD refresh_time_632;
extern WORD refresh_time_640;
extern WORD refresh_time_641;
extern WORD refresh_time_642;

extern WORD refresh_time_618;
extern WORD refresh_time_628;
extern WORD refresh_time_638;
extern WORD refresh_time_648;



extern WORD refresh_time_710;
extern WORD refresh_time_711;
extern WORD refresh_time_720;
extern WORD refresh_time_721;

extern WORD refresh_time_718;
extern WORD refresh_time_728;


extern WORD refresh_time_810;
extern WORD refresh_time_811;
extern WORD refresh_time_820;
extern WORD refresh_time_821;
extern WORD refresh_time_830;
extern WORD refresh_time_831;
extern WORD refresh_time_840;
extern WORD refresh_time_841;
extern WORD refresh_time_850;
extern WORD refresh_time_851;
extern WORD refresh_time_860;
extern WORD refresh_time_861;
extern WORD refresh_time_870;
extern WORD refresh_time_871;
extern WORD refresh_time_880;
extern WORD refresh_time_881;
extern WORD refresh_time_890;
extern WORD refresh_time_891;
extern WORD refresh_time_8A0;
extern WORD refresh_time_8A1;
extern WORD refresh_time_8B0;
extern WORD refresh_time_8B1;
extern WORD refresh_time_8C0;
extern WORD refresh_time_8C1;

extern WORD refresh_time_809;



extern WORD refresh_time_910;
extern WORD refresh_time_920;
extern WORD refresh_time_930;
extern WORD refresh_time_940;
extern WORD refresh_time_950;
extern WORD refresh_time_960;

extern WORD refresh_time_918;
extern WORD refresh_time_928;
extern WORD refresh_time_938;
extern WORD refresh_time_948;
extern WORD refresh_time_958;
extern WORD refresh_time_968;


extern WORD refresh_time_A10;
extern WORD refresh_time_A20;

extern WORD refresh_time_A08;

extern WORD refresh_time_B10;
extern WORD refresh_time_B11;
extern WORD refresh_time_B20;
extern WORD refresh_time_B21;
extern WORD refresh_time_B08;

extern WORD refresh_time_C10;
extern WORD refresh_time_C20;

extern WORD refresh_time_C08;



extern unsigned short refresh_time_udp_100 ;
extern unsigned short refresh_time_udp_110 ;
extern unsigned short refresh_time_udp_114 ;
extern unsigned short refresh_time_udp_120 ;
extern unsigned short refresh_time_udp_130 ;
extern unsigned short refresh_time_udp_140 ;
extern unsigned short refresh_time_udp_150 ;
extern WORD refresh_time_udp_160 ;
extern WORD refresh_time_udp_170 ;
extern WORD refresh_time_udp_180 ;
extern WORD refresh_time_udp_184 ;
extern WORD refresh_time_udp_200 ;
extern WORD refresh_time_udp_201 ;
extern WORD refresh_time_udp_202 ;
extern WORD refresh_time_udp_203 ;
extern WORD refresh_time_udp_280 ;
extern WORD refresh_time_udp_281 ;
extern WORD refresh_time_udp_282 ;
extern WORD refresh_time_udp_283 ;
extern WORD refresh_time_udp_400 ;


extern WORD refresh_time_udp_410 ;
extern WORD refresh_time_udp_411 ;
extern WORD refresh_time_udp_412 ;
extern WORD refresh_time_udp_413 ;
extern WORD refresh_time_udp_414 ;
extern WORD refresh_time_udp_420 ;
extern WORD refresh_time_udp_421 ;
extern WORD refresh_time_udp_422 ;
extern WORD refresh_time_udp_423 ;
extern WORD refresh_time_udp_424 ;
extern WORD refresh_time_udp_430 ;
extern WORD refresh_time_udp_431 ;
extern WORD refresh_time_udp_432 ;
extern WORD refresh_time_udp_433 ;
extern WORD refresh_time_udp_434 ;
extern WORD refresh_time_udp_440 ;
extern WORD refresh_time_udp_441 ;
extern WORD refresh_time_udp_442 ;
extern WORD refresh_time_udp_443 ;
extern WORD refresh_time_udp_444 ;

extern WORD refresh_time_udp_500 ;
extern WORD refresh_time_udp_510 ;
extern WORD refresh_time_udp_511 ;
extern WORD refresh_time_udp_520 ;
extern WORD refresh_time_udp_521 ;
extern WORD refresh_time_udp_530 ;
extern WORD refresh_time_udp_531 ;
extern WORD refresh_time_udp_540 ;
extern WORD refresh_time_udp_541 ;
extern WORD refresh_time_udp_550 ;
extern WORD refresh_time_udp_551 ;
extern WORD refresh_time_udp_560 ;
extern WORD refresh_time_udp_561 ;
extern WORD refresh_time_udp_600 ;
extern WORD refresh_time_udp_610 ;
extern WORD refresh_time_udp_611 ;
extern WORD refresh_time_udp_620 ;
extern WORD refresh_time_udp_621 ;

extern WORD refresh_time_udp_700 ;
extern WORD refresh_time_udp_701 ;

extern WORD refresh_time_udp_710 ;
extern WORD refresh_time_udp_711 ;
extern WORD refresh_time_udp_720 ;
extern WORD refresh_time_udp_721 ;
extern WORD refresh_time_udp_730 ;
extern WORD refresh_time_udp_731 ;
extern WORD refresh_time_udp_740 ;
extern WORD refresh_time_udp_741 ;
extern WORD refresh_time_udp_750 ;
extern WORD refresh_time_udp_751 ;
extern WORD refresh_time_udp_760 ;
extern WORD refresh_time_udp_761 ;
extern WORD refresh_time_udp_770 ;
extern WORD refresh_time_udp_771 ;
extern WORD refresh_time_udp_780 ;
extern WORD refresh_time_udp_781 ;
extern WORD refresh_time_udp_790 ;
extern WORD refresh_time_udp_791 ;
extern WORD refresh_time_udp_7A0 ;
extern WORD refresh_time_udp_7A1 ;
extern WORD refresh_time_udp_7B0 ;
extern WORD refresh_time_udp_7B1 ;
extern WORD refresh_time_udp_7C0 ;
extern WORD refresh_time_udp_7C1 ;
extern WORD refresh_time_udp_7D0 ;
extern WORD refresh_time_udp_7D1 ;
extern WORD refresh_time_udp_7E0 ;
extern WORD refresh_time_udp_7E1 ;
extern WORD refresh_time_udp_7F0 ;
extern WORD refresh_time_udp_7F1 ;

extern WORD refresh_time_udp_800 ;
extern WORD refresh_time_udp_810 ;
extern WORD refresh_time_udp_820 ;
extern WORD refresh_time_udp_830 ;
extern WORD refresh_time_udp_840 ;
extern WORD refresh_time_udp_850 ;
extern WORD refresh_time_udp_860 ;
extern WORD refresh_time_udp_870 ;
extern WORD refresh_time_udp_880 ;

extern WORD refresh_time_udp_900 ;
extern WORD refresh_time_udp_910 ;
extern WORD refresh_time_udp_911 ;
extern WORD refresh_time_udp_920 ;
extern WORD refresh_time_udp_921 ;

extern WORD refresh_time_udp_A00 ;
extern WORD refresh_time_udp_A10 ;
extern WORD refresh_time_udp_A11 ;

extern WORD refresh_time_udp_B00 ;
extern WORD refresh_time_udp_B10 ;
extern WORD refresh_time_udp_B20 ;

extern WORD refresh_time_udp_F00 ;
extern WORD refresh_time_udp_F01 ;
extern WORD refresh_time_udp_F02 ;
extern WORD refresh_time_udp_F03 ;

extern WORD refresh_time_udp_F10 ;
extern WORD refresh_time_udp_F11 ;
extern WORD refresh_time_udp_F12 ;
extern WORD refresh_time_udp_F13 ;

extern WORD refresh_time_udp_220 ;
extern WORD refresh_time_udp_221 ;
extern WORD refresh_time_udp_222 ;
extern WORD refresh_time_udp_223 ;






#endif // DATABUFFER_H
