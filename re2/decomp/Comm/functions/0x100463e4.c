// rea decompile_all
// name: CMemDC::~CMemDC
// address: 0x100463e4
// body: available
// range: 0x100463e4-0x100464df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMemDC::~CMemDC(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMemDC::~CMemDC(CMemDC *this)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1016ffc0;
  local_10 = ExceptionList;
  local_14 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0xc) == 0) {
    if (*(int *)(this + 8) != 0) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      pcVar1 = *(code **)(**(int **)(this + 4) + 0x50);
      guard_check_icall(&local_24,local_14);
      iVar2 = (*pcVar1)();
      if (iVar2 != 1) {
        if (iVar2 != 2) {
          local_24 = *(int *)(this + 0x2c);
          local_20 = *(int *)(this + 0x30);
          local_1c = *(int *)(this + 0x34);
          local_18 = *(int *)(this + 0x38);
        }
        CDC::BitBlt(*(CDC **)(this + 4),local_24,local_20,local_1c - local_24,local_18 - local_20,
                    (CDC *)(this + 0x10),local_24,local_20,0xcc0020);
      }
      pvVar3 = (void *)0x0;
      if (*(int *)(this + 0x28) != 0) {
        pvVar3 = *(void **)(*(int *)(this + 0x28) + 4);
      }
      CDC::SelectGdiObject(*(HDC__ **)(this + 0x14),pvVar3);
    }
  }
  else {
    CDC::Detach((CDC *)(this + 0x10));
    _AfxEndBufferedPaint(*(void **)(this + 0xc),1);
  }
  *(undefined ***)(this + 0x20) = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x20));
  CDC::~CDC((CDC *)(this + 0x10));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

