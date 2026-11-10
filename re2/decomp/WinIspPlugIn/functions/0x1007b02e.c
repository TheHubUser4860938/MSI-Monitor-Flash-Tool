// rea decompile_all
// name: CVSListBoxBase::OnClickButton
// address: 0x1007b02e
// body: available
// range: 0x1007b02e-0x1007b21d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CVSListBoxBase::OnClickButton(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CVSListBoxBase::OnClickButton(CVSListBoxBase *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  HWND__ *pHVar5;
  CWnd *pCVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 local_18 [4];
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1007b03a;
  if (*(int *)(this + 0xd4) != 0) {
    pcVar7 = *(code **)(*(int *)this + 0x178);
    guard_check_icall();
    iVar1 = (*pcVar7)();
    uVar2 = GetButtonID(this,param_1);
    if (0xfffffff1 < uVar2) {
      if (uVar2 < 0xfffffff4) {
        if (-1 < iVar1) {
          local_14 = (uint)(uVar2 == 0xfffffff3);
          if (local_14 == 0) {
            pcVar7 = *(code **)(*(int *)this + 0x174);
            guard_check_icall();
            iVar3 = (*pcVar7)();
            bVar8 = iVar1 == iVar3 + -1;
          }
          else {
            bVar8 = iVar1 == 0;
          }
          if (!bVar8) {
            SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
            pcVar7 = *(code **)(*(int *)this + 0x180);
            guard_check_icall(local_18,iVar1);
            (*pcVar7)();
            local_8 = 0;
            pcVar7 = *(code **)(*(int *)this + 0x188);
            guard_check_icall(iVar1);
            uVar4 = (*pcVar7)();
            *(undefined4 *)(this + 0xdc) = 0;
            pcVar7 = *(code **)(*(int *)this + 0x170);
            guard_check_icall(iVar1);
            (*pcVar7)();
            *(undefined4 *)(this + 0xdc) = 1;
            if (local_14 == 0) {
              iVar1 = iVar1 + 1;
            }
            else {
              iVar1 = iVar1 + -1;
            }
            pcVar7 = *(code **)(*(int *)this + 0x16c);
            guard_check_icall(local_18,uVar4,iVar1);
            (*pcVar7)();
            pcVar7 = *(code **)(*(int *)this + 0x17c);
            guard_check_icall(iVar1);
            (*pcVar7)();
            SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
            pcVar7 = *(code **)(*(int *)this + 0x1c4);
            guard_check_icall();
            pHVar5 = (HWND__ *)(*pcVar7)();
            pCVar6 = CWnd::FromHandle(pHVar5);
            if (pCVar6 != (CWnd *)0x0) {
              InvalidateRect(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,1);
            }
            if (local_14 == 0) {
              pcVar7 = *(code **)(*(int *)this + 0x1b8);
            }
            else {
              pcVar7 = *(code **)(*(int *)this + 0x1b4);
            }
            guard_check_icall(iVar1);
            (*pcVar7)();
            FUN_100476d0();
          }
        }
      }
      else if (uVar2 == 0xfffffff4) {
        if (-1 < iVar1) {
          pcVar7 = *(code **)(*(int *)this + 0x1a8);
          guard_check_icall(iVar1);
          iVar3 = (*pcVar7)();
          if (iVar3 != 0) {
            pcVar7 = *(code **)(*(int *)this + 0x170);
            guard_check_icall(iVar1);
            (*pcVar7)();
          }
        }
      }
      else if (uVar2 == 0xfffffff5) {
        pcVar7 = *(code **)(*(int *)this + 0x1c0);
        guard_check_icall();
        (*pcVar7)();
      }
    }
  }
  return;
}

