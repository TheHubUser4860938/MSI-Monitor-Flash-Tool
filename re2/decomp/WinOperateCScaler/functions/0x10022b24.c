// rea decompile_all
// name: GetProfileBinary
// address: 0x10022b24
// body: available
// range: 0x10022b24-0x10022c68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWinApp::GetProfileBinary(char const *,char const *,unsigned char
   * *,unsigned int *)
    public: virtual int __thiscall CWinApp::GetProfileBinary(wchar_t const *,wchar_t const
   *,unsigned char * *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

int GetProfileBinary(wchar_t *param_1,LPCWSTR param_2,int *param_3,uint *param_4)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  HKEY__ *hKey;
  LSTATUS LVar5;
  LPBYTE lpData;
  int iVar6;
  CWinApp *in_ECX;
  int iVar7;
  HKEY__ *local_28;
  undefined4 local_24;
  undefined4 local_20;
  DWORD local_1c;
  DWORD local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10022b30;
  iVar7 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (*(int *)(in_ECX + 0x58) == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x84);
    guard_check_icall(local_14,param_1,param_2);
    (*pcVar1)();
    local_8 = 1;
    uVar2 = *(uint *)(local_14[0] + -0xc);
    local_1c = uVar2;
    if (uVar2 != 0) {
      *param_4 = uVar2 >> 1;
      iVar6 = FUN_1001cfdc(uVar2 >> 1);
      *param_3 = iVar6;
      if (0 < (int)uVar2) {
        do {
          cVar3 = FUN_1001ea46(iVar7 + 1);
          cVar4 = FUN_1001ea46(iVar7);
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = iVar7 + 1;
          }
          iVar7 = iVar7 + 2;
          *(char *)((iVar6 >> 1) + *param_3) = cVar4 + (cVar3 + -1) * '\x10' + -0x41;
        } while (iVar7 < (int)local_1c);
      }
      iVar7 = 1;
    }
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    return iVar7;
  }
  hKey = CWinApp::GetSectionKey(in_ECX,param_1,(CAtlTransactionManager *)0x0);
  if (hKey == (HKEY__ *)0x0) {
    return 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = hKey;
  LVar5 = RegQueryValueExW(hKey,param_2,(LPDWORD)0x0,&local_1c,(LPBYTE)0x0,&local_18);
  *param_4 = local_18;
  if (LVar5 == 0) {
    lpData = (LPBYTE)FUN_1001cfdc(local_18);
    *param_3 = (int)lpData;
    LVar5 = RegQueryValueExW(hKey,param_2,(LPDWORD)0x0,&local_1c,lpData,&local_18);
    if (LVar5 == 0) {
      iVar7 = 1;
      goto LAB_10022bc1;
    }
  }
  FID_conflict__free((void *)*param_3);
  *param_3 = 0;
LAB_10022bc1:
  ATL::CRegKey::Close((CRegKey *)&local_28);
  return iVar7;
}

