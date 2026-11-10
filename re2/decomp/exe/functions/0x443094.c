// rea decompile_all
// name: COleControlSite::DisconnectSink
// address: 0x443094
// body: available
// range: 0x443094-0x44311f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleControlSite::DisconnectSink(struct _GUID const &,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleControlSite::DisconnectSink(COleControlSite *this,_GUID *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  COleControlSite *local_c;
  COleControlSite *local_8;
  
  if ((param_2 != 0) && (puVar1 = *(undefined4 **)(this + 0x50), puVar1 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*puVar1;
    local_c = this;
    local_8 = this;
    guard_check_icall(puVar1,&DAT_005dbab0,&local_c);
    iVar4 = (*(code *)*puVar2)();
    if (-1 < iVar4) {
      local_8 = (COleControlSite *)0x0;
      iVar4 = *(int *)local_c;
      guard_check_icall(local_c,param_1,&local_8);
      iVar4 = (**(code **)(iVar4 + 0x10))();
      if (-1 < iVar4) {
        pcVar3 = *(code **)(*(int *)local_8 + 0x18);
        guard_check_icall(local_8,param_2);
        (*pcVar3)();
        pcVar3 = *(code **)(*(int *)local_8 + 8);
        guard_check_icall(local_8);
        (*pcVar3)();
      }
      pcVar3 = *(code **)(*(int *)local_c + 8);
      guard_check_icall(local_c);
      (*pcVar3)();
    }
  }
  return;
}

