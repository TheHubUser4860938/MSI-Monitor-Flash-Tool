// rea decompile_all
// name: ATL::CManualAccessor::BindColumns
// address: 0x441ea6
// body: available
// range: 0x441ea6-0x441f14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CManualAccessor::BindColumns(struct IUnknown *)
   
   Library: Visual Studio 2015 Release */

long __thiscall ATL::CManualAccessor::BindColumns(CManualAccessor *this,IUnknown *param_1)

{
  long lVar1;
  IAccessor *local_8;
  
  if (param_1 == (IUnknown *)0x0) {
    return -0x7fffbffb;
  }
  local_8 = (IAccessor *)0x0;
  lVar1 = IUnknown::QueryInterface<IAccessor>((IAccessor **)param_1);
  if (-1 < lVar1) {
    if (*(int *)this == 0) {
      lVar1 = CAccessorBase::AllocateAccessorMemory((CAccessorBase *)this,1);
      if (lVar1 < 0) goto LAB_00441f03;
      *(undefined1 *)(*(int *)this + 4) = 1;
    }
    lVar1 = CAccessorBase::BindEntries
                      (*(tagDBBINDING **)(this + 0xc),*(ulong *)(this + 0x10),*(ulong **)this,
                       *(ulong *)(this + 0x18),local_8);
  }
LAB_00441f03:
  CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_8);
  return lVar1;
}

