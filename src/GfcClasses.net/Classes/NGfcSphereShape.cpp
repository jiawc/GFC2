#include "NGfcSphereShape.h"

using namespace gfc::classes::x3;

NGfcSphereShape::NGfcSphereShape()
{
    m_pEntity = new GfcSphereShape;
    m_bOwner = true;
}

NGfcSphereShape::NGfcSphereShape(gfc::engine::CEntity* pEntity, bool bOwner):
    NGfcPrimitiveShape(pEntity, bOwner)
{
}

void NGfcSphereShape::setRadius(NGfcDouble dValue)
{
    ((GfcSphereShape*)m_pEntity)->setRadius(dValue);
}

NGfcDouble NGfcSphereShape::getRadius()
{
    return ((GfcSphereShape*)m_pEntity)->getRadius();
}

bool NGfcSphereShape::hasRadius()
{
    return ((GfcSphereShape*)m_pEntity)->hasRadius();
}

