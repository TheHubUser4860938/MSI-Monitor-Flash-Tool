// rea decompile_all
// name: CreateEx
// address: 0x1012ab95
// body: available
// range: 0x1012ab95-0x1012acba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CDockablePane::CreateEx(unsigned long,char const *,class CWnd
   *,struct tagRECT const &,int,unsigned int,unsigned long,unsigned long,unsigned long,struct
   CCreateContext *)
    public: virtual int __thiscall CDockablePane::CreateEx(unsigned long,wchar_t const *,class CWnd
   *,struct tagRECT const &,int,unsigned int,unsigned long,unsigned long,unsigned long,struct
   CCreateContext *)
   
   Library: Visual Studio 2015 Release */

undefined4
CreateEx(undefined4 param_1,int param_2,undefined4 param_3,RECT *param_4,int param_5,
        undefined4 param_6,uint param_7,byte param_8,undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if ((param_7 & 0x40) != 0) {
    in_ECX[0x62] = (int)&PTR_s_CMultiPaneFrameWnd_1023d950;
  }
  if ((param_8 & 0x40) == 0) {
    if ((param_8 & 0x20) != 0) {
      in_ECX[0xd2] = (int)&PTR_s_CTabbedPane_1023d9c0;
    }
  }
  else {
    in_ECX[0xd2] = (int)&PTR_s_CMFCOutlookBar_1023d668;
  }
  if (((param_7 & 0xc00000) != 0) || (param_5 != 0)) {
    param_5 = 1;
    param_7 = param_7 & 0xff3fffff;
    in_ECX[0xb6] = 1;
  }
  iVar2 = CreateEx(param_1,0,param_7,param_4,param_3,param_6,param_9,param_10);
  uVar3 = 0;
  if (iVar2 != 0) {
    CopyRect((LPRECT)(in_ECX + 0xc3),param_4);
    pcVar1 = *(code **)(*in_ECX + 0x1e0);
    guard_check_icall(param_7 & 0xf000);
    (*pcVar1)();
    pcVar1 = *(code **)(*in_ECX + 0x1f0);
    guard_check_icall(param_5);
    (*pcVar1)();
    iVar2 = CSize::operator!=((CSize *)(in_ECX + 0x32),(tagSIZE)0x0);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*in_ECX + 0x1a4);
      guard_check_icall(param_5);
      iVar2 = (*pcVar1)();
      in_ECX[0x33] = in_ECX[0x33] + iVar2;
      in_ECX[0xc5] = in_ECX[0x32] + in_ECX[0xc3];
      in_ECX[0xc6] = in_ECX[0xc4] + in_ECX[0x33];
    }
    if (param_2 != 0) {
      FUN_1005979b(param_2);
    }
    uVar3 = 1;
  }
  return uVar3;
}

