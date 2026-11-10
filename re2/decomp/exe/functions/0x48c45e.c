// rea decompile_all
// name: FUN_0048c45e
// address: 0x48c45e
// body: available
// range: 0x48c45e-0x48c509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c45e(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  CMFCToolBarButton *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  local_10 = ExceptionList;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005a67ac;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = CMFCToolBarMenuButton::vftable;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x158) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  while (iVar1 != 0) {
    piVar4 = (int *)FUN_004d265a(uVar3);
    if (piVar4 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(in_ECX + 0x7c);
  }
  if ((*(uint *)(in_ECX + 0xbc) != 0) && (DAT_0061775c != (CMenuTearOffManager *)0x0)) {
    CMenuTearOffManager::SetInUse(DAT_0061775c,*(uint *)(in_ECX + 0xbc),0);
  }
  CObList::~CObList((CObList *)(in_ECX + 0x70));
  CMFCToolBarButton::~CMFCToolBarButton(in_ECX);
  ExceptionList = local_10;
  return;
}

