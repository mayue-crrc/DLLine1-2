# -------------------------------------------------
# Project created by QtCreator 2010-08-24T17:55:41
# -------------------------------------------------
TARGET = CNR_Dalian_Metro_Line12
TEMPLATE =  app
QT += network
#20111102 zlbzeb add begin
LIBS += -lPixyMvb
#20111102 zlbzeb add end
SOURCES += main.cpp \
    dialog.cpp \
    CGlobal.cpp \
    CPage.cpp \
    CTrainCtrl.cpp \
    CScrollCtrl.cpp \
    rom.cpp \
    CWheelDiaRecordPage.cpp \
    CVialSignalPage.cpp \
    CVersionInfoPage.cpp \
    CTryRunTestPage.cpp \
    CTractionSystemTestPage.cpp \
    CTractionSystemTestHelpPage.cpp \
    CTractionSystemFaultPage.cpp \
    CTodayFaultPage.cpp \
    CStationSettingPage.cpp \
    CRunStatePage.cpp \
    CRunRecordPage.cpp \
    cdebugdialog.cpp \
    cpasswordmodifypage.cpp \
    ccarriagectrl.cpp \
    cwarningdialog.cpp \
    ctimesettingpage.cpp \
    cfaultscommonprocess.cpp \
    CWheelDiaRecordSelectPage.cpp \
    serialthread.cpp \
    serialport485.cpp \
    CRealTimeFaultsWarnningDialog.cpp \
    DataBuffer.cpp \
    CRunHelp4Page.cpp \
    CSerialDebugDialog.cpp \
    cudpdatapage1.cpp \
    FASPage.cpp \
    ctraindiagramctrl.cpp \
#20111102 zlbzeb add begin
    mvbthread.cpp  \
#20111102 zlbzeb add end
    C_Page_SIV_Test.cpp \
    C_Page_SIV_Test_Help.cpp \
    C_Page_Brake_Sefl_Test_Help.cpp \
    C_Page_Brake_Self_Test.cpp \
    C_Page_Brake_Test_Help.cpp \
    C_Page_Brake_Test.cpp \
    C_Ctrl_Arrow.cpp \
    C_Ctrl_Button.cpp \
    C_Page_Help_Reserve.cpp \
    C_Page_SIV_Status.cpp \
    C_Page_SIV_Status_Help.cpp \
    C_Page_Run_Status_Help4.cpp \
    C_Page_TCU_Status.cpp \
    C_Page_Bypass_Status_Help.cpp \
    C_Page_Bypass_Status.cpp \
    C_Page_TCU_Status_Help.cpp \
    C_Ctrl_Circle.cpp \
    C_Page_Net_Status.cpp \
    C_Page_Net_Status_Help.cpp \
    C_Page_UI_ConfirmDialog.cpp \
    C_Debug_RIOM_DO.cpp \
    C_Debug_Main.cpp \
    C_Ctrl_Edit.cpp \
    CFaultInfoDialog.cpp \
    C_Page_Fault.cpp \
    C_Page_Fault_Help.cpp \
    C_Page_HVAC_Setting.cpp \
    C_Page_HVAC_Setting_Help.cpp \
    C_Debug_RIOM_Tc_DI.cpp \
    C_Debug_RIOM_M_DI.cpp \
    C_Ctrl_Image.cpp \
    C_Page_Station_Setting.cpp \
    C_Page_Emergency_Broadcast.cpp \
    C_Ctrl_Label.cpp \
    C_Ctrl_Line.cpp \
    C_Ctrl_Log.cpp \
    C_Page_Main.cpp \
    C_Page_Maintain.cpp \
    C_Page_Param_Setting.cpp \
    C_Page_Param_Setting_Input.cpp \
    C_Page_Password.cpp \
    C_Debug_RIOM_Total.cpp \
    C_Page_Realtime_Fault.cpp \
    C_Debug_Refresh_Time.cpp \
    C_Page_Clear_Record.cpp \
    C_Page_Run_Status_Help3.cpp \
    C_Page_Run_Status_Help2.cpp \
    C_Page_Run_Status_Help1.cpp \
    C_Page_Brake_Status.cpp \
    C_Debug_RIOM_M_DI_new.cpp \
    C_Page_Door_Setting.cpp \
    C_Debug_Initial_Setting.cpp \
    C_Page_Brake_Status2.cpp \
    C_Page_Brake_Status3.cpp \
    C_Page_TCU_Status2.cpp \
    C_Page_TCU_Status3.cpp \
    C_Page_TCU_Status4.cpp \
    C_Page_SIV_Status2.cpp \
    C_Page_SIV_Status3.cpp \
    C_Debug_Parameter_Setting.cpp \
    C_Page_Brake_Status_Help.cpp \
    c_page_hvac_heater.cpp \
    C_Debug_ATCTest.cpp
HEADERS += dialog.h \
    CGlobal.h \
    CControlInterface.h \
    CTrainCtrl.h \
    CScrollCtrl.h \
    rom.h \
    CWheelDiaRecordPage.h \
    CVialSignalPage.h \
    CVersionInfoPage.h \
    CTryRunTestPage.h \
    CTractionSystemTestPage.h \
    CTractionSystemTestHelpPage.h \
    CTractionSystemFaultPage.h \
    CTodayFaultPage.h \
    CStationSettingPage.h \
    CRunStatePage.h \
    CRunRecordPage.h \
    CControlInterface.h \
    cdebugdialog.h \
    cpasswordmodifypage.h \
    ccarriagectrl.h \
    DataBuffer.h \
    cwarningdialog.h \
    ctimesettingpage.h \
    cfaultscommonprocess.h \
    CWheelDiaRecordSelectPage.h \
    serialthread.h \
    serialport485.h \
    CRealTimeFaultsWarnningDialog.h \
    CRunHelp4Page.h \
    CSerialDebugDialog.h \
    cudpdatapage1.h \
    FASPage.h \
    ctraindiagramctrl.h \
#20111102 zlbzeb add begin
    PixyTypes.h \
    PixyMvbLib.h \
    mvbthread.h \
#20111102 zlbzeb add end
    C_Page_SIV_Test.h \
    C_Page_SIV_Test_Help.h \
    C_Page_Brake_Sefl_Test_Help.h \
    C_Page_Brake_Self_Test.h \
    C_Page_Brake_Test_Help.h \
    C_Page_Brake_Test.h \
    C_Ctrl_Arrow.h \
    C_Ctrl_Button.h \
    C_Page_Help_Reserve.h \
    C_Page_SIV_Status.h \
    C_Page_SIV_Status_Help.h \
    C_Page_Run_Status_Help4.h \
    C_Page_TCU_Status.h \
    C_Page_Bypass_Status_Help.h \
    C_Page_Bypass_Status.h \
    C_Page_TCU_Status_Help.h \
    C_Ctrl_Circle.h \
    C_Page_Net_Status.h \
    C_Page_Net_Status_Help.h \
    C_Page_UI_ConfirmDialog.h \
    C_Debug_RIOM_DO.h \
    C_Debug_Main.h \
    C_Ctrl_Edit.h \
    C_Page_Fault.h \
    CFaultInfoDialog.h \
    C_Page_Fault_Help.h \
    C_Page_HVAC_Setting.h \
    C_Page_HVAC_Setting_Help.h \
    C_Debug_RIOM_Tc_DI.h \
    C_Debug_RIOM_M_DI.h \
    C_Ctrl_Image.h \
    CPage.h \
    C_Page_Station_Setting.h \
    C_Page_Emergency_Broadcast.h \
    C_Ctrl_Label.h \
    C_Ctrl_Line.h \
    C_Ctrl_Log.h \
    C_Page_Main.h \
    C_Page_Maintain.h \
    C_Page_Param_Setting.h \
    C_Page_Param_Setting_Input.h \
    C_Page_Password.h \
    C_Debug_RIOM_Total.h \
    C_Page_Realtime_Fault.h \
    C_Debug_Refresh_Time.h \
    C_Page_Clear_Record.h \
    C_Page_Run_Status_Help1.h \
    C_Page_Run_Status_Help2.h \
    C_Page_Run_Status_Help3.h \
    C_Page_Brake_Status.h \
    C_Debug_RIOM_M_DI_new.h \
    C_Page_Door_Setting.h \
    C_Debug_Initial_Setting.h \
    C_Page_Brake_Status2.h \
    C_Page_Brake_Status3.h \
    C_Page_TCU_Status2.h \
    C_Page_TCU_Status3.h \
    C_Page_TCU_Status4.h \
    C_Page_SIV_Status2.h \
    C_Page_SIV_Status3.h \
    C_Debug_Parameter_Setting.h \
    C_Page_Brake_Status_Help.h \
    c_page_hvac_heater.h \
    C_Debug_ATCTest.h
FORMS += dialog.ui \
    cdebugdialog.ui \
    cwarningdialog.ui \
    CFaultInfoDialog.ui \
    CRealTimeFaultsWarnningDialog.ui \
    CConfirmDialog.ui \
    CSerialDebugDialog.ui \
    C_Debug_Parameter_Setting.ui \
    c_page_hvac_heater.ui

TRANSLATIONS = translation.ts
