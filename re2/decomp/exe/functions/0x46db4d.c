// rea decompile_all
// name: CMFCBaseAccessibleObject::XAccessible::Invoke
// address: 0x46db4d
// body: available
// range: 0x46db4d-0x46dba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall CMFCBaseAccessibleObject::XAccessible::Invoke(long,struct _GUID
   const &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct
   tagEXCEPINFO *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

long CMFCBaseAccessibleObject::XAccessible::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  int iVar1;
  IDispatch *pIVar2;
  long lVar3;
  undefined2 in_stack_00000012;
  undefined4 in_stack_00000024;
  
  FUN_00434a7a(*(undefined4 *)(param_1 + -0x40));
  pIVar2 = CCmdTarget::GetIDispatch((CCmdTarget *)(param_1 + -0x5c),0);
  iVar1 = *(int *)pIVar2;
  guard_check_icall(pIVar2,param_2,param_3,_param_4,param_5,param_6,param_7,param_8,
                    in_stack_00000024);
  lVar3 = (**(code **)(iVar1 + 0x18))();
  guard_check_icall();
  return lVar3;
}

