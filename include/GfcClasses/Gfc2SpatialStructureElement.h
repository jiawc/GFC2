#ifndef GFC2SPATIALSTRUCTUREELEMENT_H
#define GFC2SPATIALSTRUCTUREELEMENT_H

#include "GfcClasses.h"
#include "Gfc2Object.h"
#include "GfcEngine/Entity.h"

GFCCLASSES_NAMESPACE_BEGIN

class GFCCLASSES_API Gfc2SpatialStructureElement: public Gfc2Object
{
GFCENGINE_DEC_OBJECT(Gfc2SpatialStructureElement, gfc::engine::CEntity)
public:
    Gfc2SpatialStructureElement();
    Gfc2SpatialStructureElement(bool bSetSchema);

};

GFCCLASSES_NAMESPACE_END

#endif
