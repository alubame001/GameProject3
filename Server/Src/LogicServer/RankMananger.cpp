﻿#include <stdafx.h>
#include "RankMananger.h"
#include "GameService.h"
#include "Sqlite/CppSQLite3.h"
#include "CommonFunc.h"
#include "Log.h"

CRankManager::CRankManager()
{

}

CRankManager::~CRankManager()
{

}

CRankManager* CRankManager::GetInstancePtr()
{
	static CRankManager _StaticMgr;

	return &_StaticMgr;
}
