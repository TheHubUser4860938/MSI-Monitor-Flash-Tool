// rea decompile_all
// name: Create
// address: 0x10084b85
// body: available
// range: 0x10084b85-0x10084c2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CFrameWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,char const *,unsigned long,struct CCreateContext *)
    public: virtual int __thiscall CFrameWnd::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,wchar_t const *,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

undefined4
Create(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
      LPCWSTR param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  HMENU hMenu;
  
  hMenu = (HMENU)0x0;
  if (param_6 != (LPCWSTR)0x0) {
    pAVar2 = AfxGetModuleState();
    hMenu = LoadMenuW(*(HINSTANCE *)(pAVar2 + 0xc),param_6);
    if (hMenu == (HMENU)0x0) {
      pcVar1 = *(code **)(*in_ECX + 0x120);
      guard_check_icall();
      (*pcVar1)();
      return 0;
    }
  }
  FUN_10003780(param_2);
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = *(undefined4 *)(param_5 + 0x20);
  }
  iVar4 = *in_ECX;
  guard_check_icall(param_7,param_1,param_2,param_3,*param_4,param_4[1],param_4[2] - *param_4,
                    param_4[3] - param_4[1],uVar3,hMenu,param_8);
  iVar4 = (**(code **)(iVar4 + 0x5c))();
  if (iVar4 == 0) {
    if (hMenu != (HMENU)0x0) {
      DestroyMenu(hMenu);
    }
    return 0;
  }
  return 1;
}

