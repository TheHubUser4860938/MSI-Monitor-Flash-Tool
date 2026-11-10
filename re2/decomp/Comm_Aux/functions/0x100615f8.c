// rea decompile_all
// name: CMFCDynamicLayout::Adjust
// address: 0x100615f8
// body: available
// range: 0x100615f8-0x100616a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDynamicLayout::Adjust(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDynamicLayout::Adjust(CMFCDynamicLayout *this)

{
  undefined4 *puVar1;
  HWND hWnd;
  HDWP hWinPosInfo;
  BOOL BVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1c) != 0) {
    hWinPosInfo = BeginDeferWindowPos(*(int *)(this + 0x1c));
    puVar4 = *(undefined4 **)(this + 0x14);
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar4[2];
      puVar4 = (undefined4 *)*puVar4;
      hWnd = (HWND)*puVar1;
      BVar2 = IsWindow(hWnd);
      if (BVar2 != 0) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        uVar3 = FUN_100616a7(puVar1,&local_18);
        if (((byte)uVar3 & 3) != 3) {
          DeferWindowPos(hWinPosInfo,hWnd,(HWND)0x0,local_18,local_14,local_10 - local_18,
                         local_c - local_14,uVar3 | 0x314);
        }
      }
    }
    EndDeferWindowPos(hWinPosInfo);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

