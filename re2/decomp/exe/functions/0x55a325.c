// rea decompile_all
// name: CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
// address: 0x55a325
// body: available
// range: 0x55a325-0x55a47e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage(struct tagMSG
   *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
          (CMFCAcceleratorKeyAssignCtrl *this,tagMSG *param_1)

{
  short sVar1;
  UINT UVar2;
  WPARAM WVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uchar uVar7;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x55a331;
  iVar6 = 1;
  UVar2 = param_1->message;
  if (UVar2 == 0x100) {
LAB_0055a37c:
    if (*(int *)(this + 0x80) != 0) {
      iVar4 = iVar6;
      if (((uint)param_1->lParam >> 0x1e & 1) == 0) {
        ResetKey(this);
      }
      goto LAB_0055a39d;
    }
LAB_0055a3a6:
    WVar3 = param_1->wParam;
    if (WVar3 == 0x10) {
      uVar7 = '\x04';
    }
    else if (WVar3 == 0x11) {
      uVar7 = '\b';
    }
    else {
      if (WVar3 != 0x12) {
        if (*(int *)(this + 0x94) == 0) {
          *(undefined4 *)(this + 0x94) = 1;
          return 1;
        }
        *(short *)(this + 0x86) = (short)param_1->wParam;
        if (iVar6 != 0) {
          this[0x84] = (CMFCAcceleratorKeyAssignCtrl)((byte)this[0x84] | 1);
          *(undefined4 *)(this + 0x80) = 1;
        }
        goto LAB_0055a3fe;
      }
      uVar7 = '\x10';
    }
    SetAccelFlag(this,uVar7,iVar6);
  }
  else {
    iVar4 = 0;
    if (UVar2 != 0x101) {
      if (UVar2 == 0x104) goto LAB_0055a37c;
      if (UVar2 != 0x105) {
        if (((UVar2 == 0x201) || (UVar2 == 0x204)) || (UVar2 == 0x207)) {
          *(undefined4 *)(this + 0x94) = 1;
          CWnd::SetFocus((CWnd *)this);
          return 1;
        }
        goto LAB_0055a475;
      }
    }
LAB_0055a39d:
    iVar6 = iVar4;
    if (*(int *)(this + 0x80) == 0) goto LAB_0055a3a6;
  }
LAB_0055a3fe:
  if (((byte)this[0x84] & 0x1d) != 1) {
LAB_0055a422:
    uVar5 = FUN_004295fe();
    FUN_0040eb30(uVar5);
    local_8 = 0;
    CMFCAcceleratorKey::Format
              ((CMFCAcceleratorKey *)(this + 0x8c),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    FUN_004349b3(local_14[0]);
    FUN_0040efa0();
    return 1;
  }
  sVar1 = *(short *)(this + 0x86);
  if (sVar1 != 9) {
    if (sVar1 == 0x1b) {
      ResetKey(this);
      return 1;
    }
    if (sVar1 != 0xe5) goto LAB_0055a422;
  }
  ResetKey(this);
LAB_0055a475:
  iVar6 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar6;
}

