// rea decompile_all
// name: FUN_00552f87
// address: 0x552f87
// body: available
// range: 0x552f87-0x553058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x553054 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00552f87(LONG param_1,LONG param_2)

{
  int iVar1;
  int iVar2;
  POINT pt;
  POINT pt_00;
  BOOL BVar3;
  int *piVar4;
  __POSITION *p_Var5;
  int iVar6;
  int in_ECX;
  int local_c;
  int local_8;
  
  pt_00.y = param_2;
  pt_00.x = param_1;
  BVar3 = PtInRect((RECT *)(in_ECX + 0x444),pt_00);
  if (BVar3 != 0) {
    piVar4 = (int *)FUN_004ab4cd(*(undefined4 *)(in_ECX + 0x38c));
    p_Var5 = CObList::FindIndex((CObList *)(in_ECX + 0x464),*piVar4);
    if (p_Var5 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    iVar1 = *(int *)(p_Var5 + 8);
    local_c = *(int *)(in_ECX + 0x484);
    iVar2 = local_8;
    while (local_8 = iVar2, local_c != 0) {
      iVar6 = FUN_0043410a(&local_c);
      iVar2 = local_8;
      if (*(int *)(iVar6 + 4) == iVar1) {
        local_8 = *(int *)(iVar6 + 0x10);
        while (iVar2 = 0, local_8 != 0) {
          piVar4 = (int *)FUN_004ead48(&local_8);
          iVar2 = *piVar4;
          if (((*(int *)(iVar2 + 0x34) != 0) &&
              (pt.y = param_2, pt.x = param_1, BVar3 = PtInRect((RECT *)(iVar2 + 0xc),pt),
              BVar3 != 0)) && (*(int *)(iVar2 + 0x24) != 0)) {
            return iVar2;
          }
        }
      }
    }
  }
  return 0;
}

