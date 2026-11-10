// rea decompile_all
// name: FUN_10017ef0
// address: 0x10017ef0
// body: available
// range: 0x10017ef0-0x10018012 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10017ef0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  undefined1 local_19;
  undefined2 local_18;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined2 uStack_e;
  undefined1 uStack_c;
  
  local_18 = 0;
  local_19 = 1;
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    local_10 = 0x4a;
    uStack_f = 0x72;
  }
  else {
    local_10 = 0x6e;
    uStack_f = 0x71;
  }
  iVar1 = DAT_1024be74;
  if (in_ECX == 0) {
    local_18 = 0x5577;
    uVar3 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT22(uStack_e,CONCAT11(uStack_f,local_10)),0x71,2);
  }
  else {
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      (**(code **)(*DAT_10249d10 + 0x74))
                (0x6a,CONCAT13(uStack_c,CONCAT21(uStack_e,uStack_f)),1,&local_19);
      Sleep(DAT_1024be70);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x58))(unaff_ESI,0x23,1,&stack0xffffffd3);
      if (iVar2 == 0) {
        uVar3 = 0;
        if (0 < iVar1) goto LAB_10017fea;
        break;
      }
      Sleep(100);
    }
    FUN_10048350(&DAT_1024a13c,L"(Flag:%d) Debug Mode To DDCCI Mode Fail  !");
    FUN_10016860();
    uVar3 = 0xd40;
  }
LAB_10017fea:
  FUN_10048350(&DAT_1024a13c,L"(Flag:%d) Debug Mode To DDCCI Mode Success  !");
  FUN_10016860();
  return uVar3;
}

