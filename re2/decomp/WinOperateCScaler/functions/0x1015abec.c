// rea decompile_all
// name: Getcat
// address: 0x1015abec
// body: available
// range: 0x1015abec-0x1015ac91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned int __cdecl std::collate<unsigned short>::_Getcat(class
   std::locale::facet const * *,class std::locale const *)
    public: static unsigned int __cdecl std::collate<wchar_t>::_Getcat(class std::locale::facet
   const * *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

void Getcat(int *param_1,locale *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Collvec _Var5;
  
  bVar2 = false;
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_1001cfa0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)std::locale::name(param_2);
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_10006880(puVar4);
      puVar3[1] = 0;
      bVar2 = true;
      bVar1 = true;
      *puVar3 = std::collate<unsigned_short>::vftable;
      _Var5 = __Getcoll();
      *(_Collvec *)(puVar3 + 2) = _Var5;
    }
    *param_1 = (int)puVar3;
    if (bVar1) {
      FUN_10007520();
    }
    if (bVar2) {
      FUN_10003850(1,0);
    }
  }
  FUN_10154478();
  return;
}

