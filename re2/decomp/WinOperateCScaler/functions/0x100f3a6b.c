// rea decompile_all
// name: FUN_100f3a6b
// address: 0x100f3a6b
// body: available
// range: 0x100f3a6b-0x100f3b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f3a93 to 0x100f3b52 FUN_100f3b52 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f3ada to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_100f3a6b(COleDataSource *param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  int *in_ECX;
  CArchive local_9c [72];
  CSharedFile local_54 [76];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x100f3a7a;
  pcVar1 = *(code **)(*in_ECX + 0x50);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    local_8 = 0;
    CSharedFile::CSharedFile(local_54,2,0x1000);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_9c,(CFile *)local_54,0,0x1000,(void *)0x0);
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar1 = *(code **)*in_ECX;
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    FUN_1003ca47(iVar3);
    pcVar1 = *(code **)(*in_ECX + 8);
    guard_check_icall(local_9c);
    (*pcVar1)();
    CArchive::Close(local_9c);
    pvVar4 = CSharedFile::Detach(local_54);
    uVar2 = CMFCToolBarButton::GetClipboardFormat();
    COleDataSource::CacheGlobalData(param_1,uVar2,pvVar4,(tagFORMATETC *)0x0);
    CArchive::~CArchive(local_9c);
    CSharedFile::~CSharedFile(local_54);
  }
  FUN_100f3b52();
  return;
}

