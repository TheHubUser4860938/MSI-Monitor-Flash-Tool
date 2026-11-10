// rea decompile_all
// name: FUN_004ebe81
// address: 0x4ebe81
// body: available
// range: 0x4ebe81-0x4ebf54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ebf53 to 0x4ebf66 FUN_004ebf66 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ebe81(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uchar *_Memory;
  undefined4 uVar2;
  int *in_ECX;
  undefined8 uVar3;
  uchar *puVar4;
  CArchive local_98 [76];
  undefined4 local_4c;
  CMemFile local_48 [48];
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  if (in_ECX[5] == 0) {
    local_18 = 0;
    local_8 = 0;
    CMemFile::CMemFile(local_48,0x400);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_98,(CFile *)local_48,0,0x1000,(void *)0x0);
    local_8._0_1_ = 2;
    pcVar1 = *(code **)(*param_2 + 8);
    guard_check_icall(local_98);
    (*pcVar1)();
    CArchive::Flush(local_98);
    local_8 = CONCAT31(local_8._1_3_,1);
    CArchive::~CArchive(local_98);
    uVar3 = FUN_0043e3cf();
    local_4c = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar2 = (undefined4)uVar3;
    _Memory = CMemFile::Detach(local_48);
    if (_Memory != (uchar *)0x0) {
      pcVar1 = *(code **)(*in_ECX + 0x28);
      puVar4 = _Memory;
      guard_check_icall(param_1,_Memory,uVar2);
      (*pcVar1)();
      FID_conflict__free(_Memory);
      CMemFile::~CMemFile(local_48);
      uVar2 = FUN_004ebf66(puVar4,uVar2);
      return uVar2;
    }
    CMemFile::~CMemFile(local_48);
  }
  return 0;
}

