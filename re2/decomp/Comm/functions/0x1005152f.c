// rea decompile_all
// name: CMFCToolBarImages::LoadStr
// address: 0x1005152f
// body: available
// range: 0x1005152f-0x1005172f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::LoadStr(char const *,struct HINSTANCE__ *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarImages::LoadStr(CMFCToolBarImages *this,char *param_1,HINSTANCE__ *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  __POSITION *p_Var3;
  AFX_MODULE_STATE *pAVar4;
  UINT fuLoad;
  AFX_GLOBAL_DATA *pAVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  HWND__ *pHVar9;
  undefined1 local_38 [18];
  ushort local_26;
  undefined **local_20;
  undefined4 local_1c;
  HWND__ *local_18;
  HBITMAP__ *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1005153b;
  iVar8 = 0;
  if ((*(int *)(this + 0x28) != 0) || (param_1 == (char *)0x0)) {
    return 0;
  }
  pHVar9 = (HWND__ *)(~-(uint)(((uint)param_1 & 0xffff0000) != 0) & (uint)param_1);
  local_18 = pHVar9;
  if (param_3 == 0) {
    FUN_10024a48(this + 0x8c);
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xc0));
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xdc));
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xf8));
  }
  else if ((pHVar9 != (HWND__ *)0x0) &&
          (p_Var3 = CList<unsigned_int,unsigned_int>::Find
                              ((CList<unsigned_int,unsigned_int> *)(this + 0xc0),(uint)pHVar9,
                               (__POSITION *)0x0), p_Var3 != (__POSITION *)0x0)) {
    return 1;
  }
  local_1c = 0;
  local_20 = CPngImage::vftable;
  local_8 = 0;
  iVar2 = ::Load(param_1,param_2);
  if (iVar2 == 0) {
    if (param_2 == (HINSTANCE__ *)0x0) {
      pAVar4 = AfxGetModuleState();
      param_2 = *(HINSTANCE__ **)(pAVar4 + 0xc);
    }
    fuLoad = 0x2000;
    if (*(int *)(this + 0x34) != 0) {
      pAVar5 = GetGlobalData();
      fuLoad = 0x3000;
      if (*(int *)(pAVar5 + 0x184) != 0) {
        fuLoad = 0x2000;
      }
    }
    local_14[0] = LoadImageW(param_2,(LPCWSTR)param_1,0,0,0,fuLoad);
  }
  else {
    local_14[0] = CGdiObject::Detach((CGdiObject *)&local_20);
  }
  if (local_14[0] != (HBITMAP__ *)0x0) {
    iVar2 = GetObjectW(local_14[0],0x18,local_38);
    if (iVar2 == 0) {
      DeleteObject(local_14[0]);
    }
    else {
      if (local_26 < 0x20) {
        if (((8 < local_26) && (*(int *)(this + 0x34) != 0)) ||
           (pAVar5 = GetGlobalData(), *(int *)(pAVar5 + 0x184) != 0)) {
          MapBmpTo3dColors(local_14,0,0xffffffff,0xffffffff);
        }
      }
      else {
        PreMultiplyAlpha(local_14[0],*(int *)(this + 0x3c));
      }
      uVar6 = *(uint *)(this + 8);
      if ((int)*(uint *)(this + 8) <= (int)(uint)local_26) {
        uVar6 = (uint)local_26;
      }
      *(uint *)(this + 8) = uVar6;
      if (param_3 == 0) {
        *(HBITMAP__ **)(this + 0x8c) = local_14[0];
      }
      else {
        if (pHVar9 != (HWND__ *)0x0) {
          uVar1 = *(undefined4 *)(this + 4);
          puVar7 = (undefined4 *)FUN_10067d49(local_18);
          *puVar7 = uVar1;
          pHVar9 = local_18;
        }
        AddImage(this,local_14[0],0);
        if (pHVar9 != (HWND__ *)0x0) {
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xc0),pHVar9);
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xdc),(HWND__ *)param_2)
          ;
        }
        DeleteObject(local_14[0]);
      }
      UpdateCount(this);
      FUN_10024a48(this + 0x90);
      *(undefined4 *)(this + 0x90) = 0;
      FUN_10024a48(this + 0x94);
      *(undefined4 *)(this + 0x94) = 0;
      iVar8 = 1;
    }
  }
  local_20 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  return iVar8;
}

