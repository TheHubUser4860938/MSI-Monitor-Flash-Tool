// rea decompile_all
// name: CMFCShellListCtrl::OnSetColumns
// address: 0x1003f789
// body: available
// range: 0x1003f789-0x1003f85a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCShellListCtrl::OnSetColumns(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCShellListCtrl::OnSetColumns(CMFCShellListCtrl *this)

{
  code *pcVar1;
  int iVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  int iVar5;
  wchar_t *local_28;
  undefined4 local_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1003f795;
  pcVar1 = *(code **)(*(int *)this + 0x168);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar5 = 0;
  LVar3 = SendMessageW(*(HWND *)(iVar2 + 0x20),0x1200,0,0);
  if (0 < LVar3) {
    do {
      SendMessageW(*(HWND *)(this + 0x20),0x101c,0,0);
      LVar3 = LVar3 + -1;
    } while (LVar3 != 0);
  }
  local_24[0] = 0x42e8;
  local_24[1] = 0x42e9;
  local_24[2] = 0x42ea;
  local_24[3] = 0x42eb;
  do {
    uVar4 = FUN_1001e20a();
    FUN_1001d224(uVar4);
    local_8 = 0;
    iVar2 = FUN_1001de45(local_24[iVar5]);
    if (iVar2 != 0) {
      FUN_10018c20(iVar2,local_24[iVar5]);
    }
    CListCtrl::InsertColumn
              ((CListCtrl *)this,iVar5,local_28,(uint)(iVar5 == 1),
               (-(uint)(iVar5 != 1) & 0x41) + 0x4b,iVar5);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_28 + -8));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  FUN_10154478();
  return;
}

