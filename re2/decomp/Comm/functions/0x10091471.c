// rea decompile_all
// name: FUN_10091471
// address: 0x10091471
// body: available
// range: 0x10091471-0x100915f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009154f to 0x10091622 FUN_10091622 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_10091471(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  LPWSTR pWVar4;
  undefined4 *puVar5;
  int in_ECX;
  CArchive local_90 [72];
  CFile local_48 [32];
  CMap<HMENU__*,HMENU__*&,void*,void*&> *local_28;
  int local_24;
  void *local_20;
  LPCWSTR local_1c;
  LPCWSTR local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x10091480;
  local_24 = in_ECX;
  iVar2 = FUN_1005f182();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_28 = (CMap<HMENU__*,HMENU__*&,void*,void*&> *)(in_ECX + 4);
    local_20 = (HANDLE)0x0;
    iVar2 = CMap<HMENU__*,HMENU__*&,void*,void*&>::Lookup(local_28,(HMENU__ **)&param_1,&local_20);
    if (iVar2 != 0) {
      CloseHandle(local_20);
    }
    uVar3 = FUN_10013071();
    FUN_10003190(uVar3);
    local_8 = 0;
    pWVar4 = (LPWSTR)FUN_100035b0(0x104);
    GetTempPathW(0x104,pWVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_1c,-1);
    uVar3 = FUN_10013071();
    FUN_10003190(uVar3);
    local_8._0_1_ = 1;
    pWVar4 = (LPWSTR)FUN_100035b0(0x104);
    GetTempFileNameW(local_1c,L"AFX",0,pWVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_18,-1);
    local_20 = CreateFileW(local_18[0],0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x4000100,
                           (HANDLE)0x0);
    if (local_20 == (HANDLE)0xffffffff) {
      FUN_10003460();
      uVar3 = FUN_10091622();
      return uVar3;
    }
    local_8._0_1_ = 2;
    CFile::CFile(local_48,local_20);
    local_8._0_1_ = 3;
    CArchive::CArchive(local_90,local_48,0,0x1000,(void *)0x0);
    *(undefined4 *)(in_ECX + 0x20) = 1;
    local_8 = CONCAT31(local_8._1_3_,4);
    pcVar1 = *(code **)(*param_2 + 8);
    guard_check_icall(local_90);
    (*pcVar1)();
    CArchive::Flush(local_90);
    *(undefined4 *)(local_24 + 0x20) = 0;
    CArchive::~CArchive(local_90);
    FUN_10028ec2();
    uVar3 = 1;
    local_8 = 1;
    puVar5 = (undefined4 *)FUN_100911df(&param_1);
    *puVar5 = local_20;
    FUN_10003460();
    FUN_10003460();
  }
  return uVar3;
}

