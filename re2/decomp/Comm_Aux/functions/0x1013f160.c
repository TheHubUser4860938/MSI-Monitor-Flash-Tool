// rea decompile_all
// name: CMFCColorPopupMenu
// address: 0x1013f160
// body: available
// range: 0x1013f160-0x1013f1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMFCColorPopupMenu::CMFCColorPopupMenu(class CArray<unsigned long,unsigned
   long> const &,unsigned long,char const *,char const *,char const *,class CList<unsigned
   long,unsigned long> &,int,int,int,unsigned long,unsigned int,int)
    public: __thiscall CMFCColorPopupMenu::CMFCColorPopupMenu(class CArray<unsigned long,unsigned
   long> const &,unsigned long,wchar_t const *,wchar_t const *,wchar_t const *,class CList<unsigned
   long,unsigned long> &,int,int,int,unsigned long,unsigned int,int)
   
   Library: Visual Studio 2015 Release */

void CMFCColorPopupMenu(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12)

{
  CMFCPopupMenu *in_ECX;
  
  CMFCPopupMenu::CMFCPopupMenu(in_ECX);
  *(undefined ***)in_ECX = CMFCColorPopupMenu::vftable;
  CMFCColorBar(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,0);
  *(undefined4 *)(in_ECX + 0x1fe0) = 0;
  *(undefined4 *)(in_ECX + 0x1f68) = param_12;
  return;
}

