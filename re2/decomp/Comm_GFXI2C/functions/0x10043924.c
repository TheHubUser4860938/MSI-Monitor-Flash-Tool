// rea decompile_all
// name: CThreadSlotData::~CThreadSlotData
// address: 0x10043924
// body: available
// range: 0x10043924-0x1004397c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CThreadSlotData::~CThreadSlotData(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CThreadSlotData::~CThreadSlotData(CThreadSlotData *this)

{
  CThreadData *pCVar1;
  CThreadData *pCVar2;
  HGLOBAL hMem;
  
  pCVar2 = *(CThreadData **)(this + 0x14);
  while (pCVar2 != (CThreadData *)0x0) {
    pCVar1 = *(CThreadData **)(pCVar2 + 4);
    DeleteValues(this,pCVar2,(HINSTANCE__ *)0x0);
    pCVar2 = pCVar1;
  }
  if (*(DWORD *)this != 0xffffffff) {
    TlsFree(*(DWORD *)this);
  }
  if (*(LPCVOID *)(this + 0x10) != (LPCVOID)0x0) {
    hMem = GlobalHandle(*(LPCVOID *)(this + 0x10));
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}

