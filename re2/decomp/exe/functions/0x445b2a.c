// rea decompile_all
// name: ATL::CAccessorBase::ReleaseAccessors
// address: 0x445b2a
// body: available
// range: 0x445b2a-0x445bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CAccessorBase::ReleaseAccessors(struct IUnknown *)
   
   Library: Visual Studio 2015 Release */

long __thiscall ATL::CAccessorBase::ReleaseAccessors(CAccessorBase *this,IUnknown *param_1)

{
  IUnknownVtbl *pIVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  IID *riid;
  int **ppvObject;
  int *local_8;
  
  if (param_1 == (IUnknown *)0x0) {
    lVar3 = -0x7fffbffb;
  }
  else {
    lVar3 = 0;
    if (*(int *)(this + 4) != 0) {
      pIVar1 = param_1->lpVtbl;
      ppvObject = &local_8;
      local_8 = (int *)0x0;
      riid = (IID *)&DAT_005b5170;
      guard_check_icall();
      lVar3 = (*pIVar1->QueryInterface)(param_1,riid,ppvObject);
      if (-1 < lVar3) {
        if (*(int *)this == 0) {
          CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_8);
          return -0x7fffbffb;
        }
        if (*(int *)(this + 4) != 0) {
          uVar4 = 0;
          do {
            iVar2 = *local_8;
            guard_check_icall(local_8,*(undefined4 *)(*(int *)this + uVar4 * 8),0);
            (**(code **)(iVar2 + 0x18))();
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(this + 4));
        }
      }
      *(undefined4 *)(this + 4) = 0;
      FID_conflict__free(*(void **)this);
      *(undefined4 *)this = 0;
      CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_8);
    }
  }
  return lVar3;
}

