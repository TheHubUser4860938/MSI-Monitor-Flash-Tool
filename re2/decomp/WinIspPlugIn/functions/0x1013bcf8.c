// rea decompile_all
// name: CDialogEx::OnEraseBkgnd
// address: 0x1013bcf8
// body: available
// range: 0x1013bcf8-0x1013be7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogEx::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDialogEx::OnEraseBkgnd(CDialogEx *this,CDC *param_1)

{
  HBRUSH hbr;
  int iVar1;
  LONG LVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (((this == (CDialogEx *)0xffffff4c) || (*(int *)(this + 0xb8) == 0)) &&
     (*(int *)(this + 0xa8) == 0)) {
    FUN_100540e0();
    goto LAB_1013be6b;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if ((*(int *)(this + 0xbc) != 0) || (*(int *)(this + 0xa8) == 0)) {
    if ((this == (CDialogEx *)0xffffff4c) || (*(int *)(this + 0xb8) == 0)) {
      FUN_100540e0();
    }
    else {
      if (this == (CDialogEx *)0xffffff4c) {
        hbr = (HBRUSH)0x0;
      }
      else {
        hbr = *(HBRUSH *)(this + 0xb8);
      }
      FillRect(*(HDC *)(param_1 + 4),&local_18,hbr);
    }
  }
  if (*(int *)(this + 0xa8) == 0) goto LAB_1013be6b;
  iVar1 = *(int *)(this + 0xbc);
  if (iVar1 == 0) {
    local_1c = local_18.left;
    if (local_18.left < local_18.right - local_18.left) {
      iVar4 = local_18.bottom - local_18.top;
      iVar1 = local_18.left;
      iVar3 = local_18.right;
      LVar2 = local_18.top;
      do {
        iVar5 = LVar2;
        if (LVar2 < iVar4) {
          do {
            CDC::DrawState(param_1,local_1c,LVar2,*(undefined4 *)(this + 0xac),
                           *(undefined4 *)(this + 0xb0),*(undefined4 *)(this + 0xa8),0,0);
            LVar2 = LVar2 + *(int *)(this + 0xb0);
            iVar4 = local_18.bottom - local_18.top;
            iVar1 = local_18.left;
            iVar3 = local_18.right;
            iVar5 = local_18.top;
          } while (LVar2 < iVar4);
        }
        local_1c = local_1c + *(int *)(this + 0xac);
        LVar2 = iVar5;
      } while (local_1c < iVar3 - iVar1);
    }
    goto LAB_1013be6b;
  }
  iVar3 = local_18.top;
  if (iVar1 == 2) {
    LVar2 = local_18.right - *(int *)(this + 0xac);
  }
  else {
    LVar2 = local_18.left;
    if (iVar1 != 3) {
      if (iVar1 != 4) goto LAB_1013bdd8;
      LVar2 = local_18.right - *(int *)(this + 0xac);
    }
    iVar3 = local_18.bottom - *(int *)(this + 0xb0);
  }
LAB_1013bdd8:
  CDC::DrawState(param_1,LVar2,iVar3,*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0xb0),
                 *(int *)(this + 0xa8),0,0);
LAB_1013be6b:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

