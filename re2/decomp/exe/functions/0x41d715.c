// rea decompile_all
// name: OnDrawScrollButtons
// address: 0x41d715
// body: available
// range: 0x41d715-0x41d7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManager::OnDrawScrollButtons(class CDC *,class CRect
   const &,int,int,int)
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawScrollButtons(class CDC *,class
   CRect const &,int,int,int)
   
   Library: Visual Studio 2015 Release */

void OnDrawScrollButtons(CDC *param_1,tagRECT *param_2,int param_3,IMAGES_IDS param_4,int param_5)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  ulong uVar2;
  undefined4 local_38;
  undefined4 local_34;
  CDrawingManager local_30 [8];
  tagRECT *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x41d721;
  local_28 = param_2;
  FUN_0045bc7e(local_30);
  local_24.left = param_2->left;
  local_24.right = param_2->right;
  local_24.bottom = param_2->bottom;
  local_24.top = param_2->top - param_3;
  pAVar1 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar1 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_24,hbr);
  if (param_5 != 0) {
    CDrawingManager::CDrawingManager(local_30,param_1);
    local_8 = 0;
    FUN_00464ce2(local_28->left,local_28->top,local_28->right,local_28->bottom,0xffffffff,0xffffffff
                 ,0,0xffffffff);
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x60);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,local_28,*(ulong *)(pAVar1 + 0x5c),uVar2);
    local_8 = 0xffffffff;
    FUN_00461ef9();
  }
  local_38 = 0;
  local_34 = 0;
  CMenuImages::Draw(param_1,param_4,(CRect *)local_28,0,(CSize *)&local_38);
  FUN_0055bae6();
  return;
}

