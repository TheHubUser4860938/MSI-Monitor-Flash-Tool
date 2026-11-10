// rea decompile_all
// name: COleDataSource::GetCacheEntry
// address: 0x4e43d4
// body: available
// range: 0x4e43d4-0x4e4484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct AFX_DATACACHE_ENTRY * __thiscall COleDataSource::GetCacheEntry(struct
   tagFORMATETC *,enum tagDATADIR)
   
   Library: Visual Studio 2015 Release */

AFX_DATACACHE_ENTRY * __thiscall
COleDataSource::GetCacheEntry(COleDataSource *this,tagFORMATETC *param_1,tagDATADIR param_2)

{
  longlong lVar1;
  AFX_DATACACHE_ENTRY *pAVar2;
  void *pvVar3;
  int iVar4;
  AFX_DATACACHE_ENTRY *pAVar5;
  
  pAVar2 = Lookup(this,param_1,param_2);
  if (pAVar2 == (AFX_DATACACHE_ENTRY *)0x0) {
    if ((*(int *)(this + 0x20) == 0) || (*(int *)(this + 0x28) == *(int *)(this + 0x24))) {
      lVar1 = (ulonglong)(uint)(*(int *)(this + 0x24) + *(int *)(this + 0x2c)) * 0x24;
      pvVar3 = (void *)FUN_00416444(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      iVar4 = *(int *)(this + 0x24) + *(int *)(this + 0x2c);
      *(int *)(this + 0x24) = iVar4;
      if (*(int *)(this + 0x20) != 0) {
        ATL::Checked::memmove_s
                  (pvVar3,(*(int *)(this + 0x2c) + iVar4) * 0x24,*(void **)(this + 0x20),
                   *(int *)(this + 0x28) * 0x24);
        FID_conflict__free(*(void **)(this + 0x20));
      }
      *(void **)(this + 0x20) = pvVar3;
    }
    pAVar2 = (AFX_DATACACHE_ENTRY *)(*(int *)(this + 0x28) * 0x24 + *(int *)(this + 0x20));
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  }
  else {
    CoTaskMemFree(*(LPVOID *)(pAVar2 + 4));
    ReleaseStgMedium((LPSTGMEDIUM)(pAVar2 + 0x14));
  }
  *(tagDATADIR *)(pAVar2 + 0x20) = param_2;
  pAVar5 = pAVar2;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)param_1;
    param_1 = (tagFORMATETC *)&param_1->ptd;
    pAVar5 = pAVar5 + 4;
  }
  return pAVar2;
}

