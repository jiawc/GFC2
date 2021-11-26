#ifndef NGFC2COLOR_H
#define NGFC2COLOR_H

#include "NGfc2Root.h"
#include "GfcClasses\x3\Gfc2Color.h"
#include "NTypeDef.h"

public ref class NGfc2Color: public NGfc2Root
{
public:
    NGfc2Color();
    NGfc2Color(void* pEntity, bool bOwner);
    void setRed(NGfc2Integer nValue);
    NGfc2Integer getRed();
    bool hasRed();
    void setGreen(NGfc2Integer nValue);
    NGfc2Integer getGreen();
    bool hasGreen();
    void setBlue(NGfc2Integer nValue);
    NGfc2Integer getBlue();
    bool hasBlue();
    void setAlpha(NGfc2Integer nValue);
    NGfc2Integer getAlpha();
    bool hasAlpha();

};
#endif
