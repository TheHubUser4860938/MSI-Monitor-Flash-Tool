// rea decompile_all
// name: COleStreamFile::Duplicate
// address: 0x1013ee41
// body: available
// range: 0x1013ee41-0x1013eea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CFile * __thiscall COleStreamFile::Duplicate(void)const 
   
   Library: Visual Studio 2015 Release */

CFile * __thiscall COleStreamFile::Duplicate(COleStreamFile *this)

{
  code *pcVar1;
  int iVar2;
  COleStreamFile *this_00;
  CFile *pCVar3;
  IStream *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1013ee4d;
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 0x34);
  guard_check_icall(*(int **)(this + 0x14),local_18);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    _AfxThrowOleFileException(iVar2);
  }
  pCVar3 = (CFile *)0x0;
  local_8 = 0;
  this_00 = (COleStreamFile *)FUN_1001cfa0(0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 != (COleStreamFile *)0x0) {
    pCVar3 = (CFile *)COleStreamFile(this_00,local_18[0]);
  }
  *(undefined4 *)(pCVar3 + 8) = *(undefined4 *)(this + 8);
  return pCVar3;
}

