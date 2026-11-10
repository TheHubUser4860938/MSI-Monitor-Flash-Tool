// rea decompile_all
// name: FUN_004ebc4e
// address: 0x4ebc4e
// body: available
// range: 0x4ebc4e-0x4ebcef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ebc8a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4ebcee to 0x4ebd01 FUN_004ebd01 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ebc4e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  uchar **ppuVar3;
  uint *puVar4;
  CArchive local_9c [72];
  CMemFile local_54 [52];
  uint local_20 [2];
  uchar *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x4ebc5d;
  iVar1 = *in_ECX;
  puVar4 = local_20;
  ppuVar3 = local_18;
  local_20[1] = 0;
  local_18[0] = (uchar *)0x0;
  guard_check_icall(param_1,ppuVar3,puVar4);
  iVar1 = (**(code **)(iVar1 + 0x44))();
  if (iVar1 == 0) {
    if (local_18[0] == (uchar *)0x0) {
      return 0;
    }
  }
  else if (local_18[0] != (uchar *)0x0) {
    local_8 = 0;
    CMemFile::CMemFile(local_54,local_18[0],local_20[0],0);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_9c,(CFile *)local_54,1,0x1000,(void *)0x0);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0041822b(param_2,0x10);
    CArchive::~CArchive(local_9c);
    CMemFile::~CMemFile(local_54);
    uVar2 = FUN_004ebd01(ppuVar3,puVar4);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

