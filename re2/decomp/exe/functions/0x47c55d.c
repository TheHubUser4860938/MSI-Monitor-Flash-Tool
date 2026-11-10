// rea decompile_all
// name: CMFCRibbonTab::OnDraw
// address: 0x47c55d
// body: available
// range: 0x47c55d-0x47c6a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonTab::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonTab::OnDraw(CMFCRibbonTab *this,CDC *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  undefined4 uVar6;
  int local_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 uStack_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  BVar2 = IsRectEmpty((RECT *)(this + 0x74));
  if (BVar2 != 0) goto LAB_0047c692;
  if (*(int *)(*(int *)(this + 0x88) + 100) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1c4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) goto LAB_0047c5b1;
    uVar6 = 0;
  }
  else {
LAB_0047c5b1:
    uVar6 = 1;
  }
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x218);
  guard_check_icall(param_1,this,uVar6);
  uVar6 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar6);
  uVar6 = (*pcVar1)();
  local_18.left = *(LONG *)(this + 0x74);
  local_18.top = *(LONG *)(this + 0x78);
  local_18.right = *(LONG *)(this + 0x7c);
  local_18.bottom = *(LONG *)(this + 0x80);
  local_28 = *(int *)(this + 0x74);
  uStack_24 = *(undefined4 *)(this + 0x78);
  local_20 = *(int *)(this + 0x7c);
  uStack_1c = *(undefined4 *)(this + 0x80);
  iVar3 = *(int *)param_1;
  guard_check_icall(*(int *)(*(int *)(this + 0x88) + 0x8c),
                    *(undefined4 *)(*(int *)(*(int *)(this + 0x88) + 0x8c) + -0xc),&local_28,0x424);
  (**(code **)(iVar3 + 0x68))();
  iVar5 = ((local_18.right - local_18.left) - (local_20 - local_28)) / 2;
  iVar3 = 4;
  if (3 < iVar5) {
    iVar3 = iVar5;
  }
  InflateRect(&local_18,-iVar3,0);
  local_18.top = local_18.top + 3;
  iVar3 = *(int *)param_1;
  guard_check_icall(*(int *)(*(int *)(this + 0x88) + 0x8c),
                    *(undefined4 *)(*(int *)(*(int *)(this + 0x88) + 0x8c) + -0xc),&local_18,0x24);
  (**(code **)(iVar3 + 0x68))();
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar6);
  (*pcVar1)();
LAB_0047c692:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

