// rea decompile_all
// name: OnDrawControlBorder
// address: 0x10149918
// body: available
// range: 0x10149918-0x101499e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawControlBorder(class CWnd *)
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawControlBorder(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void OnDrawControlBorder(CWnd *param_1)

{
  HRESULT HVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CMFCVisualManager *in_ECX;
  ulong uVar3;
  CWindowDC local_3c [20];
  COLORREF local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x10149924;
  if (*(int *)(in_ECX + 0x18) == 0) {
    CMFCVisualManager::OnDrawControlBorder(in_ECX,param_1);
  }
  else {
    CWindowDC::CWindowDC(local_3c,param_1);
    local_8 = 0;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_24);
    local_24.bottom = local_24.bottom - local_24.top;
    local_24.right = local_24.right - local_24.left;
    local_28 = 0xffffffff;
    local_24.top = 0;
    local_24.left = 0;
    HVar1 = GetThemeColor(*(HTHEME *)(in_ECX + 0x18),5,0,0xed9,&local_28);
    if (HVar1 == 0) {
      CDC::Draw3dRect((CDC *)local_3c,&local_24,local_28,local_28);
      InflateRect(&local_24,-1,-1);
      pAVar2 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar2 + 0x6c);
      pAVar2 = GetGlobalData();
      CDC::Draw3dRect((CDC *)local_3c,&local_24,*(ulong *)(pAVar2 + 0x6c),uVar3);
    }
    else {
      CMFCVisualManager::OnDrawControlBorder(in_ECX,param_1);
    }
    CWindowDC::~CWindowDC(local_3c);
  }
  FUN_1018015d();
  return;
}

