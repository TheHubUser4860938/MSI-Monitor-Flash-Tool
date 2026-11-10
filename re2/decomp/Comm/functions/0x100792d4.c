// rea decompile_all
// name: CMenuImages::Draw
// address: 0x100792d4
// body: available
// range: 0x100792d4-0x10079371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CMenuImages::Draw(class CDC *,enum CMenuImages::IMAGES_IDS,class
   CPoint const &,enum CMenuImages::IMAGE_STATE,class CSize const &)
   
   Library: Visual Studio 2015 Release */

void CMenuImages::Draw(CDC *param_1,IMAGES_IDS param_2,CPoint *param_3,IMAGE_STATE param_4,
                      CSize *param_5)

{
  int iVar1;
  CMFCToolBarImages *this;
  undefined1 local_10 [12];
  
  iVar1 = FUN_100793f8();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      this = (CMFCToolBarImages *)&DAT_101dbca8;
    }
    else if (param_4 == 1) {
      this = (CMFCToolBarImages *)&DAT_101dbed8;
    }
    else if (param_4 == 4) {
      this = (CMFCToolBarImages *)&DAT_101dbdc0;
    }
    else if (param_4 == 2) {
      this = (CMFCToolBarImages *)&DAT_101dbff0;
    }
    else {
      this = (CMFCToolBarImages *)&DAT_101dc108;
      if (param_4 != 3) {
        this = (CMFCToolBarImages *)&DAT_101dc220;
      }
    }
    CMFCToolBarImages::PrepareDrawImage
              (this,local_10,*(undefined4 *)param_5,*(undefined4 *)(param_5 + 4),0);
    CMFCToolBarImages::Draw
              (this,param_1,*(int *)param_3,*(int *)(param_3 + 4),param_2,0,0,0,0,0,0xff);
    FUN_10050819(local_10);
  }
  return;
}

