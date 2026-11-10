// rea decompile_all
// name: FUN_100e52a7
// address: 0x100e52a7
// body: available
// range: 0x100e52a7-0x100e5352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e52a7(void)

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
  puStack_c = &LAB_101969a7;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = CMFCToolBarMenuButton::vftable;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x158) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  while (iVar1 != 0) {
    piVar4 = (int *)FUN_100350dd(uVar3);
    if (piVar4 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(in_ECX + 0x7c);
  }
  if ((*(uint *)(in_ECX + 0xbc) != 0) && (DAT_1020bfd8 != (CMenuTearOffManager *)0x0)) {
    CMenuTearOffManager::SetInUse(DAT_1020bfd8,*(uint *)(in_ECX + 0xbc),0);
  }
  CObList::~CObList((CObList *)(in_ECX + 0x70));
  CMFCToolBarButton::~CMFCToolBarButton(in_ECX);
  ExceptionList = local_10;
  return;
}

