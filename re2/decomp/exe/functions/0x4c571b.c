// rea decompile_all
// name: ATL::CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>::CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
// address: 0x4c571b
// body: available
// range: 0x4c571b-0x4c574e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall ATL::CComQIPtr<struct ITaskbarList4,&struct __s_GUID const
   _GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>::CComQIPtr<struct ITaskbarList4,&struct __s_GUID
   const _GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>(struct IUnknown *)
   
   Library: Visual Studio 2015 Release */

CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a> *
__thiscall
ATL::CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>::
CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
          (CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
           *this,IUnknown *param_1)

{
  _func_5021 *p_Var1;
  HRESULT HVar2;
  IID *riid;
  CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
  *ppvObject;
  
  *(undefined4 *)this = 0;
  if (param_1 != (IUnknown *)0x0) {
    riid = (IID *)&DAT_005c23bc;
    p_Var1 = param_1->lpVtbl->QueryInterface;
    ppvObject = this;
    guard_check_icall();
    HVar2 = (*p_Var1)(param_1,riid,(void **)ppvObject);
    if (HVar2 < 0) {
      *(undefined4 *)this = 0;
    }
  }
  return this;
}

