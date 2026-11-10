// rea decompile_all
// name: CMFCToolBarFontComboBox::AddFont
// address: 0x100994d2
// body: available
// range: 0x100994d2-0x1009965c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarFontComboBox::AddFont(struct tagENUMLOGFONTW
   *,int,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarFontComboBox::AddFont
          (CMFCToolBarFontComboBox *this,tagENUMLOGFONTW *param_1,int param_2,wchar_t *param_3)

{
  CMFCFontInfo *this_00;
  bool bVar1;
  __POSITION *p_Var2;
  uint uVar3;
  int iVar4;
  CMFCFontInfo *this_01;
  undefined4 *puVar5;
  byte bVar6;
  int local_28;
  CMFCFontInfo *local_1c;
  CObList *local_18;
  __POSITION *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100994de;
  local_18 = *(CObList **)(this + 0xfc);
  if (local_18 == (CObList *)0x0) {
    local_18 = (CObList *)&DAT_1020b208;
  }
  if (param_1[0x17] != (tagENUMLOGFONTW)0x4d) {
    uVar3 = CONCAT22(0x1019,CONCAT11(param_1[0x1b],this[0xf9])) & 0xffff0ff0;
    bVar6 = (byte)this[0xf9] & 0xf;
    if (((bVar6 == 0) || (bVar6 == (byte)(uVar3 >> 8))) &&
       ((bVar6 = (byte)uVar3, bVar6 == 0 || (bVar6 == ((byte)param_1[0x1b] & 0xf0))))) {
      local_14[0] = *(__POSITION **)(local_18 + 4);
      if (local_14[0] != (__POSITION *)0x0) {
        do {
          FUN_100972dc(local_14);
          iVar4 = FUN_10030ace(param_1 + 0x1c);
          if (iVar4 == 0) {
            return 0;
          }
        } while (local_14[0] != (__POSITION *)0x0);
      }
      iVar4 = GetSystemMetrics(0x2a);
      if ((iVar4 == 0) || (*(short *)(param_1 + 0x1c) != 0x40)) {
        this_01 = (CMFCFontInfo *)FUN_1001cfa0(0x14);
        bVar1 = false;
        local_8 = 0;
        if (this_01 == (CMFCFontInfo *)0x0) {
          local_1c = (CMFCFontInfo *)0x0;
        }
        else {
          local_1c = (CMFCFontInfo *)
                     CMFCFontInfo::CMFCFontInfo
                               (this_01,(wchar_t *)(param_1 + 0x1c),param_3,(uchar)param_1[0x17],
                                (uchar)param_1[0x1b],param_2);
        }
        local_14[0] = *(__POSITION **)(local_18 + 4);
        local_8 = 0xffffffff;
        do {
          p_Var2 = local_14[0];
          if (local_14[0] == (__POSITION *)0x0) {
            CObList::AddTail(local_18,(CObject *)local_1c);
            return 1;
          }
          puVar5 = (undefined4 *)FUN_100972dc(local_14);
          this_00 = (CMFCFontInfo *)*puVar5;
          puVar5 = (undefined4 *)CMFCFontInfo::GetFullName(local_1c);
          local_8 = 1;
          CMFCFontInfo::GetFullName(this_00);
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar4 = FUN_10030ace(*puVar5);
          ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(this_01 + -0x10));
          if (-1 < iVar4) {
            CObList::InsertBefore(local_18,p_Var2,(CObject *)local_1c);
            bVar1 = true;
          }
        } while (!bVar1);
        return 1;
      }
    }
  }
  return 0;
}

