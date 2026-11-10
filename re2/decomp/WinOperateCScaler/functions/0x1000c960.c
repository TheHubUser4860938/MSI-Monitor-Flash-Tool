// rea decompile_all
// name: FUN_1000c960
// address: 0x1000c960
// body: available
// range: 0x1000c960-0x1000e57c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1000c960(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *in_stack_fffff5f0;
  undefined1 auStack_a0c [8];
  undefined4 uStack_a04;
  undefined1 local_9e4 [28];
  undefined4 local_9c8;
  undefined1 *local_9c4;
  uint local_9c0;
  uint local_9bc;
  uint local_9b8;
  uint local_9b4;
  undefined8 local_980 [51];
  undefined1 local_7e8 [120];
  undefined4 local_770;
  undefined4 local_76c;
  int local_768;
  int local_764;
  undefined4 local_760;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined8 local_6bc;
  int local_6b4;
  uint local_6b0;
  undefined1 local_6ac [36];
  undefined4 local_688;
  int local_684;
  uint local_678;
  uint local_674 [4];
  undefined4 local_664;
  uint local_660;
  uint local_65c;
  uint local_658;
  char *local_654;
  undefined4 local_650;
  uint *local_64c;
  undefined4 local_648;
  undefined *local_644;
  undefined4 local_640;
  uint *local_63c;
  undefined4 local_638;
  char *local_634;
  undefined4 local_630;
  uint *local_62c;
  undefined4 local_628;
  undefined *local_624;
  undefined4 local_620;
  uint *local_61c;
  undefined4 local_618;
  char *local_614;
  undefined4 local_610;
  uint *local_60c;
  undefined4 local_608;
  char *local_604;
  undefined4 local_600;
  uint *local_5fc;
  undefined4 local_5f8;
  char *local_5f4;
  undefined4 local_5f0;
  uint *local_5ec;
  undefined4 local_5e8;
  char *local_5e4;
  undefined4 local_5e0;
  uint *local_5dc;
  undefined4 local_5d8;
  char *local_5d4;
  undefined4 local_5d0;
  uint *local_5cc;
  undefined4 local_5c8;
  char *local_5c4;
  undefined4 local_5c0;
  uint *local_5bc;
  undefined4 local_5b8;
  char *local_5b4;
  undefined4 local_5b0;
  uint *local_5ac;
  undefined4 local_5a8;
  char *local_5a4;
  undefined4 local_5a0;
  uint *local_59c;
  undefined4 local_598;
  char *local_594;
  undefined4 local_590;
  uint *local_58c;
  undefined4 local_588;
  char *local_584;
  undefined4 local_580;
  uint *local_57c;
  undefined4 local_578;
  char *local_574;
  undefined4 local_570;
  uint *local_56c;
  undefined4 local_568;
  char *local_564;
  undefined4 local_560;
  uint *local_55c;
  undefined4 local_558;
  char *local_554;
  undefined4 local_550;
  uint *local_54c;
  undefined4 local_548;
  char *local_544;
  undefined4 local_540;
  uint *local_53c;
  undefined4 local_538;
  char *local_534;
  undefined4 local_530;
  uint *local_52c;
  undefined4 local_528;
  char *local_524;
  undefined4 local_520;
  uint *local_51c;
  undefined4 local_518;
  char *local_514;
  undefined4 local_510;
  uint *local_50c;
  undefined4 local_508;
  char *local_504;
  undefined4 local_500;
  uint *local_4fc;
  undefined4 local_4f8;
  char *local_4f4;
  undefined4 local_4f0;
  uint *local_4ec;
  undefined4 local_4e8;
  char *local_4e4;
  undefined4 local_4e0;
  uint *local_4dc;
  undefined4 local_4d8;
  char *local_4d4;
  undefined4 local_4d0;
  uint *local_4cc;
  undefined4 local_4c8;
  char *local_4c4;
  undefined4 local_4c0;
  uint *local_4bc;
  undefined4 local_4b8;
  char *local_4b4;
  undefined4 local_4b0;
  uint *local_4ac;
  undefined4 local_4a8;
  char *local_4a4;
  undefined4 local_4a0;
  uint *local_49c;
  undefined4 local_498;
  undefined *local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  char *local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  char *local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  char *local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined *local_454;
  undefined4 local_450;
  uint *local_44c;
  undefined4 local_448;
  undefined *local_444;
  undefined4 local_440;
  uint *local_43c;
  undefined4 local_438;
  char *local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined *local_424;
  undefined4 local_420;
  uint *local_41c;
  undefined4 local_418;
  char *local_414;
  undefined4 local_410;
  uint *local_40c;
  undefined4 local_408;
  char *local_404;
  undefined4 local_400;
  uint *local_3fc;
  undefined4 local_3f8;
  char *local_3f4;
  undefined4 local_3f0;
  uint *local_3ec;
  undefined4 local_3e8;
  undefined *local_3e4;
  undefined4 local_3e0;
  uint *local_3dc;
  undefined4 local_3d8;
  char *local_3d4;
  undefined4 local_3d0;
  uint *local_3cc;
  undefined4 local_3c8;
  char *local_3c4;
  undefined4 local_3c0;
  uint *local_3bc;
  undefined4 local_3b8;
  char *local_3b4;
  undefined4 local_3b0;
  uint *local_3ac;
  undefined4 local_3a8;
  char *local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  char *local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  char *local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  char *local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  char *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  char *local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  char *local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  char *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined *local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined *local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  char *local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  char *local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  char *local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  char *local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  char *local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  char *local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined *local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  char *local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined *local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  char *local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  char *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined *local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  char *local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  char *local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined *local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined *local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  char *local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  char *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined *local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  char *local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined *local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  char *local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  char *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  char *local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  char *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined *local_104;
  undefined4 local_100;
  uint *local_fc;
  undefined4 local_f8;
  char *local_f4;
  undefined4 local_f0;
  uint *local_ec;
  undefined4 local_e8;
  char *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  char *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  char *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195372;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_9c8 = param_2;
  FUN_100063c0();
  local_658 = 0;
  local_6b0 = 0;
  local_65c = 0;
  local_678 = 0;
  local_660 = 0xf;
  local_664 = 0;
  local_674[0] = local_674[0] & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uStack_a04 = 0x1000ca08;
  _memset(local_6ac,0,0x34);
  FUN_10011da0();
  local_64c = &local_658;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_654 = "verify";
  local_650 = 0;
  local_648 = 1;
  local_644 = &DAT_101a6548;
  local_640 = 0;
  local_638 = 2;
  local_634 = "erase";
  local_630 = 0;
  local_628 = 4;
  local_624 = &DAT_101a6558;
  local_620 = 0;
  local_618 = 8;
  local_614 = "ispuser";
  local_610 = 0;
  local_608 = 0x10;
  local_604 = "ispdiff";
  local_600 = 0;
  local_5f8 = 0x20;
  local_5f4 = "ispcopy";
  local_5f0 = 0;
  local_5e8 = 0x40;
  local_5e4 = "factoryisp";
  local_5e0 = 0;
  local_5d8 = 0x10000;
  local_5d4 = "recordver";
  local_5d0 = 0;
  local_5c8 = 0x80;
  local_5c4 = "srstatus";
  local_5c0 = 0;
  local_5b8 = 0x100;
  local_5b4 = "flashtype";
  local_5b0 = 0;
  local_5a8 = 0x200;
  local_5a4 = "readsr";
  local_5a0 = 0;
  local_598 = 0x400;
  local_594 = "writesr";
  local_590 = 0;
  local_588 = 0x800;
  local_584 = "readsafeguard";
  local_580 = 0;
  local_44c = &local_6b0;
  local_578 = 0x1000;
  local_574 = "writesafeguard";
  local_570 = 0;
  local_568 = 0x2000;
  local_564 = "resetmcu";
  local_560 = 0;
  local_558 = 0x4000;
  local_554 = "dumpflash";
  local_550 = 0;
  local_548 = 0x8000;
  local_544 = "getstatus";
  local_540 = 0;
  local_538 = 0x20000;
  local_534 = "userdefinedinfo";
  local_530 = 0;
  local_528 = 0x40000;
  local_524 = "edpisp";
  local_520 = 0;
  local_518 = 0x80000;
  local_514 = "enterispmode";
  local_510 = 0;
  local_508 = 0x100000;
  local_504 = "mergefwinfo";
  local_500 = 0;
  local_4f8 = 0x200000;
  local_4f4 = "senduserdefinedinfo";
  local_4f0 = 0;
  local_4e8 = 0x400000;
  local_4e4 = "sendudi";
  local_4e0 = 0;
  local_4d8 = 0x400000;
  local_4d4 = "i2cwrite";
  local_4d0 = 0;
  local_4c8 = 0x800000;
  local_4c4 = "getscalertype";
  local_4c0 = 0;
  local_4b8 = 0x1000000;
  local_4b4 = "bgupdatefw";
  local_4b0 = 0;
  local_4a8 = 0x2000000;
  local_4a4 = "fgupdatefw";
  local_4a0 = 0;
  local_498 = 0x4000000;
  local_494 = &DAT_101a667c;
  local_490 = 1;
  local_48c = 0;
  local_488 = 0x2a;
  local_484 = "newboot";
  local_480 = 0;
  local_47c = 0;
  local_478 = 0x28;
  local_474 = "ispchannel";
  local_470 = 0;
  local_46c = 0;
  local_468 = 0x31;
  local_464 = "factory";
  local_460 = 0;
  local_45c = 0;
  local_458 = 0x29;
  local_454 = &DAT_101a66a0;
  local_450 = 0;
  local_448 = 1;
  local_444 = &DAT_101a66a4;
  local_440 = 0;
  local_41c = &local_65c;
  local_438 = 2;
  local_434 = "dsmode";
  local_430 = 1;
  local_42c = 0;
  local_428 = 8;
  local_424 = &DAT_101a66b0;
  local_420 = 0;
  local_418 = 1;
  local_414 = "ddcci";
  local_410 = 0;
  local_408 = 2;
  local_404 = "flash";
  local_400 = 0;
  local_3f8 = 4;
  local_3f4 = "fwbin";
  local_3f0 = 0;
  local_3e8 = 8;
  local_3e4 = &DAT_101a66cc;
  local_3e0 = 0;
  local_3d8 = 0x10;
  local_3d4 = "fwbincmd";
  local_3d0 = 0;
  local_3c8 = 0x20;
  local_3c4 = "copydiffer";
  local_3c0 = 0;
  local_3b8 = 0x40;
  local_3b4 = "userdefined";
  local_3b0 = 1;
  local_3a8 = 0x80;
  local_3a4 = "veraddr";
  local_3a0 = 1;
  local_39c = 0;
  local_398 = 0x2c;
  local_394 = "totalverlen";
  local_390 = 1;
  local_38c = 0;
  local_388 = 0x2d;
  local_384 = "majorverlen";
  local_380 = 1;
  local_37c = 0;
  local_378 = 0x2e;
  local_374 = "subverlen";
  local_370 = 1;
  local_36c = 0;
  local_368 = 0x2f;
  local_364 = "recordvermode";
  local_360 = 1;
  local_35c = 0;
  local_358 = 0x30;
  local_354 = "dumpaddr";
  local_350 = 1;
  local_34c = 0;
  local_348 = 0x32;
  local_344 = "dumplen";
  local_340 = 1;
  local_33c = 0;
  local_338 = 0x33;
  local_334 = "dumpname";
  local_330 = 1;
  local_32c = 0;
  local_328 = 0x34;
  local_324 = &DAT_101a6750;
  local_320 = 1;
  local_31c = 0;
  local_318 = 0xf;
  local_314 = &DAT_101a6758;
  local_310 = 1;
  local_30c = 0;
  local_308 = 1;
  local_304 = "signfile";
  local_300 = 1;
  local_2fc = 0;
  local_2f8 = 2;
  local_2f4 = "keypair";
  local_2f0 = 1;
  local_2ec = 0;
  local_2e8 = 3;
  local_2e4 = "vkfile";
  local_2e0 = 1;
  local_2dc = 0;
  local_2d8 = 4;
  local_2d4 = "skfile";
  local_2d0 = 1;
  local_2cc = 0;
  local_2c8 = 5;
  local_2c4 = "subcert";
  local_2c0 = 1;
  local_2bc = 0;
  local_2b8 = 6;
  local_2b4 = "nextvkfile";
  local_2b0 = 1;
  local_2ac = 0;
  local_2a8 = 7;
  local_2a4 = &DAT_101a6794;
  local_2a0 = 1;
  local_29c = 0;
  local_298 = 0x10;
  local_294 = "settingfile";
  local_290 = 1;
  local_28c = 0;
  local_288 = 0x35;
  local_284 = &DAT_101a67a8;
  local_280 = 1;
  local_27c = 0;
  local_278 = 0x11;
  local_274 = "bank1";
  local_270 = 1;
  local_26c = 0;
  local_268 = 0x12;
  local_264 = &DAT_101a67b4;
  local_260 = 1;
  local_25c = 0;
  local_258 = 0x13;
  local_254 = "bank2";
  local_250 = 1;
  local_24c = 0;
  local_248 = 0x14;
  local_244 = &DAT_101a67c0;
  local_240 = 1;
  local_23c = 0;
  local_238 = 0x15;
  local_234 = "bank3";
  local_230 = 1;
  local_22c = 0;
  local_228 = 0x16;
  local_224 = &DAT_101a67cc;
  local_220 = 1;
  local_21c = 0;
  local_218 = 0x17;
  local_214 = "bank4";
  local_210 = 1;
  local_20c = 0;
  local_208 = 0x18;
  local_204 = &DAT_101a67d8;
  local_200 = 1;
  local_1fc = 0;
  local_1f8 = 0x19;
  local_1f4 = "bank5";
  local_1f0 = 1;
  local_1ec = 0;
  local_1e8 = 0x1a;
  local_1e4 = &DAT_101a67e4;
  local_1e0 = 1;
  local_1dc = 0;
  local_1d8 = 0x1b;
  local_1d4 = "bank6";
  local_1d0 = 1;
  local_1cc = 0;
  local_1c8 = 0x1c;
  local_1c4 = &DAT_101a67f0;
  local_1c0 = 1;
  local_1bc = 0;
  local_1b8 = 0x1d;
  local_fc = &local_678;
  local_1b4 = "bank7";
  local_1b0 = 1;
  local_1ac = 0;
  local_1a8 = 0x1e;
  local_1a4 = &DAT_101a67fc;
  local_1a0 = 1;
  local_19c = 0;
  local_198 = 0x1f;
  local_194 = "bank8";
  local_190 = 1;
  local_18c = 0;
  local_188 = 0x20;
  local_184 = &DAT_101a6808;
  local_180 = 1;
  local_17c = 0;
  local_178 = 0x21;
  local_174 = "bank9";
  local_170 = 1;
  local_16c = 0;
  local_168 = 0x22;
  local_164 = "comparever";
  local_160 = 0;
  local_15c = 0;
  local_158 = 0x26;
  local_154 = "flagaddr";
  local_150 = 1;
  local_14c = 0;
  local_148 = 0x24;
  local_144 = "flagdata";
  local_140 = 1;
  local_13c = 0;
  local_138 = 0x25;
  local_134 = "slave";
  local_130 = 1;
  local_12c = 0;
  local_128 = 0x23;
  local_124 = "searchfw";
  local_120 = 1;
  local_11c = 0;
  local_118 = 0x27;
  local_114 = "edpmode";
  local_110 = 1;
  local_10c = 0;
  local_108 = 0x36;
  local_104 = &DAT_101a6854;
  local_100 = 0;
  local_f8 = 1;
  local_f4 = "write";
  local_f0 = 1;
  local_e8 = 2;
  local_e4 = "writedata";
  local_e0 = 1;
  local_dc = 0;
  local_d8 = 0x37;
  local_d4 = "ddccicmd";
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0x38;
  local_c4 = "infotype";
  local_c0 = 1;
  local_bc = 0;
  local_b8 = 0x39;
  local_b4 = "mergefwgen";
  local_b0 = 1;
  local_ac = 0;
  local_a8 = 0x3c;
  local_a4 = "mergeinfotype";
  local_a0 = 1;
  local_9c = 0;
  local_98 = 0x3a;
  local_94 = "sendextracmd";
  local_90 = 1;
  local_8c = 0;
  local_88 = 0x3b;
  local_84 = "logpath";
  local_80 = 1;
  local_7c = 0;
  local_78 = 0x3d;
  local_74 = "outputdir";
  local_70 = 1;
  local_6c = 0;
  local_68 = 0x3e;
  local_64 = "sendudimode";
  local_60 = 1;
  local_5c = 0;
  local_58 = 0x40;
  local_54 = "udmode";
  local_50 = 1;
  local_4c = 0;
  local_48 = 0x41;
  local_44 = "udsettime";
  local_40 = 1;
  local_3c = 0;
  local_38 = 0x42;
  local_34 = "datpath";
  local_30 = 1;
  uStack_2c = 0;
  uStack_28 = 0x43;
  uStack_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_63c = local_64c;
  local_62c = local_64c;
  local_61c = local_64c;
  local_60c = local_64c;
  local_5fc = local_64c;
  local_5ec = local_64c;
  local_5dc = local_64c;
  local_5cc = local_64c;
  local_5bc = local_64c;
  local_5ac = local_64c;
  local_59c = local_64c;
  local_58c = local_64c;
  local_57c = local_64c;
  local_56c = local_64c;
  local_55c = local_64c;
  local_54c = local_64c;
  local_53c = local_64c;
  local_52c = local_64c;
  local_51c = local_64c;
  local_50c = local_64c;
  local_4fc = local_64c;
  local_4ec = local_64c;
  local_4dc = local_64c;
  local_4cc = local_64c;
  local_4bc = local_64c;
  local_4ac = local_64c;
  local_49c = local_64c;
  local_43c = local_44c;
  local_40c = local_41c;
  local_3fc = local_41c;
  local_3ec = local_41c;
  local_3dc = local_41c;
  local_3cc = local_41c;
  local_3bc = local_41c;
  local_3ac = local_41c;
  local_ec = local_fc;
  FUN_10011eb0();
  uStack_a04 = 0x1000d8f1;
  iVar1 = FUN_100120a0();
  iVar3 = local_684;
  do {
    if (iVar1 == -1) {
      if (iVar3 < param_1) {
        FUN_10003e70();
        do {
          FUN_10003e70();
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1);
        FUN_10003e70();
      }
      FUN_1000bcf0();
LAB_1000e448:
      FUN_10011e10();
      if (0xf < local_660) {
        FUN_10003d70();
      }
      local_660 = 0xf;
      local_664 = 0;
      local_674[0] = local_674[0] & 0xffffff00;
      FUN_10007000();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_684 = iVar3;
    switch(iVar1) {
    case 0:
      local_9bc = local_9bc | local_6b0;
      local_9c0 = local_9c0 | local_658;
      local_9b8 = local_9b8 | local_65c;
      local_9b4 = local_9b4 | local_678;
      if (local_65c == 0x80) {
        FUN_10004720();
      }
      if ((local_9c0 == 0x200000) && (local_678 == 2)) {
        FUN_10004720();
      }
      break;
    case 1:
      FUN_10004720();
      local_764 = 1;
      if (local_768 == 0) goto LAB_1000d9c3;
      goto LAB_1000e448;
    case 2:
      FUN_10004720();
      break;
    case 3:
      FUN_10004720();
      break;
    case 4:
      FUN_10004720();
      break;
    case 5:
      FUN_10004720();
      break;
    case 6:
      FUN_10004720();
      break;
    case 7:
      FUN_10004720();
      break;
    case 8:
      FUN_10004720();
      break;
    case 0xf:
      FUN_10004720();
      break;
    case 0x10:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(0);
      goto joined_r0x1000dad6;
    case 0x11:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x12:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(1);
      goto joined_r0x1000dad6;
    case 0x13:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x14:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(2);
      goto joined_r0x1000dad6;
    case 0x15:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x16:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(3);
      goto joined_r0x1000dad6;
    case 0x17:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x18:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(4);
      goto joined_r0x1000dad6;
    case 0x19:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x1a:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(5);
      goto joined_r0x1000dad6;
    case 0x1b:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x1c:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(6);
      goto joined_r0x1000dad6;
    case 0x1d:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x1e:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(7);
      goto joined_r0x1000dad6;
    case 0x1f:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x20:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(8);
      goto joined_r0x1000dad6;
    case 0x21:
      iVar1 = FUN_1000b960();
      goto joined_r0x1000dad6;
    case 0x22:
      FUN_10001dc0(local_688);
      in_stack_fffff5f0 = (undefined8 *)0x0;
      iVar1 = FUN_1000bb40(9);
      goto joined_r0x1000dad6;
    case 0x23:
      FUN_10004720();
      break;
    case 0x24:
      FUN_10004720();
      break;
    case 0x25:
      FUN_10004720();
      break;
    case 0x26:
      local_76c = 1;
      break;
    case 0x27:
      local_768 = 1;
      if (local_764 != 0) goto LAB_1000e448;
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        iVar1 = FUN_10009a80();
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 == 0) {
          local_6bc = 0;
          local_9c4 = auStack_a0c;
          local_8._0_1_ = 3;
          local_6b4 = iVar1;
          FUN_10001dc0(&DAT_101a68f8);
          local_8._0_1_ = 4;
          uVar2 = FUN_10008b10(local_9e4);
          in_stack_fffff5f0 = &local_6bc;
          local_8._0_1_ = 6;
          FUN_100146d0(uVar2,in_stack_fffff5f0);
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_10001e40();
          if (((undefined8 *)local_6bc == local_6bc._4_4_) ||
             (1 < (uint)(((int)local_6bc._4_4_ - (int)(undefined8 *)local_6bc) / 0x18))) {
            FUN_10003e70();
          }
          else {
            if (local_980 != (undefined8 *)local_6bc) {
              uStack_a04 = 0x1000de5b;
              FUN_10003b40();
            }
            iVar1 = FUN_1000b960();
            if (iVar1 != 0) {
              local_8 = CONCAT31(local_8._1_3_,2);
              FUN_10006df0();
              break;
            }
          }
          FUN_10006df0();
          goto LAB_1000e448;
        }
        iVar1 = FUN_1000fc50();
        if (iVar1 != 0) {
          FUN_10003e70();
          goto LAB_1000e448;
        }
        FUN_10001d90(local_7e8);
        in_stack_fffff5f0 = local_980;
        iVar1 = FUN_100083e0(in_stack_fffff5f0);
      }
      if (iVar1 != 0) {
LAB_1000d9c3:
        iVar1 = FUN_1000b960();
        goto joined_r0x1000dad6;
      }
      goto LAB_1000e448;
    case 0x28:
      local_72c = 1;
      break;
    case 0x29:
      local_728 = 2;
      break;
    case 0x2a:
      FUN_10004720();
      break;
    case 0x2c:
      FUN_10004720();
      break;
    case 0x2d:
      FUN_10004720();
      break;
    case 0x2e:
      FUN_10004720();
      break;
    case 0x2f:
      FUN_10004720();
      break;
    case 0x30:
      FUN_10004720();
      break;
    case 0x31:
      local_770 = 1;
      break;
    case 0x32:
      FUN_10004720();
      break;
    case 0x33:
      FUN_10004720();
      break;
    case 0x34:
      FUN_10004720();
      break;
    case 0x35:
      FUN_10004720();
      break;
    case 0x36:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        local_6f4 = 1;
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 != 0) {
          FUN_10003e70();
          goto LAB_1000e448;
        }
        local_6f4 = 2;
      }
      break;
    case 0x37:
      FUN_10004720();
      break;
    case 0x38:
      local_760 = 1;
      break;
    case 0x39:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        local_6f0 = 1;
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 == 0) {
          local_6f0 = 2;
        }
        else {
          iVar1 = FUN_1000fc50();
          if (iVar1 == 0) {
            local_6f0 = 3;
          }
          else {
            iVar1 = FUN_1000fc50();
            if (iVar1 != 0) {
              FUN_10003e70();
              goto LAB_1000e448;
            }
            local_6f0 = 4;
          }
        }
      }
      break;
    case 0x3a:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 != 0) {
        FUN_10003e70();
        goto LAB_1000e448;
      }
      local_6e8 = 1;
      break;
    case 0x3b:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        local_6e4 = 1;
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 == 0) {
          local_6e4 = 2;
        }
        else {
          iVar1 = FUN_1000fc50();
          if (iVar1 != 0) {
            FUN_10003e70();
            goto LAB_1000e448;
          }
          local_6e4 = 3;
        }
      }
      break;
    case 0x3c:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        local_6ec = 1;
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 != 0) {
          FUN_10003e70();
          goto LAB_1000e448;
        }
        local_6ec = 2;
      }
      break;
    case 0x3d:
      FUN_10004720();
      break;
    case 0x3e:
      FUN_10004720();
      break;
    case 0x3f:
      FUN_10003e70();
      break;
    case 0x40:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 != 0) {
        FUN_10003e70();
        goto LAB_1000e448;
      }
      local_6e0 = 1;
      break;
    case 0x41:
      FUN_10004720();
      iVar1 = FUN_1000fc50();
      if (iVar1 == 0) {
        local_6dc = 0;
      }
      else {
        iVar1 = FUN_1000fc50();
        if (iVar1 == 0) {
          local_6dc = 1;
        }
        else {
          iVar1 = FUN_1000fc50();
          if (iVar1 == 0) {
            local_6dc = 2;
          }
          else {
            iVar1 = FUN_1000fc50();
            if (iVar1 != 0) {
              FUN_10003e70();
              goto LAB_1000e448;
            }
            local_6dc = 3;
          }
        }
      }
      break;
    case 0x42:
      FUN_10004720();
      in_stack_fffff5f0 = (undefined8 *)((uint)in_stack_fffff5f0 & 0xffffff00);
      FUN_10003b40(local_674,0,0xffffffff);
      iVar1 = FUN_1000b1c0(in_stack_fffff5f0);
joined_r0x1000dad6:
      if (iVar1 == 0) goto LAB_1000e448;
      break;
    case 0x43:
      FUN_10004720();
    }
    uStack_a04 = 0x1000e3e4;
    iVar1 = FUN_100120a0();
    iVar3 = local_684;
  } while( true );
}

