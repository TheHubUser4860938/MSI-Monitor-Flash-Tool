// rea decompile_all
// name: CDockablePane::CreateTabbedPane
// address: 0x100f3cdf
// body: available
// range: 0x100f3cdf-0x100f3dce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CTabbedPane * __thiscall CDockablePane::CreateTabbedPane(void)
   
   Library: Visual Studio 2015 Release */

CTabbedPane * __thiscall CDockablePane::CreateTabbedPane(CDockablePane *this)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  CTabbedPane *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  tagRECT *ptVar10;
  undefined4 uVar11;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  ptVar10 = &local_18;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(pCVar3,ptVar10);
  piVar4 = (int *)FUN_10019cd8();
  piVar4[0xda] = 1;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  iVar6 = *piVar4;
  uVar11 = 0;
  uVar9 = 0xf;
  uVar8 = 0x20;
  uVar5 = CWnd::GetExStyle((CWnd *)this);
  pcVar1 = *(code **)(iVar6 + 0x324);
  guard_check_icall(&DAT_101b5ebc,pCVar3,&local_18,1,0xffffffff,uVar5 | 0x40,uVar8,uVar9,uVar11);
  iVar6 = (*pcVar1)();
  if (iVar6 != 0) {
    piVar4[0x96] = *(int *)(this + 600);
    piVar4[0x97] = *(int *)(this + 0x25c);
    piVar4[0x98] = *(int *)(this + 0x260);
    piVar4[0x99] = *(int *)(this + 0x264);
    piVar4[0x86] = *(int *)(this + 0x218);
    piVar4[0x87] = *(int *)(this + 0x21c);
    piVar4[0x88] = *(int *)(this + 0x220);
    piVar4[0x89] = *(int *)(this + 0x224);
    piVar4[0x7a] = *(int *)(this + 0x1e8);
    piVar4[0x7b] = *(int *)(this + 0x1ec);
    piVar4[0x7c] = *(int *)(this + 0x1f0);
    piVar4[0x7d] = *(int *)(this + 500);
  }
  pCVar7 = (CTabbedPane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}

