// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawScrollButtons
// address: 0x1010ec7f
// body: available
// range: 0x1010ec7f-0x1010ed1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawScrollButtons(class CDC
   *,class CRect const &,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawScrollButtons
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          int param_5)

{
  CMFCVisualManagerOfficeXP *pCVar1;
  tagRECT *ptVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  undefined4 local_24;
  CMFCVisualManagerOfficeXP *local_20;
  tagRECT *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = (tagRECT *)param_2;
  local_18.left = *(LONG *)param_2;
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  local_18.top = *(int *)(param_2 + 4) - param_3;
  local_20 = this;
  pAVar3 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff38) {
    hbr = *(HBRUSH *)(pAVar3 + 0xcc);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_18,hbr);
  ptVar2 = local_1c;
  pCVar1 = local_20;
  if (param_5 != 0) {
    CDC::FillRect(param_1,local_1c,(CBrush *)(local_20 + 0x11c));
    CDC::Draw3dRect(param_1,ptVar2,*(ulong *)(pCVar1 + 0xe8),*(ulong *)(pCVar1 + 0xe8));
  }
  local_24 = 0;
  local_20 = (CMFCVisualManagerOfficeXP *)0x0;
  CMenuImages::Draw(param_1,param_4,(CRect *)ptVar2,0,(CSize *)&local_24);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

