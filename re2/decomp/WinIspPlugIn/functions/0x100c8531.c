// rea decompile_all
// name: CMenuHash::LoadMenuBar
// address: 0x100c8531
// body: available
// range: 0x100c8531-0x100c85d8 inclusive
// range: 0x100c85ee-0x100c85f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c8548 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMenuHash::LoadMenuBar(struct HMENU__ *,class CMFCToolBar *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMenuHash::LoadMenuBar(CMenuHash *this,HMENU__ *param_1,CMFCToolBar *param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  CArchive local_84 [72];
  CFile local_3c [32];
  HANDLE local_1c;
  CMenuHash *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x100c853d;
  local_18 = this;
  if (param_1 == (HMENU__ *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  iVar2 = CMap<HMENU__*,HMENU__*&,void*,void*&>::Lookup
                    ((CMap<HMENU__*,HMENU__*&,void*,void*&> *)(this + 4),&param_1,&local_1c);
  if ((iVar2 != 0) && (DVar3 = SetFilePointer(local_1c,0,(PLONG)0x0,0), DVar3 != 0xffffffff)) {
    local_8 = 0;
    CFile::CFile(local_3c,local_1c);
    local_8._0_1_ = 1;
    CArchive::CArchive(local_84,local_3c,1,0x1000,(void *)0x0);
    *(undefined4 *)(this + 0x20) = 1;
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar1 = *(code **)(*(int *)param_2 + 8);
    guard_check_icall(local_84);
    (*pcVar1)();
    *(undefined4 *)(this + 0x20) = 0;
    CArchive::~CArchive(local_84);
    FUN_10060046();
    return 1;
  }
  return 0;
}

