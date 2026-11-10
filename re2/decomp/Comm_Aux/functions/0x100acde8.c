// rea decompile_all
// name: CMFCListCtrl::Sort
// address: 0x100acde8
// body: available
// range: 0x100acde8-0x100ace62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCListCtrl::Sort(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCListCtrl::Sort(CMFCListCtrl *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  CMFCHeaderCtrl *this_00;
  int iVar3;
  int iVar4;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100acdf4;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x168);
  iVar3 = param_1;
  iVar4 = param_2;
  guard_check_icall();
  this_00 = (CMFCHeaderCtrl *)(*pcVar1)();
  CMFCHeaderCtrl::SetSortColumn(this_00,iVar3,iVar4,param_3);
  *(int *)(this + 0x13c) = param_1;
  *(int *)(this + 0x140) = param_2;
  SendMessageW(*(HWND *)(this + 0x20),0x1030,(WPARAM)this,0x100ac92e);
  CWaitCursor::~CWaitCursor(local_11);
  return;
}

