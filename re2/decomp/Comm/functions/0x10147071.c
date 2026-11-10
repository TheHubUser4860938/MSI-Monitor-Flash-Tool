// rea decompile_all
// name: CPreviewView::OnVScroll
// address: 0x10147071
// body: available
// range: 0x10147071-0x10147173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::OnVScroll(unsigned int,unsigned int,class CScrollBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPreviewView::OnVScroll(CPreviewView *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  if (*(int *)(this + 0x13c) == 0) {
    if (param_1 == 0) {
      param_2 = *(int *)(this + 0x144) - 1;
    }
    else if (param_1 == 1) {
      param_2 = *(int *)(this + 0x144) + 1;
    }
    else if (param_1 == 2) {
      param_2 = *(int *)(this + 0x144) -
                (((uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e) -
                 (uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c)) + 9) / 10;
    }
    else if (param_1 == 3) {
      param_2 = (((uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e) -
                 (uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c)) + 9) / 10 +
                *(int *)(this + 0x144);
    }
    else if (param_1 != 4) {
      if (param_1 == 6) {
        param_2 = (uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c);
      }
      else {
        if (param_1 != 7) {
          return;
        }
        param_2 = (uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e);
      }
    }
    SetCurrentPage(this,param_2,1);
  }
  else {
    CScrollView::OnVScroll((CScrollView *)this,param_1,param_2,param_3);
  }
  return;
}

