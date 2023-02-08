#pragma once

#include <string>
#include <locale>
#include <codecvt>

std::wstring to_wstring(const std::string& str) {
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	return converter.from_bytes(str);
}