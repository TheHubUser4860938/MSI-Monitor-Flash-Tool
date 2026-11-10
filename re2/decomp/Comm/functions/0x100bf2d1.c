// rea decompile_all
// name: FUN_100bf2d1
// address: 0x100bf2d1
// body: available
// range: 0x100bf2d1-0x100bf3a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bf3a3 to 0x100bf3b6 FUN_100bf3b6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100bf2d1(undefined4 param_1,int *param_2)

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
    uVar3 = FUN_100e5411();
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
      uVar2 = FUN_100bf3b6(puVar4,uVar2);
      return uVar2;
    }
    CMemFile::~CMemFile(local_48);
  }
  return 0;
}

