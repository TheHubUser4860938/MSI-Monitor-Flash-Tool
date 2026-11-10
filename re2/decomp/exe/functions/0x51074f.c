// rea decompile_all
// name: CMDIClientAreaWnd::DrawNewGroupRect
// address: 0x51074f
// body: available
// range: 0x51074f-0x510803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::DrawNewGroupRect(struct tagRECT const *,struct
   tagRECT const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::DrawNewGroupRect(CMDIClientAreaWnd *this,tagRECT *param_1,tagRECT *param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CWindowDC local_58 [20];
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x51075b;
  pHVar1 = GetDesktopWindow();
  pCVar2 = CWnd::FromHandle(pHVar1);
  CWindowDC::CWindowDC(local_58,pCVar2);
  local_8 = 0;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  SetRectEmpty(&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  if (param_1 != (tagRECT *)0x0) {
    CopyRect(&local_44,param_1);
    local_34.left = local_44.left;
    local_34.top = local_44.top;
    local_34.right = local_44.right;
    local_34.bottom = local_44.bottom;
  }
  if (param_2 != (tagRECT *)0x0) {
    CopyRect(&local_44,param_2);
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
  }
  CDC::DrawDragRect((CDC *)local_58,&local_34,(tagSIZE)0x400000004,&local_24,(tagSIZE)0x400000004,
                    (CBrush *)0x0,(CBrush *)0x0);
  CWindowDC::~CWindowDC(local_58);
  FUN_0055bae6();
  return;
}

