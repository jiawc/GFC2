#ifndef NGFC2VECTOR3D_H
#define NGFC2VECTOR3D_H

#include "NGfc2Geometry.h"
#include "GfcClasses\x3\Gfc2Vector3d.h"
#include "NTypeDef.h"

public ref class NGfc2Vector3d: public NGfc2Geometry
{
public:
    NGfc2Vector3d();
    NGfc2Vector3d(gfc::engine::CEntity* pEntity, bool bOwner);
    void setX(NGfc2Double dValue);
    NGfc2Double getX();
    bool hasX();
    void setY(NGfc2Double dValue);
    NGfc2Double getY();
    bool hasY();
    void setZ(NGfc2Double dValue);
    NGfc2Double getZ();
    bool hasZ();

};
#endif
