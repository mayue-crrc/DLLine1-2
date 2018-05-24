#ifndef C_PAGE_RUN_STATUS_HELP4_H
#define C_PAGE_RUN_STATUS_HELP4_H


#include "CPage.h"


#define ID_CARSTATUS1_HELP3_SPEEDVAL  0x0001

extern vector<CPage*>  g_PageVec;

class CCarStatus1Help3Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus1Help3Page)
public:
    CCarStatus1Help3Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();

 private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
};

#endif // CCarStatus1Help3Page_H
