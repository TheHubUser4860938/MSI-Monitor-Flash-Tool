// rea decompile_all
// name: CMFCControlContainer::SetControlData
// address: 0x4d2d91
// body: available
// range: 0x4d2d91-0x4d2e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCControlContainer::SetControlData(unsigned short,unsigned
   long,unsigned char *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCControlContainer::SetControlData
          (CMFCControlContainer *this,ushort param_1,ulong param_2,uchar *param_3)

{
  code *pcVar1;
  CByteArray *this_00;
  errno_t eVar2;
  CObject **ppCVar3;
  CObject *pCVar4;
  
  this_00 = (CByteArray *)FUN_00416408(0x14);
  pCVar4 = (CObject *)0x0;
  if (this_00 != (CByteArray *)0x0) {
    pCVar4 = (CObject *)CByteArray::CByteArray(this_00);
  }
  FUN_005311ec(param_2,0xffffffff);
  eVar2 = _memcpy_s(*(void **)(pCVar4 + 4),param_2,param_3,param_2);
  if (eVar2 == 0) {
    ppCVar3 = CMapWordToOb::operator[]((CMapWordToOb *)(this + 0x1c),param_1);
    *ppCVar3 = pCVar4;
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar4 + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}

