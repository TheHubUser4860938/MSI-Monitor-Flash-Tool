// rea decompile_all
// name: CMFCBaseAccessibleObject::XAccessible::GetIDsOfNames
// address: 0x100d40eb
// body: available
// range: 0x100d40eb-0x100d4137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall CMFCBaseAccessibleObject::XAccessible::GetIDsOfNames(struct _GUID
   const &,wchar_t * *,unsigned int,unsigned long,long *)
   
   Library: Visual Studio 2015 Release */

long CMFCBaseAccessibleObject::XAccessible::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  int iVar1;
  IDispatch *pIVar2;
  long lVar3;
  undefined4 in_stack_00000018;
  
  FUN_10024293(param_1[-4].Data1);
  pIVar2 = CCmdTarget::GetIDispatch((CCmdTarget *)&param_1[-6].Data2,0);
  iVar1 = *(int *)pIVar2;
  guard_check_icall(pIVar2,param_2,param_3,param_4,param_5,in_stack_00000018);
  lVar3 = (**(code **)(iVar1 + 0x14))();
  guard_check_icall();
  return lVar3;
}

