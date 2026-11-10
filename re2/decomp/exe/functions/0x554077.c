// rea decompile_all
// name: FUN_00554077
// address: 0x554077
// body: available
// range: 0x554077-0x5542b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00554077(CDC *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulong x;
  HDC pHVar4;
  int iVar5;
  HBITMAP pHVar6;
  void *pvVar7;
  AFX_GLOBAL_DATA *pAVar8;
  int iVar9;
  int in_ECX;
  int cx;
  CMenu *this;
  int cy;
  CDC local_7c [4];
  HDC__ *local_78;
  undefined **local_6c;
  HBRUSH local_68;
  CGdiObject *local_64;
  CMenu *local_60;
  int local_5c;
  int local_58;
  int local_54;
  double local_50;
  CDC *local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulong local_38;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x554086;
  local_48 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_24);
  cy = local_24.bottom - local_24.top;
  cx = local_24.right - local_24.left;
  this = (CMenu *)(in_ECX + 0xb0);
  local_60 = this;
  local_58 = cy;
  local_54 = cy;
  local_40 = cx;
  if ((this == (CMenu *)0x0) || (*(int *)(in_ECX + 0xb4) == 0)) {
    CDC::CDC(local_7c);
    local_8 = 0;
    pHVar4 = (HDC)0x0;
    if (local_48 != (CDC *)0x0) {
      pHVar4 = *(HDC *)(local_48 + 4);
    }
    pHVar4 = CreateCompatibleDC(pHVar4);
    iVar5 = CDC::Attach(local_7c,pHVar4);
    if (iVar5 != 0) {
      pHVar6 = CreateCompatibleBitmap(*(HDC *)(local_48 + 4),cx,cy);
      iVar5 = CMenu::Attach(this,(HMENU__ *)pHVar6);
      if (iVar5 != 0) {
        if (this == (CMenu *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = *(void **)(in_ECX + 0xb4);
        }
        local_64 = CDC::SelectGdiObject(local_78,pvVar7);
        pAVar8 = GetGlobalData();
        local_44 = 0;
        iVar5 = ((*(int *)(pAVar8 + 0x1ac) < 9) - 1 & 0xfffffffd) + 4;
        if (0 < cy) {
          local_5c = -iVar5;
          local_3c = cy - iVar5;
          iVar9 = local_40;
          do {
            iVar3 = local_40;
            local_38 = 0;
            if (0 < iVar9) {
              dVar1 = (double)local_44;
              dVar2 = (double)local_54;
              do {
                x = local_38;
                local_50 = (double)(int)local_38;
                local_38 = FUN_004649d1(local_50 / (double)cx,0x3fe0000000000000,dVar1 / dVar2);
                pAVar8 = GetGlobalData();
                if (*(int *)(pAVar8 + 0x1ac) < 9) {
                  CBrush::CBrush((CBrush *)&local_6c,local_38);
                  local_34.right = x + iVar5;
                  local_34.top = local_3c;
                  local_34.bottom = local_3c + iVar5;
                  local_34.left = x;
                  FillRect(local_78,&local_34,local_68);
                  local_6c = CBrush::vftable;
                  FUN_0040ee80();
                }
                else {
                  SetPixelV(local_78,x,local_3c,local_38);
                }
                local_38 = x + iVar5;
                iVar9 = local_40;
                cy = local_58;
              } while ((int)local_38 < iVar3);
            }
            local_3c = local_3c + local_5c;
            local_44 = local_44 + iVar5;
            this = local_60;
          } while (local_44 < cy);
        }
        pvVar7 = (void *)0x0;
        if (local_64 != (CGdiObject *)0x0) {
          pvVar7 = *(void **)(local_64 + 4);
        }
        CDC::SelectGdiObject(local_78,pvVar7);
        cx = local_40;
      }
    }
    CDC::~CDC(local_7c);
  }
  CDC::DrawState(local_48,0,0,cx,cy,this,0,0);
  FUN_0055bae6();
  return;
}

