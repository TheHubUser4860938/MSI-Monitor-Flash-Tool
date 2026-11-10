// rea decompile_all
// name: COleDataSource::OnRenderData
// address: 0x100f10a8
// body: available
// range: 0x100f10a8-0x100f11f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f11d6 to 0x1001d03d FUN_1001d03d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleDataSource::OnRenderData(struct tagFORMATETC *,struct
   tagSTGMEDIUM *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleDataSource::OnRenderData(COleDataSource *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  HBITMAP pHVar4;
  CSharedFile local_6c [56];
  COleStreamFile local_34 [28];
  _union_2260 local_18;
  COleDataSource *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100f10b4;
  local_14 = this;
  if ((param_1->tymed & 1) != 0) {
    local_18 = param_2->u;
    pcVar1 = *(code **)(*(int *)this + 0x50);
    guard_check_icall(param_1,&local_18);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      param_2->tymed = 1;
      param_2->u = local_18;
      return 1;
    }
    CSharedFile::CSharedFile(local_6c,2,0x1000);
    local_8 = 0;
    if (param_2->tymed == 1) {
      FUN_1013f2ee((param_2->u).hBitmap,0);
    }
    pcVar1 = *(code **)(*(int *)local_14 + 0x54);
    guard_check_icall(param_1,local_6c);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      param_2->tymed = 1;
      pvVar3 = CSharedFile::Detach(local_6c);
      (param_2->u).hMetaFilePict = pvVar3;
      CSharedFile::~CSharedFile(local_6c);
      return 1;
    }
    if (param_2->tymed == 1) {
      CSharedFile::Detach(local_6c);
    }
    local_8 = 0xffffffff;
    CSharedFile::~CSharedFile(local_6c);
  }
  if ((param_1->tymed & 4) != 0) {
    COleStreamFile::COleStreamFile(local_34,(IStream *)0x0);
    local_8 = 1;
    if (param_2->tymed == 4) {
      FUN_1013edbd((param_2->u).hBitmap);
    }
    else {
      iVar2 = COleStreamFile::CreateMemoryStream(local_34,(CFileException *)0x0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d03d();
      }
    }
    pcVar1 = *(code **)(*(int *)local_14 + 0x54);
    guard_check_icall(param_1,local_34);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      param_2->tymed = 4;
      pHVar4 = (HBITMAP)FUN_1013ee39();
      (param_2->u).hBitmap = pHVar4;
      FUN_1013ec0d();
      return 1;
    }
    if (param_2->tymed == 4) {
      FUN_1013ee39();
    }
    FUN_1013ec0d();
  }
  return 0;
}

