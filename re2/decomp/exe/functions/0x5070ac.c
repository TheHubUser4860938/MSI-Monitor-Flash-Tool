// rea decompile_all
// name: CMFCRibbonGallery::OnDraw
// address: 0x5070ac
// body: available
// range: 0x5070ac-0x5071e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonGallery::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::OnDraw(CMFCRibbonGallery *this,CDC *param_1)

{
  code *pcVar1;
  CMFCRibbonGallery *pCVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  undefined4 *puVar6;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  CDC *local_20;
  CMFCRibbonGallery *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_1c = this;
  iVar3 = IsButtonLook(this);
  if (iVar3 == 0) {
    local_18.left = *(LONG *)(this + 0x74);
    local_18.top = *(LONG *)(this + 0x78);
    local_18.right = *(LONG *)(this + 0x7c);
    local_18.bottom = *(LONG *)(this + 0x80);
    InflateRect(&local_18,-1,-3);
    local_18.right = local_18.right + -2;
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x280);
    guard_check_icall(local_20,local_1c,local_18.left,local_18.top,local_18.right,local_18.bottom);
    (*pcVar1)();
    pCVar2 = local_1c;
    pcVar1 = *(code **)(*(int *)local_1c + 0x28c);
    guard_check_icall(&local_28);
    (*pcVar1)();
    if (0 < *(int *)(pCVar2 + 0x204)) {
      pAVar5 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor
                ((CMFCToolBarImages *)(pCVar2 + 0x200),*(ulong *)(pAVar5 + 0x1c));
      CMFCToolBarImages::PrepareDrawImage
                ((CMFCToolBarImages *)(pCVar2 + 0x200),local_34,local_28,local_24,0);
    }
    local_1c = (CMFCRibbonGallery *)0x0;
    if (0 < *(int *)(pCVar2 + 0x1cc)) {
      do {
        puVar6 = (undefined4 *)FUN_004ab4cd(local_1c);
        pcVar1 = *(code **)(*(int *)*puVar6 + 0x17c);
        guard_check_icall(local_20);
        (*pcVar1)();
        local_1c = local_1c + 1;
      } while ((int)local_1c < *(int *)(pCVar2 + 0x1cc));
    }
    if (0 < *(int *)(pCVar2 + 0x204)) {
      FUN_0044c977(local_34);
    }
  }
  else {
    FUN_00472327(param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

