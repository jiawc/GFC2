#ifndef NGFCSPATIALSTRUCTUREELEMENT_H
#define NGFCSPATIALSTRUCTUREELEMENT_H

#include "NGfcObject.h"
#include "GfcClasses\x3\GfcSpatialStructureElement.h"

public ref class NGfcSpatialStructureElement: public NGfcObject
{
public:
    NGfcSpatialStructureElement();
    NGfcSpatialStructureElement(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
