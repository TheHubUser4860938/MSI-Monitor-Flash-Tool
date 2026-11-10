// rea decompile_all
// name: AFX_MODULE_STATE::~AFX_MODULE_STATE
// address: 0x1003bccc
// body: available
// range: 0x1003bccc-0x1003bd6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
  void *pvVar1;
  
  *(undefined ***)this = vftable;
  if (*(undefined4 **)(this + 0x48) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x48))(1);
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 0xc))(this + 0x4c);
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))(1);
    }
  }
  if ((undefined4 *)**(int **)(this + 0x78) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(this + 0x78))(1);
  }
  if (*(undefined4 **)(*(int *)(this + 0x78) + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(*(int *)(this + 0x78) + 4))(1);
  }
  FUN_10038b07(*(void **)(this + 0x78));
  pvVar1 = *(void **)(this + 0x80);
  if ((pvVar1 != (void *)0x0) && (pvVar1 != (void *)0xffffffff)) {
    AfxReleaseActCtx(pvVar1);
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  CThreadLocalObject::~CThreadLocalObject((CThreadLocalObject *)(this + 0x74));
  FUN_100024a0((undefined4 *)(*(int *)(this + 0x34) + -0x10));
  return;
}

