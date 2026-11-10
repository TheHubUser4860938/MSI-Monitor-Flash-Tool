// rea decompile_all
// name: CMFCMenuButton::OnDraw
// address: 0x1007349d
// body: available
// range: 0x1007349d-0x100735a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCMenuButton::OnDraw(class CDC *,class CRect const
   &,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMenuButton::OnDraw(CMFCMenuButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  CMFCButton *pCVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ulong uVar3;
  int local_48 [2];
  CMFCButton *local_40;
  CDC *local_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  LONG LStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  int local_10;
  LONG local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_40 = (CMFCButton *)this;
  FUN_100b0af4(local_48);
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_20 = *(int *)(param_2 + 8) + (-10 - local_48[0]);
  CMFCButton::OnDraw(local_40,local_3c,(CRect *)&local_28,param_3);
  pCVar1 = local_40;
  iStack_34 = *(int *)(param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 8);
  LStack_2c = *(LONG *)(param_2 + 0xc);
  local_38 = local_20;
  local_10 = 0;
  local_c = 0;
  CMenuImages::Draw(local_3c,(*(int *)(local_40 + 0x7a8) != 0) + 0xd,(CRect *)&local_38,
                    param_3 >> 2 & 1,(CSize *)&local_10);
  if (*(int *)(pCVar1 + 0x7bc) != 0) {
    local_10 = local_38 + 2;
    local_18._0_4_ = local_38;
    local_18._4_4_ = iStack_34;
    local_c = LStack_2c;
    InflateRect((LPRECT)local_18,0,-2);
    if ((DAT_102456f4 == 0) || (*(int *)(pCVar1 + 0xa4) != 0)) {
      local_18._0_4_ = local_18._0_4_ + *(int *)(pCVar1 + 0xe8);
      local_18._4_4_ = local_18._4_4_ + *(int *)(pCVar1 + 0xec);
    }
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x24);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(local_3c,(tagRECT *)local_18,*(ulong *)(pAVar2 + 0x30),uVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

