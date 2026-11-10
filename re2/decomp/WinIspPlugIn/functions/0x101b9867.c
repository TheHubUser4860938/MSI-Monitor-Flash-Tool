// rea decompile_all
// name: FUN_101b9867
// address: 0x101b9867
// body: available
// range: 0x101b9867-0x101b9a18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101b9a18 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101b9867(__crt_locale_pointers *param_1,int param_2,wchar_t *param_3,uint param_4,
                 int *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  char *_Memory;
  wchar_t *local_8c;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_8c = param_3;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar2 = InternalGetLocaleInfoA(param_1,param_3,param_4,local_88,0x80);
    if (iVar2 != 0) {
      iVar3 = __calloc_base(iVar2,1);
      *param_5 = iVar3;
      FID_conflict__free((void *)0x0);
      if ((*param_5 != 0) && (iVar2 = FUN_101b6213(*param_5,iVar2,local_88,iVar2 + -1), iVar2 != 0))
      {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_101b99fd;
    }
    DVar4 = GetLastError();
    if ((DVar4 != 0x7a) ||
       (iVar2 = InternalGetLocaleInfoA(param_1,param_3,param_4,(char *)0x0,0), iVar2 == 0))
    goto LAB_101b99fd;
    _Memory = (char *)__calloc_base(iVar2,1);
    if (_Memory != (char *)0x0) {
      iVar2 = InternalGetLocaleInfoA(param_1,local_8c,param_4,_Memory,iVar2);
LAB_101b996c:
      if (iVar2 != 0) {
        *param_5 = (int)_Memory;
        _Memory = (char *)0x0;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_8c = (wchar_t *)0x0;
        iVar2 = ___acrt_GetLocaleInfoEx_16(param_3,param_4 | 0x20000000,&local_8c,2);
        if (iVar2 != 0) {
          *(undefined1 *)param_5 = local_8c._0_1_;
        }
      }
      goto LAB_101b99fd;
    }
    iVar2 = ___acrt_GetLocaleInfoEx_16(param_3,param_4,0,0);
    if (iVar2 == 0) goto LAB_101b99fd;
    _Memory = (char *)__calloc_base(iVar2,2);
    if (_Memory != (char *)0x0) {
      iVar2 = ___acrt_GetLocaleInfoEx_16(local_8c,param_4,_Memory,iVar2);
      goto LAB_101b996c;
    }
  }
  FID_conflict__free(_Memory);
LAB_101b99fd:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

