// rea decompile_all
// name: CreateControl
// address: 0x43f915
// body: available
// range: 0x43f915-0x43f9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,char const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t
   *,class COleControlSite * *)
    public: int __thiscall COleControlContainer::CreateControl(class CWnd *,struct _GUID const
   &,wchar_t const *,unsigned long,struct tagRECT const &,unsigned int,class CFile *,int,wchar_t
   *,class COleControlSite * *)
   
   Library: Visual Studio 2015 Release */

void CreateControl(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  RECT *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  CopyRect(&local_18,param_5);
  local_30 = local_18.right - local_18.left;
  local_38 = local_18.left;
  local_2c = local_18.bottom - local_18.top;
  local_34 = local_18.top;
  CreateControl(local_24,local_20,local_1c,param_4,&local_38,&local_30,param_6,param_7,param_8,
                param_9,param_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

