// rea decompile_all
// name: CMFCToolBar::CMFCToolBar
// address: 0x1005bde6
// body: available
// range: 0x1005bde6-0x1005c16a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBar::CMFCToolBar(void)
   
   Library: Visual Studio 2015 Release */

CMFCToolBar * __thiscall CMFCToolBar::CMFCToolBar(CMFCToolBar *this)

{
  AFX_GLOBAL_DATA *pAVar1;
  
  CMFCBaseToolBar::CMFCBaseToolBar((CMFCBaseToolBar *)this);
  *(undefined ***)this = vftable;
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x2b8));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x3d0));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x4e8));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x600));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x718));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x830));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x948));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0xa60));
  *(undefined4 *)(this + 0xbac) = 0;
  *(undefined4 *)(this + 0xbc4) = 0;
  CMFCControlBarImpl::CMFCControlBarImpl((CMFCControlBarImpl *)(this + 0xbe0),(CPane *)this);
  *(undefined4 *)(this + 0xc10) = 0;
  *(undefined4 *)(this + 0xc14) = 0;
  *(undefined4 *)(this + 0xc18) = 0;
  *(undefined4 *)(this + 0xc1c) = 0;
  *(undefined4 *)(this + 0xc20) = 0;
  *(undefined4 *)(this + 0xc24) = 0;
  *(undefined4 *)(this + 0xc28) = 0;
  *(undefined4 *)(this + 0xc2c) = 0;
  *(undefined4 *)(this + 0xc34) = 0;
  *(undefined4 *)(this + 0xc38) = 0;
  CObList::CObList((CObList *)(this + 0xc3c),10);
  CObList::CObList((CObList *)(this + 0xc58),10);
  CObList::CObList((CObList *)(this + 0xc74),10);
  CMFCToolBarDropTarget::CMFCToolBarDropTarget((CMFCToolBarDropTarget *)(this + 0xc90));
  ((LPRECT)(this + 0xccc))->left = 0;
  *(undefined4 *)(this + 0xcd0) = 0;
  *(undefined4 *)(this + 0xcd4) = 0;
  *(undefined4 *)(this + 0xcd8) = 0;
  ((LPRECT)(this + 0xcdc))->left = 0;
  *(undefined4 *)(this + 0xce0) = 0;
  *(undefined4 *)(this + 0xce4) = 0;
  *(undefined4 *)(this + 0xce8) = 0;
  *(undefined4 *)(this + 0xcf0) = 0;
  *(undefined ***)(this + 0xcec) = CPen::vftable;
  *(undefined4 *)(this + 0xcf4) = 0;
  *(undefined4 *)(this + 0xcf8) = 0;
  *(undefined4 *)(this + 0xcfc) = 0;
  *(undefined4 *)(this + 0xd00) = 0;
  CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::
  CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>
            ((CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *)
             (this + 0xd20),10);
  pAVar1 = GetGlobalData();
  if (*(int *)(pAVar1 + 0x19c) != 0) {
    this[0x24] = (CMFCToolBar)0x1;
  }
  *(undefined4 *)(this + 0xbec) = 0xffffffff;
  *(undefined4 *)(this + 0xbf0) = 0xffffffff;
  *(undefined4 *)(this + 0xbf4) = 0xffffffff;
  *(undefined4 *)(this + 0xbf8) = 0xffffffff;
  *(undefined4 *)(this + 0xc00) = 0xffffffff;
  SetRectEmpty((LPRECT)(this + 0xccc));
  *(undefined4 *)(this + 0xc30) = 0;
  *(undefined4 *)(this + 0xba4) = 0;
  *(undefined4 *)(this + 0xd0c) = 0;
  *(undefined4 *)(this + 0xba0) = 0;
  *(undefined4 *)(this + 0xb80) = 0;
  *(undefined4 *)(this + 0xb84) = 0;
  *(undefined4 *)(this + 0xd14) = 0;
  *(undefined4 *)(this + 0x134) = 1;
  *(undefined4 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0xcf4) = 0xffffffff;
  *(undefined4 *)(this + 0xcf8) = 0xffffffff;
  *(undefined4 *)(this + 0xc20) = 0x17;
  *(undefined4 *)(this + 0xc24) = 0x16;
  *(undefined4 *)(this + 0xc28) = 0x10;
  *(undefined4 *)(this + 0xc2c) = 0xf;
  *(undefined4 *)(this + 0xc10) = 0x17;
  *(undefined4 *)(this + 0xc14) = 0x16;
  *(undefined4 *)(this + 0xc18) = 0x10;
  *(undefined4 *)(this + 0xc1c) = 0xf;
  SetRectEmpty((LPRECT)(this + 0xcdc));
  *(undefined4 *)(this + 0xcfc) = 0xffffffff;
  *(undefined4 *)(this + 0xc04) = 0;
  *(undefined4 *)(this + 0xd18) = 0;
  *(undefined4 *)(this + 0xbbc) = 1;
  *(undefined4 *)(this + 0xbc0) = 1;
  *(undefined4 *)(this + 0xb7c) = 1;
  *(undefined4 *)(this + 0xbb0) = 1;
  *(undefined4 *)(this + 0xbb4) = 1;
  *(undefined4 *)(this + 0xb94) = 1;
  *(undefined4 *)(this + 0xba8) = 0;
  *(undefined4 *)(this + 0xd00) = 0xffffffff;
  *(undefined4 *)(this + 0xd04) = 0;
  *(undefined4 *)(this + 0xd1c) = 0;
  *(undefined4 *)(this + 0xb78) = 0;
  *(undefined4 *)(this + 0xb88) = 0;
  *(undefined4 *)(this + 0xb8c) = 0;
  *(undefined4 *)(this + 0xbe8) = 0;
  *(undefined4 *)(this + 0xb90) = 0;
  *(undefined4 *)(this + 0xbfc) = 0;
  *(undefined4 *)(this + 0xc08) = 0;
  *(undefined4 *)(this + 0xc34) = 0;
  *(undefined4 *)(this + 0xc38) = 0;
  *(undefined4 *)(this + 3000) = 0;
  *(undefined4 *)(this + 0xbcc) = 0;
  *(undefined4 *)(this + 0xbd0) = 0;
  *(undefined4 *)(this + 0xd10) = 0;
  *(undefined4 *)(this + 0xbd4) = 0;
  *(undefined4 *)(this + 0xbc8) = 0;
  *(undefined4 *)(this + 0xc0c) = 0xfffffff6;
  *(undefined4 *)(this + 0xb9c) = 0;
  *(undefined4 *)(this + 0xb98) = 0;
  *(undefined4 *)(this + 0xbd8) = 0;
  *(undefined4 *)(this + 0xbdc) = 0;
  *(undefined4 *)(this + 0xd08) = 0;
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db088);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db1a0);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db2b8);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db3d0);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db4e8);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db600);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db718);
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_101db830);
  return this;
}

