// rea decompile_all
// name: CDC::GetHalftoneBrush
// address: 0x10069b27
// body: available
// range: 0x10069b27-0x10069bcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CBrush * __stdcall CDC::GetHalftoneBrush(void)
   
   Library: Visual Studio 2015 Release */

CBrush * CDC::GetHalftoneBrush(void)

{
  HBITMAP hbm;
  CBrush *pCVar1;
  int iVar2;
  short local_18 [8];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  FUN_1005b0a4(8);
  if (DAT_1020df18 == (HBRUSH)0x0) {
    iVar2 = 0;
    do {
      local_18[iVar2] = 0x5555 << ((byte)iVar2 & 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    hbm = CreateBitmap(8,8,1,1,local_18);
    if (hbm != (HBITMAP)0x0) {
      DAT_1020df18 = CreatePatternBrush(hbm);
      DeleteObject(hbm);
    }
  }
  if (DAT_1020df1c == '\0') {
    iVar2 = _atexit((_func_4879 *)&LAB_100696fc);
    DAT_1020df1c = '\x01' - (iVar2 != 0);
  }
  FUN_1005b118(8);
  CGdiObject::FromHandle(DAT_1020df18);
  pCVar1 = (CBrush *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar1;
}

