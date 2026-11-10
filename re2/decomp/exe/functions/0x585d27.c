// rea decompile_all
// name: common_ftell_translated_utf8_nolock
// address: 0x585d27
// body: available
// range: 0x585d27-0x585ec1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __int64 __cdecl common_ftell_translated_utf8_nolock(class __crt_stdio_stream,__int64)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_ftell_translated_utf8_nolock(FILE *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  __int64 _Var11;
  uint local_1014;
  uint local_1010;
  undefined4 local_100c;
  byte local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  uVar1 = __fileno(param_1);
  if (param_1->_base != (char *)0x0) {
    iVar2 = (int)param_1->_ptr - param_1->_cnt;
    lVar9 = __alldiv(iVar2,iVar2 >> 0x1f,2,0);
    iVar5 = (int)((ulonglong)lVar9 >> 0x20);
    local_100c = (uint)lVar9;
    iVar7 = (uVar1 & 0x3f) * 0x30;
    lVar10 = __lseeki64(uVar1,(ulonglong)*(uint *)((&DAT_006190a0)[(int)uVar1 >> 6] + 0x24 + iVar7),
                        unaff_EDI);
    iVar6 = (int)((ulonglong)lVar10 >> 0x20);
    local_1010 = (uint)lVar10;
    iVar2 = (&DAT_006190a0)[(int)uVar1 >> 6];
    if (((local_1010 == *(uint *)(iVar2 + 0x20 + iVar7)) &&
        (iVar6 == *(int *)(iVar2 + 0x24 + iVar7))) &&
       (BVar3 = ReadFile(*(HANDLE *)(iVar2 + 0x18 + iVar7),local_1008,0x1000,&local_1014,
                         (LPOVERLAPPED)0x0), BVar3 != 0)) {
      lVar10 = __lseeki64(uVar1,(ulonglong)param_3,unaff_EDI);
      if ((((int)((ulonglong)lVar10 >> 0x20) != 0 && -1 < lVar10) || (-1 < lVar10)) &&
         ((lVar9 < 0 || ((lVar9 < 0x100000000 && (local_100c <= local_1014)))))) {
        iVar2 = 0;
        pbVar4 = local_1008;
        uVar1 = 0;
        if ((local_100c != 0) || (iVar5 != 0)) {
          do {
            if (local_1008 + local_1014 <= pbVar4) break;
            if (*pbVar4 == 0xd) {
              if ((pbVar4 < local_1008 + (local_1014 - 1)) && (pbVar4[1] == 10)) {
                pbVar4 = pbVar4 + 1;
              }
            }
            else {
              pbVar4 = pbVar4 + (char)(&DAT_0060d370)[*pbVar4];
            }
            bVar8 = 0xfffffffe < uVar1;
            uVar1 = uVar1 + 1;
            iVar2 = iVar2 + (uint)bVar8;
            pbVar4 = pbVar4 + 1;
          } while ((uVar1 != local_100c) || (iVar2 != iVar5));
        }
        param_3 = ((int)pbVar4 - (int)local_1008 >> 0x1f) + iVar6 +
                  (uint)CARRY4((int)pbVar4 - (int)local_1008,local_1010);
        goto LAB_00585eb3;
      }
    }
    param_3 = 0xffffffff;
  }
LAB_00585eb3:
  _Var11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,param_3);
  return _Var11;
}

