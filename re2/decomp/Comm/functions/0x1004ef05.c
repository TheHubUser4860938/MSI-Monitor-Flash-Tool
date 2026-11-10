// rea decompile_all
// name: CMFCToolBarImages::CopyTo
// address: 0x1004ef05
// body: available
// range: 0x1004ef05-0x1004f249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::CopyTo(class CMFCToolBarImages &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::CopyTo(CMFCToolBarImages *this,CMFCToolBarImages *param_1)

{
  undefined4 *puVar1;
  long cy;
  HDC pHVar2;
  HBITMAP h;
  int *piVar3;
  int iVar4;
  LONG *pLVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_e4 [4];
  int local_e0;
  long local_dc;
  WORD local_d4;
  ushort local_d2;
  CDC local_cc [4];
  HDC local_c8;
  CMFCToolBarImages *local_bc;
  long local_b8;
  void *local_b4;
  CDC local_b0 [4];
  HDC local_ac;
  CMFCToolBarImages *local_a0;
  HWND__ *local_9c;
  int local_98;
  undefined1 local_94 [84];
  BITMAPINFO local_40;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd4;
  local_8 = 0x1004ef14;
  local_bc = this;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_1004ebad();
    }
    iVar4 = GetObjectW(*(HANDLE *)(this + 0x8c),0x18,local_e4);
    if (iVar4 == 0x18) {
      cy = _labs(local_dc);
      local_98 = local_e0;
      local_b8 = cy;
      CDC::CDC(local_b0);
      local_8 = 0;
      pHVar2 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(local_b0,pHVar2);
      if (*(HGDIOBJ *)(this + 0x8c) == (HGDIOBJ)0x0) {
        local_9c = (HWND__ *)0x0;
      }
      else {
        local_9c = SelectObject(local_ac,*(HGDIOBJ *)(this + 0x8c));
      }
      if (local_9c != (HWND__ *)0x0) {
        _memset(local_94,0,0x54);
        if ((local_d2 < 0x18) ||
           (iVar4 = GetObjectW(*(HANDLE *)(this + 0x8c),0x54,local_94), iVar4 == 0)) {
          h = CreateCompatibleBitmap(local_ac,local_98,cy);
        }
        else {
          pLVar5 = &local_40.bmiHeader.biWidth;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pLVar5 = 0;
            pLVar5 = pLVar5 + 1;
          }
          local_40.bmiHeader.biWidth = local_e0;
          local_40.bmiHeader.biHeight = local_dc;
          local_40.bmiHeader.biPlanes = local_d4;
          local_40.bmiHeader.biBitCount = local_d2;
          local_40.bmiHeader.biSize = 0x28;
          local_40.bmiHeader.biCompression = 0;
          local_b4 = (void *)0x0;
          h = CreateDIBSection(local_ac,&local_40,0,&local_b4,(HANDLE)0x0,0);
        }
        if (h != (HBITMAP)0x0) {
          CDC::CDC(local_cc);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar2 = CreateCompatibleDC(local_ac);
          CDC::Attach(local_cc,pHVar2);
          local_a0 = SelectObject(local_c8,h);
          if (local_a0 == (CMFCToolBarImages *)0x0) {
            DeleteObject(h);
          }
          else {
            BitBlt(local_c8,0,0,local_98,local_b8,local_ac,0,0,0xcc0020);
            SelectObject(local_c8,local_a0);
            *(HBITMAP *)(param_1 + 0x8c) = h;
          }
          CDC::~CDC(local_cc);
        }
        SelectObject(local_ac,local_9c);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_b0);
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x18);
    FUN_100030d0(this + 0x98);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(this + 0xa8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(this + 0xb0);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(this + 0xb8);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
    piVar6 = *(int **)(this + 0xc4);
    if (piVar6 != (int *)0x0) {
      local_a0 = this + 0xf8;
      do {
        local_9c = (HWND__ *)piVar6[2];
        piVar6 = (int *)*piVar6;
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(param_1 + 0xc0),local_9c);
        local_98 = -1;
        iVar4 = CMap<int,int,int,int>::Lookup
                          ((CMap<int,int,int,int> *)local_a0,(int)local_9c,&local_98);
        if (iVar4 != 0) {
          piVar3 = (int *)FUN_10067d49(local_9c);
          *piVar3 = local_98;
        }
        this = local_bc;
      } while (piVar6 != (int *)0x0);
    }
    puVar7 = *(undefined4 **)(this + 0xe0);
    while (puVar7 != (undefined4 *)0x0) {
      puVar1 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(param_1 + 0xdc),(HWND__ *)*puVar1);
    }
  }
  iVar4 = FUN_101490fe();
  return iVar4;
}

