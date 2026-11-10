// rea decompile_all
// name: CThreadSlotData::SetValue
// address: 0x1004361e
// body: available
// range: 0x1004361e-0x100436be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::SetValue(int,void *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CThreadSlotData::SetValue(CThreadSlotData *this,int param_1,void *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *lpTlsValue;
  uint uVar1;
  HLOCAL pvVar2;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 < 1) || (*(int *)(this + 0xc) <= param_1)) goto LAB_10043745;
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = CNoTrackObject::operator_new(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = CThreadData::vftable;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    CSimpleList::AddHead((CSimpleList *)(this + 0x14),lpTlsValue);
LAB_10043675:
    if (lpTlsValue[3] == 0) {
      uVar1 = ATL::AtlMultiplyThrow<unsigned_int>(*(uint *)(this + 0xc),4);
      pvVar2 = LocalAlloc(0,uVar1);
    }
    else {
      uFlags = 2;
      uVar1 = ATL::AtlMultiplyThrow<unsigned_int>(*(uint *)(this + 0xc),4);
      pvVar2 = LocalReAlloc((HLOCAL)lpTlsValue[3],uVar1,uFlags);
    }
    if (pvVar2 == (HLOCAL)0x0) {
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_10038df9();
    }
    lpTlsValue[3] = pvVar2;
    _memset((void *)((int)pvVar2 + lpTlsValue[2] * 4),0,(*(int *)(this + 0xc) - lpTlsValue[2]) * 4);
    lpTlsValue[2] = *(undefined4 *)(this + 0xc);
    TlsSetValue(*(DWORD *)this,lpTlsValue);
  }
  else if (((int)lpTlsValue[2] <= param_1) && (param_2 != (void *)0x0)) goto LAB_10043675;
  if ((lpTlsValue[3] != 0) && (param_1 < (int)lpTlsValue[2])) {
    *(void **)(lpTlsValue[3] + param_1 * 4) = param_2;
  }
LAB_10043745:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

