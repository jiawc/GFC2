#include "StdAfx.h"
#include "NGfc2SingleProperty.h"
NGfc2SingleProperty::NGfc2SingleProperty()
{
    m_pEntity = new Gfc2SingleProperty;
    m_bOwner = true;
}

NGfc2SingleProperty::NGfc2SingleProperty(void* pEntity, bool bOwner):
    NGfc2SimpleProperty(pEntity, bOwner)
{
}

