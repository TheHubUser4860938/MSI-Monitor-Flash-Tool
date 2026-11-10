// rea decompile_all
// name: CThreadSlotData::AllocSlot
// address: 0x1004345f
// body: available
// range: 0x1004345f-0x10043576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004351c to 0x10038df9 FUN_10038df9 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CThreadSlotData::AllocSlot(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CThreadSlotData::AllocSlot(CThreadSlotData *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  int iVar8;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(this + 4);
  iVar8 = *(int *)(this + 8);
  if ((iVar2 <= iVar8) || ((*(byte *)(*(int *)(this + 0x10) + iVar8 * 8) & 1) != 0)) {
    iVar8 = 1;
    if (1 < iVar2) {
      pbVar3 = *(byte **)(this + 0x10);
      do {
        pbVar3 = pbVar3 + 8;
        if ((*pbVar3 & 1) == 0) break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
      if (iVar8 < iVar2) goto LAB_1004354d;
    }
    uVar7 = iVar2 + 0x20;
    if (*(LPCVOID *)(this + 0x10) == (LPCVOID)0x0) {
      uVar4 = ATL::AtlMultiplyThrow<unsigned_int>(uVar7,8);
      pvVar5 = GlobalAlloc(2,uVar4);
    }
    else {
      pvVar5 = GlobalHandle(*(LPCVOID *)(this + 0x10));
      GlobalUnlock(pvVar5);
      uFlags = 0x2002;
      uVar4 = ATL::AtlMultiplyThrow<unsigned_int>(uVar7,8);
      pvVar5 = GlobalReAlloc(pvVar5,uVar4,uFlags);
    }
    if (pvVar5 == (HGLOBAL)0x0) {
      if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)(this + 0x10));
        GlobalLock(pvVar5);
      }
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_10038df9();
    }
    pvVar6 = GlobalLock(pvVar5);
    _memset((void *)((int)pvVar6 + *(int *)(this + 4) * 8),0,(uVar7 - *(int *)(this + 4)) * 8);
    *(uint *)(this + 4) = uVar7;
    *(LPVOID *)(this + 0x10) = pvVar6;
  }
LAB_1004354d:
  if (*(int *)(this + 0xc) <= iVar8) {
    *(int *)(this + 0xc) = iVar8 + 1;
  }
  puVar1 = (uint *)(*(int *)(this + 0x10) + iVar8 * 8);
  *puVar1 = *puVar1 | 1;
  *(int *)(this + 8) = iVar8 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar8;
}

