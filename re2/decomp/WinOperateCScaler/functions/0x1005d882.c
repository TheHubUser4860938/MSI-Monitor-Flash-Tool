// rea decompile_all
// name: CMFCToolBarImages::PreMultiplyAlpha
// address: 0x1005d882
// body: available
// range: 0x1005d882-0x1005d944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CMFCToolBarImages::PreMultiplyAlpha(struct HBITMAP__ *,int)
   
   Library: Visual Studio 2015 Release */

int CMFCToolBarImages::PreMultiplyAlpha(HBITMAP__ *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  short local_4a;
  int local_48;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar2 = GetObjectW(param_1,0x54,local_5c);
  if (((iVar2 != 0) && (local_4a == 0x20)) && (local_48 != 0)) {
    local_54 = local_54 * local_58;
    if (param_2 == 0) {
LAB_1005d8ee:
      if (0 < local_54) {
        pbVar3 = (byte *)(local_48 + 1);
        do {
          uVar4 = (uint)pbVar3[2];
          pbVar3[1] = (byte)((ulonglong)(pbVar3[1] * uVar4) / 0xff);
          *pbVar3 = (byte)((ulonglong)(*pbVar3 * uVar4) / 0xff);
          pbVar3[-1] = (byte)((ulonglong)(pbVar3[-1] * uVar4) / 0xff);
          local_54 = local_54 + -1;
          pbVar3 = pbVar3 + 4;
        } while (local_54 != 0);
      }
    }
    else {
      iVar2 = 0;
      if (0 < local_54) {
        pbVar3 = (byte *)(local_48 + 3);
        do {
          bVar1 = *pbVar3;
          if (((bVar1 < pbVar3[-1]) || (bVar1 < pbVar3[-2])) || (bVar1 < pbVar3[-3]))
          goto LAB_1005d8ee;
          pbVar3 = pbVar3 + 4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_54);
      }
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

