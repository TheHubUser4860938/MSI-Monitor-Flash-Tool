// rea decompile_all
// name: CVSListBox::OnKeyDown
// address: 0x1004f8f1
// body: available
// range: 0x1004f8f1-0x1004f9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBox::OnKeyDown(struct tagNMHDR *,long *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CVSListBox::OnKeyDown(CVSListBox *this,tagNMHDR *param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  SHORT SVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint local_8;
  
  iVar8 = 0;
  *param_2 = 0;
  if (param_1 != (tagNMHDR *)0x0) {
    SVar4 = GetAsyncKeyState(0x11);
    bVar7 = (byte)((ushort)SVar4 >> 0xc);
    bVar6 = bVar7 & 8;
    local_8._1_3_ = (undefined3)((uint)this >> 8);
    local_8 = CONCAT31(local_8._1_3_,bVar7) & 0xffffff08;
    uVar5 = GetAsyncKeyState(0x12);
    if ((uVar5 & 0x8000) != 0) {
      bVar6 = bVar6 | 0x10;
      local_8 = CONCAT31(local_8._1_3_,bVar7) & 0xffffff08 | 0x10;
    }
    uVar5 = GetAsyncKeyState(0x10);
    bVar7 = bVar6;
    if ((uVar5 & 0x8000) != 0) {
      bVar7 = bVar6 | 4;
      local_8 = CONCAT31(local_8._1_3_,bVar6) | 4;
    }
    puVar1 = *(undefined4 **)(this + 0xa0);
    while (puVar1 != (undefined4 *)0x0) {
      iVar2 = puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (((iVar2 != 0) && (*(short *)(param_1 + 0xc) == (short)iVar2)) &&
         (bVar7 == (byte)((uint)iVar2 >> 0x10))) {
        pcVar3 = *(code **)(*(int *)this + 0x194);
        guard_check_icall(iVar8);
        (*pcVar3)();
        return;
      }
      iVar8 = iVar8 + 1;
    }
    pcVar3 = *(code **)(*(int *)this + 0x198);
    guard_check_icall(*(undefined2 *)(param_1 + 0xc),local_8);
    (*pcVar3)();
  }
  return;
}

