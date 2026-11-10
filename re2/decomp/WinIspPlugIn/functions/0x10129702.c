// rea decompile_all
// name: COleDropTarget::OnDragScroll
// address: 0x10129702
// body: available
// range: 0x10129702-0x10129957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall COleDropTarget::OnDragScroll(class CWnd *,unsigned
   long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
COleDropTarget::OnDragScroll
          (undefined4 param_1_00,int *param_1,undefined4 param_2,int param_4,int param_5)

{
  POINT pt;
  POINT pt_00;
  int iVar1;
  BOOL BVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  COleDataObject local_54 [16];
  DWORD local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1012970e;
  local_38 = param_1;
  iVar1 = FUN_10051e53(&PTR_s_CView_101e3620);
  if (iVar1 != 0) {
    pcVar5 = *(code **)(*param_1 + 0x184);
    guard_check_icall(param_2,param_4,param_5);
    iVar1 = (*pcVar5)();
    if (iVar1 == -0x80000000) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect((HWND)param_1[8],&local_24);
      local_34.left = local_24.left;
      uVar4 = 0xffff;
      local_34.top = local_24.top;
      local_34.right = local_24.right;
      local_34.bottom = local_24.bottom;
      InflateRect(&local_34,-DAT_10247de4,-DAT_10247de4);
      pt.y = param_5;
      pt.x = param_4;
      BVar2 = PtInRect(&local_24,pt);
      piVar6 = local_38;
      if ((BVar2 != 0) &&
         (pt_00.y = param_5, pt_00.x = param_4, BVar2 = PtInRect(&local_34,pt_00), piVar6 = local_38
         , BVar2 == 0)) {
        if (param_4 < local_34.left) {
          uVar4 = 0xff00;
        }
        else if (local_34.right <= param_4) {
          uVar4 = 0xff01;
        }
        if (param_5 < local_34.top) {
          uVar4 = uVar4 & 0xff;
        }
        else if (local_34.bottom <= param_5) {
          uVar4 = uVar4 & 0xff | 0x100;
        }
        local_3c = (int *)FUN_100ab579(local_38,0);
        if (local_3c == (int *)0x0) {
          pcVar5 = *(code **)(*piVar6 + 0x168);
          guard_check_icall(uVar4,0,0);
        }
        else {
          pcVar5 = *(code **)(*local_3c + 0x1ac);
          guard_check_icall(piVar6,uVar4,0);
        }
        iVar1 = (*pcVar5)();
        if (iVar1 == 0) {
          uVar4 = 0xffff;
        }
        if (uVar4 != 0xffff) {
          local_44 = GetTickCount();
          if (uVar4 != local_40[10]) {
            local_40[0xb] = local_44;
            local_40[0xc] = DAT_10247de8;
          }
          if ((uint)local_40[0xc] < local_44 - local_40[0xb]) {
            if (local_3c == (int *)0x0) {
              pcVar5 = *(code **)(*local_38 + 0x168);
              guard_check_icall(uVar4,0,1);
            }
            else {
              pcVar5 = *(code **)(*local_3c + 0x1ac);
              guard_check_icall(local_38,uVar4,1);
            }
            (*pcVar5)();
            local_40[0xb] = local_44;
            local_40[0xc] = DAT_10247dec;
          }
          if (local_40[10] == 0xffff) {
            pcVar5 = *(code **)(*local_40 + 100);
            guard_check_icall(local_38);
            (*pcVar5)();
          }
          local_40[10] = uVar4;
          goto LAB_10129950;
        }
      }
      if (local_40[10] != 0xffff) {
        COleDataObject::COleDataObject(local_54);
        local_8 = 0;
        COleDataObject::Attach(local_54,(IDataObject *)local_40[9],0);
        iVar1 = *local_40;
        guard_check_icall(piVar6,local_54,param_2,param_4,param_5);
        (**(code **)(iVar1 + 0x54))();
        local_40[10] = 0xffff;
        local_8 = 1;
        COleDataObject::Release(local_54);
      }
    }
  }
LAB_10129950:
  uVar3 = FUN_1018015d();
  return uVar3;
}

