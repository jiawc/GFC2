#ifndef NGFCSINGLEPROPERTY_H
#define NGFCSINGLEPROPERTY_H

#include "NGfcSimpleProperty.h"
#include "GfcClasses\x3\GfcSingleProperty.h"

public ref class NGfcSingleProperty: public NGfcSimpleProperty
{
public:
    NGfcSingleProperty();
    NGfcSingleProperty(gfc::engine::CEntity* pEntity, bool bOwner);

};
#endif
