#ifndef NGFCRELDEFINES_H
#define NGFCRELDEFINES_H

#include "NGfcRelationShip.h"
#include "GfcClasses\x3\GfcRelDefines.h"

public ref class NGfcRelDefines: public NGfcRelationShip
{
public:
    NGfcRelDefines();
    NGfcRelDefines(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
