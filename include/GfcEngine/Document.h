#ifndef GLODON_OBJECTBUF_DOCUMENT_H
#define GLODON_OBJECTBUF_DOCUMENT_H

#include <string>
#include <map>
#include <vector>
#include <set>
#include "GfcEngine/Entity.h"
#include "GfcEngine/GfcEngine.h"
#include "GfcEngine\Container.h"
#include <functional>

namespace gfc2 {
    namespace schema {
        class CClass;
        class CModel;
    }
}

GFCENGINE_NAMESPACE_BEGIN

class DocumentIterator;

typedef std::function<bool (Document*, EntityRef, Entity*)> needAddEntityFunc;
typedef std::function<void (Document*)> afterReadDocFunc;

template<class T> class ContainerImp;

struct GFCENGINE_API std::_Container_base12;
template class GFCENGINE_API std::function<void(gfc2::engine::Document *)>;
template class GFCENGINE_API std::function<bool(gfc2::engine::Document *, EntityRef, gfc2::engine::Entity *)>;
template class GFCENGINE_API std::_Tree_val<std::_Tree_simple_types<std::string>>;
template class GFCENGINE_API std::_Compressed_pair<std::_Wrap_alloc<std::allocator<std::_Tree_node<std::string, void *>>>, std::_Tree_val<std::_Tree_simple_types<std::string>>, true>;
template class GFCENGINE_API std::_Compressed_pair<std::less<std::string>, std::_Compressed_pair<std::_Wrap_alloc<std::allocator<std::_Tree_node<std::string, void *>>>, std::_Tree_val<std::_Tree_simple_types<std::string>>, true>, true>;
template class GFCENGINE_API std::set<std::string, std::less<std::string>, std::allocator<std::string>>;


class GFCENGINE_API Document: public IContainer
{
public:
    Document(gfc2::schema::CModel* pModel, int nEntityInitCount = 1000000);
    ~Document(void);
    void add(EntityRef nId, Entity* pEntity);
    gfc2::schema::CModel* model() const;

    virtual EntityPtr getEntity(EntityRef nId);
    virtual EntityIteratorPtr getEntities(const std::string& nType, bool bIncludeSubType = false);
    virtual EntityIteratorPtr getIterator();

    //void linkSchemaByParent();
    //bool schemaFilter(gfc2::schema::CClass* pSchema, const std::string& nFilterType, bool bIncludeSubType);
    void setNeedAddEntityFunc(needAddEntityFunc pFunc){m_pNeedAddEntityFunc = pFunc;}
    needAddEntityFunc getNeedAddEntityFunc(){return m_pNeedAddEntityFunc;}
    void setAfterReadDocFunc(afterReadDocFunc pFunc){m_pAfterReadDocFunc = pFunc;}
    afterReadDocFunc getAfterReadDocFunc(){return m_pAfterReadDocFunc;}
private:
    //std::string normalizeTypeName(const std::string& sTypeName);
    ContainerImp<EntityPtr>* m_pContainer;
    //std::set<std::string> m_oSchemaInheritSet; //parent, child
    needAddEntityFunc m_pNeedAddEntityFunc;
    afterReadDocFunc m_pAfterReadDocFunc;
};

GFCENGINE_NAMESPACE_END

#endif

