// rea decompile_all
// name: CMFCVisualManager::OnDrawMenuShadow
// address: 0x100613e4
// body: available
// range: 0x100613e4-0x1006143c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMenuShadow(class CDC *,class CRect
   const &,class CRect const &,int,int,int,class CBitmap *,class CBitmap *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawMenuShadow
          (CMFCVisualManager *this,CDC *param_1,CRect *param_2,CRect *param_3,int param_4,
          int param_5,int param_6,CBitmap *param_7,CBitmap *param_8,int param_9)

{
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100613f0;
  CDrawingManager::CDrawingManager(local_18,param_1);
  local_8 = 0;
  CDrawingManager::DrawShadow
            (local_18,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_4,param_5,param_6,
             param_7,param_8,0xffffffff,param_9 == 0);
  FUN_10084c54();
  return;
}

