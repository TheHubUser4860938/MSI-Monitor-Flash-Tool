// rea decompile_all
// name: CDialog::CheckAutoCenter
// address: 0x1004cbfd
// body: available
// range: 0x1004cbfd-0x1004cca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CheckAutoCenter(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uint *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  hResData = *(HGLOBAL *)(this + 0x88);
  puVar2 = *(uint **)(this + 0x8c);
  if (*(int *)(this + 0x84) != 0) {
    pAVar1 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar1 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(this + 0x84),(LPCWSTR)&DAT_00000005);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    puVar2 = LockResource(hResData);
  }
  iVar5 = 1;
  if (puVar2 != (uint *)0x0) {
    if (*(short *)((int)puVar2 + 2) == -1) {
      sVar4 = *(short *)((int)puVar2 + 0x12);
      sVar3 = (short)puVar2[5];
      puVar2 = puVar2 + 3;
    }
    else {
      sVar4 = *(short *)((int)puVar2 + 10);
      sVar3 = (short)puVar2[3];
    }
    if ((((*puVar2 & 0x1801) != 0) || (sVar4 != 0)) || (sVar3 != 0)) {
      iVar5 = 0;
    }
  }
  if (*(int *)(this + 0x84) != 0) {
    FreeResource(hResData);
  }
  return iVar5;
}

