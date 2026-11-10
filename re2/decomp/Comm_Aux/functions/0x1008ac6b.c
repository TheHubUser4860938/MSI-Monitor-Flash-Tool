// rea decompile_all
// name: CMFCVisualManager::OnDrawCaptionButton
// address: 0x1008ac6b
// body: available
// range: 0x1008ac6b-0x1008adc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawCaptionButton(class CDC *,class
   CMFCCaptionButton *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawCaptionButton
          (CMFCVisualManager *this,CDC *param_1,CMFCCaptionButton *param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7)

{
  code *pcVar1;
  CDC *this_00;
  AFX_GLOBAL_DATA *pAVar2;
  IMAGE_STATE IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_34;
  undefined4 local_30;
  CDC *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  pcVar1 = *(code **)(*(int *)param_2 + 0xc);
  guard_check_icall(&local_18);
  (*pcVar1)();
  if (param_7 == -1) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x14);
    guard_check_icall(param_4,param_5);
    param_7 = (*pcVar1)();
  }
  local_28.left = local_18.left;
  local_28.top = local_18.top;
  local_28.right = local_18.right;
  local_28.bottom = local_18.bottom;
  IVar3 = 1;
  if ((*(int *)(param_2 + 4) != 0) &&
     ((*(int *)(param_2 + 8) != 0 || (*(int *)(param_2 + 0x14) != 0)))) {
    OffsetRect(&local_28,1,1);
  }
  this_00 = local_2c;
  if (param_6 == 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      IVar3 = -(uint)(param_3 != 0) & 3;
    }
    else if ((((byte)param_2[0x20] < 0xc1) || ((byte)param_2[0x21] < 0xc1)) ||
            ((byte)param_2[0x22] < 0xc1)) {
      IVar3 = 0;
    }
    else {
      IVar3 = 3;
    }
  }
  local_34 = 0;
  local_30 = 0;
  CMenuImages::Draw(local_2c,param_7,(CRect *)&local_28,IVar3,(CSize *)&local_34);
  if (param_6 == 0) {
    if ((*(int *)(param_2 + 4) == 0) ||
       ((*(int *)(param_2 + 8) == 0 && (*(int *)(param_2 + 0x14) == 0)))) {
      if ((*(int *)(param_2 + 8) == 0) &&
         ((*(int *)(param_2 + 4) == 0 && (*(int *)(param_2 + 0x14) == 0)))) goto LAB_1008adb0;
      pAVar2 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar2 + 0x58);
      pAVar2 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar2 + 0x5c);
    }
    else {
      pAVar2 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar2 + 100);
      pAVar2 = GetGlobalData();
      CDC::Draw3dRect(this_00,&local_18,*(ulong *)(pAVar2 + 0x60),uVar5);
      InflateRect(&local_18,-1,-1);
      pAVar2 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar2 + 0x5c);
      pAVar2 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar2 + 0x60);
    }
    CDC::Draw3dRect(this_00,&local_18,uVar4,uVar5);
  }
LAB_1008adb0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

