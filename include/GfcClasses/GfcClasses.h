#ifndef GFCCLASSES_H
#define GFCCLASSES_H
// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� GFCCLASSES_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// GFCCLASSES_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef GFCCLASSES_EXPORTS
#define GFCCLASSES_API __declspec(dllexport)
#else
#define GFCCLASSES_API __declspec(dllimport)
#endif

#define GFCCLASSES_NAMESPACE_BEGIN namespace gfc { namespace classes { namespace x3 {
#define GFCCLASSES_NAMESPACE_END } } }

#endif
