// rea decompile_all
// name: COleDataSource::XDataObject::GetData
// address: 0x100e5a93
// body: available
// range: 0x100e5a93-0x100e5b51 inclusive
// range: 0x100e5b74-0x100e5b88 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDataSource::XDataObject::GetData(struct tagFORMATETC *,struct
   tagSTGMEDIUM *)
   
   Library: Visual Studio 2015 Release */

long COleDataSource::XDataObject::GetData(tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  code *pcVar1;
  AFX_DATACACHE_ENTRY *pAVar2;
  int iVar3;
  uint uVar4;
  tagSTGMEDIUM *in_stack_0000000c;
  
  FUN_10018f0d(*(undefined4 *)(param_1 + -1));
  uVar4 = 0;
  if ((param_2 == (tagSTGMEDIUM *)0x0) || (in_stack_0000000c == (tagSTGMEDIUM *)0x0)) {
    guard_check_icall();
    uVar4 = 0x80070057;
  }
  else {
    pAVar2 = Lookup((COleDataSource *)&param_1[-3].lindex,(tagFORMATETC *)param_2,1);
    if (pAVar2 == (AFX_DATACACHE_ENTRY *)0x0) {
      guard_check_icall();
      uVar4 = 0x80040064;
    }
    else {
      _memset(in_stack_0000000c,0,0xc);
      if (((tagSTGMEDIUM *)(pAVar2 + 0x14))->tymed == 0) {
        pcVar1 = *(code **)(param_1[-3].lindex + 0x58);
        guard_check_icall(param_2,in_stack_0000000c);
        iVar3 = (*pcVar1)();
        uVar4 = ~-(uint)(iVar3 != 0) & 0x80040064;
      }
      else {
        iVar3 = _AfxCopyStgMedium((ushort)param_2->tymed,in_stack_0000000c,
                                  (tagSTGMEDIUM *)(pAVar2 + 0x14));
        if (iVar3 == 0) {
          uVar4 = 0x80040064;
        }
      }
      guard_check_icall();
    }
  }
  return uVar4;
}

