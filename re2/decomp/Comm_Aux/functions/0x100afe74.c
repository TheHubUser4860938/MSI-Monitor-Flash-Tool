// rea decompile_all
// name: CDrawingManager::CreateBitmap_32
// address: 0x100afe74
// body: available
// range: 0x100afe74-0x100b0004 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static struct HBITMAP__ * __stdcall CDrawingManager::CreateBitmap_32(struct HBITMAP__
   *,unsigned long)
   
   Library: Visual Studio 2015 Release */

HBITMAP__ * CDrawingManager::CreateBitmap_32(HBITMAP__ *param_1,ulong param_2)

{
  int iVar1;
  HBITMAP__ *pHVar2;
  HDC pHVar3;
  HGDIOBJ h;
  HGDIOBJ h_00;
  uint *puVar4;
  undefined1 local_58 [4];
  int local_54;
  long local_50;
  short local_46;
  int local_44;
  CDC local_40 [4];
  HDC local_3c;
  CDC local_30 [4];
  HDC local_2c;
  int local_20;
  long local_1c;
  HBITMAP__ *local_18;
  uint *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x100afe80;
  if (((param_1 == (HBITMAP__ *)0x0) || (iVar1 = GetObjectW(param_1,0x18,local_58), iVar1 == 0)) ||
     (local_44 == 0)) {
    pHVar2 = (HBITMAP__ *)0x0;
  }
  else {
    local_14[0] = (uint *)0x0;
    local_20 = local_54;
    local_1c = local_50;
    pHVar2 = CreateBitmap_32((CSize *)&local_20,local_14);
    local_18 = pHVar2;
    local_1c = _labs(local_50);
    if (pHVar2 != (HBITMAP__ *)0x0) {
      iVar1 = local_54 * local_1c;
      if (local_46 == 0x20) {
        FUN_10181570(local_14[0],local_44,iVar1 * 4);
      }
      else {
        CDC::CDC(local_40);
        local_8 = 0;
        pHVar3 = CreateCompatibleDC((HDC)0x0);
        CDC::Attach(local_40,pHVar3);
        h = SelectObject(local_3c,param_1);
        if (h != (HGDIOBJ)0x0) {
          CDC::CDC(local_30);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar3 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach(local_30,pHVar3);
          h_00 = SelectObject(local_2c,local_18);
          BitBlt(local_2c,0,0,local_54,local_1c,local_3c,0,0,0xcc0020);
          if (h_00 != (HGDIOBJ)0x0) {
            SelectObject(local_2c,h_00);
          }
          SelectObject(local_3c,h);
          puVar4 = local_14[0];
          if (param_2 == 0xffffffff) {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar4 | 0xff000000;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (*puVar4 ==
                  ((param_2 >> 8 & 0xff | (param_2 & 0xff) << 8) << 8 | param_2 >> 0x10 & 0xff)) {
                *puVar4 = 0;
              }
              else {
                *puVar4 = *puVar4 | 0xff000000;
              }
              puVar4 = puVar4 + 1;
            }
          }
          CDC::~CDC(local_30);
        }
        CDC::~CDC(local_40);
        pHVar2 = local_18;
      }
    }
  }
  return pHVar2;
}

