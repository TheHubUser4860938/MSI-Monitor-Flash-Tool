// rea decompile_all
// name: COleControlSite::SetWindowPos
// address: 0x44614c
// body: available
// range: 0x44614c-0x44620e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleControlSite::SetWindowPos(class CWnd const
   *,int,int,int,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleControlSite::SetWindowPos
          (COleControlSite *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
          uint param_6)

{
  code *pcVar1;
  int iVar2;
  HWND hWndInsertAfter;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((char)(byte)param_6 < '\0') {
    pcVar1 = *(code **)(*(int *)this + 0xa0);
    guard_check_icall(0);
    (*pcVar1)();
  }
  if (((byte)param_6 & 3) != 3) {
    iVar2 = param_3;
    iVar6 = param_2;
    if ((param_6 & 2) != 0) {
      iVar2 = *(int *)(this + 0x34);
      iVar6 = *(int *)(this + 0x30);
    }
    iVar4 = param_4;
    iVar5 = param_5;
    if ((param_6 & 1) != 0) {
      iVar4 = *(int *)(this + 0x38) - *(int *)(this + 0x30);
      iVar5 = *(int *)(this + 0x3c) - *(int *)(this + 0x34);
    }
    pcVar1 = *(code **)(*(int *)this + 0x98);
    guard_check_icall(iVar6,iVar2,iVar4,iVar5);
    (*pcVar1)();
  }
  if ((param_6 & 0x40) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0xa0);
    guard_check_icall(5);
    (*pcVar1)();
  }
  hWndInsertAfter = (HWND)0x0;
  if (param_1 != (CWnd *)0x0) {
    hWndInsertAfter = *(HWND *)(param_1 + 0x20);
  }
  BVar3 = ::SetWindowPos(*(HWND *)(this + 0x24),hWndInsertAfter,param_2,param_3,param_4,param_5,
                         param_6 & 0xffffff3f | 3);
  return BVar3;
}

