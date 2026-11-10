// rea decompile_all
// name: COleControlSite::SetExtent
// address: 0x445f02
// body: available
// range: 0x445f02-0x445faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445f43 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall COleControlSite::SetExtent(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleControlSite::SetExtent(COleControlSite *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CClientDC local_2c [20];
  tagSIZE local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x445f0e;
  local_18[0].cy = *(int *)(this + 0x3c) - *(int *)(this + 0x34);
  local_18[0].cx = *(int *)(this + 0x38) - *(int *)(this + 0x30);
  CClientDC::CClientDC(local_2c,(CWnd *)0x0);
  local_8 = 0;
  CDC::DPtoHIMETRIC((CDC *)local_2c,local_18);
  piVar1 = *(int **)(this + 0x50);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  iVar2 = *piVar1;
  guard_check_icall(piVar1,1,local_18);
  iVar2 = (**(code **)(iVar2 + 0x44))();
  if (-1 < iVar2) {
    iVar3 = **(int **)(this + 0x50);
    guard_check_icall(*(int **)(this + 0x50),1,local_18);
    iVar3 = (**(code **)(iVar3 + 0x48))();
    if (-1 < iVar3) {
      CDC::HIMETRICtoDP((CDC *)local_2c,local_18);
      *(int *)(this + 0x38) = *(int *)(this + 0x30) + local_18[0].cx;
      *(int *)(this + 0x3c) = *(int *)(this + 0x34) + local_18[0].cy;
    }
  }
  CClientDC::~CClientDC(local_2c);
  return (uint)(-1 < iVar2);
}

