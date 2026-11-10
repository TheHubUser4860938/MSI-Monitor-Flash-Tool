// rea decompile_all
// name: CPaneDivider::Serialize
// address: 0x101272ad
// body: available
// range: 0x101272ad-0x10127483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneDivider::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneDivider::Serialize(CPaneDivider *this,CArchive *param_1)

{
  CPaneDivider *pCVar1;
  code *pcVar2;
  HWND pHVar3;
  CWnd *this_00;
  BOOL BVar4;
  tagRECT *ptVar5;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  CBasePane::Serialize((CBasePane *)this,param_1);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_1c = 0;
    FUN_1001a6a2(this + 0x110);
    FUN_1001a6a2(this + 0x124);
    FUN_1001b1a6(&local_18,0x10);
    FUN_1001a6a2(&local_1c);
    pCVar1 = this + 0x114;
    FUN_1001a6a2(pCVar1);
    FUN_1001a6a2(this + 0x118);
    FUN_1001a6a2(this + 300);
    FUN_1001a6a2(this + 0x11c);
    FUN_1001a6a2(this + 0x120);
    if (local_1c == 0) {
      *(uint *)pCVar1 = *(uint *)pCVar1 & 0xefffffff;
    }
    else {
      *(uint *)pCVar1 = *(uint *)pCVar1 | 0x10000000;
    }
    pcVar2 = *(code **)(*(int *)this + 0x2a8);
    guard_check_icall(0,*(undefined4 *)(this + 0x114),&local_18,*(undefined4 *)(this + 0x164),
                      *(undefined4 *)(this + 0x110),0);
    (*pcVar2)();
  }
  else {
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    ptVar5 = &local_18;
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    this_00 = CWnd::FromHandle(pHVar3);
    CWnd::ScreenToClient(this_00,ptVar5);
    FUN_1001b086(*(undefined4 *)(this + 0x110));
    FUN_1001b086(*(undefined4 *)(this + 0x124));
    FUN_1001aede(&local_18,0x10);
    BVar4 = IsWindowVisible(*(HWND *)(this + 0x20));
    FUN_1001b086(BVar4);
    FUN_1001b086(*(undefined4 *)(this + 0x114));
    FUN_1001b086(*(undefined4 *)(this + 0x118));
    FUN_1001b086(*(undefined4 *)(this + 300));
    FUN_1001b086(*(undefined4 *)(this + 0x11c));
    FUN_1001b086(*(undefined4 *)(this + 0x120));
  }
  if ((*(int **)(this + 0x168) != (int *)0x0) && (*(int *)(this + 300) != 0)) {
    pcVar2 = *(code **)(**(int **)(this + 0x168) + 8);
    guard_check_icall(param_1);
    (*pcVar2)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

