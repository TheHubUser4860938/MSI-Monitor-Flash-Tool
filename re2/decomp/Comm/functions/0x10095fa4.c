// rea decompile_all
// name: OnDrawMenuCheck
// address: 0x10095fa4
// body: available
// range: 0x10095fa4-0x1009609f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawMenuCheck(class CDC *,class
   CMFCToolBarMenuButton *,class CRect,int,int)
    public: virtual void __thiscall CMFCVisualManagerWindows7::OnDrawMenuCheck(class CDC *,class
   CMFCToolBarMenuButton *,class CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void OnDrawMenuCheck(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CMFCVisualManagerOffice2007 *in_ECX;
  CMFCToolBarImages *this;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  this = (CMFCToolBarImages *)(in_ECX + (-(uint)(param_8 != 0) & 0x118) + 0x1298);
  iVar1 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if ((iVar1 == 0) || (*(int *)(this + 4) == 0)) {
    CMFCVisualManager::OnDrawMenuCheck
              ((CMFCVisualManager *)in_ECX,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8);
  }
  else {
    local_18.right = *(LONG *)(this + 0x54);
    local_18.bottom = *(LONG *)(this + 0x58);
    local_18.left = 0;
    local_18.top = 0;
    if ((*(uint *)(param_2 + 0x24) & 0x40000) != 0) {
      OffsetRect(&local_18,0,local_18.bottom);
    }
    pAVar2 = GetGlobalData();
    if (*(int *)(pAVar2 + 0x198) != 0) {
      CMFCToolBarImages::Mirror(this);
    }
    CMFCToolBarImages::DrawEx
              (this,param_1,param_3,param_4,param_5,param_6,0,1,1,local_18.left,local_18.top,
               local_18.right,local_18.bottom,0xff);
    pAVar2 = GetGlobalData();
    if (*(int *)(pAVar2 + 0x198) != 0) {
      CMFCToolBarImages::Mirror(this);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

