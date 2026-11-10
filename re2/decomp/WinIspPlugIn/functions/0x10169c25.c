// rea decompile_all
// name: CControlBar::OnSizeParent
// address: 0x10169c25
// body: available
// range: 0x10169c25-0x10169dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall CControlBar::OnSizeParent(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CControlBar::OnSizeParent(CControlBar *this,uint param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  int local_24;
  int local_20;
  CControlBar *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  local_1c = this;
  guard_check_icall(param_2);
  uVar2 = (*pcVar1)();
  if (((uVar2 & 0x10000000) != 0) && ((uVar2 & 0xf000) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CopyRect(&local_18,(RECT *)(param_2 + 4));
    iVar3 = local_18.right - local_18.left;
    iVar4 = local_18.bottom - local_18.top;
    bVar7 = *(int *)(param_2 + 0x1c) != 0;
    if (((byte)*(int *)(local_1c + 0xb0) & 5) == 5) {
      bVar6 = bVar7 | 6;
    }
    else if ((uVar2 & 0xa000) == 0) {
      bVar6 = bVar7 | 0x10;
    }
    else {
      bVar6 = bVar7 | 10;
    }
    pcVar1 = *(code **)(*(int *)local_1c + 0x168);
    guard_check_icall(&local_24,0xffffffff,bVar6);
    (*pcVar1)();
    if (iVar3 <= local_24) {
      local_24 = iVar3;
    }
    if (iVar4 <= local_20) {
      local_20 = iVar4;
    }
    if ((uVar2 & 0xa000) == 0) {
      if ((uVar2 & 0x5000) != 0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_24;
        iVar3 = *(int *)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x18) <= local_20) {
          iVar3 = local_20;
        }
        *(int *)(param_2 + 0x18) = iVar3;
        if ((uVar2 & 0x1000) == 0) {
          if ((uVar2 & 0x4000) != 0) {
            local_18.left = local_18.right - local_24;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - local_24;
          }
        }
        else {
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + local_24;
        }
      }
    }
    else {
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + local_20;
      iVar3 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x14) <= local_24) {
        iVar3 = local_24;
      }
      *(int *)(param_2 + 0x14) = iVar3;
      if ((uVar2 & 0x2000) == 0) {
        if ((uVar2 & 0x8000) != 0) {
          local_18.top = local_18.bottom - local_20;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - local_20;
        }
      }
      else {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_20;
      }
    }
    local_18.right = local_18.left + local_24;
    local_18.bottom = local_18.top + local_20;
    if (*(int *)param_2 != 0) {
      AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)param_2,*(HWND__ **)(local_1c + 0x20),&local_18);
    }
  }
  lVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar5;
}

