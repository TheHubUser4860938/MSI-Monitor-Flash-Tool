// rea decompile_all
// name: COleDataObject::IsDataAvailable
// address: 0x100fd33d
// body: available
// range: 0x100fd33d-0x100fd396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall COleDataObject::IsDataAvailable(unsigned short,struct tagFORMATETC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleDataObject::IsDataAvailable(COleDataObject *this,ushort param_1,tagFORMATETC *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 in_stack_00000006;
  undefined1 local_18 [20];
  
  if (*(int *)(this + 8) == 0) {
    if ((param_1 == 0) && (param_2 == (tagFORMATETC *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar3 = FUN_1001dcac(param_2,_param_1,local_18);
      pcVar1 = *(code **)(**(int **)this + 0x14);
      guard_check_icall(*(int **)this,uVar3);
      iVar4 = (*pcVar1)();
      uVar2 = (uint)(iVar4 == 0);
    }
  }
  else {
    uVar2 = IsClipboardFormatAvailable((uint)param_1);
  }
  return uVar2;
}

