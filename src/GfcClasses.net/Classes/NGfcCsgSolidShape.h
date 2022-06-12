#ifndef NGFCCSGSOLIDSHAPE_H
#define NGFCCSGSOLIDSHAPE_H

#include "NGfcSolidShape.h"
#include "GfcClasses\x3\GfcCsgSolidShape.h"
#include "NGfcBooleanResult.h"

public ref class NGfcCsgSolidShape: public NGfcSolidShape
{
public:
    NGfcCsgSolidShape();
    NGfcCsgSolidShape(gfc::engine::CEntity* pEntity, bool bOwner);
    void setTreeRootExpression(gfc::engine::EntityRef nValue);
    gfc::engine::EntityRef getTreeRootExpression();
    bool hasTreeRootExpression();

};
#endif
