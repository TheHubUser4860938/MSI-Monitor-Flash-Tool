// rea decompile_all
// name: COleDataSource::Lookup
// address: 0x100e5c7e
// body: available
// range: 0x100e5c7e-0x100e5d5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct AFX_DATACACHE_ENTRY * __thiscall COleDataSource::Lookup(struct tagFORMATETC
   *,enum tagDATADIR)const 
   
   Library: Visual Studio 2015 Release */

AFX_DATACACHE_ENTRY * __thiscall
COleDataSource::Lookup(COleDataSource *this,tagFORMATETC *param_1,tagDATADIR param_2)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  size_t *_Buf1;
  DVTARGETDEVICE *_Buf2;
  AFX_DATACACHE_ENTRY *pAVar4;
  AFX_DATACACHE_ENTRY *pAVar5;
  int local_10;
  AFX_DATACACHE_ENTRY *local_c;
  uint local_8;
  
  pAVar5 = (AFX_DATACACHE_ENTRY *)0x0;
  local_8 = 0;
  local_c = (AFX_DATACACHE_ENTRY *)0x0;
  if (*(int *)(this + 0x28) != 0) {
    local_10 = 0;
    do {
      pAVar4 = (AFX_DATACACHE_ENTRY *)(*(int *)(this + 0x20) + local_10);
      if ((*(CLIPFORMAT *)pAVar4 == param_1->cfFormat) &&
         ((param_1->tymed & *(uint *)(pAVar4 + 0x10)) != 0)) {
        DVar1 = *(DWORD *)(pAVar4 + 8);
        if ((DVar1 != 2) && ((DVar1 != 4 && (*(int *)(pAVar4 + 0x14) != 0)))) {
          iVar2 = *(int *)(pAVar4 + 0xc);
          iVar3 = param_1->lindex;
          pAVar5 = local_c;
          if ((iVar2 != iVar3) &&
             (((iVar2 != 0 || (iVar3 != -1)) && ((iVar2 != -1 || (iVar3 != 0))))))
          goto LAB_100e5d38;
        }
        if ((DVar1 == param_1->dwAspect) && (*(tagDATADIR *)(pAVar4 + 0x20) == param_2)) {
          _Buf2 = param_1->ptd;
          _Buf1 = *(size_t **)(pAVar4 + 4);
          pAVar5 = pAVar4;
          local_c = pAVar4;
          if (_Buf1 != (size_t *)0x0) {
            if ((_Buf2 == (DVTARGETDEVICE *)0x0) || (*_Buf1 != _Buf2->tdSize)) goto LAB_100e5d38;
            _Buf2 = (DVTARGETDEVICE *)_memcmp(_Buf1,_Buf2,*_Buf1);
          }
          if (_Buf2 == (DVTARGETDEVICE *)0x0) {
            return pAVar4;
          }
        }
      }
LAB_100e5d38:
      local_8 = local_8 + 1;
      local_10 = local_10 + 0x24;
    } while (local_8 < *(uint *)(this + 0x28));
  }
  return pAVar5;
}

