// rea decompile_all
// name: CPropertySheet::OnSetDefID
// address: 0x4d1d6d
// body: available
// range: 0x4d1d6d-0x4d1e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CPropertySheet::OnSetDefID(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CPropertySheet::OnSetDefID(CPropertySheet *this,uint param_1,long param_2)

{
  code *pcVar1;
  HWND pHVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  long lVar6;
  HWND hWnd;
  
  if (((*(uint *)(this + 0x84) & 0x1000020) != 0) &&
     (((pHVar2 = GetDlgItem(*(HWND *)(this + 0x20),param_1), pHVar2 == (HWND)0x0 ||
       (uVar3 = GetWindowLongW(pHVar2,-0x10), (uVar3 & 0x10000000) == 0)) ||
      (BVar4 = IsWindowEnabled(pHVar2), BVar4 == 0)))) {
    uVar3 = 0;
    do {
      pHVar2 = GetDlgItem(*(HWND *)(this + 0x20),(&DAT_005c2c34)[uVar3]);
      uVar5 = GetWindowLongW(pHVar2,-0x10);
      if (((uVar5 & 0x10000000) != 0) && (BVar4 = IsWindowEnabled(pHVar2), BVar4 != 0)) {
        hWnd = GetFocus();
        BVar4 = IsWindowEnabled(hWnd);
        if (BVar4 == 0) {
          SetFocus(pHVar2);
        }
        pcVar1 = *(code **)(*(int *)this + 0x11c);
        guard_check_icall(0x401,(&DAT_005c2c34)[uVar3],param_2);
        lVar6 = (*pcVar1)();
        return lVar6;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  lVar6 = FUN_0042ec70();
  return lVar6;
}

