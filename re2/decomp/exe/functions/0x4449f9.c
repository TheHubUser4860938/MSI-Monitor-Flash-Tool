// rea decompile_all
// name: COleControlSite::InvokeHelperV
// address: 0x4449f9
// body: available
// range: 0x4449f9-0x444a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::InvokeHelperV(long,unsigned short,unsigned
   short,void *,unsigned char const *,char *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleControlSite::InvokeHelperV
          (COleControlSite *this,long param_1,ushort param_2,ushort param_3,void *param_4,
          uchar *param_5,char *param_6)

{
  COleDispatchDriver *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  COleControlSite *local_8;
  
  this_00 = (COleDispatchDriver *)(this + 0xc0);
  local_8 = this;
  if (*(int *)this_00 == 0) {
    puVar1 = *(undefined4 **)(this + 0x50);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      guard_check_icall(puVar1,&DAT_005dba10,&local_8);
      iVar3 = (*(code *)*puVar2)();
      if (-1 < iVar3) {
        COleDispatchDriver::AttachDispatch(this_00,(IDispatch *)local_8,1);
      }
    }
    if (*(int *)this_00 == 0) {
      return;
    }
  }
  COleDispatchDriver::InvokeHelperV(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

