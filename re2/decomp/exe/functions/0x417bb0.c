// rea decompile_all
// name: COccManager::CreateDlgControl
// address: 0x417bb0
// body: available
// range: 0x417bb0-0x417ed8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall COccManager::CreateDlgControl(class CWnd *,struct HWND__ *,int,struct
   DLGITEMTEMPLATE *,unsigned short,unsigned char *,unsigned long,struct HWND__ * *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COccManager::CreateDlgControl
          (COccManager *this,CWnd *param_1,HWND__ *param_2,int param_3,DLGITEMTEMPLATE *param_4,
          ushort param_5,uchar *param_6,ulong param_7,HWND__ **param_8)

{
  DLGITEMTEMPLATE *pDVar1;
  int iVar2;
  undefined4 uVar3;
  CDataBoundProperty *pCVar4;
  int iVar5;
  uint uVar6;
  CMemFile local_b8 [44];
  CDataBoundProperty *local_8c;
  HWND__ *local_88;
  int local_84;
  HWND__ **local_80;
  int local_7c;
  uint local_78;
  CWnd *local_74;
  DLGITEMTEMPLATE *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  ulong local_58;
  DLGITEMTEMPLATE *local_54;
  CDataBoundProperty *local_50;
  int local_4c;
  CLSID local_48;
  tagRECT local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x417bbf;
  local_74 = param_1;
  local_88 = param_2;
  local_54 = param_4 + 0x12;
  local_5c = (uint)param_5;
  local_58 = param_7;
  local_80 = param_8;
  if (param_3 != 0) {
    local_28 = *(undefined4 *)(param_4 + 8);
    local_24 = *(undefined4 *)(param_4 + 4);
    local_20 = *(undefined2 *)(param_4 + 0xc);
    local_1e = *(undefined2 *)(param_4 + 0xe);
    local_1c = *(undefined2 *)(param_4 + 0x10);
    local_1a = *(undefined2 *)local_54;
    local_54 = param_4 + 0x18;
    pDVar1 = param_4 + 0x14;
    param_4 = (DLGITEMTEMPLATE *)&local_28;
    local_18 = *(undefined2 *)pDVar1;
  }
  local_38.left = (LONG)*(short *)(param_4 + 8);
  local_38.top = (LONG)*(short *)(param_4 + 10);
  local_38.right = *(short *)(param_4 + 0xc) + local_38.left;
  local_38.bottom = *(short *)(param_4 + 0xe) + local_38.top;
  local_70 = param_4;
  MapDialogRect(*(HWND *)(param_1 + 0x20),&local_38);
  local_68 = 0;
  if (3 < local_58) {
    local_64 = *(int *)param_6;
    uVar6 = local_58 - 4;
    param_6 = param_6 + 4;
    local_58 = uVar6;
    if (local_64 != 0) {
      local_68 = Ordinal_4(param_6,local_64);
      param_6 = (uchar *)((int)param_6 + local_64 * 2);
      local_58 = uVar6 + local_64 * -2;
    }
  }
  uVar6 = local_58;
  local_50 = (CDataBoundProperty *)0x0;
  uVar3 = FUN_004295fe();
  FUN_0040eb30(uVar3);
  local_8 = 0;
  local_78 = 0;
  local_7c = 0;
  local_64 = 0;
  if (((short)local_5c == 0x37a) || ((short)local_5c == 0x37b)) {
    local_84 = *(int *)param_6;
    param_6 = (uchar *)((int)param_6 + 0xc);
    iVar5 = local_84 + -0xc;
    pCVar4 = local_50;
    while (iVar5 != 0) {
      iVar2 = *(int *)param_6;
      local_6c = iVar5 + -6;
      local_50 = (CDataBoundProperty *)(uint)*(ushort *)((int)param_6 + 4);
      if (iVar2 == -0x7ffeffff) {
        local_7c = *(int *)((int)param_6 + 6);
        local_64 = *(undefined4 *)((int)param_6 + 10);
        FUN_004155e0((int)param_6 + 0x16);
        local_78 = (uint)local_50 & 0xffff;
        param_6 = (uchar *)((int)param_6 + *(int *)(local_60 + -0xc) + 0x17);
        iVar5 = local_6c + (-0x11 - *(int *)(local_60 + -0xc));
        param_4 = local_70;
        uVar6 = local_58;
      }
      else {
        local_8c = (CDataBoundProperty *)FUN_00416408(0x1c);
        local_8._0_1_ = 1;
        if (local_8c == (CDataBoundProperty *)0x0) {
          pCVar4 = (CDataBoundProperty *)0x0;
        }
        else {
          pCVar4 = (CDataBoundProperty *)
                   CDataBoundProperty::CDataBoundProperty(local_8c,pCVar4,iVar2,(ushort)local_50);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        param_6 = (uchar *)((int)param_6 + 6);
        iVar5 = local_6c;
        param_4 = local_70;
        uVar6 = local_58;
      }
    }
    uVar6 = uVar6 - local_84;
    local_5c = local_5c + 0xfffc;
    local_50 = pCVar4;
  }
  if (*(short *)local_54 == 0x7b) {
    local_54 = (DLGITEMTEMPLATE *)CLSIDFromString((LPCOLESTR)local_54,&local_48);
  }
  else {
    local_54 = (DLGITEMTEMPLATE *)CLSIDFromProgID((LPCOLESTR)local_54,&local_48);
  }
  CMemFile::CMemFile(local_b8,param_6,uVar6,0);
  local_4c = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  if (((-1 < (int)local_54) && (iVar5 = FUN_00440532(1), iVar5 != 0)) &&
     (iVar5 = CreateControl(0,&local_48,0,*(undefined4 *)param_4,&local_38,
                            *(undefined2 *)(param_4 + 0x10),
                            -(uint)((short)local_5c != 0x378) & (uint)local_b8,
                            (short)local_5c == 0x377,local_68,&local_4c), iVar5 != 0)) {
    FUN_004434fd(1);
    SetWindowPos(*(HWND *)(local_4c + 0x24),local_88,0,0,0,0,0x13);
    *(CDataBoundProperty **)(local_4c + 0x94) = local_50;
    FUN_00415f50(&local_60);
    *(short *)(local_4c + 0x98) = (short)local_78;
    *(int *)(local_4c + 0x9c) = local_7c;
    *(int *)(local_4c + 0xa0) = local_64;
  }
  if (local_68 != 0) {
    Ordinal_6(local_68);
  }
  if (local_4c == 0) {
    *local_80 = (HWND__ *)0x0;
  }
  else {
    *local_80 = *(HWND__ **)(local_4c + 0x24);
  }
  CMemFile::~CMemFile(local_b8);
  FUN_0040efa0();
  iVar5 = FUN_0055bae6();
  return iVar5;
}

