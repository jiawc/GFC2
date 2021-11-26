#ifndef NTYPEDEF_H
#define NTYPEDEF_H

typedef bool NGfc2Boolean;

typedef double NGfc2Date;

typedef double NGfc2DateTime;

typedef double NGfc2Double;

typedef System::String^ NGfc2String;

typedef NGfc2String NGfc2Elev;

typedef System::String^ NGfc2Identity;

typedef int NGfc2Integer;

typedef NGfc2String NGfc2Label;

typedef NGfc2String NGfc2Text;

typedef double NGfc2Time;

public enum class NGfc2ArcType
{
    AT_LINE,
    AT_ACS,
    AT_CS,
    AT_ACL,
    AT_CL
};

public enum class NGfc2BooleanOperator
{
    BO_UNION,
    BO_INTERSECTION,
    BO_DIFFERENCE
};

public enum class NGfc2ConnectionType
{
    CT_ATPATH,
    CT_ATSTART,
    CT_ATEND,
    CT_NOTDEFINED
};

public enum class NGfc2FragTestFunc
{
    FTF_NEVER,
    FTF_LESS,
    FTF_EQUAL,
    FTF_LEQUAL,
    FTF_GREATER,
    FTF_NOTEQUAL,
    FTF_GEQUAL,
    FTF_ALWAYS
};

public enum class NGfc2GeometryDataType
{
    GDT_UNCOMPRESS,
    GDT_COMPRESS,
    GDT_UNKNOWN
};

public enum class NGfc2PrimitiveType
{
    GPT_POINTS,
    GPT_LINES,
    GPT_LINE_STRIP,
    GPT_TRIANGLES,
    GPT_TRIANGLE_STRIP,
    GPT_TRIANGLE_FAN,
    GPT_UNKNOWN
};

public enum class NGfc2SceneBlendFactor
{
    SBF_DST_ALPHA,
    SBF_DST_COLOR,
    SBF_ONE,
    SBF_ONE_MINUS_DST_COLOR,
    SBF_ONE_MINUS_DST_ALPHA,
    SBF_ONE_MINUS_SRC_ALPHA,
    SBF_ONE_MINUS_SRC_COLOR,
    SBF_SRC_ALPHA,
    SBF_SRC_ALPHA_SATURATE,
    SBF_SRC_COLOR,
    SBF_ZERO,
    SBF_CONSTANT_COLOR,
    SBF_ONE_MINUS_CONSTANT_COLOR,
    SBF_CONSTANT_ALPHA,
    SBF_ONE_MINUS_CONSTANT_ALPHA
};

public enum class NGfc2SweepType
{
    ST_Perpendicular,
    ST_Upright,
    ST_Facepoint
};

#endif
