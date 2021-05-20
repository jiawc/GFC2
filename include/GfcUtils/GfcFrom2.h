#ifndef GFCFROM2_H
#define GFCFROM2_H

#include <map>
#include <vector>
#include <memory>
#include "GfcEngine\GfcEngine.h"
#include "GfcEngine\Entity.h"
#include "GfcUtils\GfcTransform.h"

class GfcFrom2: public GfcTransform
{
public:
    GfcFrom2(gfc::engine::IContainer* pContainer);
protected:
    // �������Լ�
    virtual void transformProjectPropertySet(SrcEntityPtr& pSrcEntity, DestEntityPtr& pDestEntity);
private:
    void entityAttributeToProperty(SrcEntityPtr pSrcEntity, DestEntityPtr pDestPropertySet);
    // ��������תΪProperty����
    DestEntityPtr attributeToProperty(gfc::engine::CProperty* pSrc);
    gfc::engine::EntityRef entityToObject(SrcEntityPtr pSrc);
};

#endif // !GFCFROM2_H