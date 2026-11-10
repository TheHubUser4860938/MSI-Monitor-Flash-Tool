// rea decompile_all
// name: QueryInterface
// address: 0x4457b6
// body: available
// range: 0x4457b6-0x44580a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlSite::XPropertyNotifySink::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlSite::XRowsetNotify::QueryInterface(struct _GUID const
   &,void * *)
   
   Library: Visual Studio 2015 Release */

undefined4 QueryInterface(int *param_1,void *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = _memcmp(param_2,&DAT_005dba30,0x10);
  if ((iVar2 != 0) && (iVar2 = _memcmp(param_2,&DAT_005dbb10,0x10), iVar2 != 0)) {
    return 0x80004002;
  }
  *param_3 = param_1;
  pcVar1 = *(code **)(*param_1 + 4);
  guard_check_icall(param_1);
  (*pcVar1)();
  return 0;
}

