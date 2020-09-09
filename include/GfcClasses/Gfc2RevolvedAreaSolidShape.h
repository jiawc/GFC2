#ifndef GFC2REVOLVEDAREASOLIDSHAPE_H
#define GFC2REVOLVEDAREASOLIDSHAPE_H

#include "GfcClasses.h"
#include "Gfc2SweptAreaSolidShape.h"
#include "Gfc2Vector2d.h"
#include "TypeDef.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2RevolvedAreaSolidShape: public Gfc2SweptAreaSolidShape
{
GFCENGINE_DEC_OBJECT(Gfc2RevolvedAreaSolidShape, gfc::engine::CEntity)
public:
    Gfc2RevolvedAreaSolidShape();
    Gfc2RevolvedAreaSolidShape(bool bSetSchema);
    void setAxis(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getAxis() const;
    bool hasAxis() const;
    gfc::engine::CEntityWrapPtr<Gfc2Vector2d> getAxisPtr();
    void setAngle(const Gfc2Double& dValue);
    Gfc2Double getAngle() const;
    bool hasAngle() const;

};

GFCCLASSES_NAMESPACE_END

#endif
