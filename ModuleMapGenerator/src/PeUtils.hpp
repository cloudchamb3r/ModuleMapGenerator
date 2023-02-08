#pragma once
#include <Windows.h>
#include "Converter.hpp"

auto get_nt_header(uint8_t* addy) {
	return (PIMAGE_NT_HEADERS)(addy + reinterpret_cast<PIMAGE_DOS_HEADER>(addy)->e_lfanew);
}

auto get_export_dir(uint8_t* addy) {
	return (PIMAGE_EXPORT_DIRECTORY)(addy + get_nt_header(addy)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
}


auto get_exports(uint8_t* mod_ptr) {
	ModuleFuncInfos ret;

	auto nt_header = get_nt_header(mod_ptr);
	auto exports_dir = get_export_dir(mod_ptr);

	auto name_rva_table = reinterpret_cast<uint32_t*>(mod_ptr + exports_dir->AddressOfNames);
	auto addr_rva_table = reinterpret_cast<uint32_t*>(mod_ptr + exports_dir->AddressOfFunctions);

	for (auto i = 0u; i < exports_dir->NumberOfNames; i++) {
		auto current_name = mod_ptr + name_rva_table[i];

		ret.push_back({ to_wstring((const char*)current_name), (ModuleFuncRVA)addr_rva_table[i] });
	}
	return ret;
}


bool is_dll(uint8_t* mod_ptr) {
	return get_nt_header(mod_ptr)->FileHeader.Characteristics & IMAGE_FILE_DLL;
}