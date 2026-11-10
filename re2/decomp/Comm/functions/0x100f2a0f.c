// rea decompile_all
// name: COleDropTarget::OnDropEx
// address: 0x100f2a0f
// body: available
// range: 0x100f2a0f-0x100f2a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall COleDropTarget::OnDropEx(class CWnd *,class
   COleDataObject *,unsigned long,unsigned long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
COleDropTarget::OnDropEx
          (undefined4 param_1_00,int *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_10019d4f(&PTR_s_CView_1018c530);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x180);
    guard_check_icall(param_2,param_3,param_4,param_6,param_7);
    uVar3 = (*pcVar1)();
  }
  return uVar3;
}

