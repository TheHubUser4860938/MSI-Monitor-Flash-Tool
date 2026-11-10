// rea decompile_all
// name: _WinbaseIsolationAwarePrivatetRgzlnPgpgk@0
// address: 0x1004c2a0
// body: available
// range: 0x1004c2a0-0x1004c451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _WinbaseIsolationAwarePrivatetRgzlnPgpgk@0
   
   Library: Visual Studio 2015 Release */

void _WinbaseIsolationAwarePrivatetRgzlnPgpgk_0(void)

{
  int iVar1;
  code *pcVar2;
  DWORD DVar3;
  undefined4 local_27c [8];
  undefined4 local_25c;
  undefined4 local_258;
  WCHAR *local_254;
  undefined4 local_248;
  HMODULE local_240;
  int local_23c [2];
  undefined4 local_234;
  HMODULE local_230;
  WCHAR local_22c [272];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_102294a8;
  uStack_c = 0x1004c2af;
  local_234 = 0;
  if (((DAT_10243548 != 0) || (DAT_1023d368 != -1)) ||
     (iVar1 = _IsolationAwareQueryActCtxW_28(0x80000010,&DAT_1023d368,0,1,local_23c,8,0), iVar1 == 0
     )) goto LAB_1004c44a;
  if (local_23c[0] == 0) {
    pcVar2 = (code *)_IsolationAwarePrivatezltRgCebPnQQeRff_12
                               (&PTR_FUN_101d4018,&DAT_10243568,"GetModuleHandleExW");
    if (pcVar2 == (code *)0x0) goto LAB_1004c44a;
    guard_check_icall(6,&DAT_1023d368,&local_230);
    iVar1 = (*pcVar2)();
    if ((iVar1 == 0) || (DVar3 = GetModuleFileNameW(local_230,local_22c,0x105), DVar3 == 0))
    goto LAB_1004c44a;
    if (0x104 < DVar3) {
      SetLastError(0x6f);
      goto LAB_1004c44a;
    }
    local_25c = 0x20;
    local_258 = 0x88;
    local_254 = local_22c;
    local_248 = 3;
    local_240 = local_230;
    local_23c[0] = _IsolationAwareCreateActCtxW_4(&local_25c);
    if (local_23c[0] == -1) {
      DVar3 = GetLastError();
      if (((DVar3 != 0x714) && (DVar3 != 0x715)) &&
         ((DVar3 != 0x717 && (((DVar3 != 0x716 && (DVar3 != 2)) && (DVar3 != 3))))))
      goto LAB_1004c44a;
      local_23c[0] = 0;
    }
    _DAT_1024354c = 1;
  }
  DAT_1023d368 = local_23c[0];
  iVar1 = _IsolationAwareActivateActCtx_8(local_23c[0],&local_234);
  if (iVar1 != 0) {
    local_8 = (undefined *)0x0;
    local_27c[0] = 0x40;
    iVar1 = _IsolationAwareFindActCtxSectionStringW_20(0,0,2,L"Comctl32.dll",local_27c);
    if (iVar1 != 0) {
      LoadLibraryW(L"Comctl32.dll");
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_1004c454();
  }
LAB_1004c44a:
  FUN_10180309();
  return;
}

