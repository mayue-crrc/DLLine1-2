#ifndef C_CTRL_LABEL_H
#define C_CTRL_LABEL_H


#include "CControlInterface.h"

enum LABELSTATE {
    LABELSRATE_DOOR_NORMAL,  // 0
    LABELSRATE_DOOR_OPEN,    // 1
    LABELSRATE_DOOR_CLOSE,   // 2
    LABELSRATE_DOOR_UNKNOW,  // 3
    LABELSRATE_FAULT_INFO,   // 4
    LABELSRATE_FAULT_WARNING,// 5
    LABELSRATE_TCU_STATUS,   // 6
    LABELSRATE_RUN_STATUS,   // 7
    LABELSRATE_DOOR_X,       // 8
    LABELSRATE_FAS_roundrect,// 9
    LABELSRATE_FAS_red1,     // 10
    LABELSRATE_FAS_red2,     // 11
    LABELSRATE_FAS_white,    // 12
    LABELSRATE_FAS_triangle, // 13
    LABELSRATE_FAS_triangle_green, // 14

    LABELSRATES
};

class CLabel : public CControlInterface
{
public:
    CLabel();


public:
    void Create(__in QString ctrl_str,__in QRect ctrl_rc,__in QColor label_bordercolor,
                __in QFont ctrl_font,__in QColor ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString ctrl_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor ctrl_bkcolor);
    void SetCtrlRect(__in QRect ctrl_rect);

    void SetBorderColor(__in QColor bordercolor);
    void DrawLabel();
    void SetLabelState(__in int nState);
    void SetAlignment(__in int nAlignment);
    void ShowLabel();
    void HideLabel();

private:
    QColor m_bordercolor;
    int    m_nAlignment;
};


#endif // C_CTRL_LABEL_H
