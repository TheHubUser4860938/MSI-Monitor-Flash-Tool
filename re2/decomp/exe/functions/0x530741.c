// rea decompile_all
// name: COleIPFrameWnd::OnSetMessageString
// address: 0x530741
// body: available
// range: 0x530741-0x5307ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall COleIPFrameWnd::OnSetMessageString(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall COleIPFrameWnd::OnSetMessageString(COleIPFrameWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined **local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x53074d;
  if (*(int *)(this + 0x138) == 0) goto LAB_005307d6;
  uVar3 = FUN_004295fe();
  FUN_0040eb30(uVar3);
  local_8 = 0;
  if (param_2 == 0) {
    if (param_1 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x174);
      guard_check_icall(param_1,local_14);
      (*pcVar1)();
      param_2 = (long)local_14[0];
      if (local_14[0] != (undefined **)0x0) goto LAB_0053079c;
    }
    param_2 = (long)&PTR_005e8934;
  }
LAB_0053079c:
  puVar4 = (undefined4 *)FUN_00415a10(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar1 = *(code **)(**(int **)(this + 0x138) + 0x30);
  guard_check_icall(*(int **)(this + 0x138),*puVar4);
  (*pcVar1)();
  FUN_0040efa0();
  FUN_0040efa0();
LAB_005307d6:
  lVar2 = *(long *)(this + 0xd8);
  *(uint *)(this + 0xd8) = param_1;
  *(uint *)(this + 0xd4) = param_1;
  return lVar2;
}

