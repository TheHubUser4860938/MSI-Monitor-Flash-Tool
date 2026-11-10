// rea decompile_all
// name: CFile::Open
// address: 0x100293f3
// body: available
// range: 0x100293f3-0x100295c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFile::Open(wchar_t const *,unsigned int,class CFileException *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFile::Open(CFile *this,wchar_t *param_1,uint param_2,CFileException *param_3)

{
  CFile *pCVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar5;
  DWORD dwCreationDisposition;
  DWORD dwShareMode;
  _SECURITY_ATTRIBUTES local_224;
  CFile *local_218;
  CFile *local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  local_214 = this + 0xc;
  local_218 = this;
  FUN_10003400();
  if ((param_1 == (wchar_t *)0x0) ||
     (lVar2 = StringCchLengthW(param_1,0x104,(uint *)0x0), lVar2 < 0)) {
    if (param_3 != (CFileException *)0x0) {
      *(undefined4 *)(param_3 + 8) = 3;
      FUN_10003780(param_1);
    }
    goto LAB_100295b6;
  }
  iVar3 = _AfxFullPath2(local_210,param_1,param_3);
  if (iVar3 == 0) goto LAB_100295b6;
  FUN_10003780(local_210);
  pCVar1 = local_218;
  local_214 = (CFile *)0x0;
  dwCreationDisposition = 3;
  uVar4 = param_2 & 3;
  if (uVar4 == 0) {
    local_214 = (CFile *)0x80000000;
  }
  else if (uVar4 == 1) {
    local_214 = (CFile *)0x40000000;
  }
  else if (uVar4 == 2) {
    local_214 = (CFile *)0xc0000000;
  }
  uVar4 = param_2 & 0x70;
  if ((uVar4 == 0) || (uVar4 == 0x10)) {
LAB_100294e5:
    dwShareMode = 0;
  }
  else if (uVar4 == 0x20) {
    dwShareMode = 1;
  }
  else if (uVar4 == 0x30) {
    dwShareMode = 2;
  }
  else {
    dwShareMode = dwCreationDisposition;
    if (uVar4 != 0x40) goto LAB_100294e5;
  }
  local_224.lpSecurityDescriptor = (LPVOID)0x0;
  local_224.nLength = 0xc;
  local_224.bInheritHandle = ~((param_2 & 0xffff7fff) >> 7) & 1;
  if ((param_2 & 0x1000) != 0) {
    dwCreationDisposition = (-(uint)((param_2 & 0x2000) != 0) & 2) + 2;
  }
  uVar4 = (param_2 & 0x10000) << 0xd;
  dwFlagsAndAttributes = uVar4 | 0x80;
  if ((param_2 & 0x20000) != 0) {
    dwFlagsAndAttributes = uVar4 | 0x80000080;
  }
  if ((param_2 & 0x40000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
  }
  if ((param_2 & 0x80000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  if (*(int *)(local_218 + 0x10) == 0) {
    pvVar5 = CreateFileW(param_1,(DWORD)local_214,dwShareMode,&local_224,dwCreationDisposition,
                         dwFlagsAndAttributes,(HANDLE)0x0);
  }
  else {
    pvVar5 = FID_conflict_CreateFileA
                       ((LPCSTR)param_1,(DWORD)local_214,dwShareMode,&local_224,
                        dwCreationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  }
  if (pvVar5 == (HANDLE)0xffffffff) {
    _AfxFillExceptionInfo(param_3,param_1);
  }
  else {
    *(HANDLE *)(pCVar1 + 4) = pvVar5;
    *(undefined4 *)(pCVar1 + 8) = 1;
  }
LAB_100295b6:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

