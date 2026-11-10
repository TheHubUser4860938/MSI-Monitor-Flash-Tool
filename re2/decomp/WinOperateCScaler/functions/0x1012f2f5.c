// rea decompile_all
// name: FID_conflict:IsLeftPartEmpty
// address: 0x1012f2f5
// body: available
// range: 0x1012f2f5-0x1012f341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CPaneContainer::IsLeftPartEmpty(int)const 
    public: int __thiscall CPaneContainer::IsRightPartEmpty(int)const 
   
   Library: Visual Studio 2015 Release */

undefined4 FID_conflict_IsLeftPartEmpty(int param_1)

{
  CPaneContainer *this;
  ulong uVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(CWnd **)(in_ECX + 4) == (CWnd *)0x0) ||
      ((param_1 != 0 &&
       (uVar1 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 4)), (uVar1 & 0x10000000) == 0)))) &&
     ((this = *(CPaneContainer **)(in_ECX + 0x10), this == (CPaneContainer *)0x0 ||
      ((iVar2 = CPaneContainer::IsEmpty(this), iVar2 != 0 ||
       ((param_1 != 0 && (iVar2 = CPaneContainer::IsVisible(this), iVar2 == 0)))))))) {
    return 1;
  }
  return 0;
}

