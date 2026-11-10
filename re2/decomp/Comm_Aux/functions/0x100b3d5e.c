// rea decompile_all
// name: CDrawingManager::_FillGradient
// address: 0x100b3d5e
// body: available
// range: 0x100b3d5e-0x100b4062 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDrawingManager::_FillGradient(class CRect,unsigned long,unsigned
   long,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::_FillGradient
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,uint param_6,
          ulong param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  CImageList *pCVar2;
  int iVar3;
  int iVar4;
  undefined **local_6c;
  HBRUSH local_68;
  undefined **local_64;
  HBRUSH local_60;
  undefined **local_5c;
  HBRUSH local_58;
  undefined **local_54;
  HBRUSH local_50;
  undefined **local_4c;
  HBRUSH local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined **local_34;
  HBRUSH local_30;
  int local_2c;
  int local_28;
  ushort local_24;
  ushort local_22;
  ulong local_20;
  CDrawingManager *local_1c;
  RECT local_18;
  uint local_8;
  
  uVar1 = param_6;
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_20 = param_7;
  local_1c = this;
  if (param_6 == param_7) {
    CBrush::CBrush((CBrush *)&local_4c,param_6);
    FillRect(*(HDC *)(*(int *)(this + 4) + 4),(RECT *)&param_2,local_48);
    local_4c = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_4c);
  }
  else {
    if (0 < param_9) {
      local_18.left = param_2;
      local_18.top = param_3;
      local_18.right = param_4;
      local_18.bottom = param_5;
      if (param_8 == 0) {
        param_2 = ((param_4 - param_2) * param_9) / 100 + param_2;
        local_18.right = param_2;
        CBrush::CBrush((CBrush *)&local_5c,param_6);
        FillRect(*(HDC *)(*(int *)(local_1c + 4) + 4),&local_18,local_58);
        local_5c = CBrush::vftable;
        pCVar2 = (CImageList *)&local_5c;
      }
      else {
        param_3 = ((param_5 - param_3) * param_9) / 100 + param_3;
        local_18.bottom = param_3;
        CBrush::CBrush((CBrush *)&local_54,param_7);
        FillRect(*(HDC *)(*(int *)(local_1c + 4) + 4),&local_18,local_50);
        local_54 = CBrush::vftable;
        pCVar2 = (CImageList *)&local_54;
      }
      CImageList::~CImageList(pCVar2);
    }
    if (0 < param_10) {
      local_18.left = param_2;
      local_18.top = param_3;
      local_18.right = param_4;
      local_18.bottom = param_5;
      if (param_8 == 0) {
        param_4 = param_4 - ((param_4 - param_2) * param_10) / 100;
        local_18.left = param_4;
        CBrush::CBrush((CBrush *)&local_6c,local_20);
        FillRect(*(HDC *)(*(int *)(local_1c + 4) + 4),&local_18,local_68);
        local_6c = CBrush::vftable;
        pCVar2 = (CImageList *)&local_6c;
      }
      else {
        param_5 = param_5 - ((param_5 - param_3) * param_10) / 100;
        local_18.top = param_5;
        CBrush::CBrush((CBrush *)&local_64,uVar1);
        FillRect(*(HDC *)(*(int *)(local_1c + 4) + 4),&local_18,local_60);
        local_64 = CBrush::vftable;
        pCVar2 = (CImageList *)&local_64;
      }
      CImageList::~CImageList(pCVar2);
    }
    if (param_9 + param_10 < 0x65) {
      local_22 = (ushort)uVar1 >> 8;
      local_40 = uVar1 >> 0x10;
      local_24 = (ushort)local_20 >> 8;
      local_3c = local_20 & 0xff;
      iVar4 = 0;
      local_44 = local_20 >> 0x10;
      local_38 = -(uVar1 & 0xff);
      local_28 = (uVar1 & 0xff) << 6;
      local_20 = 0;
      local_2c = 0x40;
      do {
        CBrush::CBrush((CBrush *)&local_34,
                       (((int)((local_44 & 0xff) * iVar4 + (local_40 & 0xff) * local_2c) >> 6 &
                        0xffU) << 8 |
                       (int)((uint)(byte)local_22 * local_2c + (uint)(byte)local_24 * iVar4) >> 6 &
                       0xffU) << 8 | (int)(local_20 + local_28) >> 6 & 0xffU);
        local_18.left = param_2;
        local_18.top = param_3;
        local_18.right = param_4;
        local_18.bottom = param_5;
        if (param_8 == 0) {
          local_18.left = ((param_4 - param_2) * iVar4 >> 6) + param_2;
          local_18.right = ((param_4 - param_2) * (iVar4 + 1) >> 6) + param_2;
          iVar3 = local_18.right - local_18.left;
        }
        else {
          local_18.bottom = param_5 - ((param_5 - param_3) * iVar4 >> 6);
          local_18.top = param_5 - ((iVar4 + 1) * (param_5 - param_3) >> 6);
          iVar3 = local_18.bottom - local_18.top;
        }
        iVar4 = iVar4 + 1;
        if (0 < iVar3) {
          FillRect(*(HDC *)(*(int *)(local_1c + 4) + 4),&local_18,local_30);
        }
        local_34 = CBrush::vftable;
        CImageList::~CImageList((CImageList *)&local_34);
        local_28 = local_28 + local_38;
        local_2c = local_2c + -1;
        local_20 = local_20 + local_3c;
      } while (0 < local_2c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

