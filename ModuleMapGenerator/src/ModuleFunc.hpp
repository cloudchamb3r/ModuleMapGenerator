#pragma once
#include <vector>
#include <string>

using ModuleFuncRVA = uint32_t;
using ModuleFuncName = std::wstring;

struct ModuleFuncInfo {
	ModuleFuncName function_name;
	ModuleFuncRVA function_rva;
};

using ModuleFuncInfos = std::vector<ModuleFuncInfo>;