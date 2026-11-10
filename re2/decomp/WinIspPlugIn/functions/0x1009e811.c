// rea decompile_all
// name: CMFCToolBar::accHitTest
// address: 0x1009e811
// body: available
// range: 0x1009e811-0x1009e8e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCToolBar::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCToolBar::accHitTest(CMFCToolBar *this,long param_1,long param_2,tagVARIANT *param_3)

{
  code *pcVar1;
  POINT pt;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  BOOL BVar5;
  tagPOINT local_18;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_3 == (tagVARIANT *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined2 *)param_3 = 3;
    local_18.x = param_1;
    local_18.y = param_2;
    ScreenToClient(*(HWND *)(this + 0x20),&local_18);
    local_8 = 1;
    local_10 = *(int *)(this + 0xc40);
    while (local_10 != 0) {
      puVar3 = (undefined4 *)FUN_100c321b(&local_10);
      local_c = (int *)*puVar3;
      pcVar1 = *(code **)(*local_c + 0xbc);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (0 < iVar4) {
        pt.y = local_18.y;
        pt.x = local_18.x;
        BVar5 = PtInRect((RECT *)(local_c + 0x15),pt);
        if (BVar5 != 0) {
          *(int *)(param_3 + 8) = local_8;
          pcVar1 = *(code **)(*local_c + 0xb8);
          guard_check_icall(this,this + 0xd0);
          (*pcVar1)();
          break;
        }
        local_8 = local_8 + 1;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}

