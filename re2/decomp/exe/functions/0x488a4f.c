// rea decompile_all
// name: CMFCBaseTabCtrl::accHitTest
// address: 0x488a4f
// body: available
// range: 0x488a4f-0x488b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCBaseTabCtrl::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCBaseTabCtrl::accHitTest(CMFCBaseTabCtrl *this,long param_1,long param_2,tagVARIANT *param_3)

{
  code *pcVar1;
  POINT pt;
  long lVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  tagPOINT local_10;
  int local_8;
  
  if (param_3 == (tagVARIANT *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *(undefined2 *)param_3 = 3;
    iVar5 = 0;
    local_10.x = param_1;
    local_10.y = param_2;
    *(undefined4 *)(param_3 + 8) = 0;
    ScreenToClient(*(HWND *)(this + 0x20),&local_10);
    if (0 < *(int *)(this + 0xbc)) {
      do {
        piVar3 = (int *)FUN_004ab4cd(iVar5);
        local_8 = *piVar3;
        pt.y = local_10.y;
        pt.x = local_10.x;
        BVar4 = PtInRect((RECT *)(local_8 + 0x10),pt);
        if (BVar4 != 0) {
          *(int *)(param_3 + 8) = iVar5 + 1;
          pcVar1 = *(code **)(*(int *)this + 0x2d4);
          guard_check_icall(local_8,this + 0x210,iVar5 == *(int *)(this + 0xc0));
          (*pcVar1)();
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xbc));
    }
    lVar2 = 0;
  }
  return lVar2;
}

