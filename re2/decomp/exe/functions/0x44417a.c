// rea decompile_all
// name: ATL::CDynamicAccessor::GetRowsetProperties
// address: 0x44417a
// body: available
// range: 0x44417a-0x444276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CDynamicAccessor::GetRowsetProperties(struct IUnknown *,unsigned
   long *,int *,unsigned long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
ATL::CDynamicAccessor::GetRowsetProperties
          (CDynamicAccessor *this,IUnknown *param_1,ulong *param_2,int *param_3,ulong param_4)

{
  LPVOID pv;
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_30;
  int *local_2c;
  long local_28;
  undefined4 *local_24;
  ulong *local_20;
  ulong local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (IUnknown *)0x0) && (param_3 != (int *)0x0)) {
    uVar4 = 0;
    local_2c = (int *)0x0;
    local_28 = IUnknown::QueryInterface<IRowsetInfo>((IRowsetInfo **)param_1);
    uVar2 = param_4;
    piVar5 = param_3;
    if (param_4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
    }
    if (-1 < local_28) {
      local_1c = param_4;
      local_20 = param_2;
      local_18 = 0xc8b522be;
      local_30 = 0;
      uStack_14 = 0x11ce5cf3;
      local_24 = (undefined4 *)0x0;
      uStack_10 = 0xaa00e5ad;
      uStack_c = 0x3d774400;
      iVar6 = *local_2c;
      guard_check_icall(local_2c,1,&local_20,&local_30,&local_24);
      local_28 = (**(code **)(iVar6 + 0xc))();
      if (-1 < local_28) {
        iVar6 = 0;
        while( true ) {
          uVar3 = local_24[1];
          if (param_4 <= (uint)local_24[1]) {
            uVar3 = param_4;
          }
          pv = (LPVOID)*local_24;
          if (uVar3 <= uVar4) break;
          param_3[uVar4] = (int)*(short *)((int)pv + iVar6 + 0x2c);
          uVar4 = uVar4 + 1;
          iVar6 = iVar6 + 0x34;
        }
        if (pv != (LPVOID)0x0) {
          CoTaskMemFree(pv);
        }
      }
      CoTaskMemFree(local_24);
    }
    CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_2c);
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}

