// rea decompile_all
// name: _AfxCoCreateInstanceLic
// address: 0x447209
// body: available
// range: 0x447209-0x4472ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall _AfxCoCreateInstanceLic(struct _GUID const &,struct IUnknown *,unsigned
   long,struct _GUID const &,void * *,wchar_t *)
   
   Library: Visual Studio 2015 Release */

long _AfxCoCreateInstanceLic
               (_GUID *param_1,IUnknown *param_2,ulong param_3,_GUID *param_4,void **param_5,
               wchar_t *param_6)

{
  code *pcVar1;
  int iVar2;
  HRESULT HVar3;
  long lVar4;
  int *local_8;
  
  iVar2 = Ordinal_7(param_6);
  local_8 = (int *)0x0;
  if (iVar2 == 0) {
    HVar3 = CoGetClassObject(param_1,param_3,(LPVOID)0x0,(IID *)&DAT_005dba40,&local_8);
    if (HVar3 < 0) {
      return HVar3;
    }
    iVar2 = *local_8;
    guard_check_icall(local_8,param_2,param_4,param_5);
    lVar4 = (**(code **)(iVar2 + 0xc))();
  }
  else {
    HVar3 = CoGetClassObject(param_1,param_3,(LPVOID)0x0,(IID *)&DAT_005dbac0,&local_8);
    if (HVar3 < 0) {
      return HVar3;
    }
    iVar2 = *local_8;
    guard_check_icall(local_8,param_2,0,param_4,param_6,param_5);
    lVar4 = (**(code **)(iVar2 + 0x1c))();
  }
  pcVar1 = *(code **)(*local_8 + 8);
  guard_check_icall(local_8);
  (*pcVar1)();
  return lVar4;
}

