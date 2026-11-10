// rea decompile_all
// name: COleDataSource::CacheGlobalData
// address: 0x100f0b62
// body: available
// range: 0x100f0b62-0x100f0b9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall COleDataSource::CacheGlobalData(unsigned short,void *,struct
   tagFORMATETC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleDataSource::CacheGlobalData
          (COleDataSource *this,ushort param_1,void *param_2,tagFORMATETC *param_3)

{
  tagFORMATETC *ptVar1;
  AFX_DATACACHE_ENTRY *pAVar2;
  undefined2 in_stack_00000006;
  undefined1 local_18 [20];
  
  ptVar1 = (tagFORMATETC *)FUN_1001dcac(param_3,_param_1,local_18);
  ptVar1->tymed = 1;
  pAVar2 = GetCacheEntry(this,ptVar1,1);
  *(undefined4 *)(pAVar2 + 0x1c) = 0;
  *(undefined4 *)(pAVar2 + 0x14) = 1;
  *(void **)(pAVar2 + 0x18) = param_2;
  return;
}

