// rea decompile_all
// name: CMFCBaseTabCtrl::SetTabsOrder
// address: 0x100a3021
// body: available
// range: 0x100a3021-0x100a30f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCBaseTabCtrl::SetTabsOrder(class CArray<int,int> const &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::SetTabsOrder(CMFCBaseTabCtrl *this,CArray<int,int> *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  CPtrArray local_28 [8];
  undefined4 local_20;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100a302d;
  if (*(int *)(param_1 + 8) == *(int *)(this + 0xbc)) {
    CPtrArray::CPtrArray(local_28);
    iVar2 = 0;
    local_8 = 0;
    if (0 < *(int *)(this + 0xbc)) {
      do {
        puVar3 = (undefined4 *)FUN_100efaed(iVar2);
        FUN_1016326a(local_20,*puVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xbc));
    }
    bVar1 = false;
    FUN_1016329d(0,0xffffffff);
    local_14 = 0;
    if (0 < *(int *)(this + 0xbc)) {
      do {
        piVar4 = (int *)FUN_100efaed(local_14);
        iVar2 = *piVar4;
        puVar3 = (undefined4 *)FUN_100efaed(iVar2);
        FUN_1016326a(*(undefined4 *)(this + 0x9c),*puVar3);
        if ((iVar2 == *(int *)(this + 0xc0)) && (!bVar1)) {
          *(int *)(this + 0xc0) = local_14;
          bVar1 = true;
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this + 0xbc));
    }
    CPtrArray::~CPtrArray(local_28);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

