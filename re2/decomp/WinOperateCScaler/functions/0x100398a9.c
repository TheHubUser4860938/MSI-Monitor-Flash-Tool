// rea decompile_all
// name: CDialogTemplate::GetFont
// address: 0x100398a9
// body: available
// range: 0x100398a9-0x100398f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __cdecl CDialogTemplate::GetFont(struct DLGTEMPLATE const *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,unsigned
   short &)
   
   Library: Visual Studio 2015 Release */

int __cdecl
CDialogTemplate::GetFont
          (DLGTEMPLATE *param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
          ushort *param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = HasFont(param_1);
  if (iVar1 != 0) {
    puVar2 = (ushort *)FUN_100398f1(param_1);
    *param_3 = *puVar2;
    ATL::CSimpleStringT<wchar_t,0>::Append
              ((CSimpleStringT<wchar_t,0> *)param_2,
               (wchar_t *)(puVar2 + (uint)(*(short *)((int)&param_1->style + 2) == -1) * 2 + 1));
  }
  return (uint)(iVar1 != 0);
}

