// rea decompile_all
// name: CreateDlgControl
// address: 0x100316f1
// body: available
// range: 0x100316f1-0x10031977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class CWnd * __thiscall CMFCControlContainer::CreateDlgControl(char const *)
    protected: class CWnd * __thiscall CMFCControlContainer::CreateDlgControl(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

undefined4 CreateDlgControl(int param_1)

{
  int iVar1;
  CMFCButton *this;
  CMFCColorButton *this_00;
  CMFCEditBrowseCtrl *this_01;
  CMFCFontComboBox *this_02;
  CMFCLinkCtrl *this_03;
  CMFCMaskedEdit *this_04;
  CMFCMenuButton *this_05;
  CMFCPropertyGridCtrl *this_06;
  CMFCShellListCtrl *this_07;
  CMFCShellTreeCtrl *this_08;
  CVSListBox *this_09;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_100037c0(param_1);
    uVar2 = 0;
    iVar1 = FUN_100257be(L"MFCButton");
    if (iVar1 == 0) {
      this = (CMFCButton *)FUN_10011f7d(0x7a8);
      if (this != (CMFCButton *)0x0) {
        uVar2 = CMFCButton::CMFCButton(this);
      }
    }
    else {
      iVar1 = FUN_100257be(L"MFCColorButton");
      if (iVar1 == 0) {
        this_00 = (CMFCColorButton *)FUN_10011f7d(0x808);
        if (this_00 != (CMFCColorButton *)0x0) {
          uVar2 = CMFCColorButton::CMFCColorButton(this_00);
        }
      }
      else {
        iVar1 = FUN_100257be(L"MFCEditBrowse");
        if (iVar1 == 0) {
          this_01 = (CMFCEditBrowseCtrl *)FUN_10011f7d(0xd0);
          if (this_01 != (CMFCEditBrowseCtrl *)0x0) {
            uVar2 = CMFCEditBrowseCtrl::CMFCEditBrowseCtrl(this_01);
          }
        }
        else {
          iVar1 = FUN_100257be(L"MFCFontComboBox");
          if (iVar1 == 0) {
            this_02 = (CMFCFontComboBox *)FUN_10011f7d(0x90);
            if (this_02 != (CMFCFontComboBox *)0x0) {
              uVar2 = CMFCFontComboBox::CMFCFontComboBox(this_02);
            }
          }
          else {
            iVar1 = FUN_100257be(L"MFCLink");
            if (iVar1 == 0) {
              this_03 = (CMFCLinkCtrl *)FUN_10011f7d(0x7c0);
              if (this_03 != (CMFCLinkCtrl *)0x0) {
                uVar2 = CMFCLinkCtrl::CMFCLinkCtrl(this_03);
              }
            }
            else {
              iVar1 = FUN_100257be(L"MFCMaskedEdit");
              if (iVar1 == 0) {
                this_04 = (CMFCMaskedEdit *)FUN_10011f7d(0xb0);
                if (this_04 != (CMFCMaskedEdit *)0x0) {
                  uVar2 = CMFCMaskedEdit::CMFCMaskedEdit(this_04);
                }
              }
              else {
                iVar1 = FUN_100257be(L"MFCMenuButton");
                if (iVar1 == 0) {
                  this_05 = (CMFCMenuButton *)FUN_10011f7d(0x7c8);
                  if (this_05 != (CMFCMenuButton *)0x0) {
                    uVar2 = CMFCMenuButton::CMFCMenuButton(this_05);
                  }
                }
                else {
                  iVar1 = FUN_100257be(L"MFCPropertyGrid");
                  if (iVar1 == 0) {
                    this_06 = (CMFCPropertyGridCtrl *)FUN_10011f7d(0x408);
                    if (this_06 != (CMFCPropertyGridCtrl *)0x0) {
                      uVar2 = CMFCPropertyGridCtrl::CMFCPropertyGridCtrl(this_06);
                    }
                  }
                  else {
                    iVar1 = FUN_100257be(L"MFCShellList");
                    if (iVar1 == 0) {
                      this_07 = (CMFCShellListCtrl *)FUN_10011f7d(0x170);
                      if (this_07 != (CMFCShellListCtrl *)0x0) {
                        uVar2 = CMFCShellListCtrl::CMFCShellListCtrl(this_07);
                      }
                    }
                    else {
                      iVar1 = FUN_100257be(L"MFCShellTree");
                      if (iVar1 == 0) {
                        this_08 = (CMFCShellTreeCtrl *)FUN_10011f7d(0x90);
                        if (this_08 != (CMFCShellTreeCtrl *)0x0) {
                          uVar2 = CMFCShellTreeCtrl::CMFCShellTreeCtrl(this_08);
                        }
                      }
                      else {
                        iVar1 = FUN_100257be(L"MFCVSListBox");
                        if ((iVar1 == 0) &&
                           (this_09 = (CVSListBox *)FUN_10011f7d(0x1f8),
                           this_09 != (CVSListBox *)0x0)) {
                          uVar2 = CVSListBox::CVSListBox(this_09);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_10003460();
  }
  return uVar2;
}

