#include "stdafx.h"
#include "Cell/rpcs3/cell/ppu/module.h"

extern logs::channel cellSysutil;

s32 cellStorageDataImportMove()
{
	throw EXCEPTION("");
}

s32 cellStorageDataImport()
{
	throw EXCEPTION("");
}

s32 cellStorageDataExport()
{
	throw EXCEPTION("");
}


void cellSysutil_Storage_init()
{
	REG_FUNC(cellSysutil, cellStorageDataImportMove);
	REG_FUNC(cellSysutil, cellStorageDataImport);
	REG_FUNC(cellSysutil, cellStorageDataExport);
}
