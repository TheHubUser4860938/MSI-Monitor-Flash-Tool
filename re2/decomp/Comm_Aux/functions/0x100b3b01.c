// rea decompile_all
// name: CDrawingManager::SetAlphaPixel
// address: 0x100b3b01
// body: available
// range: 0x100b3b01-0x100b3bc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CDrawingManager::SetAlphaPixel(unsigned long *,class
   CRect,int,int,int,int,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void CDrawingManager::SetAlphaPixel
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,uint param_10,int param_11)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = ((param_5 - param_3) - param_7) + param_9;
  param_9 = (param_4 - param_2) + param_9;
  if (param_11 == 0) {
    param_6 = param_9 * iVar3 + param_6;
  }
  else {
    param_6 = param_9 * (iVar3 + 1) - param_6;
  }
  uVar1 = PixelAlpha(*(ulong *)(param_1 + param_6 * 4),param_8);
  *(ulong *)(param_1 + param_6 * 4) = uVar1;
  if (param_10 != 0xffffffff) {
    uVar5 = (param_10 >> 0x10 & 0xff) + (uint)*(byte *)(param_1 + param_6 * 4) * 3 >> 2;
    if (0xff < uVar5) {
      uVar5 = 0xff;
    }
    uVar6 = (uint)*(byte *)(param_1 + 1 + param_6 * 4) * 3 + (param_10 >> 8 & 0xff) >> 2;
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
    uVar2 = (uint)*(byte *)(param_1 + 2 + param_6 * 4) * 3 + (param_10 & 0xff) >> 2;
    uVar4 = 0xff;
    if (uVar2 < 0x100) {
      uVar4 = uVar2;
    }
    *(uint *)(param_1 + param_6 * 4) = ((uVar4 & 0xff) << 8 | uVar6 & 0xff) << 8 | uVar5 & 0xff;
  }
  return;
}

