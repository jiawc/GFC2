#ifndef WRITERTEXTIMP_H
#define WRITERTEXTIMP_H

#include <string>
#include "WriterImp.h"
#include <fstream>

GFCENGINE_NAMESPACE_BEGIN

class CPropValue;

// 内部实现，不对外公开
class CWriterTextImp: public CWriterImp
{
    GFCENGINE_DEC_OBJECT(CWriterTextImp, CWriterImp)
public:
    CWriterTextImp(void);
    virtual ~CWriterTextImp(void);
    virtual bool open(const std::wstring& sFileName, const std::wstring& sProductCode, const std::wstring& sVersion);
    virtual void close();
protected:
    virtual EntityRef doWriteEntity(CEntity* pEntity);
private:
    void writeHead(const std::wstring& sFileName, const std::wstring& sProductCode, const std::wstring& sVersion);
    std::string toString(const std::wstring& str);
    std::fstream* m_pTextStream;
};
// 便于测试
class CWriterTextUtils
{
public:
    static void writeEntity(std::iostream& out, CEntity* pEntity, EntityRef nRef, UINT nCodePage = CP_UTF8);
    static void writeValue(std::iostream& out, gfc::schema::CTypeObject * pType, CPropValue* pValue, UINT nCodePage = CP_UTF8);
    static void writeProperty(std::iostream& out, CProperty* pProp, UINT nCodePage = CP_UTF8);
};

GFCENGINE_NAMESPACE_END

#endif
