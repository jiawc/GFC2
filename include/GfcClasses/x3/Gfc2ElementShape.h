#ifndef GFC2ELEMENTSHAPE_H
#define GFC2ELEMENTSHAPE_H

#include "GfcClasses/x3/GfcClasses.h"
#include "GfcClasses/x3/Gfc2Shape.h"
#include "GfcClasses/x3/TypeDef.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2ElementShape: public gfc::engine::CEntity
{
GFCENGINE_DEC_OBJECT(Gfc2ElementShape, gfc::engine::CEntity)
public:
    Gfc2ElementShape();
    Gfc2ElementShape(bool bSetSchema);
    void setIdentifier(const Gfc2String& sValue);
    Gfc2String getIdentifier() const;
    bool hasIdentifier() const;
    void setShape(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getShape() const;
    bool hasShape() const;
    gfc::engine::CEntityWrapPtr<Gfc2Shape> getShapePtr();

};

GFCCLASSES_NAMESPACE_END

#endif
