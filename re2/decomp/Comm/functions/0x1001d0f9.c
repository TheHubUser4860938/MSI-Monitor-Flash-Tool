// rea decompile_all
// name: CWnd::DoD2DPaint
// address: 0x1001d0f9
// body: available
// range: 0x1001d0f9-0x1001d291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CWnd::DoD2DPaint(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::DoD2DPaint(CWnd *this)

{
  CHwndRenderTarget *this_00;
  LRESULT LVar1;
  long lVar2;
  CDCRenderTarget *this_01;
  HDC pHVar3;
  int iVar4;
  CDC local_90 [16];
  tagPAINTSTRUCT local_80;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x1001d108;
  if (*(int *)(this + 0x7c) != 0) {
    this_00 = GetRenderTarget(this);
    if (this_00 == (CHwndRenderTarget *)0x0) {
      this_01 = GetDCRenderTarget(this);
      if (this_01 != (CDCRenderTarget *)0x0) {
        if (*(int *)(this_01 + 4) == 0) {
          local_30 = 0;
          local_40 = 0;
          local_34 = 0;
          local_3c = 0x57;
          local_38 = 3;
          local_2c = 0;
          local_28 = 0;
          FUN_10024482(&local_40);
          if (*(int *)(this_01 + 4) == 0) goto LAB_1001d28c;
        }
        CDC::CDC(local_90);
        local_8 = 0;
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_24);
        pHVar3 = BeginPaint(*(HWND *)(this + 0x20),&local_80);
        CDC::Attach(local_90,pHVar3);
        CDCRenderTarget::BindDC(this_01,local_90,(CRect *)&local_24);
        CRenderTarget::BeginDraw((CRenderTarget *)this_01);
        SendMessageW(*(HWND *)(this + 0x20),DAT_101da324,0,(LPARAM)this_01);
        lVar2 = CRenderTarget::EndDraw((CRenderTarget *)this_01);
        if (lVar2 == -0x7766fff4) {
          SendMessageW(*(HWND *)(this + 0x20),DAT_101da528,0,(LPARAM)this_01);
        }
        CDC::Detach(local_90);
        EndPaint(*(HWND *)(this + 0x20),&local_80);
        CDC::~CDC(local_90);
      }
    }
    else if ((*(int *)(this_00 + 4) != 0) ||
            (FUN_1002450c(*(undefined4 *)(this + 0x20)), *(int *)(this_00 + 4) != 0)) {
      CRenderTarget::BeginDraw((CRenderTarget *)this_00);
      LVar1 = SendMessageW(*(HWND *)(this + 0x20),DAT_101da324,0,(LPARAM)this_00);
      lVar2 = CRenderTarget::EndDraw((CRenderTarget *)this_00);
      if (lVar2 == -0x7766fff4) {
        CHwndRenderTarget::ReCreate(this_00,*(HWND__ **)(this + 0x20));
        SendMessageW(*(HWND *)(this + 0x20),DAT_101da528,0,(LPARAM)this_00);
      }
      if (LVar1 != 0) {
        ValidateRect(*(HWND *)(this + 0x20),(RECT *)0x0);
      }
    }
  }
LAB_1001d28c:
  iVar4 = FUN_101490fe();
  return iVar4;
}

