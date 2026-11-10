// rea decompile_all
// name: CCmdTarget::GetTypeInfoOfGuid
// address: 0x10147508
// body: available
// range: 0x10147508-0x101476b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: long __thiscall CCmdTarget::GetTypeInfoOfGuid(unsigned long,struct _GUID const &,struct
   ITypeInfo * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCmdTarget::GetTypeInfoOfGuid(CCmdTarget *this,ulong param_1,_GUID *param_2,ITypeInfo **param_3)

{
  code *pcVar1;
  CTypeLibCache *this_00;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  long lVar4;
  undefined4 local_234;
  ITypeLib *local_224 [2];
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x10147517;
  FUN_10019bf6(0xd);
  pcVar1 = *(code **)(*(int *)this + 0x20);
  guard_check_icall();
  this_00 = (CTypeLibCache *)(*pcVar1)();
  local_224[0] = (ITypeLib *)0x0;
  iVar2 = CTypeLibCache::LookupTypeInfo(this_00,param_1,param_2,param_3);
  if (iVar2 == 0) {
    iVar2 = CTypeLibCache::Lookup(this_00,param_1,local_224);
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x24);
      guard_check_icall(param_1,local_224);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        FUN_10018f0d(*(undefined4 *)(this + 0x1c));
        local_8 = 0;
        pAVar3 = AfxGetModuleState();
        GetModuleFileNameW(*(HMODULE *)(pAVar3 + 8),local_21c,0x104);
        FUN_100037c0(local_21c);
        iVar2 = Ordinal_161(local_234,local_224);
        if (iVar2 < 0) {
          local_224[0] = (ITypeLib *)0x0;
        }
        FUN_10003460();
        local_8 = 0xffffffff;
        guard_check_icall();
      }
      CTypeLibCache::Cache(this_00,param_1,local_224[0]);
    }
    if (local_224[0] != (ITypeLib *)0x0) {
      pcVar1 = *(code **)(*(int *)local_224[0] + 0x18);
      guard_check_icall(local_224[0],param_2,param_3);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)local_224[0] + 8);
      guard_check_icall(local_224[0]);
      (*pcVar1)();
      CTypeLibCache::CacheTypeInfo(this_00,param_1,param_2,*param_3);
    }
  }
  FUN_10019c6a(0xd);
  lVar4 = FUN_101490fe();
  return lVar4;
}

