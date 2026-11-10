// rea decompile_all
// name: CMFCRibbonCategory::accHitTest
// address: 0x1010f41d
// body: available
// range: 0x1010f41d-0x1010f4fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonCategory::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonCategory::accHitTest
          (CMFCRibbonCategory *this,long param_1,long param_2,tagVARIANT *param_3)

{
  code *pcVar1;
  POINT pt;
  long lVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  tagPOINT local_14;
  IDispatch *local_c;
  CCmdTarget *local_8;
  
  if (param_3 == (tagVARIANT *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    if ((*(int *)(this + 0x53c) != 0) && (*(int *)(*(int *)(this + 0x53c) + 0x20) != 0)) {
      *(undefined2 *)param_3 = 3;
      iVar5 = 0;
      local_14.x = param_1;
      local_14.y = param_2;
      *(undefined4 *)(param_3 + 8) = 0;
      ScreenToClient(*(HWND *)(*(int *)(this + 0x53c) + 0x20),&local_14);
      if (0 < *(int *)(this + 0x564)) {
        do {
          piVar3 = (int *)FUN_10151a1d(iVar5);
          local_8 = (CCmdTarget *)*piVar3;
          if (((local_8 != (CCmdTarget *)0x0) &&
              (pt.y = local_14.y, pt.x = local_14.x, BVar4 = PtInRect((RECT *)(local_8 + 0xcc),pt),
              BVar4 != 0)) &&
             (local_c = CCmdTarget::GetIDispatch(local_8,1), local_c != (IDispatch *)0x0)) {
            pcVar1 = *(code **)(*(int *)local_8 + 0xac);
            guard_check_icall(*(undefined4 *)(this + 0x53c),this + 0x20);
            (*pcVar1)();
            *(undefined2 *)param_3 = 9;
            *(IDispatch **)(param_3 + 8) = local_c;
            return 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(this + 0x564));
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}

