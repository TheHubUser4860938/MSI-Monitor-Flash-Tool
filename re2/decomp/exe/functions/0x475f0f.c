// rea decompile_all
// name: CMFCRibbonPanel::HitTest
// address: 0x475f0f
// body: available
// range: 0x475f0f-0x475ffe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::HitTest(class
   CPoint,int)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonPanel::HitTest(CMFCRibbonPanel *this,LONG param_2,LONG param_3,int param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar2;
  int *piVar3;
  CMFCRibbonBaseElement *pCVar4;
  int iVar5;
  
  BVar2 = IsRectEmpty((RECT *)(this + 0x354));
  if ((BVar2 == 0) &&
     (pt_01.y = param_3, pt_01.x = param_2, BVar2 = PtInRect((RECT *)(this + 0x354),pt_01),
     BVar2 != 0)) {
    pCVar4 = (CMFCRibbonBaseElement *)(this + 0x2e0);
  }
  else {
    BVar2 = IsRectEmpty((RECT *)(this + 0x188));
    if ((BVar2 == 0) &&
       (pt_02.y = param_3, pt_02.x = param_2, BVar2 = PtInRect((RECT *)(this + 0x188),pt_02),
       BVar2 != 0)) {
      pCVar4 = (CMFCRibbonBaseElement *)(this + 0x114);
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)(this + 0x4e4)) {
        do {
          piVar3 = (int *)FUN_004ab4cd(iVar5);
          piVar3 = (int *)*piVar3;
          BVar2 = IsRectEmpty((RECT *)(piVar3 + 0x1d));
          if ((BVar2 == 0) &&
             (pt.y = param_3, pt.x = param_2, BVar2 = PtInRect((RECT *)(piVar3 + 0x1d),pt),
             BVar2 != 0)) {
            pcVar1 = *(code **)(*piVar3 + 300);
            guard_check_icall(param_2,param_3);
            pCVar4 = (CMFCRibbonBaseElement *)(*pcVar1)();
            return pCVar4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(this + 0x4e4));
      }
      if ((param_4 == 0) ||
         (pt_00.y = param_3, pt_00.x = param_2, BVar2 = PtInRect((RECT *)(this + 0xbc),pt_00),
         BVar2 == 0)) {
        pCVar4 = (CMFCRibbonBaseElement *)0x0;
      }
      else {
        pCVar4 = (CMFCRibbonBaseElement *)(this + 0x2e0);
      }
    }
  }
  return pCVar4;
}

