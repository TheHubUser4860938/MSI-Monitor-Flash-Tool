// rea decompile_all
// name: ATL::CManualAccessor::AddBindEntry
// address: 0x4414f4
// body: available
// range: 0x4414f4-0x441545 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall ATL::CManualAccessor::AddBindEntry(unsigned long,unsigned short,unsigned
   long,void *,void *,void *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
ATL::CManualAccessor::AddBindEntry
          (CManualAccessor *this,ulong param_1,ushort param_2,ulong param_3,void *param_4,
          void *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  
  if (param_6 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_6 - *(int *)(this + 8);
  }
  if (param_5 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)param_5 - *(int *)(this + 8);
  }
  FUN_00441739(*(int *)(this + 0x14) * 0x34 + *(int *)(this + 0xc),param_1,_param_2,param_3,0,0,0,
               (int)param_4 - *(int *)(this + 8),iVar2,iVar1,0);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}

