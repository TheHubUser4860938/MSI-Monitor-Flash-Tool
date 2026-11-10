// rea decompile_all
// name: CDockingManager::ShowDelayShowMiniFrames
// address: 0x100bb622
// body: available
// range: 0x100bb622-0x100bb6ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::ShowDelayShowMiniFrames(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::ShowDelayShowMiniFrames(CDockingManager *this,int param_1)

{
  CObject *pCVar1;
  HWND hWnd;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  BOOL BVar5;
  int local_8;
  
  local_8 = *(int *)(this + 0xcc);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_100972dc(&local_8);
    pCVar1 = (CObject *)*puVar2;
    if ((((pCVar1 != (CObject *)0x0) &&
         (iVar3 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4), iVar3 != 0)) &&
        (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,pCVar1),
        pCVar4 != (CObject *)0x0)) && (*(int *)(pCVar4 + 0xa0) != 0)) {
      hWnd = *(HWND *)(pCVar1 + 0x20);
      BVar5 = IsWindow(hWnd);
      if (BVar5 != 0) {
        ShowWindow(hWnd,-(uint)(param_1 != 0) & 4);
      }
      *(undefined4 *)(pCVar4 + 0xa0) = 0;
    }
  }
  return;
}

