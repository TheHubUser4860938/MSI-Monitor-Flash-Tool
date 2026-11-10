// rea decompile_all
// name: FUN_0058ce22
// address: 0x58ce22
// body: available
// range: 0x58ce22-0x58cf6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x58cf6c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0058ce22(char *param_1,uint param_2,int param_3,char param_4,int param_5,int *param_6,
            char param_7,__crt_locale_pointers *param_8)

{
  code *pcVar1;
  int *piVar2;
  char *_SizeInBytes;
  errno_t eVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int local_14;
  int local_10;
  char local_8;
  
  iVar6 = param_3;
  if (param_3 < 1) {
    iVar6 = 0;
  }
  if (iVar6 + 9U < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_8);
    if (param_7 != '\0') {
      shift_bytes(param_1,param_2,param_1 + (*param_6 == 0x2d),(uint)(0 < param_3));
    }
    pcVar7 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = '-';
      pcVar7 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar7 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      *pcVar7 = *(char *)**(undefined4 **)(local_10 + 0x88);
    }
    pcVar7 = pcVar7 + (uint)(param_7 == '\0') + param_3;
    _SizeInBytes = (char *)0xffffffff;
    if (param_2 != 0xffffffff) {
      _SizeInBytes = param_1 + (param_2 - (int)pcVar7);
    }
    eVar3 = _strcpy_s(pcVar7,(rsize_t)_SizeInBytes,"e+000");
    if (eVar3 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    if (param_4 != '\0') {
      *pcVar7 = 'E';
    }
    if (*(char *)param_6[2] != '0') {
      iVar6 = param_6[1] + -1;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
        pcVar7[1] = '-';
      }
      if (99 < iVar6) {
        iVar4 = iVar6 / 100;
        iVar6 = iVar6 % 100;
        pcVar7[2] = pcVar7[2] + (char)iVar4;
      }
      if (9 < iVar6) {
        iVar4 = iVar6 / 10;
        iVar6 = iVar6 % 10;
        pcVar7[3] = pcVar7[3] + (char)iVar4;
      }
      pcVar7[4] = pcVar7[4] + (char)iVar6;
    }
    if ((param_5 == 2) && (pcVar7[2] == '0')) {
      FUN_00572d00(pcVar7 + 2,pcVar7 + 3,3);
    }
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  else {
    piVar2 = __errno();
    uVar5 = 0x22;
    *piVar2 = 0x22;
    FUN_0057662d();
  }
  return uVar5;
}

