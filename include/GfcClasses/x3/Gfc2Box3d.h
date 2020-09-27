#ifndef GFC2BOX3D_H
#define GFC2BOX3D_H

#include "GfcClasses/x3/GfcClasses.h"
#include "GfcClasses/x3/Gfc2Geometry.h"
#include "GfcClasses/x3/Gfc2Vector3d.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2Box3d: public Gfc2Geometry
{
GFCENGINE_DEC_OBJECT(Gfc2Box3d, gfc::engine::CEntity)
public:
    Gfc2Box3d();
    Gfc2Box3d(bool bSetSchema);
    void setMin(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getMin() const;
    bool hasMin() const;
    gfc::engine::CEntityWrapPtr<Gfc2Vector3d> getMinPtr();
    void setMax(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getMax() const;
    bool hasMax() const;
    gfc::engine::CEntityWrapPtr<Gfc2Vector3d> getMaxPtr();

};

GFCCLASSES_NAMESPACE_END

#endif
