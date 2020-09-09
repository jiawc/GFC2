#ifndef GFC2BEVEL_H
#define GFC2BEVEL_H

#include "GfcClasses.h"
#include "Gfc2Surface.h"
#include "Gfc2Coordinates3d.h"
#include "Gfc2Intervald.h"
#include "Gfc2Curve2d.h"
#include "TypeDef.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2Bevel: public Gfc2Surface
{
GFCENGINE_DEC_OBJECT(Gfc2Bevel, gfc::engine::CEntity)
public:
    Gfc2Bevel();
    Gfc2Bevel(bool bSetSchema);
    void setCoord(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getCoord() const;
    bool hasCoord() const;
    gfc::engine::CEntityWrapPtr<Gfc2Coordinates3d> getCoordPtr();
    void setHeight(const Gfc2Double& dValue);
    Gfc2Double getHeight() const;
    bool hasHeight() const;
    void setRangeV(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getRangeV() const;
    bool hasRangeV() const;
    gfc::engine::CEntityWrapPtr<Gfc2Intervald> getRangeVPtr();
    void setCurve(const gfc::engine::EntityRef& nValue);
    gfc::engine::EntityRef getCurve() const;
    bool hasCurve() const;
    gfc::engine::CEntityWrapPtr<Gfc2Curve2d> getCurvePtr();

};

GFCCLASSES_NAMESPACE_END

#endif
