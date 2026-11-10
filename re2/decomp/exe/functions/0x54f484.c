// rea decompile_all
// name: CMFCTasksPane::DoPaint
// address: 0x54f484
// body: available
// range: 0x54f484-0x54f571 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::DoPaint(CMFCTasksPane *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CMFCVisualManager *pCVar4;
  undefined1 *puVar5;
  CMemDC local_70 [4];
  undefined1 *local_6c;
  int local_68;
  undefined1 local_60 [44];
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x54f490;
  CMemDC::CMemDC(local_70,param_1,(CWnd *)this);
  local_8 = 0;
  puVar5 = local_60;
  if (local_68 == 0) {
    puVar5 = local_6c;
  }
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_34.left = local_24.left;
  local_34.top = local_24.top;
  local_34.right = local_24.right;
  local_34.bottom = local_24.bottom;
  SetRectEmpty(&local_34);
  pcVar1 = *(code **)(*(int *)this + 0x3c4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    local_34.left = local_24.left;
    local_34.top = local_24.top;
    local_34.right = local_24.right;
    local_34.bottom = local_24.bottom;
    InflateRect(&local_24,-1,-1);
  }
  pcVar1 = *(code **)(*(int *)this + 0x3cc);
  guard_check_icall(puVar5,local_24.left,local_24.top,local_24.right,local_24.bottom);
  (*pcVar1)();
  BVar3 = IsRectEmpty(&local_34);
  if (BVar3 == 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x180);
    guard_check_icall(puVar5,&local_34);
    (*pcVar1)();
  }
  CMemDC::~CMemDC(local_70);
  FUN_0055bae6();
  return;
}

