// rea decompile_all
// name: FUN_004b1610
// address: 0x4b1610
// body: available
// range: 0x4b1610-0x4b1791 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b16ee to 0x4b17c1 FUN_004b17c1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004b1610(undefined4 param_1,int *param_2)

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
  local_8 = 0x4b161f;
  local_24 = in_ECX;
  iVar2 = FUN_004531a6();
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
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = 0;
    pWVar4 = (LPWSTR)FUN_0040ed00(0x104);
    GetTempPathW(0x104,pWVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_1c,-1);
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8._0_1_ = 1;
    pWVar4 = (LPWSTR)FUN_0040ed00(0x104);
    GetTempFileNameW(local_1c,L"AFX",0,pWVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_18,-1);
    local_20 = CreateFileW(local_18[0],0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x4000100,
                           (HANDLE)0x0);
    if (local_20 == (HANDLE)0xffffffff) {
      FUN_0040efa0();
      uVar3 = FUN_004b17c1();
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
    FUN_00438358();
    uVar3 = 1;
    local_8 = 1;
    puVar5 = (undefined4 *)FUN_004b12bc(&param_1);
    *puVar5 = local_20;
    FUN_0040efa0();
    FUN_0040efa0();
  }
  return uVar3;
}

