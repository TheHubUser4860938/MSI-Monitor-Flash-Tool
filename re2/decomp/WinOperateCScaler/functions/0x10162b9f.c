// rea decompile_all
// name: do_get
// address: 0x10162b9f
// body: available
// range: 0x10162b9f-0x10162c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,unsigned __int64 &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,unsigned __int64 &)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,uint *param_7,undefined8 *param_8)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_4c [8];
  undefined4 *local_44;
  undefined8 *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar1 = param_7;
  uStack_4 = 0x3c;
  local_8 = 0x10162bab;
  local_38 = 0;
  local_44 = param_1;
  local_40 = param_8;
  FUN_100103a0(local_4c);
  local_8 = 0;
  piVar5 = &local_38;
  uVar3 = Getifld();
  uVar4 = __Stoullx(local_34,&local_3c,uVar3,piVar5);
  local_8 = 0xffffffff;
  FUN_10007650();
  cVar2 = equal(&param_4);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((local_3c == local_34) || (local_38 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *local_40 = uVar4;
  }
  *local_44 = param_2;
  local_44[1] = param_3;
  FUN_10154478();
  return;
}

