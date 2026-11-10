// rea decompile_all
// name: CMFCPropertyGridProperty::HitTest
// address: 0x10074a16
// body: available
// range: 0x10074a16-0x10074abc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCPropertyGridProperty * __thiscall CMFCPropertyGridProperty::HitTest(class
   CPoint,enum CMFCPropertyGridProperty::ClickArea *)
   
   Library: Visual Studio 2015 Release */

CMFCPropertyGridProperty * __thiscall
CMFCPropertyGridProperty::HitTest
          (CMFCPropertyGridProperty *this,int param_2,LONG param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  POINT pt;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pt.y = param_3;
  pt.x = param_2;
  BVar3 = PtInRect((RECT *)(this + 0x30),pt);
  if (BVar3 == 0) {
    puVar5 = *(undefined4 **)(this + 0xd0);
    do {
      if (puVar5 == (undefined4 *)0x0) {
        return (CMFCPropertyGridProperty *)0x0;
      }
      puVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      this = HitTest((CMFCPropertyGridProperty *)*puVar1,param_2,param_3,param_4);
    } while (this == (CMFCPropertyGridProperty *)0x0);
  }
  else if (param_4 != (undefined4 *)0x0) {
    if ((*(int *)(this + 0x5c) == 0) ||
       ((*(int *)(this + 0x3c) - *(int *)(this + 0x34)) + ((RECT *)(this + 0x30))->left <= param_2))
    {
      pcVar2 = *(code **)(*(int *)this + 0x9c);
      guard_check_icall();
      iVar4 = (*pcVar2)();
      if ((iVar4 == 0) ||
         (param_2 <=
          *(int *)(*(int *)(this + 0xc4) + 0x358) + *(int *)(*(int *)(this + 0xc4) + 0x328))) {
        *param_4 = 1;
      }
      else {
        *param_4 = 2;
      }
    }
    else {
      *param_4 = 0;
    }
  }
  return this;
}

