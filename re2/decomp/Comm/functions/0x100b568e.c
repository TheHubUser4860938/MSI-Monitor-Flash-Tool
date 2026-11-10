// rea decompile_all
// name: CMDIChildWndEx::DockPane
// address: 0x100b568e
// body: available
// range: 0x100b568e-0x100b5729 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::DockPane(class CBasePane *,unsigned int,struct tagRECT
   const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWndEx::DockPane(CMDIChildWndEx *this,CBasePane *param_1,uint param_2,tagRECT *param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)param_1 + 0x1cc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) && (DAT_101dc938 == 0)) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffffe;
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x1d0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x1cc);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      AddPane(this,param_1,1);
      return;
    }
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x1ec);
  guard_check_icall(0xf000);
  (*pcVar1)();
  CDockingManager::DockPane((CDockingManager *)(this + 0x254),param_1,param_2,(tagRECT *)0x0);
  return;
}

