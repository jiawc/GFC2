#ifndef NGFC2LIGHTSOURCEPOSITIONAL_H
#define NGFC2LIGHTSOURCEPOSITIONAL_H

#include "NGfc2LightSource.h"
#include "Gfc2LightSourcePositional.h"
#include "NGfc2Vector3d.h"
#include "NTypeDef.h"
#include "glodon/objectbuf/Entity.h"

public ref class NGfc2LightSourcePositional: public NGfc2LightSource
{
public:
    NGfc2LightSourcePositional();
    NGfc2LightSourcePositional(void* pEntity, bool bOwner);
    void setPosition(glodon::objectbuf::EntityRef nValue);
    glodon::objectbuf::EntityRef getPosition();
    bool hasPosition();
    NGfc2Vector3d^ getPositionPtr();
    void setRadius(NGfc2Double dValue);
    NGfc2Double getRadius();
    bool hasRadius();
    void setConstantAttenuation(NGfc2Double dValue);
    NGfc2Double getConstantAttenuation();
    bool hasConstantAttenuation();
    void setDistanceAttenuation(NGfc2Double dValue);
    NGfc2Double getDistanceAttenuation();
    bool hasDistanceAttenuation();
    void setQuadricAttenuation(NGfc2Double dValue);
    NGfc2Double getQuadricAttenuation();
    bool hasQuadricAttenuation();

};
#endif
