// rea decompile_all
// name: CVSListBoxBase::AddButton
// address: 0x1004e90b
// body: available
// range: 0x1004e90b-0x1004eb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CVSListBoxBase::AddButton(unsigned int,wchar_t const *,unsigned
   short,unsigned char,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CVSListBoxBase::AddButton
          (CVSListBoxBase *this,uint param_1,wchar_t *param_2,ushort param_3,uchar param_4,
          uint param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  CMFCButton *this_00;
  CMFCAcceleratorKey local_4c [8];
  tagACCEL local_44;
  wchar_t *local_3c;
  CMFCButton *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x1004e917;
  local_3c = param_2;
  if ((this != (CVSListBoxBase *)0x0) && (*(int *)(this + 0x20) != 0)) {
    this_00 = (CMFCButton *)0x0;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRectEmpty(&local_34);
    local_38 = (CMFCButton *)FUN_1001cfa0(0x7a8);
    local_8 = 0;
    if (local_38 != (CMFCButton *)0x0) {
      this_00 = (CMFCButton *)CMFCButton::CMFCButton(local_38);
    }
    local_8 = 0xffffffff;
    pcVar1 = *(code **)(*(int *)this_00 + 0x164);
    guard_check_icall(&DAT_101a63a8,0x5000000b,&local_34,this,*(int *)(this + 0x8c) + 2);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(undefined4 *)(this_00 + 0x80) = 1;
      *(undefined4 *)(this_00 + 0x9c) = *(undefined4 *)(this + 0xe4);
      *(undefined4 *)(this_00 + 0x94) = 0;
      CMFCButton::SetImage(this_00,param_1,0,0);
      if (local_3c != (wchar_t *)0x0) {
        FUN_100185a0(local_3c);
        local_8 = 1;
        if (param_3 != 0) {
          local_44.key = param_3;
          local_44.cmd = 0;
          local_44.fVirt = param_4 | 1;
          CMFCAcceleratorKey::CMFCAcceleratorKey(local_4c,&local_44);
          local_8._0_1_ = 2;
          uVar3 = FUN_1001e20a();
          FUN_1001d224(uVar3);
          local_8._0_1_ = 3;
          CMFCAcceleratorKey::Format
                    (local_4c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_3c);
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_38,L"(");
          FUN_1001d630(local_3c,*(undefined4 *)(local_3c + -6));
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_38,L")");
          ATL::CStringData::Release((CStringData *)(local_3c + -8));
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_1009bb49();
        }
        FUN_10041dbb(local_38);
        local_8 = 0xffffffff;
        ATL::CStringData::Release((CStringData *)(local_38 + -0x10));
      }
      pcVar1 = *(code **)(*(int *)this_00 + 0x170);
      guard_check_icall(local_4c,0);
      (*pcVar1)();
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetWindowRect(*(HWND *)(this_00 + 0x20),&local_24);
      if (*(int *)(this + 0x8c) == 0) {
        *(LONG *)(this + 0xec) = local_24.right - local_24.left;
        *(LONG *)(this + 0xf0) = local_24.bottom - local_24.top;
      }
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x80),(HWND__ *)this_00);
      CList<HWND__*,HWND__*>::AddTail
                ((CList<HWND__*,HWND__*> *)(this + 0x9c),
                 (HWND__ *)(uint)CONCAT12((param_3 == 0) - 1U & param_4,param_3));
      if (param_5 != 0) {
        puVar4 = (uint *)FUN_100c3357(*(int *)(this + 0x8c) + -1);
        *puVar4 = param_5;
      }
      FUN_1004ebcc();
    }
  }
  iVar2 = FUN_10154478();
  return iVar2;
}

