#ifndef NGFCBUILDING_H
#define NGFCBUILDING_H

#include "NGfcSpatialStructureElement.h"
#include "GfcClasses\x3\GfcBuilding.h"

public ref class NGfcBuilding: public NGfcSpatialStructureElement
{
public:
    NGfcBuilding();
    NGfcBuilding(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
