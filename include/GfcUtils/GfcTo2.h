#ifndef GFCTO2_H
#define GFCTO2_H

#include <string>
#include <map>
#include "GfcEngine\GfcEngine.h"
#include "GfcEngine\Entity.h"
#include "GfcUtils\GfcTransform.h"

class GfcElementTransformer;
class GfcShapeTransformer;

class GfcTo2: public GfcTransform
{
public:
    GfcTo2(gfc::engine::IContainer* pContainer);
public:
    // ����ת��Ŀ���Schema
    virtual void setSchema(gfc::schema::CModel* pSrcModel, gfc::schema::CModel* pDestModel);
public:
    gfc::engine::EntityRef transformString(const std::wstring& sValue);
protected:
    // ת������ʵ��
    virtual DestEntityPtr doTransformShape(SrcEntityPtr& pSrcEntity);
    virtual DestEntityPtr doTransformElement(SrcEntityPtr& pSrcEntity);
    // �������Լ�
    virtual void transformProjectPropertySet(SrcEntityPtr& pSrcEntity, DestEntityPtr& pDestEntity);
    virtual void transformBuildingPropertySet(SrcEntityPtr& pSrcEntity, std::vector<SrcEntityPtr>& oPropertySetList, DestEntityPtr& pDestEntity);
    virtual void transformFloorPropertySet(SrcEntityPtr& pSrcEntity, std::vector<SrcEntityPtr>& oPropertySetList, DestEntityPtr& pDestEntity);
    //
    virtual GfcRelDefinesByTypeSchema getSrcRelDefinesByTypeSchema();
    virtual GfcRelDefinesByTypeSchema getDestRelDefinesByTypeSchema();
    virtual bool isElement(SrcEntityPtr& pEntity);
    virtual bool isElementType(SrcEntityPtr& pEntity);
    virtual void linkElementShape(DestEntityPtr& pElement, DestEntityPtr& pShape);
private:
    void changeIDConverter(const std::wstring sEntityName);
    void changeStringConverter();
    std::shared_ptr<GfcShapeTransformer> getShapeTransformer(const std::wstring& sName);
    std::shared_ptr<GfcElementTransformer> getElementTransformer(const std::wstring& sTypeName);
};

#endif // GFCTRANSFORM_H
