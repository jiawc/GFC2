#include "StdAfx.h"
#include "NGfc2CircleSection.h"
NGfc2CircleSection::NGfc2CircleSection()
{
    m_pEntity = new Gfc2CircleSection;
    m_bOwner = true;
}

NGfc2CircleSection::NGfc2CircleSection(void* pEntity, bool bOwner):
    NGfc2ParameterizedSection(pEntity, bOwner)
{
}

void NGfc2CircleSection::setRadius(NGfc2Double dValue)
{
    ((Gfc2CircleSection*)m_pEntity)->setRadius(dValue);
}

NGfc2Double NGfc2CircleSection::getRadius()
{
    return ((Gfc2CircleSection*)m_pEntity)->getRadius();
}

bool NGfc2CircleSection::hasRadius()
{
    return ((Gfc2CircleSection*)m_pEntity)->hasRadius();
}

