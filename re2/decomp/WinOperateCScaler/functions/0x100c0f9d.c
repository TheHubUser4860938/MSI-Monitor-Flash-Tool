// rea decompile_all
// name: CMDIChildWndEx::InvalidateIconicBitmaps
// address: 0x100c0f9d
// body: available
// range: 0x100c0f9d-0x100c104d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMDIChildWndEx::InvalidateIconicBitmaps(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWndEx::InvalidateIconicBitmaps(CMDIChildWndEx *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  HWND__ *pHVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar2 = IsTaskbarTabsSupportEnabled(this);
  if ((iVar2 != 0) && (iVar2 = IsRegisteredWithTaskbarTabs(this), iVar2 != 0)) {
    pHVar4 = (HWND__ *)0x0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (*(int *)(this + 0x4dc) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x214);
      guard_check_icall(local_18);
      puVar3 = (undefined4 *)(*pcVar1)();
      local_2c = *puVar3;
      local_28 = puVar3[1];
      local_24 = puVar3[2];
      local_20 = puVar3[3];
    }
    pcVar1 = *(code **)(*(int *)this + 0x21c);
    guard_check_icall(local_2c,local_28,local_24,local_20);
    (*pcVar1)();
    if (this != (CMDIChildWndEx *)0xfffffbb0) {
      pHVar4 = *(HWND__ **)(this + 0x470);
    }
    _AfxDwmInvalidateIconicBitmaps(pHVar4);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

