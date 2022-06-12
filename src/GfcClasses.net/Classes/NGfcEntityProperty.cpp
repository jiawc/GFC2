#include "NGfcEntityProperty.h"

using namespace gfc::classes::x3;

NGfcEntityProperty::NGfcEntityProperty()
{
    m_pEntity = new GfcEntityProperty;
    m_bOwner = true;
}

NGfcEntityProperty::NGfcEntityProperty(gfc::engine::CEntity* pEntity, bool bOwner):
    NGfcSingleProperty(pEntity, bOwner)
{
}

void NGfcEntityProperty::setVal(gfc::engine::EntityRef nValue)
{
    ((GfcEntityProperty*)m_pEntity)->setVal(nValue);
}

gfc::engine::EntityRef NGfcEntityProperty::getVal()
{
    return ((GfcEntityProperty*)m_pEntity)->getVal();
}

bool NGfcEntityProperty::hasVal()
{
    return ((GfcEntityProperty*)m_pEntity)->hasVal();
}

