// rea decompile_all
// name: CMFCTasksPane::PreTranslateMessage
// address: 0x5517f4
// body: available
// range: 0x5517f4-0x5518eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTasksPane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTasksPane::PreTranslateMessage(CMFCTasksPane *this,tagMSG *param_1)

{
  code *pcVar1;
  POINT pt;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_1->message == 0x203) {
    local_1c = *(uint *)(this + 0x484);
    while (local_1c != 0) {
      piVar2 = (int *)FUN_004ead48(&local_1c);
      local_24 = *(int *)(*piVar2 + 0x10);
      if (local_24 != 0) {
        local_20 = *piVar2 + 0xc;
        do {
          piVar2 = (int *)FUN_004ead48(&local_24);
          if (*(HWND *)(*piVar2 + 0x2c) == param_1->hwnd) goto LAB_005518d1;
        } while (local_24 != 0);
      }
    }
    local_1c = (uint)(ushort)param_1->lParam;
    local_20 = (uint)*(ushort *)((int)&param_1->lParam + 2);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pcVar1 = *(code **)(*(int *)this + 0x3c4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      InflateRect(&local_18,-1,-1);
    }
    pt.y = local_20;
    pt.x = local_1c;
    BVar4 = PtInRect(&local_18,pt);
    if (BVar4 != 0) goto LAB_005518d9;
  }
LAB_005518d1:
  CDockablePane::PreTranslateMessage((CDockablePane *)this,param_1);
LAB_005518d9:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

