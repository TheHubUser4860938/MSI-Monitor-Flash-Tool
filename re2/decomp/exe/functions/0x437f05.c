// rea decompile_all
// name: FUN_00437f05
// address: 0x437f05
// body: available
// range: 0x437f05-0x438015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438015 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00437f05(wchar_t *param_1,uint param_2,CFileException *param_3)

{
  code *pcVar1;
  int iVar2;
  uint _Flags;
  undefined4 uVar3;
  ulong *puVar4;
  CFile *in_ECX;
  undefined4 local_c;
  
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  local_c = in_ECX;
  iVar2 = CFile::Open(in_ECX,param_1,param_2 & 0xffffbfff,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_2 & 0x1000) == 0) {
    if ((param_2 & 1) != 0) {
      local_c = (CFile *)CONCAT31(local_c._1_3_,0x61);
      goto LAB_00437f64;
    }
    local_c = (CFile *)CONCAT31(local_c._1_3_,0x72);
    if ((param_2 & 2) == 0) {
      iVar2 = 1;
      goto LAB_00437f72;
    }
  }
  else {
    local_c = (CFile *)CONCAT31(local_c._1_3_,(-((param_2 & 0x2000) != 0) & 0xeaU) + 0x77);
LAB_00437f64:
    iVar2 = 1;
    if ((param_2 & 1) != 0) goto LAB_00437f72;
  }
  local_c._0_2_ = CONCAT11(0x2b,(undefined1)local_c);
  iVar2 = 2;
LAB_00437f72:
  _Flags = 0x4000;
  if ((param_2 & 0x8000) == 0) {
    *(undefined1 *)((int)&local_c + iVar2) = 0x74;
  }
  else {
    *(undefined1 *)((int)&local_c + iVar2) = 0x62;
    _Flags = 0;
  }
  if (3 < iVar2 + 1U) {
    ___report_rangecheckfailure();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  *(undefined1 *)((int)&local_c + iVar2 + 1) = 0;
  if ((param_2 & 0x400) != 0) {
    _Flags = _Flags ^ 0x4000 | 0x10000;
  }
  iVar2 = __open_osfhandle(*(intptr_t *)(in_ECX + 4),_Flags);
  if (iVar2 != -1) {
    uVar3 = FUN_005855f7(iVar2,&local_c);
    *(undefined4 *)(in_ECX + 0x14) = uVar3;
  }
  if (*(int *)(in_ECX + 0x14) == 0) {
    if (param_3 != (CFileException *)0x0) {
      puVar4 = ___doserrno();
      *(ulong *)(param_3 + 0xc) = *puVar4;
      puVar4 = ___doserrno();
      iVar2 = CFileException::OsErrorToException(*puVar4);
      *(int *)(param_3 + 8) = iVar2;
    }
    FUN_004384db();
    return 0;
  }
  return 1;
}

