#pragma once
#include <string>
#include <unordered_map>
#include <fstream>
#include <format>
#include "ModuleFunc.hpp"

class ModuleMap : public std::unordered_map<std::wstring, ModuleFuncInfos> {
public:
	void save_as_csv(const std::wstring& filename) {
		auto wofs = std::wofstream(filename);
		wofs << L"ModuleName, FunctionModuleRva, FunctionName\n";
		for (const auto& [mod_name, infos] : *this) {
			for (const auto& [fn_name, fn_rva] : infos) {
				wofs << std::format(L"{}, {}, {}\n", mod_name, (void*)fn_rva, fn_name);
			}
		}
	}
};
