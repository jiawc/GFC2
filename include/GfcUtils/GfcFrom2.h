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
public:
    std::wstring transformString(gfc::engine::EntityRef nStringRef);
    // ����ת��Ŀ���Schema
    virtual void setSchema(gfc::schema::CModel* pSrcModel, gfc::schema::CModel* pDestModel);
protected:
    // �������Լ�
    virtual void transformProjectPropertySet(SrcEntityPtr& pSrcEntity, DestEntityPtr& pDestEntity);
    virtual void transformFloorPropertySet(SrcEntityPtr& pSrcEntity, DestEntityPtr& pDestEntity);
    virtual bool isElement(SrcEntityPtr& pEntity);
    virtual bool isElementType(SrcEntityPtr& pEntity);
    virtual GfcRelDefinesByTypeSchema getSrcRelDefinesByTypeSchema();
    virtual GfcRelDefinesByTypeSchema getDestRelDefinesByTypeSchema();
    virtual void linkElementShape(DestEntityPtr& pElement, DestEntityPtr& pShape);
    // ת������ʵ��
    virtual DestEntityPtr doTransformShape(SrcEntityPtr& pSrcEntity);
    virtual DestEntityPtr doTransformElement(SrcEntityPtr& pSrcEntity);
    virtual DestEntityPtr doTransformElementType(SrcEntityPtr& pSrcEntity);
protected: // for test
    DestEntityPtr entityAttributeToPropertySet(SrcEntityPtr pSrcEntity);
    DestEntityPtr entityAttributeToPropertySet(SrcEntityPtr pSrcEntity, const std::vector<std::wstring>& sAttributeNames);
    // ��������תΪProperty����
    DestEntityPtr attributeToProperty(gfc::engine::CProperty* pSrc);
    gfc::engine::EntityRef entityToObject(SrcEntityPtr pSrc);
private:
    void changeStringConverter();
    std::wstring getTypeCode(const std::wstring& sEntityName);
    void getEntityAttributeNames(gfc::schema::CClass* pEntityClass, std::vector<std::wstring>& sAttributeNames);
    void doTransformElement(SrcEntityPtr& pSrcEntity, DestEntityPtr& pDestEntity);
};

#endif // !GFCFROM2_H