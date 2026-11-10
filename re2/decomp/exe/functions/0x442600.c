// rea decompile_all
// name: ATL::CManualAccessor::CreateAccessor
// address: 0x442600
// body: available
// range: 0x442600-0x44265f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CManualAccessor::CreateAccessor(int,void *,unsigned long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
ATL::CManualAccessor::CreateAccessor(CManualAccessor *this,int param_1,void *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  *(void **)(this + 8) = param_2;
  *(ulong *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  _memset(param_2,0,param_3);
  FID_conflict__free(*(void **)(this + 0xc));
  iVar1 = FUN_00416444(-(uint)((int)((ulonglong)(uint)param_1 * 0x34 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1 * 0x34));
  *(int *)(this + 0xc) = iVar1;
  if (iVar1 == 0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    *(int *)(this + 0x10) = param_1;
    lVar2 = 0;
  }
  return lVar2;
}

