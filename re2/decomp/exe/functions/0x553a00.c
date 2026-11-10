// rea decompile_all
// name: CCellObj::Draw
// address: 0x553a00
// body: available
// range: 0x553a00-0x553a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CCellObj::Draw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCellObj::Draw(CCellObj *this,CDC *param_1)

{
  CPen *pCVar1;
  CPen *pCVar2;
  undefined **local_24 [2];
  undefined **local_1c [2];
  CCellObj *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x553a0c;
  local_14 = this;
  CBrush::CBrush((CBrush *)local_24,*(ulong *)(this + 0x38));
  local_8 = 0;
  CPen::CPen((CPen *)local_1c,0,1,*(ulong *)(this + 0x38));
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar1 = CDC::SelectObject(param_1,(CPen *)local_24);
  pCVar2 = CDC::SelectObject(param_1,(CPen *)local_1c);
  Polygon(*(HDC *)(param_1 + 4),(POINT *)(local_14 + 4),6);
  CDC::SelectObject(param_1,pCVar2);
  CDC::SelectObject(param_1,pCVar1);
  local_1c[0] = CPen::vftable;
  FUN_0040ee80();
  local_24[0] = CBrush::vftable;
  FUN_0040ee80();
  return;
}

