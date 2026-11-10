// rea decompile_all
// name: COleControlContainer::HandleWindowlessMessage
// address: 0x440421
// body: available
// range: 0x440421-0x440531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::HandleWindowlessMessage(unsigned
   int,unsigned int,long,long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleControlContainer::HandleWindowlessMessage
          (COleControlContainer *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  POINT pt;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  COleControlContainer *local_8;
  
  *param_4 = 0;
  local_8 = this;
  if (param_1 < 0x110) {
    if (((param_1 < 0x10d) && (param_1 != 0x1f)) && (param_1 != 0x53)) {
      if (param_1 < 0x100) {
        return 0;
      }
      if ((0x105 < param_1) && (param_1 != 0x107)) {
        return 0;
      }
    }
  }
  else {
    if (param_1 < 0x200) {
      return 0;
    }
    if (param_1 < 0x20a) {
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 == 0) {
        local_8 = *(COleControlContainer **)(this + 0x44);
        do {
          if (local_8 == (COleControlContainer *)0x0) {
            return 0;
          }
          piVar2 = (int *)FUN_004ead48(&local_8);
          iVar4 = *piVar2;
          iVar1 = *(int *)(iVar4 + 4);
        } while (((iVar1 == 0) || (*(int *)(iVar1 + 0x74) == 0)) ||
                (pt.y = (int)(short)((uint)param_3 >> 0x10), pt.x = (int)(short)param_3,
                BVar3 = PtInRect((RECT *)(iVar1 + 0x30),pt), BVar3 == 0));
        iVar4 = *(int *)(iVar4 + 4);
        if (iVar4 == 0) {
          return 0;
        }
      }
      piVar2 = *(int **)(iVar4 + 0x5c);
      goto LAB_00440512;
    }
    if (param_1 < 0x281) {
      return 0;
    }
    if ((0x286 < param_1) && (1 < param_1 - 0x290)) {
      return 0;
    }
  }
  if ((*(int *)(this + 0x70) == 0) ||
     (piVar2 = *(int **)(*(int *)(this + 0x70) + 0x5c), piVar2 == (int *)0x0)) {
    return 0;
  }
LAB_00440512:
  iVar4 = *piVar2;
  guard_check_icall(piVar2,param_1,param_2,param_3,param_4);
  iVar4 = (**(code **)(iVar4 + 0x24))();
  return (uint)(iVar4 == 0);
}

