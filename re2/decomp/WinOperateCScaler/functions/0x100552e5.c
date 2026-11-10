// rea decompile_all
// name: CBasePane::accLocation
// address: 0x100552e5
// body: available
// range: 0x100552e5-0x100553d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CBasePane::accLocation(long *,long *,long *,long *,struct
   tagVARIANT)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CBasePane::accLocation
          (CBasePane *this,int *param_1,int *param_2,int *param_3,int *param_4,short param_6,
          undefined4 param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) &&
     ((param_4 != (int *)0x0 && (param_6 == 3)))) {
    if (param_8 == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      *param_1 = local_18.left;
      *param_2 = local_18.top;
      *param_3 = local_18.right - local_18.left;
      iVar2 = local_18.bottom - local_18.top;
    }
    else {
      if (param_8 < 1) goto LAB_100553c7;
      pcVar1 = *(code **)(*(int *)this + 0x254);
      guard_check_icall(param_8);
      (*pcVar1)();
      *param_1 = *(int *)(this + 0xf4);
      *param_2 = *(int *)(this + 0xf8);
      *param_3 = *(int *)(this + 0xfc) - *(int *)(this + 0xf4);
      iVar2 = *(int *)(this + 0x100) - *(int *)(this + 0xf8);
    }
    *param_4 = iVar2;
  }
LAB_100553c7:
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}

