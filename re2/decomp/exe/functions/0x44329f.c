// rea decompile_all
// name: COleControlSite::XNotifyDBEvents::FireEvent
// address: 0x44329f
// body: available
// range: 0x44329f-0x44333f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall COleControlSite::XNotifyDBEvents::FireEvent(unsigned long,unsigned
   long,struct tagDBNOTIFYREASON * const,enum DSCSTATE)
   
   Library: Visual Studio 2015 Release */

long __thiscall
COleControlSite::XNotifyDBEvents::FireEvent
          (XNotifyDBEvents *this,ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3,
          DSCSTATE param_4)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_10;
  DSCSTATE local_c;
  int local_8;
  
  if (((param_1 & 3) != 0) && (uVar1 = 0, param_2 != 0)) {
    do {
      local_8 = 0;
      switch(*(undefined4 *)param_3) {
      case 1:
        local_8 = 3;
        break;
      case 2:
      case 0x14:
        local_8 = 5;
        break;
      case 3:
      case 9:
      case 10:
      case 0x17:
        local_8 = 6;
        break;
      case 6:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x10:
      case 0x13:
      case 0x15:
        local_8 = 7;
        break;
      case 0x18:
        local_8 = 2;
        break;
      case 0x19:
        local_8 = 1;
        break;
      case 0x1f:
        local_8 = 4;
      }
      if (local_8 != 0) {
        local_24 = 0xffffffff;
        local_c = param_4;
        local_28 = 3;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_10 = 0;
        FUN_004450e2(&local_28);
        return local_10;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 0x28;
    } while (uVar1 < param_2);
  }
  return 0;
}

