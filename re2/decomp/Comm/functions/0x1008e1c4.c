// rea decompile_all
// name: CMFCToolBarFontComboBox::AddFont
// address: 0x1008e1c4
// body: available
// range: 0x1008e1c4-0x1008e34e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  bool bVar1;
  __POSITION *p_Var2;
  uint uVar3;
  int iVar4;
  CMFCFontInfo *pCVar5;
  undefined4 *puVar6;
  byte bVar7;
  CMFCFontInfo *local_1c;
  CObList *local_18;
  __POSITION *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1008e1d0;
  local_18 = *(CObList **)(this + 0xfc);
  if (local_18 == (CObList *)0x0) {
    local_18 = (CObList *)&DAT_101dc4a8;
  }
  if (param_1[0x17] != (tagENUMLOGFONTW)0x4d) {
    uVar3 = CONCAT22(0x1017,CONCAT11(param_1[0x1b],this[0xf9])) & 0xffff0ff0;
    bVar7 = (byte)this[0xf9] & 0xf;
    if (((bVar7 == 0) || (bVar7 == (byte)(uVar3 >> 8))) &&
       ((bVar7 = (byte)uVar3, bVar7 == 0 || (bVar7 == ((byte)param_1[0x1b] & 0xf0))))) {
      local_14[0] = *(__POSITION **)(local_18 + 4);
      if (local_14[0] != (__POSITION *)0x0) {
        do {
          FUN_1002466e(local_14);
          iVar4 = FUN_100257be(param_1 + 0x1c);
          if (iVar4 == 0) {
            return 0;
          }
        } while (local_14[0] != (__POSITION *)0x0);
      }
      iVar4 = GetSystemMetrics(0x2a);
      if ((iVar4 == 0) || (*(short *)(param_1 + 0x1c) != 0x40)) {
        pCVar5 = (CMFCFontInfo *)FUN_10011f7d(0x14);
        bVar1 = false;
        local_8 = 0;
        if (pCVar5 == (CMFCFontInfo *)0x0) {
          local_1c = (CMFCFontInfo *)0x0;
        }
        else {
          local_1c = (CMFCFontInfo *)
                     CMFCFontInfo::CMFCFontInfo
                               (pCVar5,(wchar_t *)(param_1 + 0x1c),param_3,(uchar)param_1[0x17],
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
          puVar6 = (undefined4 *)FUN_1002466e(local_14);
          pCVar5 = (CMFCFontInfo *)*puVar6;
          puVar6 = (undefined4 *)CMFCFontInfo::GetFullName(local_1c);
          local_8 = 1;
          CMFCFontInfo::GetFullName(pCVar5);
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar4 = FUN_100257be(*puVar6);
          FUN_10003460();
          local_8 = 0xffffffff;
          FUN_10003460();
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

