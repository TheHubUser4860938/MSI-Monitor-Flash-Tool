// rea decompile_all
// name: FUN_100146b0
// address: 0x100146b0
// body: available
// range: 0x100146b0-0x10014850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100146b0(short *param_1)

{
  int iVar1;
  short sVar2;
  int *in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = (uint)in_ECX & 0xffff;
  if (*in_ECX == 1) {
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x9b,(int)&uStack_8 + 3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0x9c,(int)&uStack_8 + 2);
    if (iVar1 != 0) {
      return iVar1;
    }
LAB_10014740:
    if ((uStack_8._3_1_ != 0) || (uStack_8._2_1_ != '\0')) goto LAB_10014820;
  }
  else if (*in_ECX == 2) {
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(1,(int)&uStack_8 + 3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(2,(int)&uStack_8 + 2);
    if (iVar1 != 0) {
      return iVar1;
    }
    goto LAB_10014740;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x9f,0xc);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xd0))(0xcc0,0xfe,1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xd0))(0xcc1,0xf0,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0xcc2,5);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0xcc3,10);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0xcc4,(int)&uStack_8 + 3);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0xcc4,(int)&uStack_8 + 2);
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_10014820:
  sVar2 = (ushort)uStack_8._3_1_ * 0x100 + (ushort)uStack_8._2_1_;
  *param_1 = sVar2;
  FUN_1000d860("usFwVer: 0x%x\n",sVar2);
  return 0;
}

