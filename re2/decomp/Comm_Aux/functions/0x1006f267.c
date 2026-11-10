// rea decompile_all
// name: CMFCFontComboBox::Setup
// address: 0x1006f267
// body: available
// range: 0x1006f267-0x1006f3b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f29a to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCFontComboBox::Setup(int,unsigned char,unsigned char)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCFontComboBox::Setup(CMFCFontComboBox *this,int param_1,uchar param_2,uchar param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  CMFCFontInfo *pCVar3;
  LRESULT LVar4;
  CMFCFontInfo *this_00;
  LPARAM lParam;
  WPARAM wParam;
  int iVar5;
  int iVar6;
  LPARAM local_118;
  CMFCToolBarFontComboBox local_114 [268];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10c;
  local_8 = 0x1006f276;
  local_118 = CONCAT31(local_118._1_3_,param_3);
  BVar1 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar1 != 0) {
    if (*(int *)(this + 0x88) == 0) {
      FUN_1006ebba();
      CMFCToolBarFontComboBox::CMFCToolBarFontComboBox(local_114,0,-1,param_1,param_2,2,0,param_3);
      local_8 = 0;
      iVar6 = 0;
      iVar5 = FUN_100ff6d8();
      if (0 < iVar5) {
        do {
          uVar2 = GetItem(iVar6);
          FUN_100352e0(uVar2);
          local_8._0_1_ = 1;
          pCVar3 = (CMFCFontInfo *)
                   CMFCToolBarComboBoxButton::GetItemData
                             ((CMFCToolBarComboBoxButton *)local_114,iVar6);
          LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x158,0xffffffff,local_118);
          if (LVar4 < 1) {
            this_00 = (CMFCFontInfo *)FUN_10047eb4(0x14);
            local_8._0_1_ = 2;
            if (this_00 == (CMFCFontInfo *)0x0) {
              lParam = 0;
            }
            else {
              lParam = CMFCFontInfo::CMFCFontInfo(this_00,pCVar3);
            }
            wParam = SendMessageW(*(HWND *)(this + 0x20),0x143,0,local_118);
            SendMessageW(*(HWND *)(this + 0x20),0x151,wParam,lParam);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10034f00();
          iVar6 = iVar6 + 1;
          iVar5 = FUN_100ff6d8();
        } while (iVar6 < iVar5);
      }
      CMFCToolBarFontComboBox::~CMFCToolBarFontComboBox(local_114);
    }
    iVar5 = FUN_1017f5f4();
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

