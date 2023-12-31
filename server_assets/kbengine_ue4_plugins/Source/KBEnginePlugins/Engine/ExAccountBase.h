/*
	Generated by KBEngine!
	Please do not modify this file!
	Please inherit this module, such as: (class ExAccount : public ExAccountBase)
	tools = kbcmd
*/

#pragma once
#include "KBECommon.h"
#include "Entity.h"
#include "KBETypes.h"
#include "EntityCallExAccountBase.h"

namespace KBEngine
{

class Method;
class Property;
class MemoryStream;

// defined in */scripts/entity_defs/ExAccount.def
	// Please inherit and implement "class ExAccount : public ExAccountBase"
class KBENGINEPLUGINS_API ExAccountBase : public Entity
{
public:
	EntityBaseEntityCall_ExAccountBase* pBaseEntityCall;
	EntityCellEntityCall_ExAccountBase* pCellEntityCall;



	void onComponentsEnterworld() override;
	void onComponentsLeaveworld() override;

	void onGetBase() override;
	void onGetCell() override;
	void onLoseCell() override;

	EntityCall* getBaseEntityCall() override;
	EntityCall* getCellEntityCall() override;


	void onRemoteMethodCall(MemoryStream& stream) override;
	void onUpdatePropertys(MemoryStream& stream) override;
	void callPropertysSetMethods() override;

	ExAccountBase();
	virtual ~ExAccountBase();

	void attachComponents() override;
	void detachComponents() override;

};

}