// rea decompile_all
// name: CMFCMaskedEdit::OnKeyDown
// address: 0x535dd9
// body: available
// range: 0x535dd9-0x5361f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMaskedEdit::OnKeyDown(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMaskedEdit::OnKeyDown(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  GetGroupBounds(this,&local_14,&local_10,0,1);
  if (local_14 == -1) goto LAB_00535dff;
  if (0x26 < param_1) {
    if (0x28 < param_1) {
      if (param_1 == 0x2d) {
        SVar1 = GetKeyState(0x11);
        if (((-1 < (char)SVar1) && (SVar1 = GetKeyState(0x10), -1 < (char)SVar1)) &&
           (*(int *)(*(int *)(this + 0x84) + -0xc) != 0)) {
          return;
        }
      }
      else if ((param_1 == 0x2e) && (SVar1 = GetKeyState(0x10), -1 < (char)SVar1)) {
        OnCharDelete(this,0x2e,param_2,param_3);
        return;
      }
LAB_00536085:
      FUN_0042ec70();
      return;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&local_c);
    GetGroupBounds(this,&local_8,&local_c,local_c,1);
    if (local_8 == -1) {
      GetGroupBounds(this,&local_8,&local_c,*(int *)(*(int *)(this + 0x80) + -0xc),0);
    }
    SVar1 = GetKeyState(0x10);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_10,(LPARAM)&local_14);
      iVar3 = local_14 + 1;
      iVar2 = local_10;
      if (*(int *)(this + 0x9c) != 0) {
        if (local_c <= iVar3) {
          iVar3 = local_c;
        }
        if (iVar3 <= local_8) {
          iVar3 = local_8;
        }
      }
    }
    else {
      SVar1 = GetKeyState(0x11);
      if ((char)SVar1 < '\0') {
        SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_10,(LPARAM)&local_14);
        if (local_14 < *(int *)(*(int *)(this + 0x80) + -0xc) + -1) {
          GetGroupBounds(this,&local_8,&local_c,local_14 + 1,1);
        }
        if ((local_8 == -1) ||
           ((iVar2 = local_8, iVar3 = local_c, local_8 == local_10 &&
            (iVar3 = local_c, local_c == local_14)))) goto LAB_00535dff;
      }
      else {
        SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_10,(LPARAM)&local_14);
        if ((local_10 == local_14) && (local_14 == local_c)) {
          if (local_14 < *(int *)(*(int *)(this + 0x80) + -0xc) + -1) {
            GetGroupBounds(this,&local_8,&local_c,local_10 + 1,1);
          }
          if ((local_8 == -1) || (iVar2 = local_8, iVar3 = local_8, local_8 <= local_14))
          goto LAB_00535dff;
        }
        else {
          iVar2 = local_14 + 1;
          if (local_c <= local_14 + 1) {
            iVar2 = local_c;
          }
          iVar3 = iVar2;
          if (iVar2 <= local_8) {
            iVar2 = local_8;
            iVar3 = local_8;
          }
        }
      }
    }
    goto LAB_005361e2;
  }
  if (param_1 < 0x25) {
    if (param_1 == 8) {
      OnCharBackspace(this,8,param_2,param_3);
      return;
    }
    if (param_1 == 0x23) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&local_c);
      GetGroupBounds(this,&local_8,&local_c,local_c,1);
      iVar2 = local_c;
      iVar3 = local_c;
      if (local_8 == -1) {
        GetGroupBounds(this,&local_8,&local_c,*(int *)(*(int *)(this + 0x80) + -0xc),0);
        iVar2 = local_c;
        iVar3 = local_c;
      }
      goto LAB_005361e2;
    }
    if (param_1 != 0x24) goto LAB_00536085;
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_c,(LPARAM)&local_8);
    GetGroupBounds(this,&local_c,&local_8,local_c,0);
    iVar2 = local_c;
    iVar3 = local_c;
    if (local_c != -1) goto LAB_005361e2;
    GetGroupBounds(this,&local_c,&local_8,0,1);
  }
  else {
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&local_c);
    GetGroupBounds(this,&local_8,&local_c,local_8,0);
    if (local_8 == -1) {
      GetGroupBounds(this,&local_8,&local_c,0,1);
    }
    SVar1 = GetKeyState(0x10);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_14,(LPARAM)&local_10);
      iVar2 = local_14 + -1;
      iVar3 = local_10;
      if (*(int *)(this + 0x9c) != 0) {
        if (iVar2 <= local_8) {
          iVar2 = local_8;
        }
        iVar3 = local_10;
        if (local_c <= iVar2) {
          iVar2 = local_c;
          iVar3 = local_10;
        }
      }
      goto LAB_005361e2;
    }
    SVar1 = GetKeyState(0x11);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_14,(LPARAM)&local_10);
      if (1 < local_14) {
        GetGroupBounds(this,&local_8,&local_c,local_14 + -1,0);
      }
      if ((local_8 == -1) ||
         ((iVar2 = local_8, iVar3 = local_c, local_8 == local_14 &&
          (iVar3 = local_c, local_c == local_10)))) {
LAB_00535dff:
        MessageBeep(0xffffffff);
        return;
      }
      goto LAB_005361e2;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_14,(LPARAM)&local_10);
    if ((local_14 == local_10) && (local_14 == local_8)) {
      if (1 < local_14) {
        GetGroupBounds(this,&local_8,&local_c,local_14 + -1,0);
      }
      if ((local_8 == -1) || (iVar2 = local_c, iVar3 = local_c, local_14 <= local_c))
      goto LAB_00535dff;
      goto LAB_005361e2;
    }
    iVar2 = local_14 + -1;
    if (local_14 + -1 <= local_8) {
      iVar2 = local_8;
    }
    iVar3 = iVar2;
    if (iVar2 < local_c) goto LAB_005361e2;
  }
  iVar2 = local_c;
  iVar3 = local_c;
LAB_005361e2:
  CEdit::SetSel((CEdit *)this,iVar2,iVar3,0);
  return;
}

