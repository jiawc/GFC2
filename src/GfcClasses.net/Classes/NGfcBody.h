#ifndef NGFCBODY_H
#define NGFCBODY_H

#include "NGfcGeometry.h"
#include "GfcClasses\x3\GfcBody.h"

public ref class NGfcBody: public NGfcGeometry
{
public:
    NGfcBody();
    NGfcBody(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
