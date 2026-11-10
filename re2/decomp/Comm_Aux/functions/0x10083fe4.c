// rea decompile_all
// name: CMFCToolBarImages::AddImage
// address: 0x10083fe4
// body: available
// range: 0x10083fe4-0x100843a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::AddImage(struct HBITMAP__ *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::AddImage(CMFCToolBarImages *this,HBITMAP__ *param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  HGDIOBJ h;
  undefined1 local_194 [4];
  int local_190;
  int local_18c;
  ushort local_182;
  undefined1 local_17c [4];
  int local_178;
  int local_174;
  ushort local_16a;
  CDC local_164 [4];
  HDC local_160;
  int local_154;
  HGDIOBJ local_150;
  int local_14c;
  CDC local_148 [4];
  HDC local_144;
  int local_138;
  int local_134;
  HBITMAP local_130;
  CMFCToolBarImages local_12c [4];
  int local_128;
  uint local_124;
  undefined4 local_104;
  undefined4 local_d8;
  undefined4 local_d4;
  HBITMAP local_a0;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x184;
  local_8 = 0x10083ff3;
  h = (HGDIOBJ)0x0;
  if (*(int *)(this + 0x28) != 0) goto LAB_1008421e;
  local_154 = 0;
  if (DAT_1020e43c != 0) {
    local_154 = 1;
    local_130 = CopyImage(param_1,0,0,0,0x2000);
    MirrorBitmap(&local_130,*(int *)(this + 0x54));
    param_1 = local_130;
  }
  iVar2 = IsScaled(this);
  if (iVar2 != 0) {
    iVar2 = GetObjectW(param_1,0x18,local_194);
    if (iVar2 == 0) goto LAB_1008421e;
    if (local_18c != *(int *)(this + 0x58)) {
      CMFCToolBarImages(local_12c);
      local_124 = (uint)local_182;
      local_d8 = *(undefined4 *)(this + 0x5c);
      local_d4 = *(undefined4 *)(this + 0x60);
      local_128 = local_190 / *(int *)(this + 0x5c);
      local_8 = 0;
      local_a0 = param_1;
      FUN_10088069(*(undefined8 *)(this + 0xb8));
      local_104 = 1;
      DeleteObject(param_1);
      param_1 = local_a0;
      local_8 = 0xffffffff;
      ~CMFCToolBarImages(local_12c);
    }
  }
  CDC::CDC(local_148);
  local_8 = 1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_148,pHVar1);
  iVar2 = GetObjectW(param_1,0x18,local_17c);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      *(uint *)(this + 8) = (uint)local_16a;
    }
    local_14c = local_178;
    local_134 = local_174;
    if (*(HANDLE *)(this + 0x8c) == (HANDLE)0x0) {
      local_138 = 0;
      if (param_1 != (HBITMAP)0x0) {
        h = SelectObject(local_144,param_1);
      }
      if (h != (HGDIOBJ)0x0) {
LAB_100841df:
        local_130 = CreateCompatibleBitmap(local_144,local_138 + local_14c,local_134);
        if (local_130 == (HBITMAP)0x0) {
          if (h != (HGDIOBJ)0x0) {
            SelectObject(local_144,h);
          }
        }
        else {
          CDC::CDC(local_164);
          local_8 = CONCAT31(local_8._1_3_,2);
          pHVar1 = CreateCompatibleDC(local_144);
          CDC::Attach(local_164,pHVar1);
          local_150 = SelectObject(local_160,local_130);
          if (local_150 == (HGDIOBJ)0x0) {
LAB_100842c9:
            if (h != (HGDIOBJ)0x0) {
              SelectObject(local_144,h);
            }
            DeleteObject(local_130);
          }
          else {
            if (*(int *)(this + 0x8c) != 0) {
              BitBlt(local_160,0,0,local_138,local_134,local_144,0,0,0xcc0020);
            }
            if (param_1 == (HBITMAP)0x0) {
              pvVar3 = (HGDIOBJ)0x0;
            }
            else {
              pvVar3 = SelectObject(local_144,param_1);
            }
            if (pvVar3 == (HGDIOBJ)0x0) {
              SelectObject(local_160,local_150);
              goto LAB_100842c9;
            }
            BitBlt(local_160,local_138,0,local_14c,local_134,local_144,0,0,0xcc0020);
            SelectObject(local_160,local_150);
            if (h != (HGDIOBJ)0x0) {
              SelectObject(local_144,h);
            }
            if (*(HGDIOBJ *)(this + 0x8c) != (HGDIOBJ)0x0) {
              DeleteObject(*(HGDIOBJ *)(this + 0x8c));
            }
            *(HBITMAP *)(this + 0x8c) = local_130;
            *(undefined4 *)(this + 0x1c) = 1;
            UpdateCount(this);
            FUN_1005f9dd();
            *(undefined4 *)(this + 0x90) = 0;
            FUN_1005f9dd();
            *(undefined4 *)(this + 0x94) = 0;
            if (local_154 != 0) {
              DeleteObject(param_1);
            }
          }
          CDC::~CDC(local_164);
        }
      }
    }
    else {
      iVar2 = GetObjectW(*(HANDLE *)(this + 0x8c),0x18,local_17c);
      if (iVar2 != 0) {
        if (*(HGDIOBJ *)(this + 0x8c) != (HGDIOBJ)0x0) {
          h = SelectObject(local_144,*(HGDIOBJ *)(this + 0x8c));
        }
        if (h != (HGDIOBJ)0x0) {
          local_138 = local_178;
          local_134 = local_174;
          goto LAB_100841df;
        }
      }
    }
  }
  CDC::~CDC(local_148);
LAB_1008421e:
  iVar2 = FUN_1017f5f4();
  return iVar2;
}

