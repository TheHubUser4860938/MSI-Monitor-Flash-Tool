// rea decompile_all
// name: thunk_FUN_004d45e8
// address: 0x4c5852
// body: available
// range: 0x4c5852-0x4c5856 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_004d45e8(void)

{
  int iVar1;
  uint uVar2;
  _AFX_THREAD_STATE *p_Var3;
  CWnd *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_005a4f73;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)in_ECX = CFrameWnd::vftable;
  uStack_8 = 3;
  FUN_004d7624();
  p_Var3 = AfxGetThreadState();
  while (*(CWnd **)(p_Var3 + 0x14c) == in_ECX) {
    FUN_004d727e();
  }
  if (*(void **)(in_ECX + 0xe8) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0xe8));
  }
  iVar1 = *(int *)(in_ECX + 0xac);
  if ((iVar1 != 0) && (*(CWnd **)(iVar1 + 0x20) == in_ECX)) {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_004d4748();
    return;
  }
  FUN_0040efa0();
  CPtrList::~CPtrList((CPtrList *)(in_ECX + 0xb0));
  CWnd::~CWnd(in_ECX);
  ExceptionList = pvStack_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

