// rea decompile_all
// name: CFrameImpl::RemoveFrame
// address: 0x100e2660
// body: available
// range: 0x100e2660-0x100e26a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CFrameImpl::RemoveFrame(class CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

void CFrameImpl::RemoveFrame(CFrameWnd *param_1)

{
  __POSITION *p_Var1;
  __POSITION *p_Var2;
  int iVar3;
  int iVar4;
  
  p_Var2 = DAT_101d3a34;
  do {
    p_Var1 = p_Var2;
    if (p_Var1 == (__POSITION *)0x0) {
      return;
    }
    if (*(int *)(p_Var1 + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(p_Var1 + 8) + 0x20);
    }
    if (param_1 == (CFrameWnd *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x20);
    }
    p_Var2 = *(__POSITION **)p_Var1;
  } while (iVar4 != iVar3);
  CList<unsigned_int,unsigned_int&>::RemoveAt
            ((CList<unsigned_int,unsigned_int&> *)&PTR_vftable_101d3a30,p_Var1);
  return;
}

