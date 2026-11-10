// rea decompile_all
// name: CUserTool::SetToolIcon
// address: 0x1011d916
// body: available
// range: 0x1011d916-0x1011da59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual struct HICON__ * __thiscall CUserTool::SetToolIcon(void)
   
   Library: Visual Studio 2015 Release */

HICON__ * __thiscall CUserTool::SetToolIcon(CUserTool *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD_PTR DVar5;
  HICON__ *pHVar6;
  SHFILEINFOW local_4d0;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4cc;
  local_8 = 0x1011d925;
  iVar2 = FUN_10047580(*(int *)(this + 0x14) + -0x10);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar3 = FUN_100477c0(&DAT_101d4054,0);
  if (((iVar3 == -1) && (iVar3 = FUN_100477c0(&DAT_101df028,0), iVar3 == -1)) &&
     (iVar3 = FUN_100477c0(&DAT_1021a708,0), iVar3 == -1)) {
    iVar3 = FUN_10047580(*(int *)(this + 0x14) + -0x10);
    local_8._0_1_ = 1;
    DVar4 = SearchPathW((LPCWSTR)0x0,(LPCWSTR)(iVar3 + 0x10),(LPCWSTR)0x0,0x104,local_21c,
                        (LPWSTR *)0x0);
    if (DVar4 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x14);
      guard_check_icall();
      (*pcVar1)();
      FUN_100476d0();
      goto LAB_1011da4a;
    }
    FUN_10047140(local_21c);
    local_8._0_1_ = 0;
    FUN_100476d0();
  }
  DVar5 = SHGetFileInfoW((LPCWSTR)(iVar2 + 0x10),0,&local_4d0,0x2b4,0x105);
  if (DVar5 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x14);
    guard_check_icall();
    (*pcVar1)();
  }
LAB_1011da4a:
  FUN_100476d0();
  pHVar6 = (HICON__ *)FUN_1018015d();
  return pHVar6;
}

