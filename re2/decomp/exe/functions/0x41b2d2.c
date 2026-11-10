// rea decompile_all
// name: CMFCVisualManager::OnDrawMenuScrollButton
// address: 0x41b2d2
// body: available
// range: 0x41b2d2-0x41b375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMenuScrollButton(class CDC *,class
   CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawMenuScrollButton
          (undefined4 param_1_00,CDC *param_1,LONG param_3,int param_4,LONG param_5,LONG param_6,
          int param_7,int param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  ulong uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.top = param_4 + -2;
  local_18.left = param_3;
  local_18.right = param_5;
  local_18.bottom = param_6;
  pAVar1 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar1 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_18,hbr);
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,(-(uint)(param_7 != 0) & 0xfffffff9) + 7,(CRect *)&param_3,0,
                    (CSize *)&local_20);
  if (param_8 != 0) {
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x58);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar1 + 0x5c),uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

