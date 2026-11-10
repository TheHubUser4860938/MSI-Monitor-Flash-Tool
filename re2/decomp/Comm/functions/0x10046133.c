// rea decompile_all
// name: CMemDC::CMemDC
// address: 0x10046133
// body: available
// range: 0x10046133-0x10046270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMemDC::CMemDC(class CDC &,class CWnd *)
   
   Library: Visual Studio 2015 Release */

CMemDC * __thiscall CMemDC::CMemDC(CMemDC *this,CDC *param_1,CWnd *param_2)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HDC__ *pHVar3;
  void *pvVar4;
  HBITMAP pHVar5;
  CGdiObject *pCVar6;
  void *pvVar7;
  HDC__ *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1004613f;
  pvVar7 = (void *)0x0;
  *(undefined ***)this = vftable;
  *(CDC **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CDC::CDC((CDC *)(this + 0x10));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)(this + 0x20) = CBitmap::vftable;
  *(undefined4 *)(this + 0x28) = 0;
  ((LPRECT)(this + 0x2c))->left = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  local_8 = 1;
  GetClientRect(*(HWND *)(param_2 + 0x20),(LPRECT)(this + 0x2c));
  iVar1 = CWnd::GetScrollPos(param_2,0);
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + iVar1;
  iVar1 = CWnd::GetScrollPos(param_2,1);
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar1;
  local_14[0] = (HDC__ *)0x0;
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0x1ec) == 0) {
    _AfxBufferedPaintInit();
    pAVar2 = GetGlobalData();
    *(undefined4 *)(pAVar2 + 0x1ec) = 1;
  }
  if (param_1 == (CDC *)0x0) {
    pHVar3 = (HDC__ *)0x0;
  }
  else {
    pHVar3 = *(HDC__ **)(param_1 + 4);
  }
  pvVar4 = _AfxBeginBufferedPaint(pHVar3,(tagRECT *)(this + 0x2c),2,(_BP_PAINTPARAMS *)0x0,local_14)
  ;
  *(void **)(this + 0xc) = pvVar4;
  if ((pvVar4 == (void *)0x0) || (local_14[0] == (HDC__ *)0x0)) {
    if (DAT_101d3520 != 0) {
      iVar1 = CDC::CreateCompatibleDC((CDC *)(this + 0x10),*(CDC **)(this + 4));
      if (iVar1 != 0) {
        pHVar5 = CreateCompatibleBitmap
                           (*(HDC *)(*(int *)(this + 4) + 4),
                            *(int *)(this + 0x34) - ((tagRECT *)(this + 0x2c))->left,
                            *(int *)(this + 0x38) - *(int *)(this + 0x30));
        iVar1 = CMenu::Attach((CMenu *)(this + 0x20),(HMENU__ *)pHVar5);
        if (iVar1 != 0) {
          *(undefined4 *)(this + 8) = 1;
          if ((CMenu *)(this + 0x20) != (CMenu *)0x0) {
            pvVar7 = *(void **)(this + 0x24);
          }
          pCVar6 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x14),pvVar7);
          *(CGdiObject **)(this + 0x28) = pCVar6;
        }
      }
    }
  }
  else {
    *(undefined4 *)(this + 8) = 1;
    CDC::Attach((CDC *)(this + 0x10),local_14[0]);
  }
  return this;
}

