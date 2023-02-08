#pragma once
#include <string>
class ModuleName : public std::wstring {
public:
	void wrap_syswow64() {
		auto sys32_idx = this->find(LR"(\System32\)");
		if (sys32_idx != std::string::npos) {
			this->replace(sys32_idx, 10, LR"(\SysWOW64\)");
		}
	}

	operator std::wstring() const {
		return *this;
	}
};