#ifndef GFC2COORDINATES2D_H
#define GFC2COORDINATES2D_H

#include "GfcClasses/x3/GfcClasses.h"
#include "GfcClasses/x3/Gfc2Geometry.h"
#include "GfcClasses/x3/Gfc2Vector2d.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2Coordinates2d: public Gfc2Geometry
{
GFCENGINE_DEC_OBJECT(Gfc2Coordinates2d, gfc::engine::CEntity)
public:
    Gfc2Coordinates2d();
    Gfc2Coordinates2d(bool bSetSchema);
    void setOrigin(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getOrigin() const;
    bool hasOrigin() const;
    std::shared_ptr<Gfc2Vector2d> getOriginPtr();
    void setX(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getX() const;
    bool hasX() const;
    std::shared_ptr<Gfc2Vector2d> getXPtr();
    void setY(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getY() const;
    bool hasY() const;
    std::shared_ptr<Gfc2Vector2d> getYPtr();

};

GFCCLASSES_NAMESPACE_END

#endif
