/*
	Generated by KBEngine!
	Please do not modify this file!
	
	tools = kbcmd
*/

#pragma once

#include "KBECommon.h"
#include "EntityCall.h"
#include "KBETypes.h"
#include "CustomDataTypes.h"


// defined in */scripts/entity_defs/ExAccount.def

namespace KBEngine
{

class KBENGINEPLUGINS_API EntityBaseEntityCall_ExAccountBase : public EntityCall
{
public:

	EntityBaseEntityCall_ExAccountBase(int32 eid, const FString& ename);

	virtual ~EntityBaseEntityCall_ExAccountBase();
};

class KBENGINEPLUGINS_API EntityCellEntityCall_ExAccountBase : public EntityCall
{
public:

	EntityCellEntityCall_ExAccountBase(int32 eid, const FString& ename);

	virtual ~EntityCellEntityCall_ExAccountBase();
};

}