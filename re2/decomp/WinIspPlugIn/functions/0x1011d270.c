// rea decompile_all
// name: COleDropSource::OnBeginDrag
// address: 0x1011d270
// body: available
// range: 0x1011d270-0x1011d392 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleDropSource::OnBeginDrag(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall COleDropSource::OnBeginDrag(COleDropSource *this,CWnd *param_1)

{
  POINT pt;
  SHORT SVar1;
  DWORD DVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  DWORD DVar6;
  tagMSG local_20;
  
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  SVar1 = GetKeyState(1);
  if (SVar1 < 0) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 1;
    *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
  }
  else {
    SVar1 = GetKeyState(2);
    if (SVar1 < 0) {
      *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 2;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    }
  }
  DVar2 = GetTickCount();
  pHVar3 = SetCapture(*(HWND *)(param_1 + 0x20));
  CWnd::FromHandle(pHVar3);
  while (*(int *)(this + 0x34) == 0) {
    pHVar3 = GetCapture();
    pCVar4 = CWnd::FromHandle(pHVar3);
    if (pCVar4 != param_1) break;
    BVar5 = PeekMessageW(&local_20,(HWND)0x0,0x200,0x209,1);
    if (BVar5 == 0) {
      BVar5 = PeekMessageW(&local_20,(HWND)0x0,0x100,0x109,1);
      if (BVar5 != 0) goto LAB_1011d31c;
    }
    else {
LAB_1011d31c:
      if ((((local_20.message == 0x202) || (local_20.message == 0x205)) ||
          (local_20.message == 0x201)) ||
         ((local_20.message == 0x204 || ((local_20.message == 0x100 && (local_20.wParam == 0x1b)))))
         ) break;
      pt.y = local_20.pt.y;
      pt.x = local_20.pt.x;
      BVar5 = PtInRect((RECT *)(this + 0x24),pt);
      *(uint *)(this + 0x34) = (uint)(BVar5 == 0);
    }
    DVar6 = GetTickCount();
    if (DAT_10247b70 < DVar6 - DVar2) {
      *(undefined4 *)(this + 0x34) = 1;
    }
  }
  ReleaseCapture();
  return *(int *)(this + 0x34);
}

