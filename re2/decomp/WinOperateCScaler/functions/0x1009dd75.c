// rea decompile_all
// name: CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Cache
// address: 0x1009dd75
// body: available
// range: 0x1009dd75-0x1009df2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall
   CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Cache(class CSize const &,class
   CMFCControlRenderer &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::Cache
          (CMFCVisualManagerBitmapCacheItem *this,CSize *param_1,CMFCControlRenderer *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  CMFCVisualManagerBitmapCacheItem *pCVar4;
  HBITMAP pHVar5;
  HDC pHVar6;
  CDC local_70 [4];
  HDC local_6c;
  HBITMAP local_60;
  HGDIOBJ local_5c;
  CMFCControlRenderer *local_58;
  CSize *local_54;
  int local_50;
  CMFCVisualManagerBitmapCacheItem *local_4c;
  void *local_48;
  int local_44;
  BITMAPINFO local_40;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x1009dd81;
  local_54 = param_1;
  local_58 = param_2;
  local_4c = this;
  FUN_1005a0e1();
  local_50 = CMFCControlRenderer::GetImageCount(param_2);
  if (0 < local_50) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x60) = uVar1;
    CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)(this + 8),0xffffffff);
    local_44 = 0;
    if (0 < local_50) {
      do {
        _memset(&local_40,0,0x2c);
        local_40.bmiHeader.biWidth = *(LONG *)param_1;
        local_40.bmiHeader.biHeight = *(LONG *)(param_1 + 4);
        local_40.bmiHeader.biPlanes = 1;
        local_40.bmiHeader.biSizeImage =
             local_40.bmiHeader.biHeight * local_40.bmiHeader.biWidth * 4;
        local_40.bmiHeader.biSize = 0x28;
        local_40.bmiHeader.biBitCount = 0x20;
        local_48 = (void *)0x0;
        local_40.bmiHeader.biCompression = (DWORD)(void *)0x0;
        pHVar5 = CreateDIBSection((HDC)0x0,&local_40,0,&local_48,(HANDLE)0x0,0);
        local_60 = pHVar5;
        if ((pHVar5 == (HBITMAP)0x0) || (local_48 == (void *)0x0)) break;
        CDC::CDC(local_70);
        local_8 = 0;
        pHVar6 = CreateCompatibleDC((HDC)0x0);
        CDC::Attach(local_70,pHVar6);
        local_5c = SelectObject(local_6c,pHVar5);
        iVar2 = *(int *)(param_2 + 0x170);
        *(int *)(local_4c + 0x120) = iVar2;
        if (iVar2 != 0) {
          pcVar3 = *(code **)(*(int *)param_2 + 0x24);
          guard_check_icall();
          (*pcVar3)();
          param_1 = local_54;
        }
        iVar2 = *(int *)param_2;
        guard_check_icall(local_70,0,0,*(int *)param_1,*(int *)(param_1 + 4),local_44,0xff);
        param_2 = local_58;
        (**(code **)(iVar2 + 0x10))();
        pCVar4 = local_4c;
        if (*(int *)(local_4c + 0x120) != 0) {
          pcVar3 = *(code **)(*(int *)param_2 + 0x24);
          guard_check_icall();
          (*pcVar3)();
        }
        SelectObject(local_6c,local_5c);
        pHVar5 = local_60;
        CMFCToolBarImages::AddImage((CMFCToolBarImages *)(pCVar4 + 8),local_60,1);
        DeleteObject(pHVar5);
        local_8 = 0xffffffff;
        CDC::~CDC(local_70);
        local_44 = local_44 + 1;
        param_1 = local_54;
      } while (local_44 < local_50);
    }
  }
  FUN_10154478();
  return;
}

