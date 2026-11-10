// rea decompile_all
// name: CDockingManager::PaneFromPoint
// address: 0x100adf5c
// body: available
// range: 0x100adf5c-0x100adfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CBasePane * __thiscall CDockingManager::PaneFromPoint(class
   CPoint,int,unsigned long &,struct CRuntimeClass *,class CBasePane const *)const 
   
   Library: Visual Studio 2015 Release */

CBasePane * __thiscall
CDockingManager::PaneFromPoint
          (CDockingManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,int param_6,undefined4 param_7)

{
  CBasePane *pCVar1;
  int iVar2;
  
  *param_5 = 0;
  iVar2 = *(int *)this;
  guard_check_icall(param_2,param_3,param_4,1,0,0,param_7);
  pCVar1 = (CBasePane *)(**(code **)(iVar2 + 0x10))();
  if (pCVar1 != (CBasePane *)0x0) {
    if ((param_6 == 0) || (iVar2 = FUN_10019d4f(param_6), iVar2 != 0)) {
      iVar2 = CGlobalUtils::CheckAlignment
                        ((CGlobalUtils *)&PTR_vftable_101d3944,param_2,param_3,pCVar1,param_4,this,0
                         ,param_5,0xf000,0);
      if (iVar2 == 0) {
        pCVar1 = (CBasePane *)0x0;
      }
    }
    else {
      pCVar1 = (CBasePane *)0x0;
    }
  }
  return pCVar1;
}

