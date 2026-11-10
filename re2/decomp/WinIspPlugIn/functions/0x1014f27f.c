// rea decompile_all
// name: CMFCRibbonGallery::HitTest
// address: 0x1014f27f
// body: available
// range: 0x1014f27f-0x1014f34c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CMFCRibbonBaseElement * __thiscall CMFCRibbonGallery::HitTest(class
   CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonGallery::HitTest(CMFCRibbonGallery *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  CMFCRibbonBaseElement *pCVar5;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0xdc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    iVar2 = IsButtonLook(this);
    if (iVar2 == 0) {
      local_1c = 0;
      if (0 < *(int *)(this + 0x1cc)) {
        do {
          piVar3 = (int *)FUN_100efaed(local_1c);
          iVar2 = *piVar3;
          local_18.left = *(LONG *)(iVar2 + 0x74);
          local_18.top = *(LONG *)(iVar2 + 0x78);
          local_18.right = *(LONG *)(iVar2 + 0x7c);
          local_18.bottom = *(LONG *)(iVar2 + 0x80);
          pt.y = param_3;
          pt.x = param_2;
          BVar4 = PtInRect(&local_18,pt);
          if (BVar4 != 0) {
            FUN_100efaed(local_1c);
            break;
          }
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(this + 0x1cc));
      }
    }
    else {
      FUN_101004f5(param_2,param_3);
    }
  }
  pCVar5 = (CMFCRibbonBaseElement *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}

