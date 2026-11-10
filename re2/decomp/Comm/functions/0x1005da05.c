// rea decompile_all
// name: CMFCToolBar::CreateEx
// address: 0x1005da05
// body: available
// range: 0x1005da05-0x1005daec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::CreateEx(class CWnd *,unsigned long,unsigned
   long,class CRect,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::CreateEx
          (CMFCToolBar *this,undefined4 param_1,uint param_2,uint param_3,int param_5,int param_6,
          undefined4 param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  undefined1 local_2c [4];
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1005da11;
  local_28 = param_1;
  if (param_5 < 1) {
    param_5 = 1;
  }
  if (param_6 < 1) {
    param_6 = 1;
  }
  CPane::SetBorders((CPane *)this,(tagRECT *)&param_5);
  uVar4 = param_3 & 0x40ffff | 0x400000;
  *(uint *)(this + 0x9c) = uVar4;
  pcVar1 = *(code **)(*(int *)this + 0x1e0);
  guard_check_icall(uVar4);
  (*pcVar1)();
  if (param_9 == 0xe800) {
    *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 8;
  }
  AfxEndDeferRegisterClass(0x10);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  puVar5 = local_2c;
  pwVar6 = L"Afx:ToolBar";
  GetGlobalData();
  puVar2 = (undefined4 *)RegisterWindowClass(puVar5,pwVar6);
  local_8 = 0;
  ::Create(*puVar2,(param_3 & 0xffbf004e | param_2 | 0x4e) & 0xfffffffd,&local_24,local_28,param_9,0
           ,0);
  FUN_10003460();
  iVar3 = FUN_101490fe();
  return iVar3;
}

