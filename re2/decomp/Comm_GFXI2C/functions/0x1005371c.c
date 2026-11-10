// rea decompile_all
// name: ___crtMessageBoxA
// address: 0x1005371c
// body: available
// range: 0x1005371c-0x10053884 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_18 [8];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = __encoded_null();
  local_8 = 0;
  if (DAT_10069648 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_10069648 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1006964c = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_10069650 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetUserObjectInformationA");
    DAT_10069658 = __encode_pointer((int)pFVar2);
    if (DAT_10069658 != 0) {
      pFVar2 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_10069654 = __encode_pointer((int)pFVar2);
    }
  }
  if ((DAT_10069654 != iVar1) && (DAT_10069658 != iVar1)) {
    pcVar3 = (code *)__decode_pointer(DAT_10069654);
    pcVar4 = (code *)__decode_pointer(DAT_10069658);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar5 = (*pcVar3)(), iVar5 == 0 ||
         (iVar5 = (*pcVar4)(iVar5,1,local_18,0xc,local_c), iVar5 == 0)) || ((local_10 & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_1005385e;
    }
  }
  if ((((DAT_1006964c != iVar1) &&
       (pcVar3 = (code *)__decode_pointer(DAT_1006964c), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_10069650 != iVar1 &&
      (pcVar3 = (code *)__decode_pointer(DAT_10069650), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1005385e:
  pcVar3 = (code *)__decode_pointer(DAT_10069648);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar3)(local_8,_LpText,_LpCaption,_UType);
  return iVar1;
}

