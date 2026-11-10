// rea decompile_all
// name: CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::Serialize
// address: 0x46a859
// body: available
// range: 0x46a859-0x46a8f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CList<struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct
   AFX_AUTOHIDE_DOCKSITE_SAVE_INFO &>::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::Serialize
          (CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *this,
          CArchive *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO local_5c [84];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x46a865;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar1 = CArchive::ReadCount(param_1); uVar1 != 0; uVar1 = uVar1 - 1) {
      _eh_vector_constructor_iterator_
                (local_5c,0x48,1,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,
                 AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::~AFX_AUTOHIDE_DOCKSITE_SAVE_INFO);
      local_8 = 0;
      FUN_0046623b(param_1,local_5c,1);
      AddTail(this,local_5c);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_
                (local_5c,0x48,1,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::~AFX_AUTOHIDE_DOCKSITE_SAVE_INFO);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 0xc));
    for (puVar2 = *(undefined4 **)(this + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      FUN_0046623b(param_1,puVar2 + 2,1);
    }
  }
  FUN_0055bae6();
  return;
}

