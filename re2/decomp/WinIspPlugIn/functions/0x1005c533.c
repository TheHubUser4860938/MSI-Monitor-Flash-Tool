// rea decompile_all
// name: CDataRecoveryHandler::AutosaveAllDocumentInfo
// address: 0x1005c533
// body: available
// range: 0x1005c533-0x1005c5fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::AutosaveAllDocumentInfo(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::AutosaveAllDocumentInfo(CDataRecoveryHandler *this)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_10;
  int local_c;
  int *local_8;
  
  uVar7 = 1;
  if (((byte)this[0xb4] & 0xc) != 0) {
    pAVar4 = AfxGetModuleState();
    if ((*(int *)(pAVar4 + 4) != 0) &&
       (piVar1 = *(int **)(*(int *)(pAVar4 + 4) + 0x5c), piVar1 != (int *)0x0)) {
      pcVar2 = *(code **)(*piVar1 + 0x10);
      guard_check_icall();
      local_10 = (*pcVar2)();
      iVar3 = local_c;
      while (local_c = iVar3, local_10 != 0) {
        pcVar2 = *(code **)(*piVar1 + 0x14);
        guard_check_icall(&local_10);
        local_8 = (int *)(*pcVar2)();
        pcVar2 = *(code **)(*local_8 + 0x54);
        guard_check_icall();
        local_c = (*pcVar2)();
        while (iVar3 = 0, local_c != 0) {
          pcVar2 = *(code **)(*local_8 + 0x58);
          guard_check_icall(&local_c);
          uVar5 = (*pcVar2)();
          pcVar2 = *(code **)(*(int *)this + 0x40);
          guard_check_icall(uVar5,0);
          uVar6 = (*pcVar2)();
          uVar7 = uVar7 & uVar6;
        }
      }
    }
  }
  return uVar7;
}

