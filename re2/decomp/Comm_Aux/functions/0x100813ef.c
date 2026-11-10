// rea decompile_all
// name: CPane::MoveByAlignment
// address: 0x100813ef
// body: available
// range: 0x100813ef-0x100814cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPane::MoveByAlignment(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::MoveByAlignment(CPane *this,ulong param_1,int param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(this_00,&local_18);
  uVar3 = param_1 & 0xf000;
  if (uVar3 == 0x1000) {
LAB_10081470:
    OffsetRect(&local_18,param_2,0);
    iVar5 = 0;
    iVar4 = param_2;
  }
  else {
    if (uVar3 != 0x2000) {
      if (uVar3 == 0x4000) goto LAB_10081470;
      if (uVar3 != 0x8000) goto LAB_10081485;
    }
    OffsetRect(&local_18,0,param_2);
    iVar4 = 0;
    iVar5 = param_2;
  }
  UpdateVirtualRect(this,iVar4,iVar5);
LAB_10081485:
  pcVar1 = *(code **)(*(int *)this + 0x238);
  guard_check_icall(&DAT_1020d5f0,local_18.left,local_18.top,local_18.right - local_18.left,
                    local_18.bottom - local_18.top,0x15,0);
  (*pcVar1)();
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

