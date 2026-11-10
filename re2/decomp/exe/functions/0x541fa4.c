// rea decompile_all
// name: COleMessageFilter::XMessageFilter::MessagePending
// address: 0x541fa4
// body: available
// range: 0x541fa4-0x542085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleMessageFilter::XMessageFilter::MessagePending(struct
   HTASK__ *,unsigned long,unsigned long)
   
   Library: Visual Studio 2015 Release */

ulong COleMessageFilter::XMessageFilter::MessagePending
                (HTASK__ *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  ulong uVar4;
  HTASK__ *pHVar5;
  tagMSG local_24;
  
  pHVar5 = param_1 + -0x10;
  FUN_00434a7a(param_1[-9].unused);
  if ((uint)param_1[-1].unused < param_3) {
    if (param_1[-4].unused == 0) {
      pcVar1 = *(code **)(pHVar5->unused + 0x5c);
      guard_check_icall(&local_24);
      iVar2 = (*pcVar1)();
      if ((iVar2 != 0) && (param_1[-5].unused != 0)) {
        uVar4 = 1;
        param_1[-4].unused = 1;
        do {
          BVar3 = PeekMessageW(&local_24,(HWND)0x0,0x200,0x209,3);
        } while (BVar3 != 0);
        do {
          BVar3 = PeekMessageW(&local_24,(HWND)0x0,0x100,0x109,3);
        } while (BVar3 != 0);
        pcVar1 = *(code **)(pHVar5->unused + 100);
        guard_check_icall(param_2);
        (*pcVar1)();
        param_1[-4].unused = 0;
        goto LAB_00542073;
      }
      goto LAB_0054203f;
    }
  }
  else {
LAB_0054203f:
    if (param_1[-4].unused == 0) {
      BVar3 = PeekMessageW(&local_24,(HWND)0x0,0,0,2);
      if (BVar3 != 0) {
        pcVar1 = *(code **)(pHVar5->unused + 0x58);
        guard_check_icall(&local_24);
        (*pcVar1)();
      }
      uVar4 = 1;
      goto LAB_00542073;
    }
  }
  uVar4 = 2;
LAB_00542073:
  guard_check_icall();
  return uVar4;
}

