#ifndef NGFCBOOLEANRESULT_H
#define NGFCBOOLEANRESULT_H

#include "NGfcSolidShape.h"
#include "GfcClasses\x3\GfcBooleanResult.h"

public ref class NGfcBooleanResult: public NGfcSolidShape
{
public:
    NGfcBooleanResult();
    NGfcBooleanResult(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
