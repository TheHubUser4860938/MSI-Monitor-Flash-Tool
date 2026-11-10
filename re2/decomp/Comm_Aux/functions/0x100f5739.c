// rea decompile_all
// name: Write
// address: 0x100f5739
// body: available
// range: 0x100f5739-0x100f57ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CSettingsStore::Write(char const *,class CRect const &)
    public: virtual int __thiscall CSettingsStore::Write(wchar_t const *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

undefined4 Write(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uchar *_Memory;
  undefined4 uVar2;
  int *in_ECX;
  undefined8 uVar3;
  CArchive local_94 [72];
  CMemFile local_4c [48];
  undefined4 local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  if (in_ECX[5] == 0) {
    local_8 = 0;
    CMemFile::CMemFile(local_4c,0x400);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_94,(CFile *)local_4c,0,0x1000,(void *)0x0);
    local_8._0_1_ = 2;
    FUN_1004e1ed(param_2,0x10);
    CArchive::Flush(local_94);
    local_8 = CONCAT31(local_8._1_3_,1);
    CArchive::~CArchive(local_94);
    uVar3 = FUN_1011b609();
    local_1c = (undefined4)((ulonglong)uVar3 >> 0x20);
    _Memory = CMemFile::Detach(local_4c);
    if (_Memory != (uchar *)0x0) {
      pcVar1 = *(code **)(*in_ECX + 0x28);
      guard_check_icall(param_1,_Memory,(int)uVar3);
      uVar2 = (*pcVar1)();
      FID_conflict__free(_Memory);
      CMemFile::~CMemFile(local_4c);
      return uVar2;
    }
    CMemFile::~CMemFile(local_4c);
  }
  return 0;
}

