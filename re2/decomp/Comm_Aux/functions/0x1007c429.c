// rea decompile_all
// name: AFX_GLOBAL_DATA::Initialize
// address: 0x1007c429
// body: available
// range: 0x1007c429-0x1007c4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall AFX_GLOBAL_DATA::Initialize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_GLOBAL_DATA::Initialize(AFX_GLOBAL_DATA *this)

{
  DWORDLONG dwlConditionMask;
  BOOL BVar1;
  int iVar2;
  undefined8 uVar3;
  _OSVERSIONINFOEXW local_124;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)this == 0) {
    local_124.dwOSVersionInfoSize = 0x11c;
    local_124.dwMajorVersion = 6;
    local_124.dwMinorVersion = 1;
    _memset(&local_124.dwBuildNumber,0,0x110);
    uVar3 = VerSetConditionMask(0,0,2,3,1,3);
    dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar3);
    BVar1 = VerifyVersionInfoW(&local_124,3,dwlConditionMask);
    *(BOOL *)(this + 0x17c) = BVar1;
    iVar2 = GetSystemMetrics(0x1000);
    *(int *)(this + 0x180) = iVar2;
    UpdateSysColors(this);
    FUN_1007c87d();
    OnSettingChange(this);
    *(undefined4 *)(this + 0x19c) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

