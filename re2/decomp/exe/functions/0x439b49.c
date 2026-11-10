// rea decompile_all
// name: CThreadSlotData::FreeSlot
// address: 0x439b49
// body: available
// range: 0x439b49-0x439bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::FreeSlot(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if ((0 < param_1) && (param_1 < *(int *)(this + 0xc))) {
    for (iVar2 = *(int *)(this + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (param_1 < *(int *)(iVar2 + 8)) {
        puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + param_1 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          pcVar4 = *(code **)*puVar3;
          guard_check_icall(1);
          (*pcVar4)();
        }
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + param_1 * 4) = 0;
      }
    }
    puVar1 = (uint *)(*(int *)(this + 0x10) + param_1 * 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}

