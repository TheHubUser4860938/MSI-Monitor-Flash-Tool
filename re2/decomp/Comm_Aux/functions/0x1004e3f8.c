// rea decompile_all
// name: CArchiveException::GetErrorMessage
// address: 0x1004e3f8
// body: available
// range: 0x1004e3f8-0x1004e4b3 inclusive
// range: 0x1004e4ba-0x1004e4c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CArchiveException::GetErrorMessage(wchar_t *,unsigned
   int,unsigned int *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CArchiveException::GetErrorMessage
          (CArchiveException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  if (param_1 == (wchar_t *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = *(int *)(this + 8) + 0xf1b0;
    }
    local_8 = 0;
    uVar1 = FUN_10048e90();
    FUN_10034c30(uVar1);
    local_8._0_1_ = 1;
    iVar2 = FUN_100349e0(*(int *)(this + 0xc) + -0x10);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar3 = FUN_10048ace(0xf006);
      if (iVar3 != 0) {
        FUN_10034d90(iVar3,0xf006);
      }
    }
    AfxFormatString1(local_18,*(int *)(this + 8) + 0xf1b0,iVar2 + 0x10);
    uVar1 = FUN_10189012(param_1,param_2,local_18[0],0xffffffff);
    FUN_10034d00(uVar1);
    FUN_10034f00();
    FUN_10034f00();
    iVar2 = 1;
  }
  return iVar2;
}

