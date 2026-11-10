// rea decompile_all
// name: GetValue<>
// address: 0x440a61
// body: available
// range: 0x440a61-0x440aa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall ATL::CDynamicAccessor::GetValue<struct tagDBDATE>(unsigned long,struct
   tagDBDATE *)const 
    public: bool __thiscall ATL::CDynamicAccessor::GetValue<struct tagDBTIME>(unsigned long,struct
   tagDBTIME *)const 
   
   Library: Visual Studio 2015 Release */

uint GetValue<>(ulong param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint in_EAX;
  undefined3 extraout_var;
  CDynamicAccessor *in_ECX;
  undefined4 *puVar5;
  
  puVar3 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    bVar4 = ATL::CDynamicAccessor::TranslateColumnNo(in_ECX,&param_1);
    in_EAX = CONCAT31(extraout_var,bVar4);
    if (bVar4) {
      puVar5 = (undefined4 *)
               (*(int *)(param_1 * 0x30 + 4 + *(int *)(in_ECX + 0x14)) + *(int *)(in_ECX + 8));
      uVar2 = *puVar5;
      *puVar3 = uVar2;
      uVar1 = *(undefined2 *)(puVar5 + 1);
      *(undefined2 *)(puVar3 + 1) = uVar1;
      return CONCAT31((int3)(CONCAT22((short)((uint)uVar2 >> 0x10),uVar1) >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

