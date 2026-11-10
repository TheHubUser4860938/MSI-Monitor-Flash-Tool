// rea decompile_all
// name: CMFCButton::SetImageInternal
// address: 0x10041b27
// body: available
// range: 0x10041b27-0x10041d4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCButton::SetImageInternal(struct HICON__ *,int,struct HICON__
   *,int,struct HICON__ *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCButton::SetImageInternal
          (CMFCButton *this,HICON__ *param_1,int param_2,HICON__ *param_3,int param_4,
          HICON__ *param_5,int param_6)

{
  HICON__ *hIcon;
  int iVar1;
  HDC pHVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  CMFCButton *pCVar4;
  HICON hIcon_00;
  int iVar5;
  HICON hIcon_01;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  ICONINFO local_64;
  CDC local_50 [4];
  HDC local_4c;
  int local_40;
  HANDLE local_3c;
  HGDIOBJ local_38;
  HICON__ *local_34;
  HICON local_30;
  CMFCButton *local_2c;
  CMFCButton *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x10041b33;
  local_30 = param_1;
  local_34 = param_3;
  local_28 = this;
  ClearImages(this,param_4);
  if (local_30 != (HICON)0x0) {
    local_40 = (param_5 != (HICON__ *)0x0) + 2;
    iVar5 = 0;
    pCVar4 = local_28;
    hIcon_00 = local_30;
    do {
      hIcon_01 = hIcon_00;
      if ((iVar5 != 0) && (hIcon_01 = param_3, iVar5 != 1)) {
        hIcon_01 = param_5;
      }
      if (param_4 == 0) {
        if (iVar5 == 0) {
          iVar1 = 0xf0;
        }
        else {
          iVar1 = (-(uint)(iVar5 != 1) & 0x118) + 0x208;
        }
      }
      else if (iVar5 == 0) {
        iVar1 = 0x438;
      }
      else {
        iVar1 = (-(uint)(iVar5 != 1) & 0x118) + 0x550;
      }
      local_2c = pCVar4 + iVar1;
      if (hIcon_01 != (HICON)0x0) {
        GetIconInfo(hIcon_01,&local_64);
        GetObjectW(local_64.hbmColor,0x18,local_7c);
        *(undefined4 *)(local_28 + 0xe0) = local_78;
        *(undefined4 *)(local_28 + 0xe4) = local_74;
        if (iVar5 == 0) {
          CDC::CDC(local_50);
          local_8 = 0;
          pHVar2 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach(local_50,pHVar2);
          local_3c = CopyImage(local_64.hbmColor,0,0,0,0x2000);
          if (local_3c != (HANDLE)0x0) {
            local_38 = SelectObject(local_4c,local_3c);
            local_24.left = 0;
            local_24.top = 0;
            local_24.bottom = *(LONG *)(local_28 + 0xe4);
            local_24.right = *(LONG *)(local_28 + 0xe0);
            pAVar3 = GetGlobalData();
            hbr = (HBRUSH)0x0;
            if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff68) {
              hbr = *(HBRUSH *)(pAVar3 + 0x9c);
            }
            FillRect(local_4c,&local_24,hbr);
            DrawIconEx(local_4c,0,0,hIcon_01,*(int *)(local_28 + 0xe0),*(int *)(local_28 + 0xe4),0,
                       (HBRUSH)0x0,3);
            if (local_38 != (HGDIOBJ)0x0) {
              SelectObject(local_4c,local_38);
            }
            DeleteObject(local_3c);
          }
          local_8 = 0xffffffff;
          CDC::~CDC(local_50);
        }
        DeleteObject(local_64.hbmColor);
        DeleteObject(local_64.hbmMask);
        *(undefined4 *)(local_2c + 0x54) = local_78;
        *(undefined4 *)(local_2c + 0x58) = local_74;
        if (param_6 == 0) {
          pAVar3 = GetGlobalData();
          CMFCToolBarImages::SetTransparentColor
                    ((CMFCToolBarImages *)local_2c,*(ulong *)(pAVar3 + 0x1c));
        }
        CMFCToolBarImages::AddIcon((CMFCToolBarImages *)local_2c,hIcon_01,param_6);
        pCVar4 = local_28;
        hIcon_00 = local_30;
      }
      hIcon = local_34;
      iVar5 = iVar5 + 1;
      param_3 = local_34;
    } while (iVar5 < local_40);
    if (param_2 != 0) {
      DestroyIcon(hIcon_00);
      if (hIcon != (HICON)0x0) {
        DestroyIcon(hIcon);
      }
      if (param_5 != (HICON__ *)0x0) {
        DestroyIcon(param_5);
      }
    }
  }
  FUN_10154478();
  return;
}

