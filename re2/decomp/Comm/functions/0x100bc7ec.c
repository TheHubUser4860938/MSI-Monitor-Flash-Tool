// rea decompile_all
// name: CDockingPanesRow::CommitTrans
// address: 0x100bc7ec
// body: available
// range: 0x100bc7ec-0x100bc8e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingPanesRow::CommitTrans(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::CommitTrans(CDockingPanesRow *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  HWND pHVar5;
  CWnd *this_00;
  RECT *pRVar6;
  int local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_2c = *(int *)(this + 0x28);
  while (local_2c != 0) {
    piVar2 = (int *)FUN_1002466e(&local_2c);
    piVar2 = (int *)*piVar2;
    pcVar1 = *(code **)(*piVar2 + 0x17c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
      local_28.left = 0;
      local_18.left = piVar2[0x2a];
      local_18.top = piVar2[0x2b];
      local_18.right = piVar2[0x2c];
      local_18.bottom = piVar2[0x2d];
      local_28.top = local_28.left;
      local_28.right = local_28.left;
      local_28.bottom = local_28.left;
      ::GetWindowRect((HWND)piVar2[8],&local_28);
      BVar4 = EqualRect(&local_18,&local_28);
      if (BVar4 == 0) {
        pRVar6 = &local_18;
        pHVar5 = GetParent((HWND)piVar2[8]);
        this_00 = CWnd::FromHandle(pHVar5);
        CWnd::ScreenToClient(this_00,pRVar6);
        pcVar1 = *(code **)(*piVar2 + 0x238);
        guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                          local_18.bottom - local_18.top,0x14,0);
        (*pcVar1)();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

