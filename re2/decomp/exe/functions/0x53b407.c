// rea decompile_all
// name: CMFCPropertyGridColorProperty::SetColor
// address: 0x53b407
// body: available
// range: 0x53b407-0x53b4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridColorProperty::SetColor(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridColorProperty::SetColor(CMFCPropertyGridColorProperty *this,ulong param_1)

{
  code *pcVar1;
  HWND hWnd;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined1 local_28 [4];
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x53b413;
  *(ulong *)(this + 0xe8) = param_1;
  COleVariant::operator=((COleVariant *)(this + 8),param_1);
  hWnd = (HWND)0x0;
  if (*(int *)(this + 0xc4) != 0) {
    hWnd = *(HWND *)(*(int *)(this + 0xc4) + 0x20);
  }
  BVar2 = IsWindow(hWnd);
  if (BVar2 != 0) {
    local_24.left = *(LONG *)(this + 0x30);
    local_24.top = *(LONG *)(this + 0x34);
    local_24.right = *(LONG *)(this + 0x38);
    local_24.bottom = *(LONG *)(this + 0x3c);
    InflateRect(&local_24,0,-1);
    InvalidateRect(*(HWND *)(*(int *)(this + 0xc4) + 0x20),&local_24,1);
    UpdateWindow(*(HWND *)(*(int *)(this + 0xc4) + 0x20));
  }
  if (*(int *)(this + 0xb8) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x24);
    guard_check_icall(local_28);
    puVar3 = (undefined4 *)(*pcVar1)();
    local_8 = 0;
    FUN_004349b3(*puVar3);
    FUN_0040efa0();
  }
  FUN_0055bae6();
  return;
}

