// rea decompile_all
// name: CEnumFormatEtc::AddFormat
// address: 0x1011b9b0
// body: available
// range: 0x1011b9b0-0x1011ba31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CEnumFormatEtc::AddFormat(struct tagFORMATETC const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CEnumFormatEtc::AddFormat(CEnumFormatEtc *this,tagFORMATETC *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  CLIPFORMAT *pCVar3;
  
  if (*(int *)(this + 0x30) == *(int *)(this + 0x3c)) {
    lVar1 = (ulonglong)(*(int *)(this + 0x30) + 10) * 0x14;
    uVar2 = FUN_10047ef0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 10;
    FUN_100345e0(uVar2,*(int *)(this + 0x30) * 0x14 + 200,*(undefined4 *)(this + 0x28),
                 *(int *)(this + 0x30) * 0x14);
    FUN_1017ebcb(*(undefined4 *)(this + 0x28),1);
    *(undefined4 *)(this + 0x28) = uVar2;
  }
  pCVar3 = (CLIPFORMAT *)(*(int *)(this + 0x30) * 0x14 + *(int *)(this + 0x28));
  *pCVar3 = param_1->cfFormat;
  *(DVTARGETDEVICE **)(pCVar3 + 2) = param_1->ptd;
  *(DWORD *)(pCVar3 + 4) = param_1->dwAspect;
  *(LONG *)(pCVar3 + 6) = param_1->lindex;
  *(DWORD *)(pCVar3 + 8) = param_1->tymed;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  return;
}

