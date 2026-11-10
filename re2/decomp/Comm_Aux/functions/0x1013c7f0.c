// rea decompile_all
// name: CMiniDockFrameWnd::Create
// address: 0x1013c7f0
// body: available
// range: 0x1013c7f0-0x1013c971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMiniDockFrameWnd::Create(class CWnd *,unsigned long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMiniDockFrameWnd::Create(CMiniDockFrameWnd *this,CWnd *param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  HMENU pHVar3;
  CMenu *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  LPCWSTR local_14;
  
  *(undefined4 *)(this + 0xf4) = 1;
  iVar2 = CreateEx(0,0,&DAT_101e24d0,~(param_2 << 9) & 0x800 | 0x80c83300,&DAT_10205c08,param_1,0);
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0xf4) = 0;
    uVar6 = 0;
  }
  else {
    pHVar3 = GetSystemMenu(*(HWND *)(this + 0x20),0);
    pCVar4 = CMenu::FromHandle(pHVar3);
    if (pCVar4 != (CMenu *)0x0) {
      DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf000,0);
      DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf020,0);
      DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf030,0);
      DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf120,0);
      uVar5 = FUN_10048e90();
      FUN_10034c30(uVar5);
      iVar2 = FUN_10048ace(0xf011);
      if ((iVar2 != 0) && (iVar2 = FUN_10034d90(iVar2,0xf011), iVar2 != 0)) {
        DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf060,0);
        AppendMenuW(*(HMENU *)(pCVar4 + 4),0,0xf060,local_14);
      }
      FUN_10034f00();
    }
    pcVar1 = *(code **)(*(int *)(this + 0x130) + 0x1a4);
    guard_check_icall(param_1,(-(uint)((param_2 & 0x5000) != 0) & 0xfffff000) + 0x2000 |
                              param_2 & 0x40 | 0x50000000,0xe81f);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      CWnd::SetParent((CWnd *)(this + 0x130),(CWnd *)this);
    }
    uVar6 = (uint)(iVar2 != 0);
    *(undefined4 *)(this + 0xf4) = 0;
  }
  return uVar6;
}

