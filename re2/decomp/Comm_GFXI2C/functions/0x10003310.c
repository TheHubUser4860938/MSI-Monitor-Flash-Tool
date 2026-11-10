// rea decompile_all
// name: FUN_10003310
// address: 0x10003310
// body: available
// range: 0x10003310-0x100033c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10003310(void)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MAINTAIN_STATE2 local_88 [4];
  int iStack_84;
  undefined **local_80 [29];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058453;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar1 = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_88,pAVar1);
  local_4 = 0;
  CDialog::CDialog((CDialog *)local_80,3000,(CWnd *)0x0);
  local_80[0] = CGFXI2CAdjustOption::vftable;
  local_4._0_1_ = 1;
  FUN_10039e07((CDialog *)local_80);
  local_4 = (uint)local_4._1_3_ << 8;
  local_80[0] = CGFXI2CAdjustOption::vftable;
  CDialog::~CDialog((CDialog *)local_80);
  local_4 = 0xffffffff;
  if (iStack_84 != 0) {
    FUN_1003b9c8();
  }
  ExceptionList = local_c;
  return 0;
}

