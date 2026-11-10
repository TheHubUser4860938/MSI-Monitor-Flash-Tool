// rea decompile_all
// name: Serialize
// address: 0x100f6ff9
// body: available
// range: 0x100f6ff9-0x100f705f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CList<unsigned int,unsigned int>::Serialize(class CArchive &)
    public: virtual void __thiscall CList<unsigned long,unsigned long>::Serialize(class CArchive &)
    public: virtual void __thiscall CList<struct AFX_DYNAMIC_LAYOUT_ITEM *,struct
   AFX_DYNAMIC_LAYOUT_ITEM *>::Serialize(class CArchive &)
    public: virtual void __thiscall CList<struct HINSTANCE__ *,struct HINSTANCE__
   *>::Serialize(class CArchive &)
     18 names - too many to list
   
   Library: Visual Studio 2015 Release */

void Serialize(CArchive *param_1)

{
  ulong uVar1;
  CList<HWND__*,HWND__*> *in_ECX;
  undefined4 *puVar2;
  CList<HWND__*,HWND__*> *local_8;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_8 = in_ECX;
    for (uVar1 = CArchive::ReadCount(param_1); uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_1006724d(param_1,&local_8,1);
      CList<HWND__*,HWND__*>::AddTail(in_ECX,(HWND__ *)local_8);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(in_ECX + 0xc));
    for (puVar2 = *(undefined4 **)(in_ECX + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      FUN_1006724d(param_1,puVar2 + 2,1);
    }
  }
  return;
}

