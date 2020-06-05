#include <assert.h>
#include "GfcEngine/Reader.h"
#include "GfcEngine/Document.h"
#include "ReaderImp.h"

GFCENGINE_NAMESPACE_BEGIN

Reader::Reader(gfc::schema::CModel* pModel): m_pImp(nullptr), m_pModel(pModel)
{
}


Reader::~Reader(void)
{
}

bool Reader::open(const std::wstring & sFileName)
{
    close();
    for (auto itr = ReaderImp::GetFactory()->begin(); itr != ReaderImp::GetFactory()->end(); ++itr)
    {
        auto pRegObjInfo = itr->second;
        if (pRegObjInfo->GetFunPtr() != NULL)
        {
            auto pImp = dynamic_cast<ReaderImp*> (pRegObjInfo->GetFunPtr()());
            if (pImp->preRead(sFileName))
            {
                m_pImp = pImp;
                m_pImp->setModel(m_pModel);
                return m_pImp->open(sFileName);
            }
            else
            {
                delete pImp;
            }
        }
    }
    return false;
}

void Reader::close()
{
    if (m_pImp)
    {
        m_pImp->close();
        delete m_pImp;
        m_pImp = nullptr;
    }
}

void Reader::read(Document* pDoc)
{
    //gfc::engine::Entity::setDocument(pDoc);
    //m_pSerializerManager = SerializerManager::getInstance();
    //for (int i = 0; i < m_pSerializerManager->getCount(); i++)
    //{
    //    ReaderImp* pImp = m_pSerializerManager->getReaderImp(i);
    //    if (pImp->preRead(sFileName))
    //    {
    //        bool bSucc = pImp->read(sFileName, pDoc, m_oErrors);
    //        pDoc->linkSchemaByParent();
    //        return bSucc;
    //    }
    //}
    if (m_pImp)
    {
        m_pImp->read(pDoc);
    }
}

EntityPtr Reader::getEntity(EntityRef nId)
{
    if (m_pImp)
    {
        return m_pImp->getEntity(nId);
    }
    return nullptr;
}

EntityIteratorPtr Reader::getEntities(const std::wstring & sType, bool bIncludeSubType)
{
    if (m_pImp)
    {
        return m_pImp->getEntities(sType, bIncludeSubType);
    }
    return EntityIteratorPtr(nullptr);
}

GFCENGINE_NAMESPACE_END