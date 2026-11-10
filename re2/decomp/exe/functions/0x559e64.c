// rea decompile_all
// name: CMFCToolBarsCommandsListBox::DrawItem
// address: 0x559e64
// body: available
// range: 0x559e64-0x559f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarsCommandsListBox::DrawItem(struct tagDRAWITEMSTRUCT
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCommandsListBox::DrawItem(CMFCToolBarsCommandsListBox *this,tagDRAWITEMSTRUCT *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int local_38;
  tagDRAWITEMSTRUCT *local_34;
  int *local_30;
  CDC *local_2c;
  CMFCVisualManager *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x559e70;
  local_34 = param_1;
  local_28 = (CMFCVisualManager *)this;
  local_2c = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 8) != -1) {
    local_30 = (int *)SendMessageW(*(HWND *)(this + 0x20),0x199,*(WPARAM *)(param_1 + 8),0);
    piVar1 = local_30 + 0xb;
    local_38 = FUN_00415ee0(*piVar1 + -0x10);
    local_38 = local_38 + 0x10;
    local_8 = 0;
    GetText(*(undefined4 *)(param_1 + 8),piVar1);
    local_28 = CMFCVisualManager::GetInstance();
    pcVar2 = *(code **)(*(int *)local_28 + 0x138);
    guard_check_icall(local_2c,local_24.left,local_24.top,local_24.right,local_24.bottom,0);
    (*pcVar2)();
    iVar3 = *local_30;
    guard_check_icall(local_2c,&local_24,((byte)*(undefined4 *)(local_34 + 0x10) & 0x11) == 0x11);
    (**(code **)(iVar3 + 0x6c))();
    FUN_00415f50(&local_38);
    FUN_0040efa0();
  }
  FUN_0055bae6();
  return;
}

