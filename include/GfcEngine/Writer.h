#ifndef GLODON_OBJECTBUF_WRITER_H
#define GLODON_OBJECTBUF_WRITER_H

#include <string>
#include <memory>
#include <Windows.h>
#include "GfcEngine\Entity.h"
#include "GfcEngine\Document.h"

namespace gfc {
    namespace schema {
        class CModel;
    }
}

GFCENGINE_NAMESPACE_BEGIN

class CWriterImp;

class GFCENGINE_API CWriter
{
public:
    // һ������£�CodePage�������á�ֻ�������ϰ汾GFCʱ����
    // �����ϰ汾ʱ��Ϊ������ǰ���룬��Ҫ��bUppercase��Ϊfalse
    CWriter(gfc::schema::CModel* pSchema, const std::wstring& sProductCode = L"", UINT nCodePage = CP_UTF8, bool bUppercase = true);
    virtual ~CWriter(void);
    virtual bool open(const std::wstring& sFileName, const std::wstring& sFormatType);
    virtual void close();
    virtual bool isOpen();
    virtual EntityRef writeEntity(CEntity* pEntity);
    void addIgnoreDuplicates(const std::wstring& sEntityName);
private:
    CWriterImp* m_pImp;
    std::wstring m_sVersion;
    std::wstring m_sProductCode;
    UINT m_nCodePage;
    bool m_bUppercase;
};

GFCENGINE_NAMESPACE_END

#endif
