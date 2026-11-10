// rea decompile_all
// name: FUN_100ebb79
// address: 0x100ebb79
// body: available
// range: 0x100ebb79-0x100ebea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100ebb79(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  HDC pHVar4;
  undefined1 *puVar5;
  int iVar6;
  int in_ECX;
  HGDIOBJ pvVar7;
  CImage local_ec [4];
  HGDIOBJ local_e8;
  CClientDC local_b8 [4];
  HDC local_b4;
  CImage local_a4 [4];
  HGDIOBJ local_a0;
  int local_9c;
  int local_94;
  int local_90;
  CDC local_70 [4];
  HDC local_6c;
  CDC local_60 [4];
  HDC local_5c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CWnd *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xdc;
  local_8 = 0x100ebb88;
  local_44 = param_1;
  if (((*(int **)(in_ECX + 0x80) == (int *)0x0) || (param_1 < 1)) || (param_2 < 1))
  goto LAB_100ebea0;
  pvVar7 = (HGDIOBJ)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x80) + 0x204);
  local_50 = in_ECX;
  guard_check_icall();
  pCVar3 = (CWnd *)(*pcVar1)();
  local_38 = pCVar3;
  GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_24);
  OffsetRect(&local_24,-local_24.left,-local_24.top);
  if ((local_24.right == local_24.left || local_24.right - local_24.left < 0) ||
     (local_24.bottom == local_24.top || local_24.bottom - local_24.top < 0)) goto LAB_100ebea0;
  ATL::CImage::CImage(local_a4);
  local_8 = 0;
  ATL::CImage::CreateEx
            (local_a4,local_24.right - local_24.left,local_24.bottom - local_24.top,0x20,0,
             (ulong *)0x0,1);
  CClientDC::CClientDC(local_b8,pCVar3);
  local_8._0_1_ = 1;
  CDC::CDC(local_70);
  local_8 = CONCAT31(local_8._1_3_,2);
  pHVar4 = CreateCompatibleDC(local_b4);
  CDC::Attach(local_70,pHVar4);
  if (local_a0 != (HGDIOBJ)0x0) {
    pvVar7 = SelectObject(local_6c,local_a0);
  }
  local_4c = 0;
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x90);
  guard_check_icall(local_70,local_24.left,local_24.top,local_24.right,local_24.bottom,local_44,
                    param_2,param_3,&local_4c);
  (*pcVar1)();
  if (pvVar7 != (HGDIOBJ)0x0) {
    SelectObject(local_6c,pvVar7);
  }
  if (local_4c == 0) {
    local_38 = (CWnd *)local_9c;
    if (local_90 < 0) {
      local_38 = (CWnd *)(local_9c + (local_94 + -1) * local_90);
    }
    local_40 = 0;
    if (0 < (local_24.bottom - local_24.top) * (local_24.right - local_24.left)) {
      puVar5 = (undefined1 *)((int)local_38 + 3);
      do {
        *puVar5 = 0xff;
        puVar5 = puVar5 + 4;
        local_40 = local_40 + 1;
      } while (local_40 < (local_24.bottom - local_24.top) * (local_24.right - local_24.left));
    }
  }
  local_3c = local_24.right - local_24.left;
  local_48 = local_44;
  local_38 = (CWnd *)(local_24.bottom - local_24.top);
  local_44 = param_2;
  FUN_100eb943(&local_3c,&local_48);
  iVar2 = local_44;
  iVar6 = local_48;
  local_34.right = local_48;
  local_34.left = 0;
  local_34.top = 0;
  local_34.bottom = local_44;
  ATL::CImage::CImage(local_ec);
  local_8 = CONCAT31(local_8._1_3_,3);
  ATL::CImage::CreateEx(local_ec,iVar6,-iVar2,0x20,0,(ulong *)0x0,1);
  if (param_3 == 0) {
LAB_100ebdf3:
    CDC::CDC(local_60);
    local_8 = CONCAT31(local_8._1_3_,4);
    pHVar4 = CreateCompatibleDC(local_b4);
    CDC::Attach(local_60,pHVar4);
    if (local_e8 == (HGDIOBJ)0x0) {
      pvVar7 = (HGDIOBJ)0x0;
    }
    else {
      pvVar7 = SelectObject(local_5c,local_e8);
    }
    ATL::CImage::AlphaBlend(local_a4,local_5c,&local_34,&local_24,0xff,'\0');
    if (pvVar7 != (HGDIOBJ)0x0) {
      SelectObject(local_5c,pvVar7);
    }
    CDC::~CDC(local_60);
  }
  else {
    pcVar1 = *(code **)(**(int **)(local_50 + 0x80) + 0x200);
    guard_check_icall(local_e8,&local_34,local_a0,&local_24);
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) goto LAB_100ebdf3;
  }
  ATL::CImage::Detach(local_ec);
  ATL::CImage::~CImage(local_ec);
  CDC::~CDC(local_70);
  CClientDC::~CClientDC(local_b8);
  ATL::CImage::~CImage(local_a4);
LAB_100ebea0:
  FUN_1017f5f4();
  return;
}

