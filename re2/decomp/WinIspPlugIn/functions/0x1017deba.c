// rea decompile_all
// name: CPreviewView::OnSize
// address: 0x1017deba
// body: available
// range: 0x1017deba-0x1017df34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::OnSize(CPreviewView *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x13c) == 0) {
    uVar1 = 0;
    if (*(int *)(this + 0x140) != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 + 1;
        *(undefined4 *)(iVar2 + 0x18 + *(int *)(this + 0xe0)) = 0;
        iVar2 = iVar2 + 0x28;
      } while (uVar1 < *(uint *)(this + 0x140));
    }
    FUN_100540e0();
  }
  else {
    *(int *)(this + 0xa8) = param_2 / 10;
    *(int *)(this + 0xa4) = param_3;
    *(int *)(this + 0xa0) = param_2;
    *(int *)(this + 0xac) = param_3 / 10;
    CScrollView::OnSize((CScrollView *)this,param_1,param_2,param_3);
  }
  return;
}

