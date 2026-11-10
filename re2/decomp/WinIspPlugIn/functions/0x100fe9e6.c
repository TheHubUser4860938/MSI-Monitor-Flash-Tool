// rea decompile_all
// name: CSmartDockingManager::MoveCentralGroup
// address: 0x100fe9e6
// body: available
// range: 0x100fe9e6-0x100feae6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::MoveCentralGroup(class CRect,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingManager::MoveCentralGroup
          (CSmartDockingManager *this,LONG param_2,LONG param_3,LONG param_4,LONG param_5,
          undefined4 param_6,uint param_7)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 4) != 0) &&
     (*(CSmartDockingGroupGuidesManager **)(this + 0x10c) != (CSmartDockingGroupGuidesManager *)0x0)
     ) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CSmartDockingGroupGuidesManager::GetWindowRect
              (*(CSmartDockingGroupGuidesManager **)(this + 0x10c),(CRect *)&local_18);
    BVar2 = EqualRect(&local_18,(RECT *)&param_2);
    uVar1 = param_7;
    if (BVar2 == 0) {
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0x10c),4,param_7 >> 0xc & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0x10c),6,uVar1 >> 0xd & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0x10c),5,uVar1 >> 0xe & 1,1);
      CSmartDockingGroupGuidesManager::ShowGuide
                (*(CSmartDockingGroupGuidesManager **)(this + 0x10c),7,uVar1 >> 0xf & 1,1);
      iVar3 = **(int **)(this + 0x10c);
      guard_check_icall(param_2,param_3,param_4,param_5,param_6);
      iVar3 = (**(code **)(iVar3 + 0x18))();
      if (iVar3 != 0) {
        *(undefined4 *)(this + 0x110) = 0xffffffff;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

