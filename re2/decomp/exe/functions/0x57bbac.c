// rea decompile_all
// name: common_fseek_binary_mode_read_only_fast_track_nolock
// address: 0x57bbac
// body: available
// range: 0x57bbac-0x57bc84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl common_fseek_binary_mode_read_only_fast_track_nolock(class
   __crt_stdio_stream,__int64,int)
   
   Library: Visual Studio 2015 Release */

bool __cdecl
common_fseek_binary_mode_read_only_fast_track_nolock
          (int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int unaff_ESI;
  longlong lVar4;
  
  if (((param_4 == 2) || ((param_1[3] & 0x4c0U) == 0)) || ((param_1[3] & 6U) != 0)) {
    return false;
  }
  if (-1 < param_1[2]) {
    uVar3 = param_1[4];
    iVar1 = (uVar3 & 0x3f) * 0x30;
    if (((*(byte *)((&DAT_006190a0)[(int)uVar3 >> 6] + 0x28 + iVar1) & 0x80) == 0) &&
       (*(char *)((&DAT_006190a0)[(int)uVar3 >> 6] + 0x29 + iVar1) == '\0')) {
      if (param_4 == 0) {
        lVar4 = __lseeki64_nolock(uVar3,0x100000000,unaff_ESI);
        if ((lVar4 < 0x100000000) && (lVar4 < 0)) {
          return false;
        }
        lVar2 = LongLongSub(CONCAT44(param_3,param_2),lVar4 - param_1[2],(__int64 *)&param_2);
        if (lVar2 < 0) {
          return false;
        }
      }
      uVar3 = param_1[1] - *param_1;
      iVar1 = (int)uVar3 >> 0x1f;
      if ((iVar1 <= param_3) && ((iVar1 < param_3 || (uVar3 <= param_2)))) {
        iVar1 = param_1[2] >> 0x1f;
        if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 <= (uint)param_1[2])))) {
          *param_1 = *param_1 + param_2;
          param_1[2] = param_1[2] - param_2;
          return true;
        }
      }
    }
  }
  return false;
}

