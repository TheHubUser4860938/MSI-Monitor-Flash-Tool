// rea decompile_all
// name: CRuntimeClass::Load
// address: 0x1003a761
// body: available
// range: 0x1003a761-0x1003a7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static struct CRuntimeClass * __stdcall CRuntimeClass::Load(class CArchive &,unsigned
   int *)
   
   Library: Visual Studio 2008 Release */

CRuntimeClass * CRuntimeClass::Load(CArchive *param_1,uint *param_2)

{
  uint uVar1;
  CRuntimeClass *pCVar2;
  uint uVar3;
  ushort local_4c [2];
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  if (param_2 != (uint *)0x0) {
    CArchive::operator>>(param_1,local_4c);
    *param_2 = (uint)local_4c[0];
    CArchive::operator>>(param_1,local_4c);
    if (local_4c[0] < 0x40) {
      uVar3 = (uint)local_4c[0];
      uVar1 = CArchive::Read(param_1,local_48,uVar3);
      if (uVar1 == uVar3) {
        local_48[uVar3] = '\0';
        FromName(local_48);
      }
    }
  }
  pCVar2 = (CRuntimeClass *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar2;
}

