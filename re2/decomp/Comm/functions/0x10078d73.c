// rea decompile_all
// name: FUN_10078d73
// address: 0x10078d73
// body: available
// range: 0x10078d73-0x10078e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078e33 to 0x10012a59 FUN_10012a59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10078d73(CSimpleStringT<wchar_t,0> *param_1,undefined4 param_2,undefined4 param_3)

{
  errno_t eVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_44 [36];
  void *local_20;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  FillInToolInfo(local_44,param_2,param_3);
  local_14 = 0x4d;
  uStack_10 = 0x430046;
  uStack_c = 0;
  local_20 = (void *)FUN_100035b0(0x405);
  _memset(local_20,0,0x800);
  eVar1 = _memcpy_s((void *)((int)local_20 + 0x800),10,&local_14,10);
  FUN_10003260(eVar1);
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x438,0,(LPARAM)local_44);
  iVar2 = _memcmp(&local_14,(void *)((int)local_20 + 0x800),10);
  if (iVar2 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(param_1,-1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a59();
}

