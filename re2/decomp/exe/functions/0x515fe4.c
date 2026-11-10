// rea decompile_all
// name: CreateClient
// address: 0x515fe4
// body: available
// range: 0x515fe4-0x516070 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMDIFrameWnd::CreateClient(struct tagCREATESTRUCTA *,class CMenu
   *)
    public: virtual int __thiscall CMDIFrameWnd::CreateClient(struct tagCREATESTRUCTW *,class CMenu
   *)
   
   Library: Visual Studio 2015 Release */

bool CreateClient(int param_1,int param_2)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  HWND hWnd;
  CWnd *in_ECX;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = 0x56000001;
  if (param_2 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_2 + 4);
  }
  local_8 = 0xff00;
  uVar1 = *(uint *)(param_1 + 0x20) & 0x300000;
  if (uVar1 != 0) {
    uVar3 = uVar1 | 0x56000001;
    CWnd::ModifyStyle(in_ECX,0x300000,0,0x28);
  }
  pAVar2 = AfxGetModuleState();
  hWnd = (HWND)FID_conflict__IsolationAwareCreateWindowExW_48
                         (0x200,L"mdiclient",0,uVar3,0,0,0,0,*(undefined4 *)(in_ECX + 0x20),0xe900,
                          *(undefined4 *)(pAVar2 + 8),&local_c);
  *(HWND *)(in_ECX + 0x120) = hWnd;
  if (hWnd != (HWND)0x0) {
    BringWindowToTop(hWnd);
  }
  return hWnd != (HWND)0x0;
}

