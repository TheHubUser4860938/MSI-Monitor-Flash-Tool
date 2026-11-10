// rea decompile_all
// name: write_double_translated_ansi_nolock
// address: 0x58e6b6
// body: available
// range: 0x58e6b6-0x58e868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_ansi_nolock(int,char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_double_translated_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  HANDLE hFile;
  UINT CodePage;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int in_stack_00000010;
  byte *_SrcCh;
  size_t _SrcSizeInBytes;
  uint local_24;
  undefined2 local_20;
  wchar_t local_1c [2];
  CHAR local_18 [8];
  byte local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar7 = (int)param_2 >> 6;
  iVar8 = ((uint)param_2 & 0x3f) * 0x30;
  hFile = *(HANDLE *)((&DAT_006190a0)[iVar7] + 0x18 + iVar8);
  CodePage = GetConsoleCP();
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pbVar9 = (byte *)param_3;
joined_r0x0058e713:
  if ((byte *)(in_stack_00000010 + param_3) <= pbVar9) {
LAB_0058e856:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_1c[0] = L'\0';
  local_20 = CONCAT11(*pbVar9,(undefined1)local_20);
  iVar3 = (&DAT_006190a0)[iVar7];
  bVar1 = *(byte *)(iVar3 + 0x2d + iVar8);
  if ((bVar1 & 4) == 0) {
    puVar2 = ___pctype_func();
    if ((puVar2[*pbVar9] & 0x8000) == 0) {
      _SrcSizeInBytes = 1;
      _SrcCh = pbVar9;
      goto LAB_0058e78a;
    }
    if ((byte *)(in_stack_00000010 + param_3) <= pbVar9) {
      *(byte *)((&DAT_006190a0)[iVar7] + 0x2e + iVar8) = *pbVar9;
      pbVar9 = (byte *)((&DAT_006190a0)[iVar7] + 0x2d + iVar8);
      *pbVar9 = *pbVar9 | 4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      goto LAB_0058e856;
    }
    iVar3 = _mbtowc(local_1c,(char *)pbVar9,2);
    if (iVar3 == -1) goto LAB_0058e856;
    pbVar9 = pbVar9 + 1;
  }
  else {
    local_10 = *(byte *)(iVar3 + 0x2e + iVar8);
    uVar4 = CONCAT11(*pbVar9,bVar1) & 0xfffffffb;
    _SrcSizeInBytes = 2;
    local_f = (undefined1)(uVar4 >> 8);
    *(char *)(iVar3 + 0x2d + iVar8) = (char)uVar4;
    _SrcCh = &local_10;
LAB_0058e78a:
    iVar3 = _mbtowc(local_1c,(char *)_SrcCh,_SrcSizeInBytes);
    if (iVar3 == -1) goto LAB_0058e856;
  }
  pbVar9 = pbVar9 + 1;
  uVar4 = WideCharToMultiByte(CodePage,0,local_1c,1,local_18,5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (uVar4 != 0) {
    BVar5 = WriteFile(hFile,local_18,uVar4,&local_24,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_0058e84e;
    *(byte **)(param_1 + 4) = pbVar9 + (*(int *)(param_1 + 8) - param_3);
    if (uVar4 <= local_24) goto code_r0x0058e7f0;
  }
  goto LAB_0058e856;
code_r0x0058e7f0:
  if (local_20._1_1_ == '\n') {
    local_20 = 0xd;
    BVar5 = WriteFile(hFile,&local_20,1,&local_24,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
LAB_0058e84e:
      DVar6 = GetLastError();
      *(DWORD *)param_1 = DVar6;
      goto LAB_0058e856;
    }
    if (local_24 == 0) goto LAB_0058e856;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  goto joined_r0x0058e713;
}

