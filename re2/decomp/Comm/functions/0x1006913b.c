// rea decompile_all
// name: CMFCBaseTabCtrl::GetMaxWindowSize
// address: 0x1006913b
// body: available
// range: 0x1006913b-0x10069241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCBaseTabCtrl::GetMaxWindowSize(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::GetMaxWindowSize(CMFCBaseTabCtrl *this)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  undefined1 local_30 [8];
  CMFCBaseTabCtrl *local_28;
  int local_24;
  int local_20;
  CObject *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20 = 0;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  local_24 = *(int *)(this + 0x9c);
  if (0 < local_24) {
    local_28 = this + 0x94;
    do {
      local_1c = (CObject *)FUN_10032c6d(local_20);
      if (*(int *)(local_1c + 0x20) != 0) {
        iVar5 = 0;
        iVar4 = 0;
        iVar2 = FUN_10019d4f(&PTR_s_CBasePane_101874c4);
        if (iVar2 == 0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(*(int *)(local_1c + 0x20) + 0x20),&local_18);
          iVar5 = local_18.right - local_18.left;
          iVar4 = local_18.bottom - local_18.top;
        }
        else {
          local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101874c4,
                                        *(CObject **)(local_1c + 0x20));
          if (local_1c != (CObject *)0x0) {
            pcVar1 = *(code **)(*(int *)local_1c + 0x260);
            guard_check_icall(local_30,0,1);
            piVar3 = (int *)(*pcVar1)();
            iVar5 = *piVar3;
            iVar4 = piVar3[1];
          }
        }
        if (iVar5 <= *in_stack_00000004) {
          iVar5 = *in_stack_00000004;
        }
        *in_stack_00000004 = iVar5;
        if (iVar4 <= in_stack_00000004[1]) {
          iVar4 = in_stack_00000004[1];
        }
        in_stack_00000004[1] = iVar4;
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

