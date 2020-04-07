#ifndef GFC2PRIMITIVERENDERABLE_H
#define GFC2PRIMITIVERENDERABLE_H

#include "GfcClasses.h"
#include <vector>
#include "Gfc2RepresentationItem.h"
#include "Gfc2Vector3d.h"
#include "Gfc2Vector3d.h"
#include "TypeDef.h"
#include "glodon/objectbuf/Document.h"
#include "glodon/objectbuf/Entity.h"

class GFCCLASSES_API Gfc2PrimitiveRenderable: public Gfc2RepresentationItem
{
OBJECTBUF_DEC_OBJECT(Gfc2PrimitiveRenderable,glodon::objectbuf::Entity)
public:
    Gfc2PrimitiveRenderable();
    bool isInitialized() const;
    int typeId() const;
    virtual glodon::objectbuf::EntitySchema* createSchema() const;
    virtual std::string entityName() const;
    void setPrimitiveType(const Gfc2PrimitiveType& nValue)
    {
        m_nPrimitiveType = nValue;
        setHasPrimitiveType();
    }
    Gfc2PrimitiveType getPrimitiveType() const {return m_nPrimitiveType;}
    bool hasPrimitiveType() const {return (_has_bits_[0] & 0x1u) != 0;}
    void setGeometryDataType(const Gfc2GeometryDataType& nValue)
    {
        m_nGeometryDataType = nValue;
        setHasGeometryDataType();
    }
    Gfc2GeometryDataType getGeometryDataType() const {return m_nGeometryDataType;}
    bool hasGeometryDataType() const {return (_has_bits_[0] & 0x2u) != 0;}
    int getVertexesCount() const {return (int)m_oVertexes.size();}
    void clearVertexes() {m_oVertexes.clear();}
    void addVertexes(const glodon::objectbuf::EntityRef& nValue) {m_oVertexes.push_back(nValue);}
    glodon::objectbuf::EntityRef getVertexes(int nIndex) const {return m_oVertexes[nIndex];}
    Gfc2Vector3d* getVertexesPtr(int nIndex) const {return (Gfc2Vector3d*)m_pDocument->find(getVertexes(nIndex));}
    int getNormalsCount() const {return (int)m_oNormals.size();}
    void clearNormals() {m_oNormals.clear();}
    void addNormals(const glodon::objectbuf::EntityRef& nValue) {m_oNormals.push_back(nValue);}
    glodon::objectbuf::EntityRef getNormals(int nIndex) const {return m_oNormals[nIndex];}
    Gfc2Vector3d* getNormalsPtr(int nIndex) const {return (Gfc2Vector3d*)m_pDocument->find(getNormals(nIndex));}
    int getIndexesCount() const {return (int)m_oIndexes.size();}
    void clearIndexes() {m_oIndexes.clear();}
    void addIndexes(const Gfc2Integer& nValue) {m_oIndexes.push_back(nValue);}
    Gfc2Integer getIndexes(int nIndex) const {return m_oIndexes[nIndex];}

private:
    void setHasPrimitiveType() {_has_bits_[0] |= 0x1u;}
    void setHasGeometryDataType() {_has_bits_[0] |= 0x2u;}

    Gfc2PrimitiveType m_nPrimitiveType;
    Gfc2GeometryDataType m_nGeometryDataType;
    std::vector<glodon::objectbuf::EntityRef> m_oVertexes;
    std::vector<glodon::objectbuf::EntityRef> m_oNormals;
    std::vector<Gfc2Integer> m_oIndexes;
};
#endif
