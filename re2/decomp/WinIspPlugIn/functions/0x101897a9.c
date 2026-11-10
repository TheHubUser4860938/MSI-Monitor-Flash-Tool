// rea decompile_all
// name: Getint
// address: 0x101897a9
// body: available
// range: 0x101897a9-0x10189957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::time_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getint(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,int,int,int
   &,class std::ctype<unsigned short> const &)const 
    private: int __cdecl std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getint(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,int,int,int &,class std::ctype<wchar_t> const &)const 
   
   Library: Visual Studio 2015 Release */

void Getint(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6,
           int *param_7)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *local_40;
  int local_3c;
  char *local_38;
  undefined4 local_34;
  int *local_30;
  char local_29;
  char local_28;
  char local_27 [30];
  char local_9;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar5 = &local_28;
  local_34 = param_3;
  local_30 = param_7;
  local_38 = pcVar5;
  cVar2 = equal(param_3);
  if (cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*param_7 + 0x38);
    guard_check_icall(*(undefined2 *)(param_2 + 6),0);
    cVar2 = (*pcVar1)();
    if ((cVar2 == '+') || (param_7 = local_30, cVar2 == '-')) {
      pcVar5 = local_27;
      local_38 = pcVar5;
      local_28 = cVar2;
      Inc();
      param_7 = local_30;
    }
  }
  local_29 = '\0';
  cVar3 = equal(local_34);
  cVar2 = local_29;
  if (cVar3 == '\0') {
    do {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      pcVar1 = *(code **)(*param_7 + 0x38);
      guard_check_icall(*(undefined2 *)(param_2 + 6),0);
      cVar3 = (*pcVar1)();
      if (cVar3 != '0') break;
      cVar2 = '\x01';
      Inc();
      cVar3 = equal(local_34);
      param_7 = local_30;
    } while (cVar3 == '\0');
    pcVar5 = local_38;
    local_29 = cVar2;
    if (cVar2 != '\0') {
      *local_38 = '0';
      pcVar5 = local_38 + 1;
    }
  }
  while (cVar2 = equal(local_34), cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*local_30 + 0x38);
    guard_check_icall(*(undefined2 *)(param_2 + 6),0);
    cVar2 = (*pcVar1)();
    if (9 < (byte)(cVar2 - 0x30U)) break;
    *pcVar5 = cVar2;
    if (pcVar5 < &local_9) {
      pcVar5 = pcVar5 + 1;
    }
    local_29 = '\x01';
    Inc();
  }
  if (local_29 == '\0') {
    pcVar5 = &local_28;
  }
  *pcVar5 = '\0';
  local_3c = 0;
  iVar4 = __Stolx(&local_28,&local_40,10,&local_3c);
  equal(local_34);
  if ((((local_40 != &local_28) && (local_3c == 0)) && (param_4 <= iVar4)) && (iVar4 <= param_5)) {
    *param_6 = iVar4;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

