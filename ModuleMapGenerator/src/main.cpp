#include <Windows.h>
#include "ModuleName.hpp"
#include "ModuleFunc.hpp"
#include "ModuleMap.hpp"
#include "PeUtils.hpp"
#include <iostream>

using namespace std;




wstring mock_list(const wstring&& wstr) {
	const wstring buf = LR"(C:\Program Files (x86)\Kakao\KakaoTalk\KakaoTalk.exe
C:\Windows\System32\ntdll.dll
C:\Windows\System32\kernel32.dll
C:\Windows\System32\KERNELBASE.dll
C:\Windows\System32\user32.dll
C:\Windows\System32\win32u.dll
C:\Windows\System32\gdi32.dll
C:\Windows\System32\gdi32full.dll
C:\Windows\System32\msvcp_win.dll
C:\Windows\System32\winhttp.dll
C:\Windows\System32\wtsapi32.dll
C:\Windows\System32\ucrtbase.dll
C:\Windows\System32\sechost.dll
C:\Windows\System32\msvcrt.dll
C:\Program Files (x86)\Kakao\KakaoTalk\Vox3.dll
C:\Windows\System32\comdlg32.dll
C:\Windows\System32\rpcrt4.dll
C:\Windows\System32\combase.dll
C:\Windows\System32\SHCore.dll
C:\Windows\System32\shlwapi.dll
C:\Windows\System32\msimg32.dll
C:\Windows\System32\shell32.dll
C:\Windows\System32\advapi32.dll
C:\Windows\System32\ole32.dll
C:\Windows\WinSxS\x86_microsoft.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\comctl32.dll
C:\Windows\System32\oleaut32.dll
C:\Windows\System32\winspool.drv
C:\Windows\System32\ws2_32.dll
C:\Windows\System32\wintrust.dll
C:\Windows\System32\bcrypt.dll
C:\Windows\System32\uxtheme.dll
C:\Windows\System32\imm32.dll
C:\Windows\System32\oledlg.dll
C:\Windows\System32\urlmon.dll
C:\Windows\WinSxS\x86_microsoft.windows.gdiplus_6595b64144ccf1df_1.1.19041.2251_none_d9513b1fe1046fc7\GdiPlus.dll
C:\Windows\System32\winmm.dll
C:\Windows\System32\d3d11.dll
C:\Windows\System32\netapi32.dll
C:\Windows\System32\dwmapi.dll
C:\Windows\System32\oleacc.dll
C:\Windows\System32\dxgi.dll
C:\Windows\System32\propsys.dll
C:\Windows\System32\srvcli.dll
C:\Windows\System32\iertutil.dll
C:\Windows\System32\netutils.dll
C:\Windows\System32\secur32.dll
C:\Windows\System32\msdmo.dll
C:\Program Files (x86)\Kakao\KakaoTalk\Vox.dll
C:\Windows\System32\d3d9.dll
C:\Windows\System32\IPHLPAPI.DLL
C:\Windows\System32\kernel.appcore.dll
C:\Windows\System32\windows.storage.dll
C:\Windows\System32\sspicli.dll
C:\Windows\System32\version.dll
C:\Windows\System32\dsound.dll
C:\Windows\System32\wldp.dll
C:\Windows\System32\powrprof.dll
C:\Windows\System32\winmmbase.dll
C:\Windows\System32\umpdc.dll
C:\Windows\System32\CRYPTBASE.DLL
C:\Windows\System32\bcryptPrimitives.dll
C:\Windows\System32\crypt32.dll
C:\Windows\System32\msasn1.dll
C:\Windows\System32\mf.dll
C:\Windows\System32\mfplat.dll
C:\Windows\System32\cfgmgr32.dll
C:\Windows\System32\RTWorkQ.dll
C:\Windows\System32\MFPlay.dll
C:\Windows\System32\Mfreadwrite.dll
C:\Windows\System32\evr.dll
C:\Windows\System32\mfcore.dll
C:\Windows\System32\ksuser.dll
C:\Windows\System32\mfperfhelper.dll
C:\Windows\System32\riched20.dll
C:\Windows\System32\usp10.dll
C:\Windows\System32\msls31.dll
C:\Windows\System32\msftedit.dll
C:\Windows\System32\msctf.dll
C:\Windows\System32\clbcatq.dll
C:\Windows\System32\wbem\wbemprox.dll
C:\Windows\System32\wbemcomn.dll
C:\Windows\System32\wbem\wbemsvc.dll
C:\Windows\System32\wbem\fastprox.dll
C:\Windows\System32\amsi.dll
C:\Windows\System32\userenv.dll
C:\Windows\System32\profapi.dll
C:\ProgramData\Microsoft\Windows Defender\Platform\4.18.2211.5-0\X86\MpOAV.dll
C:\Windows\System32\UIAutomationCore.DLL
C:\Windows\System32\WindowsCodecs.dll
C:\Windows\System32\TextShaping.dll
C:\Windows\System32\textinputframework.dll
C:\Windows\System32\CoreMessaging.dll
C:\Windows\System32\CoreUIComponents.dll
C:\Windows\System32\ntmarta.dll
C:\Windows\System32\WinTypes.dll
C:\Windows\System32\winsta.dll
C:\Windows\System32\mswsock.dll
C:\Windows\System32\NapiNSP.dll
C:\Windows\System32\pnrpnsp.dll
C:\Windows\System32\nlaapi.dll
C:\Windows\System32\wshbth.dll
C:\Windows\System32\dnsapi.dll
C:\Windows\System32\nsi.dll
C:\Windows\System32\winrnr.dll
C:\Windows\System32\FWPUCLNT.DLL
C:\Windows\System32\rasadhlp.dll
C:\Windows\System32\IME\IMEKR\imkrtip.dll
C:\Windows\System32\IME\SHARED\IMETIP.DLL
C:\Windows\System32\dui70.dll
C:\Windows\System32\IME\IMEKR\imkrapi.dll
C:\Windows\System32\policymanager.dll
C:\Windows\System32\msvcp110_win.dll
C:\Windows\System32\IME\SHARED\IMJKAPI.DLL
C:\Windows\System32\dhcpcsvc6.DLL
C:\Windows\System32\dhcpcsvc.dll
C:\Windows\System32\wkscli.dll
C:\Windows\System32\cscapi.dll
C:\Windows\System32\cryptsp.dll
C:\Windows\System32\rsaenh.dll
C:\Windows\System32\imagehlp.dll
C:\Windows\System32\gpapi.dll
C:\Windows\System32\MMDevAPI.dll
C:\Windows\System32\devobj.dll
C:\Windows\System32\wdmaud.drv
C:\Windows\System32\avrt.dll
C:\Windows\System32\AudioSes.dll
C:\Windows\System32\msacm32.drv
C:\Windows\System32\msacm32.dll
C:\Windows\System32\midimap.dll
C:\Windows\System32\resourcepolicyclient.dll
C:\Windows\System32\webio.dll
C:\Windows\System32\winnsi.dll
C:\Windows\System32\schannel.dll
C:\Windows\System32\mskeyprotect.dll
C:\Windows\System32\ntasn1.dll
C:\Windows\System32\ncrypt.dll
C:\Windows\System32\ncryptsslp.dll
C:\Windows\System32\dpapi.dll
C:\Windows\System32\wow64cpu.dll)"; 
	wofstream(wstr) << buf;
	return wstr;
}


const static auto running_on_wow64 = []() { 
	BOOL ret; IsWow64Process(GetCurrentProcess(), &ret);
	return ret;
};


int main() {
	wifstream wif(mock_list(L"list.txt"));
	ModuleMap module_map;
	ModuleName mod_name; 
	while (getline(wif, mod_name)) {
		if (running_on_wow64()) {
			mod_name.wrap_syswow64();
		}
		auto mod_ptr = LoadLibraryW(mod_name.c_str());
		if (mod_ptr == nullptr || !is_dll((uint8_t*)mod_ptr)) continue;
		module_map[mod_name] = get_exports(reinterpret_cast<uint8_t*>(mod_ptr));
	}
	module_map.save_as_csv(L"modules.csv");
}
