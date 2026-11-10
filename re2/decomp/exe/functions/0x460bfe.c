// rea decompile_all
// name: CPaneFrameWnd::PreTranslateMessage
// address: 0x460bfe
// body: available
// range: 0x460bfe-0x460c9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneFrameWnd::PreTranslateMessage(CPaneFrameWnd *this,tagMSG *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1->message;
  if (uVar1 < 0x105) {
    if ((uVar1 != 0x104) &&
       ((uVar1 < 0xa1 ||
        ((0xa2 < uVar1 &&
         ((uVar1 < 0xa4 ||
          ((0xa5 < uVar1 && ((uVar1 < 0xa7 || ((0xa8 < uVar1 && (uVar1 != 0x100))))))))))))))
    goto LAB_00460c90;
  }
  else if ((uVar1 < 0x200) ||
          ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
  goto LAB_00460c90;
  iVar2 = *(int *)(this + 0x124);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
    SendMessageW(*(HWND *)(iVar2 + 0x20),0x407,0,(LPARAM)param_1);
  }
LAB_00460c90:
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar2;
}

