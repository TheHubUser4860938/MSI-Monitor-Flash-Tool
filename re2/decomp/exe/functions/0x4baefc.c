// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillMiniFrameCaption
// address: 0x4baefc
// body: available
// range: 0x4baefc-0x4bafab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::OnFillMiniFrameCaption(class CDC *,class CRect,class CPaneFrameWnd
   *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnFillMiniFrameCaption
          (CMFCVisualManagerOffice2007 *this,int param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int *param_7,uint param_8)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  CObject *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  HBRUSH hbr;
  uint uVar7;
  
  piVar2 = param_7;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    uVar4 = CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption
                      ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,
                       piVar2,param_8);
  }
  else {
    pcVar1 = *(code **)(*piVar2 + 0x1a8);
    guard_check_icall();
    pCVar5 = (CObject *)(*pcVar1)();
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_005b8960,pCVar5);
    uVar7 = ~-(uint)(pCVar5 != (CObject *)0x0) & param_8;
    if (uVar7 == 0) {
      pAVar6 = GetGlobalData();
      pAVar6 = pAVar6 + 0xc0;
    }
    else {
      pAVar6 = GetGlobalData();
      pAVar6 = pAVar6 + 0xb8;
    }
    hbr = (HBRUSH)0x0;
    if (pAVar6 != (AFX_GLOBAL_DATA *)0x0) {
      hbr = *(HBRUSH *)(pAVar6 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
    pAVar6 = GetGlobalData();
    if (uVar7 == 0) {
      uVar4 = *(ulong *)(pAVar6 + 0x84);
    }
    else {
      uVar4 = *(ulong *)(pAVar6 + 0x74);
    }
  }
  return uVar4;
}

