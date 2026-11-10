// rea decompile_all
// name: __Mbrtowc
// address: 0x55f020
// body: available
// range: 0x55f020-0x55f172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Mbrtowc
   
   Library: Visual Studio 2015 Release */

int __cdecl
__Mbrtowc(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4,_Cvtvec *param_5)

{
  byte *pbVar1;
  int iVar2;
  _Cvtvec *p_Var3;
  int *piVar4;
  _Cvtvec *p_Var5;
  _Cvtvec local_6c;
  byte *local_40;
  byte *local_3c;
  _Cvtvec local_34;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_40 = (byte *)param_2;
  local_3c = (byte *)param_4;
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    if (*param_2 == '\0') {
      if (param_1 != (wchar_t *)0x0) {
        *param_1 = L'\0';
      }
    }
    else {
      if (param_5 == (_Cvtvec *)0x0) {
        p_Var3 = __Getcvt(&local_6c);
        p_Var5 = &local_34;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          p_Var5->_Page = p_Var3->_Page;
          p_Var3 = (_Cvtvec *)&p_Var3->_Mbcurmax;
          p_Var5 = (_Cvtvec *)&p_Var5->_Mbcurmax;
        }
        param_5 = &local_34;
      }
      pbVar1 = local_40;
      if (param_5->_Isclocale == 0) {
        if (*(int *)local_3c == 0) {
          if ((param_5->_Isleadbyte[*local_40 >> 3] & (byte)(1 << (*local_40 & 7))) == 0) {
            iVar2 = MultiByteToWideChar(param_5->_Page,9,(LPCSTR)local_40,1,param_1,
                                        (uint)(param_1 != (wchar_t *)0x0));
            if (iVar2 != 0) goto LAB_0055f05f;
          }
          else {
            if (param_3 < param_5->_Mbcurmax) {
              *local_3c = *local_40;
              goto LAB_0055f05f;
            }
            if (((1 < param_5->_Mbcurmax) &&
                (iVar2 = MultiByteToWideChar(param_5->_Page,9,(LPCSTR)local_40,param_5->_Mbcurmax,
                                             param_1,(uint)(param_1 != (wchar_t *)0x0)), iVar2 != 0)
                ) || (pbVar1[1] != 0)) goto LAB_0055f05f;
            local_3c[0] = 0;
            local_3c[1] = 0;
            local_3c[2] = 0;
            local_3c[3] = 0;
          }
        }
        else {
          local_3c[1] = *local_40;
          if ((1 < param_5->_Mbcurmax) &&
             (iVar2 = MultiByteToWideChar(param_5->_Page,9,(LPCSTR)local_3c,2,param_1,
                                          (uint)(param_1 != (wchar_t *)0x0)), iVar2 != 0)) {
            local_3c[0] = 0;
            local_3c[1] = 0;
            local_3c[2] = 0;
            local_3c[3] = 0;
            goto LAB_0055f05f;
          }
          local_3c[0] = 0;
          local_3c[1] = 0;
          local_3c[2] = 0;
          local_3c[3] = 0;
        }
        piVar4 = __errno();
        *piVar4 = 0x2a;
      }
      else if (param_1 != (wchar_t *)0x0) {
        *param_1 = (ushort)*local_40;
      }
    }
  }
LAB_0055f05f:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

