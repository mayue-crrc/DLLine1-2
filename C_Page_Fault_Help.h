#ifndef C_PAGE_FAULT_HELP_H
#define C_PAGE_FAULT_HELP_H


#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CFaultPageHelp : public CPage
{
    DECLEAR_MESSAGE_MAP(CFaultPageHelp)
public:
    CFaultPageHelp();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
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




#endif // C_PAGE_FAULT_HELP_H
