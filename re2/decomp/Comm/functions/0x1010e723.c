// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawRibbonCategoryScroll
// address: 0x1010e723
// body: available
// range: 0x1010e723-0x1010e811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawRibbonCategoryScroll(class
   CDC *,class CRibbonCategoryScroll *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawRibbonCategoryScroll
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CRibbonCategoryScroll *param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 local_24;
  CRibbonCategoryScroll *local_20;
  CMFCVisualManagerOfficeXP *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20 = param_2;
  local_18.left = *(LONG *)(param_2 + 0x74);
  local_18.top = *(LONG *)(param_2 + 0x78);
  local_18.right = *(LONG *)(param_2 + 0x7c);
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  local_18.bottom = *(int *)(param_2 + 0x80) + -1;
  local_1c = this;
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pAVar3 = GetGlobalData();
    pAVar3 = pAVar3 + 0xd0;
  }
  else {
    pAVar3 = (AFX_GLOBAL_DATA *)(local_1c + 0x11c);
  }
  pcVar1 = *(code **)(*(int *)local_1c + 0x314);
  guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,pAVar3,0);
  (*pcVar1)();
  uVar4 = *(uint *)(local_20 + 0x1c4);
  pAVar3 = GetGlobalData();
  if (*(int *)(pAVar3 + 0x198) != 0) {
    uVar4 = (uint)(uVar4 == 0);
  }
  local_24 = 0;
  local_20 = (CRibbonCategoryScroll *)0x0;
  CMenuImages::Draw(param_1,(-(uint)(uVar4 != 0) & 3) + 0xe,(CRect *)&local_18,0,(CSize *)&local_24)
  ;
  pAVar3 = GetGlobalData();
  uVar5 = *(ulong *)(pAVar3 + 0x58);
  pAVar3 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar3 + 0x58),uVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

