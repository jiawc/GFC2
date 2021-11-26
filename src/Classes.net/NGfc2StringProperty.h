#ifndef NGFC2STRINGPROPERTY_H
#define NGFC2STRINGPROPERTY_H

#include "NGfc2SingleProperty.h"
#include "GfcClasses\x3\Gfc2StringProperty.h"
#include "NTypeDef.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;

public ref class NGfc2StringProperty: public NGfc2SingleProperty
{
public:
    NGfc2StringProperty();
    NGfc2StringProperty(gfc::engine::CEntity* pEntity, bool bOwner);
    void setVal(NGfc2String sValue);
    NGfc2String getVal();
    bool hasVal();

};
#endif
