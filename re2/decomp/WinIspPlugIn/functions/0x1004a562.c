// rea decompile_all
// name: CFileDialog::CFileDialog
// address: 0x1004a562
// body: available
// range: 0x1004a562-0x1004a83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a63b to 0x1004a39d FUN_1004a39d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004a7f1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CFileDialog::CFileDialog(int,wchar_t const *,wchar_t const *,unsigned
   long,wchar_t const *,class CWnd *,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CFileDialog::CFileDialog
          (CFileDialog *this,int param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,
          wchar_t *param_5,CWnd *param_6,ulong param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *_Dst;
  AFX_MODULE_STATE *pAVar3;
  undefined2 *puVar4;
  HRESULT HVar5;
  int iVar6;
  IID *rclsid;
  undefined4 local_138;
  wchar_t *local_134;
  wchar_t *local_130;
  int *local_12c;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x130;
  local_8 = 0x1004a571;
  local_130 = param_3;
  local_134 = param_5;
  CDialog::CDialog((CDialog *)this,0,param_6);
  local_8 = 0;
  *(undefined ***)this = vftable;
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  _memset(&local_128,0,0x114);
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  if (local_128.dwMajorVersion < 6) {
    *(undefined4 *)(this + 0xac) = 0;
  }
  else {
    *(int *)(this + 0xac) = param_8;
  }
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  if (param_7 == 0) {
    param_7 = 0x58;
  }
  _Dst = (void *)FUN_101a1d83(param_7);
  *(void **)(this + 0xa8) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a39d();
  }
  _memset(_Dst,0,param_7);
  *(undefined2 *)(this + 0x2cc) = 0;
  *(undefined2 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0x4d4) = 0;
  *(undefined4 *)(this + 0x4d8) = 0;
  *(int *)(this + 0xc4) = param_1;
  *(uint *)(this + 0x80) = 0x7005 - (uint)(param_1 != 0);
  **(size_t **)(this + 0xa8) = param_7;
  *(CFileDialog **)(*(int *)(this + 0xa8) + 0x1c) = this + 0x2cc;
  *(undefined4 *)(*(int *)(this + 0xa8) + 0x20) = 0x104;
  *(wchar_t **)(*(int *)(this + 0xa8) + 0x3c) = param_2;
  *(CFileDialog **)(*(int *)(this + 0xa8) + 0x24) = this + 0xcc;
  *(undefined4 *)(*(int *)(this + 0xa8) + 0x28) = 0x100;
  *(uint *)(*(int *)(this + 0xa8) + 0x34) =
       *(uint *)(*(int *)(this + 0xa8) + 0x34) | param_4 | 0x80020;
  if ((param_4 & 0x40) != 0) {
    *(uint *)(*(int *)(this + 0xa8) + 0x34) = *(uint *)(*(int *)(this + 0xa8) + 0x34) & 0xff7fffff;
  }
  pAVar3 = AfxGetModuleState();
  *(undefined4 *)(*(int *)(this + 0xa8) + 8) = *(undefined4 *)(pAVar3 + 0xc);
  *(code **)(*(int *)(this + 0xa8) + 0x44) = FUN_1005a55a;
  if (local_130 != (wchar_t *)0x0) {
    uVar2 = FUN_101a26b7(this + 0x2cc,0x104,local_130,0xffffffff);
    FUN_10046fe0(uVar2);
  }
  if (local_134 != (wchar_t *)0x0) {
    FUN_10047140(local_134);
    puVar4 = (undefined2 *)FUN_100473c0(0);
    while (puVar4 = (undefined2 *)FUN_1019791b(puVar4,0x7c), puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(*(int *)(this + 0xa8) + 0xc) = *(undefined4 *)(this + 200);
  }
  if (*(int *)(this + 0xac) == 1) {
    HVar5 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar5) {
      *(undefined ***)(this + 0x4e0) = XFileDialogControlEvents::vftable;
      *(undefined ***)(this + 0x4dc) = XFileDialogEvents::vftable;
      if (*(int *)(this + 0xc4) == 0) {
        rclsid = (IID *)&DAT_10200abc;
      }
      else {
        rclsid = (IID *)&DAT_10200aac;
      }
      HVar5 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_101d4490,&local_12c);
      if (-1 < HVar5) {
        puVar1 = (undefined4 *)*local_12c;
        guard_check_icall(local_12c,&DAT_101d44a0,&local_138);
        iVar6 = (*(code *)*puVar1)();
        if (-1 < iVar6) {
          iVar6 = *local_12c;
          guard_check_icall(local_12c,this + 0x4dc,this + 0xb8);
          iVar6 = (**(code **)(iVar6 + 0x1c))();
          if (-1 < iVar6) {
            *(int **)(this + 0xbc) = local_12c;
            *(undefined4 *)(this + 0xc0) = local_138;
            goto LAB_1004a836;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
LAB_1004a836:
  FUN_1018015d();
  return;
}

