// rea decompile_all
// name: CMenuImages::Draw
// address: 0x10084851
// body: available
// range: 0x10084851-0x100848d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CMenuImages::Draw(class CDC *,enum CMenuImages::IMAGES_IDS,class
   CRect const &,enum CMenuImages::IMAGE_STATE,class CSize const &)
   
   Library: Visual Studio 2015 Release */

void CMenuImages::Draw(CDC *param_1,IMAGES_IDS param_2,CRect *param_3,IMAGE_STATE param_4,
                      CSize *param_5)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = CSize::operator==(param_5,(tagSIZE)0x0);
  if (iVar1 == 0) {
    piVar2 = &local_10;
    local_10 = *(int *)param_5;
    local_c = *(undefined4 *)(param_5 + 4);
  }
  else {
    piVar2 = (int *)FUN_10084bc5(&local_10);
  }
  local_8 = 2;
  iVar1 = (*(int *)(param_3 + 8) - *(int *)param_3) - *piVar2;
  local_18 = *(int *)param_3 + iVar1 % 2 + iVar1 / 2;
  iVar1 = (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) - piVar2[1];
  local_14 = *(int *)(param_3 + 4) + iVar1 % 2 + iVar1 / 2;
  Draw(param_1,param_2,(CPoint *)&local_18,param_4,param_5);
  return;
}

