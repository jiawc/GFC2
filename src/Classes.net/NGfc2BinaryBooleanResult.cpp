#include "NGfc2BinaryBooleanResult.h"

using namespace gfc::classes::x3;

NGfc2BinaryBooleanResult::NGfc2BinaryBooleanResult()
{
    m_pEntity = new Gfc2BinaryBooleanResult;
    m_bOwner = true;
}

NGfc2BinaryBooleanResult::NGfc2BinaryBooleanResult(void* pEntity, bool bOwner):
    NGfc2BooleanResult(pEntity, bOwner)
{
}

void NGfc2BinaryBooleanResult::setOperator(NGfc2BooleanOperator nValue)
{
    ((Gfc2BinaryBooleanResult*)m_pEntity)->setOperator((Gfc2BooleanOperator)nValue);
}

NGfc2BooleanOperator NGfc2BinaryBooleanResult::getOperator()
{
    return (NGfc2BooleanOperator)((Gfc2BinaryBooleanResult*)m_pEntity)->getOperator();
}

bool NGfc2BinaryBooleanResult::hasOperator()
{
    return ((Gfc2BinaryBooleanResult*)m_pEntity)->hasOperator();
}

void NGfc2BinaryBooleanResult::setFirstOperand(gfc::engine::EntityRef nValue)
{
    ((Gfc2BinaryBooleanResult*)m_pEntity)->setFirstOperand(nValue);
}

gfc::engine::EntityRef NGfc2BinaryBooleanResult::getFirstOperand()
{
    return ((Gfc2BinaryBooleanResult*)m_pEntity)->getFirstOperand();
}

bool NGfc2BinaryBooleanResult::hasFirstOperand()
{
    return ((Gfc2BinaryBooleanResult*)m_pEntity)->hasFirstOperand();
}

void NGfc2BinaryBooleanResult::setSecondOperand(gfc::engine::EntityRef nValue)
{
    ((Gfc2BinaryBooleanResult*)m_pEntity)->setSecondOperand(nValue);
}

gfc::engine::EntityRef NGfc2BinaryBooleanResult::getSecondOperand()
{
    return ((Gfc2BinaryBooleanResult*)m_pEntity)->getSecondOperand();
}

bool NGfc2BinaryBooleanResult::hasSecondOperand()
{
    return ((Gfc2BinaryBooleanResult*)m_pEntity)->hasSecondOperand();
}

