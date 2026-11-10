// rea decompile_all
// name: CFile::GetFileTitle
// address: 0x1003a6b4
// body: available
// range: 0x1003a6b4-0x1003a74e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CFile::GetFileTitle(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CFile::GetFileTitle(CFile *this)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  CSimpleStringT<wchar_t,0> *in_stack_00000004;
  uint uVar3;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  wchar_t local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x23c;
  local_8 = 0;
  local_244 = 0;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  GetStatus(this,(CFileStatus *)&local_244);
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  local_8 = 0;
  uVar3 = 0x100;
  pwVar2 = (wchar_t *)FUN_1001d856(0x100);
  AfxGetFileTitle(local_220,pwVar2,uVar3);
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(in_stack_00000004,-1);
  FUN_10154478();
  return;
}

