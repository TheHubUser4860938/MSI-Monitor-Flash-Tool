// rea decompile_all
// name: __resetstkoflw
// address: 0x101a9738
// body: available
// range: 0x101a9738-0x101a9808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2015 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  uint dwSize;
  LPVOID lpAddress;
  undefined4 uStack_68;
  _SYSTEM_INFO local_58;
  _MEMORY_BASIC_INFORMATION local_34;
  DWORD local_18;
  undefined1 *local_14;
  PVOID local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uStack_68 = 0x101a9755;
  local_14 = (undefined1 *)&uStack_68;
  SVar1 = VirtualQuery(&uStack_68,&local_34,0x1c);
  if (SVar1 != 0) {
    local_10 = local_34.AllocationBase;
    GetSystemInfo(&local_58);
    local_c = 0;
    iVar2 = ___acrt_SetThreadStackGuarantee_4(&local_c);
    iVar4 = 0;
    if ((iVar2 != 0) && (local_c != 0)) {
      iVar4 = local_c;
    }
    dwSize = iVar4 + -1 + local_58.dwPageSize & ~(local_58.dwPageSize - 1);
    if (dwSize != 0) {
      dwSize = dwSize + local_58.dwPageSize;
    }
    if (dwSize < local_58.dwPageSize * 2) {
      dwSize = local_58.dwPageSize * 2;
    }
    lpAddress = (LPVOID)((~(local_58.dwPageSize - 1) & (uint)local_14) - dwSize);
    if (((LPVOID)((int)local_10 + local_58.dwPageSize) <= lpAddress) &&
       (pvVar3 = VirtualAlloc(lpAddress,dwSize,0x1000,4), pvVar3 != (LPVOID)0x0)) {
      VirtualProtect(lpAddress,dwSize,0x104,&local_18);
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

