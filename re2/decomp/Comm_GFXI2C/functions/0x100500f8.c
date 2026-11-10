// rea decompile_all
// name: __cftoe2_l
// address: 0x100500f8
// body: available
// range: 0x100500f8-0x10050266 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *_Dst;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar5 = 0x16;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 1) {
      iVar5 = 0;
    }
    if (iVar5 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar3 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar3 = in_EAX + 1;
      }
      puVar4 = puVar3;
      if (0 < param_2) {
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar4;
        *puVar4 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar3 = (undefined1 *)0xffffffff;
      }
      else {
        puVar3 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar7 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar3,"e+000");
      if (eVar2 != 0) {
        pcVar7 = (char *)0x0;
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar5 = param_4[1] + -1;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
          _Dst[1] = '-';
        }
        if (99 < iVar5) {
          pcVar7 = (char *)0x64;
          iVar6 = iVar5 / 100;
          iVar5 = iVar5 % 100;
          _Dst[2] = _Dst[2] + (char)iVar6;
        }
        if (9 < iVar5) {
          pcVar7 = (char *)0xa;
          iVar6 = iVar5 / 10;
          iVar5 = iVar5 % 10;
          _Dst[3] = _Dst[3] + (char)iVar6;
        }
        _Dst[4] = _Dst[4] + (char)iVar5;
      }
      if (((DAT_100696a4 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar7 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (int)pcVar7;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (int)pcVar7;
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  iVar6 = 0;
  *piVar1 = iVar5;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar6;
}

