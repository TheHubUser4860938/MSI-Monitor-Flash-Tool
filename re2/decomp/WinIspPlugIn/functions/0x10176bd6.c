// rea decompile_all
// name: CMFCToolBarEditBoxButton::OnCalculateSize
// address: 0x10176bd6
// body: available
// range: 0x10176bd6-0x10176d36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarEditBoxButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2015 Release */

tagSIZE __thiscall
CMFCToolBarEditBoxButton::OnCalculateSize
          (CMFCToolBarEditBoxButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  CWnd *this_00;
  code *pcVar1;
  int iVar2;
  int iVar3;
  LONG extraout_EDX;
  tagSIZE tVar4;
  int in_stack_00000010;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  this_00 = *(CWnd **)(this + 0x78);
  if (*(int *)(this + 0x50) == 0) {
    if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      CWnd::ShowWindow(this_00,0);
    }
    pcVar1 = *(code **)(*(int *)this + 0xd8);
    guard_check_icall(0);
    (*pcVar1)();
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_3 = extraout_EDX;
  }
  else {
    *(int *)(this + 0x84) = in_stack_00000010;
    if (in_stack_00000010 == 0) {
      if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
        CWnd::ShowWindow(this_00,0);
        pcVar1 = *(code **)(*(int *)this + 0xd8);
        guard_check_icall(0);
        (*pcVar1)();
      }
      *(undefined4 *)(this + 100) = 0;
      *(undefined4 *)(this + 0x68) = 0;
      tVar4 = CMFCToolBarButton::OnCalculateSize((CMFCToolBarButton *)this,param_1,param_2,param_3);
      param_3 = tVar4.cy;
    }
    else {
      if (((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) &&
         (*(int *)(this + 0x40) == 0)) {
        CWnd::ShowWindow(this_00,4);
        pcVar1 = *(code **)(*(int *)this + 0xd8);
        guard_check_icall(1);
        (*pcVar1)();
      }
      iVar3 = 0;
      if ((*(int *)(this + 0x18) == 0) || (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)) {
        *(undefined4 *)(this + 0x68) = 0;
      }
      else {
        local_10 = *(int *)(this + 0x70);
        iVar3 = *(int *)param_2;
        local_c = *(int *)(param_3 + 4);
        local_18 = 0;
        local_14 = 0;
        guard_check_icall(*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),
                          &local_18,0x411);
        (**(code **)(iVar3 + 0x68))();
        iVar3 = local_10 - local_18;
        *(int *)(this + 0x68) = local_c - local_14;
      }
      *(int *)(this + 100) = iVar3;
      iVar3 = *(int *)(this + 0x68);
      iVar2 = *(int *)(param_3 + 4);
      *(undefined4 *)param_1 = *(undefined4 *)(this + 0x70);
      *(int *)(param_1 + 4) = iVar3 + iVar2;
    }
  }
  tVar4 = (tagSIZE)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,param_3);
  return tVar4;
}

