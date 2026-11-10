// rea decompile_all
// name: CDataSourceControl::GetCursor
// address: 0x443802
// body: available
// range: 0x443802-0x44388e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct IUnknown * __thiscall CDataSourceControl::GetCursor(void)
   
   Library: Visual Studio 2015 Release */

IUnknown * __thiscall CDataSourceControl::GetCursor(CDataSourceControl *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  IUnknown *pIVar4;
  int iVar5;
  CDataSourceControl *local_c;
  CDataSourceControl *local_8;
  
  if (*(int *)(this + 0x48) == 0) {
    puVar1 = *(undefined4 **)(this + 8);
    local_c = this;
    local_8 = this;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)**(undefined4 **)(*(int *)(this + 4) + 0x50);
      guard_check_icall(*(undefined4 **)(*(int *)(this + 4) + 0x50),&DAT_005b4e5c,&local_c);
      iVar5 = (*(code *)*puVar1)();
      if (-1 < iVar5) {
        pcVar2 = *(code **)(*(int *)local_c + 0x14);
        guard_check_icall(local_c,&local_8);
        (*pcVar2)();
        pcVar2 = *(code **)(*(int *)local_c + 8);
        guard_check_icall(local_c);
        (*pcVar2)();
        return (IUnknown *)local_8;
      }
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
      guard_check_icall(puVar1,&DAT_005db8d0,&local_8);
      iVar5 = (*(code *)*puVar3)();
      if (-1 < iVar5) {
        return (IUnknown *)local_8;
      }
    }
    pIVar4 = (IUnknown *)0x0;
  }
  else {
    pIVar4 = (IUnknown *)(-(uint)(*(int *)(this + 0x50) != 0) & *(uint *)(this + 0x48));
  }
  return pIVar4;
}

