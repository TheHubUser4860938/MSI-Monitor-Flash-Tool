// rea decompile_all
// name: CDialog::CheckAutoCenter
// address: 0x10039b66
// body: available
// range: 0x10039b66-0x10039c02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CheckAutoCenter(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  HMODULE hModule;
  short sVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  HGLOBAL local_8;
  
  local_8 = *(HGLOBAL *)(this + 0x5c);
  puVar3 = *(uint **)(this + 0x60);
  if (*(int *)(this + 0x58) != 0) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(this + 0x58),(LPCWSTR)0x5);
    local_8 = LoadResource(hModule,hResInfo);
  }
  if (local_8 != (HGLOBAL)0x0) {
    puVar3 = LockResource(local_8);
  }
  iVar6 = 1;
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
    if (*(short *)((int)puVar3 + 2) == -1) {
      uVar5 = puVar3[3];
      sVar1 = *(short *)((int)puVar3 + 0x12);
      sVar4 = (short)puVar3[5];
    }
    else {
      sVar1 = *(short *)((int)puVar3 + 10);
      sVar4 = (short)puVar3[3];
    }
    if ((((uVar5 & 0x1801) != 0) || (sVar1 != 0)) || (sVar4 != 0)) {
      iVar6 = 0;
    }
  }
  if (*(int *)(this + 0x58) != 0) {
    FreeResource(local_8);
  }
  return iVar6;
}

