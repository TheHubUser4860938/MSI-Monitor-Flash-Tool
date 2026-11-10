// rea decompile_all
// name: CWnd::ExecuteDlgInit
// address: 0x10042b9d
// body: available
// range: 0x10042b9d-0x10042cc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(void *)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  UINT Msg;
  LRESULT LVar4;
  int iVar5;
  ushort *puVar6;
  void **ppvVar7;
  undefined4 local_34;
  void *local_30 [8];
  int local_10;
  CWnd *local_c;
  int local_8;
  
  local_8 = 1;
  puVar6 = param_1;
  local_c = this;
  if (param_1 != (void *)0x0) {
    do {
      uVar1 = *puVar6;
      if (uVar1 == 0) break;
      uVar2 = puVar6[1];
      Msg = (UINT)uVar2;
      local_10 = *(int *)(puVar6 + 2);
      puVar6 = puVar6 + 4;
      if (uVar2 == 0x1234) {
LAB_10042c14:
        ppvVar7 = local_30;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppvVar7 = (void *)0x0;
          ppvVar7 = ppvVar7 + 1;
        }
        local_30[0] = (void *)0xffffffff;
        local_34 = 1;
        FUN_100040f0(&param_1,(short *)puVar6);
        local_30[1] = param_1;
        LVar4 = SendDlgItemMessageW(*(HWND *)(local_c + 0x20),(uint)uVar1,0x40b,0,(LPARAM)&local_34)
        ;
        if (LVar4 == -1) {
          local_8 = 0;
        }
        FUN_100024a0((undefined4 *)((int)param_1 + -0x10));
      }
      else if (uVar2 == 0x401) {
        Msg = 0x180;
LAB_10042c7d:
        LVar4 = SendDlgItemMessageA(*(HWND *)(local_c + 0x20),(uint)uVar1,Msg,0,(LPARAM)puVar6);
        if (LVar4 == -1) {
          local_8 = 0;
        }
      }
      else {
        if (uVar2 == 0x403) {
          Msg = 0x143;
        }
        sVar3 = (short)Msg;
        if (sVar3 == 0x40b) goto LAB_10042c14;
        if ((sVar3 == 0x180) || (sVar3 == 0x143)) goto LAB_10042c7d;
      }
      puVar6 = (ushort *)((int)puVar6 + local_10);
    } while (local_8 != 0);
    if (local_8 == 0) {
      return 0;
    }
  }
  SendMessageToDescendants(*(HWND__ **)(local_c + 0x20),0x364,0,0,0,0);
  return local_8;
}

