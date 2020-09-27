#ifndef CUMLTRANSLATOR_H
#define CUMLTRANSLATOR_H

#include <string>
#include "GfcSchema/SchemaMacro.h"

struct CTranslateInfo
{
    std::wstring sUMLFile;
    std::wstring sHeadPath;
    std::wstring sHeadRelativePath;
    std::wstring sCPPPath;  // GFC����·��
    //std::wstring sTextPath; // �ı����л�������·��
    //std::wstring sBinPath;  // ���������л�������·��
    std::wstring sNETPath;
    std::wstring sExpressFile;
    std::wstring sHtmlPath;
    std::wstring sVersion;
};

GFC_NAMESPACE_BEGIN
class CModel;
GFC_NAMESPACE_END

using namespace gfc::schema;

class CUMLTranslator
{
public:
    CUMLTranslator();
    ~CUMLTranslator();
    void done(CTranslateInfo& oInfo);
private:
    void loadModelData(CModel* pModel, const std::wstring& sFileName);
};

#endif