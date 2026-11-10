// rea decompile_all
// name: FUN_004c004f
// address: 0x4c004f
// body: available
// range: 0x4c004f-0x4c009d inclusive
// range: 0x4c00a4-0x4c40e1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c004f(void)

{
  int *piVar1;
  ulong *puVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined4 in_EAX;
  int iVar8;
  undefined4 *puVar9;
  AFX_GLOBAL_DATA *pAVar10;
  ulong uVar11;
  CTagManager *in_ECX;
  int unaff_EBX;
  int *piVar12;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  ulong *unaff_EDI;
  ulong *unaff_retaddr;
  
  CTagManager::ReadColor
            (in_ECX,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    CONCAT31((int3)((uint)in_EAX >> 8),*unaff_ESI),unaff_retaddr);
  *(undefined1 *)(unaff_EBP + -3) = 0xb3;
  FUN_0040efa0();
  *unaff_EDI = *(ulong *)(unaff_ESI + 1);
  FUN_00415a10();
  *(undefined1 *)(unaff_EBP + -3) = 0xc1;
  CTagManager::ReadColor
            ((CTagManager *)(unaff_EBP + -0x37),
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
             (unaff_EBP + -0x3d7),unaff_EDI);
  FUN_0040efa0();
  CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
  FUN_0040efa0();
  *(undefined1 *)(unaff_EBP + -3) = 3;
  CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
  *(undefined4 *)(unaff_EBX + 0x90b8) = *(undefined4 *)(unaff_EBX + 0x8fb4);
  *(undefined4 *)(unaff_EBX + 0x90bc) = *(undefined4 *)(unaff_EBX + 0x8fb8);
  *(undefined4 *)(unaff_EBX + 0x90c0) = *(undefined4 *)(unaff_EBX + 0x8fbc);
  *(undefined4 *)(unaff_EBX + 0x90c4) = *(undefined4 *)(unaff_EBX + 0x8fbc);
  *(undefined4 *)(unaff_EBX + 0x90c8) = *(undefined4 *)(unaff_EBX + 0x8fc0);
  *(undefined4 *)(unaff_EBX + 0x90d4) = *(undefined4 *)(unaff_EBX + 0x8fdc);
  *(ulong *)(unaff_EBX + 0x90f8) = *(ulong *)(unaff_ESI + 1);
  *(ulong *)(unaff_EBX + 0x90ec) = *unaff_EDI;
  *(undefined4 *)(unaff_EBX + 0x90cc) = *(undefined4 *)(unaff_EBX + 0x8fd4);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8fd8);
  *(ulong **)(unaff_EBP + -0x3e3) = (ulong *)(unaff_EBX + 0x90f8);
  *(undefined4 *)(unaff_EBX + 0x90d0) = uVar3;
  *(undefined4 *)(unaff_EBX + 0x90d8) = *(undefined4 *)(unaff_EBX + 0x8fe0);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8fe4);
  *(undefined4 **)(unaff_EBP + -0x413) = (undefined4 *)(unaff_EBX + 0x90d8);
  *(undefined4 *)(unaff_EBX + 0x90dc) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8ff8);
  *(undefined4 **)(unaff_EBP + -0x40b) = (undefined4 *)(unaff_EBX + 0x90dc);
  *(undefined4 *)(unaff_EBX + 0x90f0) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8ffc);
  *(undefined4 **)(unaff_EBP + -0x427) = (undefined4 *)(unaff_EBX + 0x90f0);
  *(undefined4 *)(unaff_EBX + 0x90f4) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8fec);
  *(undefined4 **)(unaff_EBP + -0x42b) = (undefined4 *)(unaff_EBX + 0x90f4);
  *(undefined4 *)(unaff_EBX + 0x90e4) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8ff0);
  *(undefined4 **)(unaff_EBP + -0x40f) = (undefined4 *)(unaff_EBX + 0x90e4);
  *(undefined4 *)(unaff_EBX + 0x90e8) = uVar3;
  *(ulong *)(unaff_EBX + 0x1b4) = *(ulong *)(unaff_EBX + 0x160);
  *(ulong *)(unaff_EBX + 0x1b8) = *(ulong *)(unaff_EBX + 0x160);
  *(undefined4 **)(unaff_EBP + -0x41b) = (undefined4 *)(unaff_EBX + 0x90e8);
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"TASK",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3df),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined1 *)(unaff_EBP + -3) = 0xc2;
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xc3;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1b4));
    *(undefined1 *)(unaff_EBP + -3) = 0xc2;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xc4;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x1b8));
    FUN_0040efa0();
    FUN_0040eb60();
    *(undefined1 *)(unaff_EBP + -3) = 0xc5;
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"GROUP",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3a3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3))
      ;
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 199;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x37),L"NORMAL",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3b3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x47),*(wchar_t **)(unaff_EBP + -0x3b3));
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0xc9;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x47),L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3c7),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xcb;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1bc));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xcc;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x1c0));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xcd;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 0x9044));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xce;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x9048));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xcf;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3cb),(ulong *)(unaff_EBX + 0x905c));
          *(undefined1 *)(unaff_EBP + -3) = 0xca;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd0;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3cf),(ulong *)(unaff_EBX + 0x9060));
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0xc9;
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        }
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x47),L"AREA",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3c7),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
          *(undefined1 *)(unaff_EBP + -3) = 0xd1;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd2;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1d0));
          *(undefined1 *)(unaff_EBP + -3) = 0xd1;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd3;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x1cc));
          FUN_0040efa0();
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        }
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 199;
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x47));
      }
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x37),L"SPECIAL",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3b3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x47),*(wchar_t **)(unaff_EBP + -0x3b3));
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0xd5;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x47),L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3c7),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd7;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1c4));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd8;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x1c8));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xd9;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 0x904c));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xda;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x9050));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xdb;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3cb),(ulong *)(unaff_EBX + 0x9054));
          *(undefined1 *)(unaff_EBP + -3) = 0xd6;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xdc;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3cf),(ulong *)(unaff_EBX + 0x9058));
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0xd5;
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        }
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x47),L"AREA",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3c7),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
          *(undefined1 *)(unaff_EBP + -3) = 0xdd;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xde;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1d8));
          *(undefined1 *)(unaff_EBP + -3) = 0xdd;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0xdf;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x3af),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x1d4));
          FUN_0040efa0();
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        }
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 199;
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x47));
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xe0;
      iVar8 = CTagManager::ReadColor
                        ((CTagManager *)(unaff_EBP + -0x37),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x1dc));
      *(undefined1 *)(unaff_EBP + -3) = 199;
      FUN_0040efa0();
      if (iVar8 != 0) {
        CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x1f0));
        FUN_00425da3(0);
      }
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xc5;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
    }
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xe1;
    puVar9 = (undefined4 *)MakeResourceID();
    pwVar4 = (wchar_t *)*puVar9;
    *(undefined1 *)(unaff_EBP + -3) = 0xe2;
    CTagManager::ReadControlRenderer
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x3570),pwVar4);
    FUN_0040efa0();
    FUN_0040efa0();
    FUN_0040efa0();
    *(undefined1 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3df));
  }
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"TABS",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3df),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined1 *)(unaff_EBP + -3) = 0xe3;
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xe4;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x906c));
    *(undefined1 *)(unaff_EBP + -3) = 0xe3;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xe5;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x9070));
    FUN_0040efa0();
    FUN_0040eb60();
    *(undefined1 *)(unaff_EBP + -3) = 0xe6;
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"3D",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3c7),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0xe8;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"BUTTON",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        puVar9 = (undefined4 *)MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0xe9;
        *(undefined4 *)(unaff_EBP + -0x3f) = 0;
        *(undefined4 *)(unaff_EBP + -0x3b) = 0;
        *(undefined4 *)(unaff_EBP + -0x37) = 0;
        *(undefined4 *)(unaff_EBP + -0x33) = 0;
        *(undefined4 *)(unaff_EBP + -0x4f) = 0;
        *(undefined4 *)(unaff_EBP + -0x4b) = 0;
        *(undefined4 *)(unaff_EBP + -0x47) = 0;
        *(undefined4 *)(unaff_EBP + -0x43) = 0;
        *(undefined4 *)(unaff_EBP + -0x5f) = 0;
        *(undefined4 *)(unaff_EBP + -0x5b) = 0;
        *(undefined4 *)(unaff_EBP + -0x57) = 0;
        *(undefined4 *)(unaff_EBP + -0x53) = 0;
        *(undefined4 *)(unaff_EBP + -0x1f) = 0;
        *(undefined4 *)(unaff_EBP + -0x1b) = 0;
        *(undefined4 *)(unaff_EBP + -0x17) = 0;
        *(undefined4 *)(unaff_EBP + -0x13) = 0;
        CMFCControlRendererInfo(*puVar9,unaff_EBP + -0x1f,unaff_EBP + -0x5f);
        *(undefined1 *)(unaff_EBP + -3) = 0xeb;
        FUN_0040efa0();
        iVar8 = ParseControlRendererInfo();
        if (iVar8 != 0) {
          pcVar5 = *(code **)(*(int *)(unaff_EBX + 0x36e8) + 0xc);
          guard_check_icall();
          (*pcVar5)();
          pcVar5 = *(code **)(*(int *)(unaff_EBX + 0x3860) + 0xc);
          guard_check_icall(unaff_EBP + -0xaf,1);
          (*pcVar5)();
        }
        FUN_004d8539();
      }
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xe6;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"FLAT",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3c7),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"BUTTON",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        puVar9 = (undefined4 *)MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0xee;
        *(undefined4 *)(unaff_EBP + -0x1f) = 0;
        *(undefined4 *)(unaff_EBP + -0x1b) = 0;
        *(undefined4 *)(unaff_EBP + -0x17) = 0;
        *(undefined4 *)(unaff_EBP + -0x13) = 0;
        *(undefined4 *)(unaff_EBP + -0x3f) = 0;
        *(undefined4 *)(unaff_EBP + -0x3b) = 0;
        *(undefined4 *)(unaff_EBP + -0x37) = 0;
        *(undefined4 *)(unaff_EBP + -0x33) = 0;
        *(undefined4 *)(unaff_EBP + -0x4f) = 0;
        *(undefined4 *)(unaff_EBP + -0x4b) = 0;
        *(undefined4 *)(unaff_EBP + -0x47) = 0;
        *(undefined4 *)(unaff_EBP + -0x43) = 0;
        *(undefined4 *)(unaff_EBP + -0x5f) = 0;
        *(undefined4 *)(unaff_EBP + -0x5b) = 0;
        *(undefined4 *)(unaff_EBP + -0x57) = 0;
        *(undefined4 *)(unaff_EBP + -0x53) = 0;
        CMFCControlRendererInfo(*puVar9,unaff_EBP + -0x5f,unaff_EBP + -0x4f);
        *(undefined1 *)(unaff_EBP + -3) = 0xf0;
        FUN_0040efa0();
        iVar8 = ParseControlRendererInfo();
        if (iVar8 != 0) {
          pcVar5 = *(code **)(*(int *)(unaff_EBX + 0x39d8) + 0xc);
          guard_check_icall();
          (*pcVar5)();
          pcVar5 = *(code **)(*(int *)(unaff_EBX + 0x3b50) + 0xc);
          guard_check_icall(unaff_EBP + -0xaf,1);
          (*pcVar5)();
        }
        *(undefined1 *)(unaff_EBP + -3) = 0xed;
        FUN_004d8539();
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf1;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x9064));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf2;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x9068));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf3;
      iVar8 = CTagManager::ReadColor
                        ((CTagManager *)(unaff_EBP + -0x3af),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3bb),(ulong *)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      if (iVar8 != 0) {
        CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x8f08));
        FUN_00425da3(0);
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf4;
      iVar8 = CTagManager::ReadColor
                        ((CTagManager *)(unaff_EBP + -0x3af),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x39f),(ulong *)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      if (iVar8 != 0) {
        CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x8f10));
        FUN_00425da3(0);
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf5;
      iVar8 = CTagManager::ReadColor
                        ((CTagManager *)(unaff_EBP + -0x3af),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x39f),(ulong *)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      if (iVar8 != 0) {
        CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x8f18));
        FUN_00425da3(0);
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf6;
      iVar8 = CTagManager::ReadColor
                        ((CTagManager *)(unaff_EBP + -0x3af),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x39f),(ulong *)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xed;
      FUN_0040efa0();
      if (iVar8 != 0) {
        CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x8f20));
        FUN_00425da3(0);
      }
      FUN_0040efa0();
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    FUN_0040efa0();
    *(undefined1 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3df));
  }
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"HEADER",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3df),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xf8;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x9008));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xf9;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x900c));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xfa;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 0x9010));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xfb;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x9014));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xfc;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3cb),(ulong *)(unaff_EBX + 0x9018));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xfd;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3cf),(ulong *)(unaff_EBX + 0x901c));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xfe;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3ef),(ulong *)(unaff_EBX + 0x9020));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xff;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x53),(ulong *)(unaff_EBX + 0x9024));
    *(undefined1 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined4 *)(unaff_EBP + -3) = 0x100;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3d7),(ulong *)(unaff_EBX + 0x9028));
    *(undefined4 *)(unaff_EBP + -3) = 0xf7;
    FUN_0040efa0();
    *(undefined1 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3df));
  }
  *(undefined4 *)(unaff_EBX + 0x9084) = *(undefined4 *)(unaff_EBX + 0x8f84);
  *(undefined4 *)(unaff_EBX + 37000) = *(undefined4 *)(unaff_EBX + 0x8f88);
  *(ulong *)(unaff_EBX + 0x908c) = *(ulong *)(unaff_EBX + 0x8f8c);
  *(ulong *)(unaff_EBX + 0x9090) = *(ulong *)(unaff_EBX + 0x8f90);
  *(undefined4 *)(unaff_EBX + 0x9094) = *(undefined4 *)(unaff_EBX + 0x8f94);
  *(ulong *)(unaff_EBX + 0x9098) = *(ulong *)(unaff_EBX + 0x8f90);
  *(undefined4 *)(unaff_EBX + 0x909c) = *(undefined4 *)(unaff_EBX + 0x8f94);
  pAVar10 = GetGlobalData();
  *(undefined4 *)(unaff_EBX + 0x90a8) = *(undefined4 *)(pAVar10 + 100);
  pAVar10 = GetGlobalData();
  uVar3 = *(undefined4 *)(pAVar10 + 0x6c);
  *(undefined4 *)(unaff_EBX + 0x90b0) = uVar3;
  *(undefined4 *)(unaff_EBX + 0x90b4) = uVar3;
  pAVar10 = GetGlobalData();
  *(undefined4 *)(unaff_EBX + 0x90ac) = *(undefined4 *)(pAVar10 + 0x1c);
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"RIBBON",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3df),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined4 *)(unaff_EBP + -3) = 0x101;
    FUN_0040eb60();
    *(undefined1 *)(unaff_EBP + -3) = 2;
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"CATEGORY",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 3;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 4;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 5;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x42a8),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 6;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"TAB",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
        *(undefined1 *)(unaff_EBP + -3) = 7;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 8;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 9;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x4420),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 7;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 10;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x9084));
        *(undefined1 *)(unaff_EBP + -3) = 7;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xb;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 37000));
        *(undefined1 *)(unaff_EBP + -3) = 7;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xc;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x908c));
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 6;
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xe;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x4598),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 6;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xf;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0x10;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x4710),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 6;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0x11;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0x12;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3bb),(CMFCControlRenderer *)(unaff_EBX + 0x4888),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"PANEL",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x14;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"BACK",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
        *(undefined1 *)(unaff_EBP + -3) = 0x15;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x16;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x17;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x4a00),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x15;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x18;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x19;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x4b78),pwVar4);
        FUN_0040efa0();
        FUN_0040efa0();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
      }
      FUN_0040efa0();
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x1a;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"CAPTION",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3d3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3d3));
        *(undefined1 *)(unaff_EBP + -3) = 0x1b;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x1c;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x1d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x6a50),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x1b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x1e;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x1f;
        CTagManager::ReadToolBarImages
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(CMFCToolBarImages *)(unaff_EBX + 0x15e0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x1b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x20;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 0x9098));
        *(undefined1 *)(unaff_EBP + -3) = 0x1b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x21;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x909c));
        *(undefined1 *)(unaff_EBP + -3) = 0x1b;
        FUN_0040efa0();
        GetGlobalData();
        FUN_0045358f();
        FUN_0044e89f();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
      }
      *(undefined1 *)(unaff_EBP + -3) = 0x13;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0x22;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0x23;
      CTagManager::ReadToolBarImages
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(CMFCToolBarImages *)(unaff_EBX + 0x14c8),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0x13;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0x24;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0x25;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x4cf0),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x26;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"BUTTONS",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x28;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x29;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x5448),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x2a;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x2b;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x55c0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x2c;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x2d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bb),(CMFCControlRenderer *)(unaff_EBX + 0x5738),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x2e;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x2f;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bf),(CMFCControlRenderer *)(unaff_EBX + 0x52d0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x30;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x31;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cb),(CMFCControlRenderer *)(unaff_EBX + 0x58b0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x32;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x33;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cf),(CMFCControlRenderer *)(unaff_EBX + 0x5a28),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x34;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x35;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3ef),(CMFCControlRenderer *)(unaff_EBX + 0x5ba0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x36;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x37;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x53),(CMFCControlRenderer *)(unaff_EBX + 0x5d18),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x38;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x39;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3d7),(CMFCControlRenderer *)(unaff_EBX + 0x5e90),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x3a;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x3b;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3f3),(CMFCControlRenderer *)(unaff_EBX + 0x6008),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x3c;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x3d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3fb),(CMFCControlRenderer *)(unaff_EBX + 0x6180),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x3e;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x3f;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3d3),(CMFCControlRenderer *)(unaff_EBX + 0x62f8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x40;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x41;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3c3),(CMFCControlRenderer *)(unaff_EBX + 0x6d40),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x42;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x43;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3c7),(CMFCControlRenderer *)(unaff_EBX + 0x6eb8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x44;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x45;
        CTagManager::ReadToolBarImages
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(CMFCToolBarImages *)(unaff_EBX + 0x16f8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x46;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x47;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x71a8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        if (*(int *)(unaff_EBX + 0x723c) == 0) {
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x48;
          puVar9 = (undefined4 *)MakeResourceID();
          pwVar4 = (wchar_t *)*puVar9;
          *(undefined1 *)(unaff_EBP + -3) = 0x49;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x7030),pwVar4);
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0x27;
          FUN_0040efa0();
        }
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x4a;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x4b;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x6470),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x4c;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x4d;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x65e8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x4e;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x4f;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x6760),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x50;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x51;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x68d8),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x52;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x53;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bb),(CMFCControlRenderer *)(unaff_EBX + 0x7320),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        GetGlobalData();
        FUN_0045358f();
        FUN_00529a8c();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x54;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x55;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bf),(CMFCControlRenderer *)(unaff_EBX + 0x7498),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x56;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x57;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cb),(CMFCControlRenderer *)(unaff_EBX + 0x7610),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x27;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x58;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0x59;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x37),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cf),(CMFCControlRenderer *)(unaff_EBX + 0x7788),pwVar4);
        FUN_0040efa0();
        FUN_0040efa0();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
      }
      FUN_0040efa0();
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x5a;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x3af),L"EDIT",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3d3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x57),*(wchar_t **)(unaff_EBP + -0x3d3));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x5c;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x90a8));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x5d;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x90b0));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x5e;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x90ac));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x5f;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x90b4));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x60;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bb),(ulong *)(unaff_EBX + 0x90b8));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x61;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3bf),(ulong *)(unaff_EBX + 0x90c0));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x62;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cb),(ulong *)(unaff_EBX + 0x90bc));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 99;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3cf),(ulong *)(unaff_EBX + 0x90c4));
        *(undefined1 *)(unaff_EBP + -3) = 0x5b;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 100;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x57),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3ef),(ulong *)(unaff_EBX + 0x90c8));
        FUN_0040efa0();
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0x65;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x57),L"BUTTON",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3a3),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
          *(undefined1 *)(unaff_EBP + -3) = 0x66;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x67;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x90cc));
          *(undefined1 *)(unaff_EBP + -3) = 0x66;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x68;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x90d0));
          *(undefined1 *)(unaff_EBP + -3) = 0x66;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x69;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x90d4));
          *(undefined1 *)(unaff_EBP + -3) = 0x66;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x6a;
          puVar9 = (undefined4 *)MakeResourceID();
          pwVar4 = (wchar_t *)*puVar9;
          *(undefined1 *)(unaff_EBP + -3) = 0x6b;
          iVar8 = CTagManager::ReadControlRenderer
                            ((CTagManager *)(unaff_EBP + -0x37),
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x8928),pwVar4
                            );
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0x66;
          FUN_0040efa0();
          if (iVar8 == 0) {
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x6c;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x39b),*(ulong **)(unaff_EBP + -0x427));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x6d;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b7),*(ulong **)(unaff_EBP + -0x42b));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x6e;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x39f),*(ulong **)(unaff_EBP + -0x413));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x6f;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3a7),*(ulong **)(unaff_EBP + -0x40b));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x70;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3bb),*(ulong **)(unaff_EBP + -0x40f));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x71;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3bf),*(ulong **)(unaff_EBP + -0x41b));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            puVar6 = *(ulong **)(unaff_EBP + -0x3e3);
            *(undefined1 *)(unaff_EBP + -3) = 0x72;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3cb),puVar6);
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            FUN_00415a10();
            unaff_EBX = *(int *)(unaff_EBP + -0x3f7);
            *(undefined1 *)(unaff_EBP + -3) = 0x73;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3cf),(ulong *)(unaff_EBX + 0x90e0));
            *(undefined1 *)(unaff_EBP + -3) = 0x66;
            FUN_0040efa0();
            *(ulong *)(unaff_EBX + 0x90ec) = *puVar6;
            FUN_00415a10();
            *(undefined1 *)(unaff_EBP + -3) = 0x74;
            CTagManager::ReadColor
                      ((CTagManager *)(unaff_EBP + -0x37),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3ef),(ulong *)(unaff_EBX + 0x90ec));
            FUN_0040efa0();
          }
          else {
            unaff_EBX = *(int *)(unaff_EBP + -0x3f7);
          }
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
        }
        FUN_0040efa0();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x57));
      }
      *(undefined1 *)(unaff_EBP + -3) = 0x13;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0x75;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x9090));
      *(undefined1 *)(unaff_EBP + -3) = 0x13;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0x76;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x9094));
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"CONTEXT",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x417),*(wchar_t **)(unaff_EBP + -0x3b3));
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x78;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x417),L"CATEGORY",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3c7),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c7));
        *(undefined1 *)(unaff_EBP + -3) = 0x79;
        CMFCControlRendererInfo::CMFCControlRendererInfo
                  ((CMFCControlRendererInfo *)(unaff_EBP + -0xff));
        *(undefined1 *)(unaff_EBP + -3) = 0x7a;
        CMFCControlRendererInfo::CMFCControlRendererInfo
                  ((CMFCControlRendererInfo *)(unaff_EBP + -0x14f));
        *(undefined1 *)(unaff_EBP + -3) = 0x7b;
        CMFCControlRendererInfo::CMFCControlRendererInfo
                  ((CMFCControlRendererInfo *)(unaff_EBP + -0x19f));
        *(undefined1 *)(unaff_EBP + -3) = 0x7c;
        CMFCControlRendererInfo::CMFCControlRendererInfo
                  ((CMFCControlRendererInfo *)(unaff_EBP + -0xaf));
        uVar3 = *(undefined4 *)(unaff_EBX + 0x9084);
        uVar7 = *(undefined4 *)(unaff_EBX + 37000);
        *(undefined4 *)(unaff_EBP + -0x3a7) = uVar3;
        *(undefined4 *)(unaff_EBP + -0x3bf) = uVar3;
        *(undefined1 *)(unaff_EBP + -3) = 0x7d;
        *(undefined4 *)(unaff_EBP + -0x3bb) = uVar7;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x7e;
        CTagManager::ReadControlRendererInfo
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRendererInfo *)(unaff_EBP + -0xff));
        FUN_0040efa0();
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0x7f;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x3af),L"TAB",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3d3),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3d3));
          *(undefined1 *)(unaff_EBP + -3) = 0x80;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x81;
          CTagManager::ReadControlRendererInfo
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(CMFCControlRendererInfo *)(unaff_EBP + -0x19f));
          *(undefined1 *)(unaff_EBP + -3) = 0x80;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x82;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3b7),(ulong *)(unaff_EBP + -0x3a7));
          *(undefined1 *)(unaff_EBP + -3) = 0x80;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x83;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39f),(ulong *)(unaff_EBP + -0x3bb));
          FUN_0040efa0();
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
        }
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0x84;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x3af),L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3a3),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
          *(undefined1 *)(unaff_EBP + -3) = 0x85;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x86;
          CTagManager::ReadControlRendererInfo
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(CMFCControlRendererInfo *)(unaff_EBP + -0x14f));
          *(undefined1 *)(unaff_EBP + -3) = 0x85;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x87;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3b7),(ulong *)(unaff_EBP + -0x3bf));
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0x84;
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
        }
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0x88;
        CTagManager::ReadControlRendererInfo
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRendererInfo *)(unaff_EBP + -0xaf));
        *(undefined1 *)(unaff_EBP + -3) = 0x84;
        FUN_0040efa0();
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x89;
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x8a;
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x8b;
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x8c;
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x8d;
        MakeResourceID();
        *(undefined1 *)(unaff_EBP + -3) = 0x8e;
        MakeResourceID();
        piVar12 = (int *)(unaff_EBX + 0x9438);
        *(undefined1 *)(unaff_EBP + -3) = 0x8f;
        *(int **)(unaff_EBP + -0x3e3) = piVar12;
        *(int *)(unaff_EBP + -0x39b) = unaff_EBP + -0x2b;
        *(undefined4 *)(unaff_EBP + -0x3b7) = 7;
        do {
          FUN_00415c80(unaff_EBP + -0x3e3);
          *(undefined1 *)(unaff_EBP + -3) = 0x90;
          FUN_00415f50();
          *(undefined1 *)(unaff_EBP + -3) = 0x8f;
          FUN_0040efa0();
          FUN_00415c80(unaff_EBP + -0x41b);
          *(undefined1 *)(unaff_EBP + -3) = 0x91;
          FUN_00415f50();
          *(undefined1 *)(unaff_EBP + -3) = 0x8f;
          FUN_0040efa0();
          FUN_00415c80(unaff_EBP + -0x40f);
          *(undefined1 *)(unaff_EBP + -3) = 0x92;
          FUN_00415f50();
          *(undefined1 *)(unaff_EBP + -3) = 0x8f;
          FUN_0040efa0();
          FUN_00415c80(unaff_EBP + -0x40b);
          *(undefined1 *)(unaff_EBP + -3) = 0x93;
          FUN_00415f50();
          *(undefined1 *)(unaff_EBP + -3) = 0x8f;
          FUN_0040efa0();
          pcVar5 = *(code **)(piVar12[0x5e] + 0xc);
          guard_check_icall();
          (*pcVar5)();
          pcVar5 = *(code **)(piVar12[-0xbc] + 0xc);
          guard_check_icall(unaff_EBP + -0x14f,0);
          (*pcVar5)();
          pcVar5 = *(code **)(*piVar12 + 0xc);
          guard_check_icall(unaff_EBP + -0x19f,0);
          (*pcVar5)();
          pcVar5 = *(code **)(piVar12[-0x5e] + 0xc);
          guard_check_icall(unaff_EBP + -0xff,0);
          (*pcVar5)();
          iVar8 = *(int *)(unaff_EBP + -0x39b);
          piVar12[0xbd] = *(int *)(unaff_EBP + -0x3a7);
          piVar12[0xbe] = *(int *)(unaff_EBP + -0x3bb);
          piVar12[0xbc] = *(int *)(unaff_EBP + -0x3bf);
          piVar12 = piVar12 + 0x192;
          piVar1 = (int *)(unaff_EBP + -0x3b7);
          *piVar1 = *piVar1 + -1;
          *(int *)(unaff_EBP + -0x39b) = iVar8 + 4;
        } while (*piVar1 != 0);
        *(undefined1 *)(unaff_EBP + -3) = 0x84;
        _eh_vector_destructor_iterator_((void *)(unaff_EBP + -0x2b),4,7,FUN_0040efc0);
        FUN_0040efa0();
        FUN_0040efa0();
        FUN_004d8539();
        FUN_004d8539();
        FUN_004d8539();
        FUN_004d8539();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        unaff_EBX = *(int *)(unaff_EBP + -0x3f7);
      }
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0x94;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x417),L"PANEL",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3c3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3c3));
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0x96;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x3af),L"BACK",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3d3),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3d3));
          *(undefined1 *)(unaff_EBP + -3) = 0x97;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x98;
          puVar9 = (undefined4 *)MakeResourceID();
          pwVar4 = (wchar_t *)*puVar9;
          *(undefined1 *)(unaff_EBP + -3) = 0x99;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x8aa0),pwVar4);
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0x97;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x9a;
          puVar9 = (undefined4 *)MakeResourceID();
          pwVar4 = (wchar_t *)*puVar9;
          *(undefined1 *)(unaff_EBP + -3) = 0x9b;
          CTagManager::ReadControlRenderer
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x8c18),pwVar4);
          FUN_0040efa0();
          FUN_0040efa0();
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
        }
        FUN_0040eb60();
        *(undefined1 *)(unaff_EBP + -3) = 0x9c;
        iVar8 = CTagManager::ExcludeTag
                          ((CTagManager *)(unaff_EBP + -0x3af),L"CAPTION",
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (unaff_EBP + -0x3a3),0);
        if (iVar8 != 0) {
          CTagManager::CTagManager
                    ((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3a3));
          *(undefined1 *)(unaff_EBP + -3) = 0x9d;
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x9e;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x9104));
          *(undefined1 *)(unaff_EBP + -3) = 0x9d;
          FUN_0040efa0();
          FUN_00415a10();
          *(undefined1 *)(unaff_EBP + -3) = 0x9f;
          CTagManager::ReadColor
                    ((CTagManager *)(unaff_EBP + -0x37),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x9108));
          FUN_0040efa0();
          *(undefined1 *)(unaff_EBP + -3) = 0x9c;
          CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
        }
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xa0;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x90fc));
        *(undefined1 *)(unaff_EBP + -3) = 0x9c;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xa1;
        CTagManager::ReadColor
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x9100));
        FUN_0040efa0();
        FUN_0040efa0();
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0x94;
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
      }
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xa2;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xa3;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x417),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x8d90),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x417));
    }
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xa4;
    puVar9 = (undefined4 *)MakeResourceID();
    pwVar4 = (wchar_t *)*puVar9;
    *(undefined1 *)(unaff_EBP + -3) = 0xa5;
    CTagManager::ReadControlRenderer
              ((CTagManager *)(unaff_EBP + -0x3df),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x6bc8),pwVar4);
    FUN_0040efa0();
    *(undefined1 *)(unaff_EBP + -3) = 2;
    FUN_0040efa0();
    if (*(int *)(unaff_EBX + 0x6c5c) != 0) {
      GetGlobalData();
      FUN_0045358f();
      FUN_00529a8c();
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"MAIN",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xa6;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xa7;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xa8;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x4e68),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xa6;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xa9;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xaa;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x4fe0),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xa6;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xab;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xac;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x5158),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"CAPTION",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xad;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xae;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xaf;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x3fb8),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xad;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xb0;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xb1;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x4130),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"STATUS",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x37),*(wchar_t **)(unaff_EBP + -0x3b3))
      ;
      *(undefined1 *)(unaff_EBP + -3) = 0xb2;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xb3;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xb4;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x37),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x7900),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0xb5;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x37),L"SLIDER",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3d3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3d3));
        *(undefined1 *)(unaff_EBP + -3) = 0xb6;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xb7;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xb8;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x7a78),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xb6;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xb9;
        puVar9 = (undefined4 *)MakeResourceID();
        iVar8 = *(int *)(unaff_EBP + -0x3f7);
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xba;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(iVar8 + 0x7bf0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xb6;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xbb;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xbc;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(iVar8 + 0x7d68),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xb6;
        FUN_0040efa0();
        GetGlobalData();
        FUN_0045358f();
        FUN_00529a8c();
        GetGlobalData();
        FUN_0045358f();
        FUN_00529a8c();
        GetGlobalData();
        FUN_0045358f();
        FUN_00529a8c();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
        unaff_EBX = *(int *)(unaff_EBP + -0x3f7);
      }
      FUN_0040eb60();
      *(undefined1 *)(unaff_EBP + -3) = 0xbd;
      iVar8 = CTagManager::ExcludeTag
                        ((CTagManager *)(unaff_EBP + -0x37),L"PROGRESS",
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (unaff_EBP + -0x3a3),0);
      if (iVar8 != 0) {
        CTagManager::CTagManager
                  ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3a3));
        *(undefined1 *)(unaff_EBP + -3) = 0xbe;
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xbf;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xc0;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x7ee0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xbe;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xc1;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xc2;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x8058),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xbe;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xc3;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xc4;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x39f),(CMFCControlRenderer *)(unaff_EBX + 0x81d0),pwVar4);
        FUN_0040efa0();
        *(undefined1 *)(unaff_EBP + -3) = 0xbe;
        FUN_0040efa0();
        FUN_00415a10();
        *(undefined1 *)(unaff_EBP + -3) = 0xc5;
        puVar9 = (undefined4 *)MakeResourceID();
        pwVar4 = (wchar_t *)*puVar9;
        *(undefined1 *)(unaff_EBP + -3) = 0xc6;
        CTagManager::ReadControlRenderer
                  ((CTagManager *)(unaff_EBP + -0x3af),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (unaff_EBP + -0x3a7),(CMFCControlRenderer *)(unaff_EBX + 0x8348),pwVar4);
        FUN_0040efa0();
        FUN_0040efa0();
        CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
      }
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x37));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"BORDERS",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 199;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 200;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xc9;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x84c0),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 199;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xca;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xcb;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),(CMFCControlRenderer *)(unaff_EBX + 0x8638),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"KEYTIP",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xcc;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xcd;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xce;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x87b0),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xcc;
      FUN_0040efa0();
      FUN_00415a10();
      puVar6 = (ulong *)(unaff_EBX + 0x90a0);
      *(undefined1 *)(unaff_EBP + -3) = 0xcf;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),puVar6);
      *(undefined1 *)(unaff_EBP + -3) = 0xcc;
      FUN_0040efa0();
      *(undefined4 *)(unaff_EBP + -0x3b7) = 0;
      if (*puVar6 == 0xffffffff) {
        if ((*(int *)(unaff_EBX + 0x218) == 0) ||
           (uVar11 = *(ulong *)(unaff_EBX + 0xc030), uVar11 == 0xffffffff)) {
          *(undefined4 *)(unaff_EBP + -0x3b7) = 1;
          uVar11 = GetSysColor(0x17);
        }
        *puVar6 = uVar11;
      }
      FUN_00415a10();
      puVar2 = (ulong *)(unaff_EBX + 0x90a4);
      *(undefined1 *)(unaff_EBP + -3) = 0xd0;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),puVar2);
      *(undefined1 *)(unaff_EBP + -3) = 0xcc;
      FUN_0040efa0();
      if (*puVar2 == 0xffffffff) {
        if (*(int *)(unaff_EBP + -0x3b7) == 0) {
          iVar8 = 0x32;
          pAVar10 = GetGlobalData();
          uVar11 = CDrawingManager::PixelAlpha(*puVar6,*(ulong *)(pAVar10 + 0x6c),iVar8);
        }
        else {
          pAVar10 = GetGlobalData();
          uVar11 = *(ulong *)(pAVar10 + 0x38);
        }
        *puVar2 = uVar11;
      }
      *(undefined1 *)(unaff_EBP + -3) = 2;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"HYPERLINK",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xd1;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd2;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x9134));
      *(undefined1 *)(unaff_EBP + -3) = 0xd1;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd3;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x9138));
      *(undefined1 *)(unaff_EBP + -3) = 0xd1;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd4;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x913c));
      *(undefined1 *)(unaff_EBP + -3) = 0xd1;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd5;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x9140));
      FUN_0040efa0();
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    FUN_0040efa0();
    *(undefined4 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3df));
  }
  uVar11 = *(ulong *)(unaff_EBX + 0x9040);
  *(ulong *)(unaff_EBX + 0x9080) = uVar11;
  puVar6 = (ulong *)(unaff_EBX + 0x9074);
  *puVar6 = uVar11;
  *(ulong *)(unaff_EBX + 0x9078) = uVar11;
  *(ulong *)(unaff_EBX + 0x907c) = *puVar6;
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"OUTLOOK",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3df),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined4 *)(unaff_EBP + -3) = 0x1d6;
    FUN_0040eb60();
    *(undefined1 *)(unaff_EBP + -3) = 0xd7;
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"CAPTION",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xd8;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xd9;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x9080));
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xd7;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"PAGEBUTTON",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xda;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xdb;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xdc;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x3e40),pwVar4);
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xda;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xdd;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3b7),puVar6);
      *(undefined1 *)(unaff_EBP + -3) = 0xda;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xde;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39f),(ulong *)(unaff_EBX + 0x9078));
      *(undefined1 *)(unaff_EBP + -3) = 0xda;
      FUN_0040efa0();
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xdf;
      CTagManager::ReadColor
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x3a7),(ulong *)(unaff_EBX + 0x907c));
      FUN_0040efa0();
      *(undefined1 *)(unaff_EBP + -3) = 0xd7;
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    iVar8 = CTagManager::ExcludeTag
                      ((CTagManager *)(unaff_EBP + -0x3df),L"BAR",
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (unaff_EBP + -0x3b3),0);
    if (iVar8 != 0) {
      CTagManager::CTagManager
                ((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3b3));
      *(undefined1 *)(unaff_EBP + -3) = 0xe0;
      FUN_00415a10();
      *(undefined1 *)(unaff_EBP + -3) = 0xe1;
      puVar9 = (undefined4 *)MakeResourceID();
      pwVar4 = (wchar_t *)*puVar9;
      *(undefined1 *)(unaff_EBP + -3) = 0xe2;
      CTagManager::ReadControlRenderer
                ((CTagManager *)(unaff_EBP + -0x3af),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (unaff_EBP + -0x39b),(CMFCControlRenderer *)(unaff_EBX + 0x3cc8),pwVar4);
      FUN_0040efa0();
      FUN_0040efa0();
      CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
    }
    FUN_0040efa0();
    *(undefined4 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3df));
  }
  *(ulong *)(unaff_EBX + 0x912c) = *(ulong *)(unaff_EBX + 0x160);
  *(ulong *)(unaff_EBX + 0x9130) = *(ulong *)(unaff_EBX + 0x15c);
  iVar8 = CTagManager::ExcludeTag
                    ((CTagManager *)(unaff_EBP + -0x407),L"POPUP",
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (unaff_EBP + -0x3eb),0);
  if (iVar8 != 0) {
    CTagManager::CTagManager((CTagManager *)(unaff_EBP + -0x3af),*(wchar_t **)(unaff_EBP + -0x3eb));
    *(undefined4 *)(unaff_EBP + -3) = 0x1e3;
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xe4;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3af),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x39b),(ulong *)(unaff_EBX + 0x912c));
    *(undefined1 *)(unaff_EBP + -3) = 0xe3;
    FUN_0040efa0();
    FUN_00415a10();
    *(undefined1 *)(unaff_EBP + -3) = 0xe5;
    CTagManager::ReadColor
              ((CTagManager *)(unaff_EBP + -0x3af),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3b7),(ulong *)(unaff_EBX + 0x9130));
    FUN_0040efa0();
    *(undefined4 *)(unaff_EBP + -3) = 3;
    CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x3af));
  }
  if (*(int *)(unaff_EBP + -0x423) != 0) {
    FUN_00416aac();
  }
  FUN_0040efa0();
  CTagManager::~CTagManager((CTagManager *)(unaff_EBP + -0x407));
  FUN_0055bae6();
  return;
}

