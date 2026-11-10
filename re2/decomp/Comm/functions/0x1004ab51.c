// rea decompile_all
// name: CPane::Dock
// address: 0x1004ab51
// body: available
// range: 0x1004ab51-0x1004acf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CPane::Dock(class CBasePane *,struct tagRECT const *,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::Dock(CPane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  char cVar1;
  code *pcVar2;
  CWnd *pCVar3;
  CDockingManager *this_00;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((param_3 == 2) && (param_1 = *(CBasePane **)(this + 0x204), param_1 == (CBasePane *)0x0)) {
    pcVar2 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar3 = (CWnd *)(*pcVar2)();
    this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,pCVar3);
    CDockingManager::DockPane(this_00,(CBasePane *)this,0,(tagRECT *)0x0);
  }
  else {
    pcVar2 = *(code **)(*(int *)this + 0x188);
    guard_check_icall(param_1);
    iVar4 = (*pcVar2)();
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*(int *)param_1 + 0x184);
      guard_check_icall(this);
      iVar4 = (*pcVar2)();
      if (iVar4 != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        SetRectEmpty(&local_18);
        GetWindowRect(*(HWND *)(this + 0x20),&local_18);
        cVar1 = '\x01';
        pcVar2 = *(code **)(*(int *)this + 0x228);
        guard_check_icall(0);
        iVar4 = (*pcVar2)();
        if (iVar4 != 0) {
          cVar1 = *(char *)(iVar4 + 0xa5);
        }
        SendMessageW(*(HWND *)(param_1 + 0x20),0xb,0,0);
        pcVar2 = *(code **)(*(int *)this + 0x29c);
        guard_check_icall(param_1,param_3);
        (*pcVar2)();
        if (param_3 == 1) {
          pcVar2 = *(code **)(**(int **)(this + 0xb8) + 0x274);
          guard_check_icall(this,1,&local_18);
          (*pcVar2)();
          if (cVar1 != '\0') {
            pcVar2 = *(code **)(*(int *)this + 0x2f0);
            guard_check_icall();
            (*pcVar2)();
          }
        }
        else if ((param_3 == 4) || (param_3 == 2)) {
          pcVar2 = *(code **)(**(int **)(this + 0xb8) + 0x274);
          guard_check_icall(this,param_3,param_2);
          (*pcVar2)();
        }
        SendMessageW(*(HWND *)(param_1 + 0x20),0xb,1,0);
      }
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

