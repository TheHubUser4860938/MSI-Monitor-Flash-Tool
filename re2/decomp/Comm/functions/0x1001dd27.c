// rea decompile_all
// name: CWnd::XAccessible::Invoke
// address: 0x1001dd27
// body: available
// range: 0x1001dd27-0x1001dd76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::Invoke(long,struct _GUID const &,unsigned
   long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO *,unsigned int
   *)
   
   Library: Visual Studio 2015 Release */

long CWnd::XAccessible::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  long lVar1;
  undefined2 in_stack_00000012;
  uint *in_stack_00000024;
  
  FUN_10018f0d(*(undefined4 *)(param_1 + -0x14));
  lVar1 = ATL::AtlIAccessibleInvokeHelper
                    ((IAccessible *)param_1,(long)param_2,(_GUID *)param_3,_param_4,(ushort)param_5,
                     (tagDISPPARAMS *)param_6,(tagVARIANT *)param_7,(tagEXCEPINFO *)param_8,
                     in_stack_00000024);
  guard_check_icall();
  return lVar1;
}

