// rea decompile_all
// name: CDockingManager::AlignByRect
// address: 0x100e2946
// body: available
// range: 0x100e2946-0x100e2aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingManager::AlignByRect(class CRect const &,class CRect
   &,unsigned long,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::AlignByRect
          (CDockingManager *this,CRect *param_1,CRect *param_2,ulong param_3,int param_4,int param_5
          )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)param_2;
  iVar3 = *(int *)(param_2 + 4);
  uVar5 = param_3 & 0xf000;
  if (uVar5 == 0x1000) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_2 + 0xc) =
         (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + *(int *)(param_2 + 4);
    *(int *)(param_2 + 8) = *(int *)param_2 + (iVar4 - iVar2);
  }
  else if (uVar5 == 0x2000) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_2 + 8) = (*(int *)(param_1 + 8) - *(int *)param_1) + *(int *)param_2;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 4) + (iVar1 - iVar3);
  }
  else if (uVar5 == 0x4000) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_2 + 4) =
         (*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc)) + *(int *)(param_2 + 0xc);
    *(int *)param_2 = *(int *)(param_2 + 8) - (iVar4 - iVar2);
  }
  else if (uVar5 == 0x8000) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(int *)param_2 = (*(int *)param_1 - *(int *)(param_1 + 8)) + *(int *)(param_2 + 8);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 0xc) - (iVar1 - iVar3);
  }
  if (param_4 == 0) {
    iVar4 = ((*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc)) - *(int *)(param_2 + 4)) +
            *(int *)(param_2 + 0xc);
    if (iVar4 != 0) {
      *(int *)(param_2 + 0xc) = iVar4 + *(int *)(param_2 + 0xc);
    }
    iVar4 = ((*(int *)param_1 - *(int *)(param_1 + 8)) - *(int *)param_2) + *(int *)(param_2 + 8);
    if ((*(int *)(param_1 + 8) - *(int *)param_1 < *(int *)(param_2 + 8) - *(int *)param_2) &&
       (param_5 != 0)) {
      if ((param_3 & 0x1000) == 0) {
        if ((param_3 & 0x4000) != 0) {
          *(int *)param_2 = *(int *)param_2 + iVar4;
        }
      }
      else {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - iVar4;
      }
    }
  }
  else {
    iVar4 = ((*(int *)param_1 - *(int *)(param_1 + 8)) - *(int *)param_2) + *(int *)(param_2 + 8);
    if (iVar4 != 0) {
      *(int *)(param_2 + 8) = iVar4 + *(int *)(param_2 + 8);
    }
    iVar4 = ((*(int *)(param_1 + 4) - *(int *)(param_1 + 0xc)) - *(int *)(param_2 + 4)) +
            *(int *)(param_2 + 0xc);
    if ((0 < iVar4) && (param_5 != 0)) {
      if ((param_3 & 0x2000) == 0) {
        if ((param_3 & 0x8000) != 0) {
          *(int *)(param_2 + 4) = iVar4 + *(int *)(param_2 + 4);
        }
      }
      else {
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar4;
      }
    }
  }
  return;
}

