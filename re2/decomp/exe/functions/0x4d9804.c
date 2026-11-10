// rea decompile_all
// name: COleDispatchImpl::GetIDsOfNames
// address: 0x4d9804
// body: available
// range: 0x4d9804-0x4d991d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleDispatchImpl::GetIDsOfNames(struct _GUID const &,wchar_t *
   *,unsigned int,unsigned long,long *)
   
   Library: Visual Studio 2015 Release */

long COleDispatchImpl::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  AFX_DISPMAP *pAVar4;
  long lVar5;
  long *in_stack_00000018;
  uint local_c;
  int *local_8;
  
  iVar3 = _memcmp(param_2,&DAT_005db8c0,0x10);
  if (iVar3 == 0) {
    if (param_4 == 0) {
      local_c = 0x80070057;
    }
    else {
      local_8 = (int *)0x0;
      local_c = 0x80020006;
      if (param_5 != (long *)0x0) {
        uVar1 = param_1->Data1;
        guard_check_icall(param_1,0,param_5,&local_8);
        local_c = (**(code **)(uVar1 + 0x10))();
        if (-1 < (int)local_c) {
          iVar3 = *local_8;
          guard_check_icall(local_8,param_3,param_4,in_stack_00000018);
          iVar3 = (**(code **)(iVar3 + 0x28))();
          pcVar2 = *(code **)(*local_8 + 8);
          guard_check_icall(local_8);
          (*pcVar2)();
          if (iVar3 != -0x7ffd7fd5) {
            return iVar3;
          }
          return -0x7ffdfffa;
        }
      }
      pcVar2 = *(code **)(param_1[-1].Data1 + 0x30);
      guard_check_icall();
      pAVar4 = (AFX_DISPMAP *)(*pcVar2)();
      FUN_00415a10(*(undefined4 *)param_3);
      lVar5 = CCmdTarget::MemberIDFromName(pAVar4,(char *)(param_1 + -1));
      *in_stack_00000018 = lVar5;
      if (lVar5 == -1) {
        local_c = 0x80020006;
      }
      else {
        local_c = -(uint)(param_4 != 1) & local_c;
      }
      if (1 < param_4) {
        while( true ) {
          in_stack_00000018 = in_stack_00000018 + 1;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          *in_stack_00000018 = -1;
        }
      }
      FUN_0040efa0();
    }
  }
  else {
    local_c = 0x80020001;
  }
  return local_c;
}

