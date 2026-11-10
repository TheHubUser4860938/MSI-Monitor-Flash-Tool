// rea decompile_all
// name: FUN_1014c00a
// address: 0x1014c00a
// body: available
// range: 0x1014c00a-0x1014c198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1014c00a(CDC *param_1,int param_2,LONG param_3,LONG param_4,LONG param_5,int param_6)

{
  code *pcVar1;
  LONG LVar2;
  LONG LVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int *piVar6;
  HBRUSH hbr;
  int iVar7;
  int *in_ECX;
  ulong uVar8;
  undefined4 uVar9;
  CDrawingManager local_30 [8];
  undefined1 local_28 [4];
  int local_24;
  undefined **local_20;
  HBRUSH local_1c;
  int *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1014c016;
  local_14 = param_1;
  local_18 = in_ECX;
  pAVar4 = GetGlobalData();
  if (8 < *(int *)(pAVar4 + 0x1ac)) {
    pAVar4 = GetGlobalData();
    iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if (iVar5 == 0) {
      GetGlobalData();
      iVar5 = *in_ECX;
      piVar6 = (int *)FUN_10094c92(local_28);
      pcVar1 = *(code **)(iVar5 + 0x2dc);
      guard_check_icall();
      local_24 = (*pcVar1)();
      local_24 = local_24 + *piVar6;
      if (param_6 != 0) {
        uVar8 = in_ECX[99];
        uVar9 = 0;
        param_2 = 0;
        if (uVar8 == 0xffffffff) {
          uVar8 = local_18[0x32];
        }
        CBrush::CBrush((CBrush *)&local_20,uVar8);
        local_8 = 0;
        FillRect(*(HDC *)(local_14 + 4),(RECT *)&param_2,local_1c);
        CDC::Draw3dRect(local_14,(tagRECT *)&param_2,local_18[0x3a],local_18[0x3a]);
        if ((((byte)uVar8 < 0x81) || ((byte)(uVar8 >> 8) < 0x81)) || ((byte)(uVar8 >> 0x10) < 0x81))
        {
          uVar9 = 0xffffff;
        }
        local_20 = CBrush::vftable;
        CImageList::~CImageList((CImageList *)&local_20);
        return uVar9;
      }
      if (in_ECX == (int *)0xfffffef4) {
        hbr = (HBRUSH)0x0;
      }
      else {
        hbr = (HBRUSH)in_ECX[0x44];
      }
      FillRect(*(HDC *)(local_14 + 4),(RECT *)&param_2,hbr);
      LVar3 = param_5;
      LVar2 = param_3;
      iVar5 = param_2;
      iVar7 = param_2 + local_24 + 2;
      CDrawingManager::CDrawingManager(local_30,local_14);
      local_8 = 1;
      CDrawingManager::FillGradient
                (local_30,iVar5,LVar2,iVar7,LVar3,local_18[0x5a],local_18[0x59],0,0,0);
      pAVar4 = GetGlobalData();
      uVar9 = *(undefined4 *)(pAVar4 + 0x68);
      FUN_100afd36();
      return uVar9;
    }
  }
  uVar9 = FUN_10146800(local_14,param_2,param_3,param_4,param_5,param_6);
  return uVar9;
}

