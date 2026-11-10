// rea decompile_all
// name: CDockingManager::SendMessageToMiniFrames
// address: 0x100b9c07
// body: available
// range: 0x100b9c07-0x100b9c59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockingManager::SendMessageToMiniFrames(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingManager::SendMessageToMiniFrames
          (CDockingManager *this,uint param_1,uint param_2,long param_3)

{
  undefined4 *puVar1;
  CObject *pCVar2;
  int local_8;
  
  local_8 = *(int *)(this + 0xcc);
  while (local_8 != 0) {
    puVar1 = (undefined4 *)FUN_100972dc(&local_8);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,(CObject *)*puVar1);
    SendMessageW(*(HWND *)(pCVar2 + 0x20),param_1,param_2,param_3);
  }
  return 1;
}

