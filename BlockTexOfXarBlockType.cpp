#include "block_textures.h"

/* BlockTexOfXarBlockType(int) */

unsigned int BlockTexOfXarBlockType(int param_1)

{
  char cVar1;
unsigned int uVar2;

cVar1 = IsXarBlockVisiblySolid(param_1);
uVar2 = -(unsigned int)(cVar1 == '\0') | 1u;
  if (param_1 < 0x2b6c) {
    if (param_1 < 11000) {
      if (param_1 < 0xe2d) {
        if (param_1 < 0xd48) {
          if (param_1 < 0xa8e) {
            if (param_1 < 500) {
              switch(param_1) {
              case 2:
              case 0xcd:
              case 0xce:
              case 0xec:
                return 2;
              case 6:
                uVar2 = 0x2a;
                break;
              case 7:
              case 8:
                uVar2 = 0x2b;
                break;
              case 10:
                uVar2 = 0x2f;
                break;
              case 0x19:
                return 0x55;
              case 0x1b:
                return 0x56;
              case 0x1f:
              case 0x20:
              case 0x21:
                uVar2 = 0x2c;
                break;
              case 0x22:
              case 0x23:
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
                uVar2 = 0x58;
                break;
              case 0x2a:
              case 0x2b:
                return 0xb0;
              case 0x2c:
                uVar2 = 1;
                break;
              case 100:
              case 0x65:
              case 0x66:
                uVar2 = 0xc;
                break;
              case 0x72:
              case 0x73:
                uVar2 = 0x18;
                break;
              case 0x78:
                uVar2 = 0x55;
                break;
              case 0x7b:
                return 0xe;
              case 0x7d:
              case 0x7e:
                return 0x55;
              case 200:
              case 0xc9:
                return 0x35;
              case 0xd5:
              case 0xed:
                uVar2 = 0x34;
                break;
              case 0xd6:
                uVar2 = 0x30;
                break;
              case 0xd8:
              case 0xe8:
              case 0xf3:
                uVar2 = 0xe;
                break;
              case 0xda:
                uVar2 = 0x10;
                break;
              case 0xdb:
              case 0xdc:
              case 0xdd:
              case 0xde:
              case 0xdf:
              case 0xe0:
                uVar2 = 0x31;
                break;
              case 0xe9:
                uVar2 = 0x13;
                break;
              case 0xef:
                uVar2 = 0x28;
                break;
              case 0xf2:
                uVar2 = 0x46;
              }
            }
            else {
              switch(param_1) {
              case 500:
                return 4;
              case 0x1f5:
                uVar2 = 5;
                break;
              case 0x1f6:
                uVar2 = 6;
                break;
              case 0x1f7:
                uVar2 = 7;
                break;
              case 0x1f8:
                uVar2 = 8;
                break;
              case 0x1f9:
                uVar2 = 9;
                break;
              case 0x1fa:
                uVar2 = 10;
                break;
              case 0x1fb:
                uVar2 = 0xb;
                break;
              case 0x1fc:
                uVar2 = 0xc;
                break;
              case 0x1fd:
                uVar2 = 0xd;
                break;
              case 0x1fe:
                uVar2 = 0xe;
                break;
              case 0x1ff:
                uVar2 = 0xf;
                break;
              case 0x200:
                uVar2 = 0x10;
                break;
              case 0x201:
                uVar2 = 0x11;
                break;
              case 0x202:
                uVar2 = 0x12;
                break;
              case 0x203:
                uVar2 = 0x13;
                break;
              case 0x204:
                uVar2 = 0x16;
                break;
              case 0x205:
                uVar2 = 0x17;
                break;
              case 0x206:
                uVar2 = 0x14;
                break;
              case 0x207:
                uVar2 = 0x15;
                break;
              case 0x208:
                uVar2 = 0x18;
                break;
              case 0x209:
                uVar2 = 0x1b;
                break;
              case 0x20a:
                uVar2 = 0x1a;
                break;
              case 0x20b:
                uVar2 = 0x45;
                break;
              case 0x20c:
                uVar2 = 0x46;
                break;
              case 0x20d:
                uVar2 = 0x1c;
                break;
              case 0x20e:
                uVar2 = 0x1d;
                break;
              case 0x20f:
                uVar2 = 0x1e;
                break;
              case 0x210:
                uVar2 = 0x1f;
                break;
              case 0x211:
                uVar2 = 0x20;
                break;
              case 0x212:
                uVar2 = 0x21;
                break;
              case 0x213:
                uVar2 = 0x22;
                break;
              case 0x214:
                uVar2 = 0x23;
                break;
              case 0x215:
                uVar2 = 0x24;
                break;
              case 0x216:
                uVar2 = 0x25;
                break;
              case 0x217:
                uVar2 = 0x26;
                break;
              case 0x218:
                uVar2 = 0x27;
                break;
              case 0x219:
                uVar2 = 0x29;
                break;
              case 0x21a:
                uVar2 = 0x30;
                break;
              case 0x21b:
                uVar2 = 0x31;
                break;
              case 0x21c:
                uVar2 = 0x32;
                break;
              case 0x21d:
                uVar2 = 0x33;
                break;
              case 0x21e:
              case 0x220:
                uVar2 = 0x34;
                break;
              case 0x21f:
                uVar2 = 0xea;
                break;
              case 0x221:
                uVar2 = 0x28;
                break;
              case 0x222:
                return 0x35;
              case 0x223:
                uVar2 = 0x36;
                break;
              case 0x224:
                uVar2 = 0x3d;
                break;
              case 0x225:
                uVar2 = 0x3e;
                break;
              case 0x226:
                uVar2 = 0x3f;
                break;
              case 0x227:
                uVar2 = 0x40;
                break;
              case 0x228:
                uVar2 = 0x41;
                break;
              case 0x229:
                uVar2 = 0x42;
                break;
              case 0x22a:
                uVar2 = 0x43;
                break;
              case 0x22b:
                uVar2 = 0x47;
                break;
              case 0x22c:
                return 0x49;
              case 0x22d:
                uVar2 = 0x4a;
                break;
              case 0x22e:
                uVar2 = 0x4b;
                break;
              case 0x22f:
                uVar2 = 0x4c;
                break;
              case 0x230:
                return 0x4d;
              case 0x231:
                return 0x4e;
              case 0x232:
                uVar2 = 0x50;
                break;
              case 0x233:
                return 0x55;
              case 0x234:
                return 0x56;
              case 0x235:
                uVar2 = 0x3b;
                break;
              case 0x236:
                uVar2 = 0x3c;
                break;
              case 0x237:
                uVar2 = 0x57;
                break;
              case 0x238:
                uVar2 = 0x52;
                break;
              case 0x239:
                uVar2 = 0x53;
                break;
              case 0x23a:
                uVar2 = 0x54;
                break;
              case 0x23b:
                uVar2 = 0x71;
                break;
              case 0x23c:
                uVar2 = 0x86;
                break;
              case 0x23d:
                uVar2 = 0x87;
                break;
              case 0x23e:
                uVar2 = 0x88;
                break;
              case 0x23f:
                uVar2 = 0x89;
                break;
              case 0x240:
                uVar2 = 0x96;
                break;
              case 0x241:
                uVar2 = 0x9b;
                break;
              case 0x242:
                uVar2 = 0x9d;
                break;
              case 0x243:
                uVar2 = 0x9e;
                break;
              case 0x244:
                uVar2 = 0x6c;
                break;
              case 0x245:
                uVar2 = 0x6d;
                break;
              case 0x246:
                uVar2 = 0xa9;
                break;
              case 0x247:
                uVar2 = 0xaa;
                break;
              case 0x248:
                uVar2 = 0xab;
                break;
              case 0x249:
                uVar2 = 0xac;
                break;
              case 0x24a:
                uVar2 = 0xad;
                break;
              case 0x24b:
                uVar2 = 0xae;
                break;
              case 0x24c:
                uVar2 = 0xaf;
                break;
              case 0x24d:
                uVar2 = 0x68;
                break;
              case 0x24e:
                uVar2 = 0xb3;
                break;
              case 0x24f:
                uVar2 = 0xb5;
                break;
              case 0x250:
                uVar2 = 0x66;
                break;
              case 0x251:
                uVar2 = 0x67;
                break;
              case 0x252:
                uVar2 = 0xdb;
                break;
              case 0x253:
                uVar2 = 0xdf;
                break;
              case 0x254:
                uVar2 = 0xe0;
                break;
              case 0x255:
                uVar2 = 0xe4;
                break;
              case 0x256:
                uVar2 = 0xe5;
                break;
              case 599:
                uVar2 = 0xe8;
                break;
              case 600:
                uVar2 = 0x8a;
                break;
              case 0x259:
                uVar2 = 0x8b;
                break;
              case 0x25a:
                uVar2 = 0x8c;
                break;
              case 0x25b:
                uVar2 = 0x8d;
                break;
              case 0x25c:
                uVar2 = 0x8e;
                break;
              case 0x25d:
                uVar2 = 0x8f;
                break;
              case 0x25e:
                uVar2 = 0x90;
                break;
              case 0x25f:
                uVar2 = 0x91;
                break;
              case 0x260:
                uVar2 = 0x92;
                break;
              case 0x261:
                uVar2 = 0x93;
                break;
              case 0x262:
                uVar2 = 0xbb;
                break;
              case 0x263:
                uVar2 = 0xbc;
                break;
              case 0x264:
                uVar2 = 0xbd;
                break;
              case 0x265:
                uVar2 = 0xbe;
                break;
              case 0x266:
                uVar2 = 0xbf;
                break;
              case 0x267:
                uVar2 = 0xc0;
                break;
              case 0x268:
                uVar2 = 0xc1;
                break;
              case 0x269:
                uVar2 = 0xc2;
                break;
              case 0x26a:
                uVar2 = 0xc3;
                break;
              case 0x26b:
                uVar2 = 0xc4;
                break;
              case 0x26c:
                uVar2 = 0xc5;
                break;
              case 0x26d:
                uVar2 = 0xc6;
                break;
              case 0x26e:
                uVar2 = 199;
                break;
              case 0x26f:
                uVar2 = 200;
                break;
              case 0x270:
                uVar2 = 0xc9;
                break;
              case 0x271:
                uVar2 = 0xca;
                break;
              case 0x272:
                uVar2 = 0xcb;
                break;
              case 0x273:
                uVar2 = 0xcc;
                break;
              case 0x274:
                uVar2 = 0xcd;
                break;
              case 0x275:
                uVar2 = 0xce;
                break;
              case 0x276:
                uVar2 = 0xcf;
                break;
              case 0x277:
                uVar2 = 0xd0;
                break;
              case 0x278:
                uVar2 = 0xd1;
                break;
              case 0x279:
                uVar2 = 0xd2;
                break;
              case 0x27a:
                uVar2 = 0xd3;
                break;
              case 0x27b:
                uVar2 = 0xd4;
                break;
              case 0x27c:
                uVar2 = 0xeb;
                break;
              case 0x27d:
                uVar2 = 0xb7;
                break;
              case 0x27e:
                uVar2 = 0xec;
                break;
              case 0x27f:
                uVar2 = 0xed;
                break;
              case 0x280:
                uVar2 = 0xef;
                break;
              case 0x281:
                uVar2 = 0xf2;
                break;
              case 0x2be:
              case 0x2bf:
                uVar2 = 0xd;
                break;
              case 0x2c3:
              case 0x2d8:
                uVar2 = 0x34;
                break;
              case 0x2d5:
              case 0x322:
                uVar2 = 0x10;
                break;
              case 0x2db:
                uVar2 = 0x2b;
                break;
              case 0x2dc:
                uVar2 = 0x2a;
                break;
              case 0x2de:
                uVar2 = 0x56;
                break;
              case 0x2df:
                uVar2 = 8;
                break;
              case 800:
              case 0x321:
              case 0x323:
              case 0x324:
                uVar2 = 0xf;
                break;
              case 0x325:
              case 0x32b:
              case 0x32c:
              case 0x32d:
              case 0x330:
                uVar2 = 0xd;
                break;
              case 0x32e:
                uVar2 = 0x1f;
                break;
              case 0x32f:
                uVar2 = 0x13;
                break;
              case 0x332:
              case 0x334:
              case 0x336:
              case 0x339:
              case 0x834:
              case 0x835:
                return 2;
              case 0x33a:
              case 0x450:
              case 0x451:
              case 0x45e:
                uVar2 = 0x31;
                break;
              case 0x385:
                uVar2 = 0x50;
                break;
              case 1000:
                uVar2 = 0x1c;
                break;
              case 0x3fc:
                uVar2 = 0x10;
                break;
              case 0x405:
                uVar2 = 0x28;
                break;
              case 0x44d:
              case 0x44e:
              case 0x44f:
              case 0x454:
              case 0x455:
              case 0x459:
              case 0x45d:
                uVar2 = 0x1e;
                break;
              case 0x452:
              case 0x453:
                uVar2 = 0x34;
                break;
              case 0x4b1:
              case 0x4b2:
              case 0x4b3:
              case 0x4b5:
              case 0x4b6:
              case 0x4b7:
              case 0x4c7:
              case 0x4c9:
                uVar2 = 0x14;
                break;
              case 0x4b8:
                uVar2 = 0x1f;
                break;
              case 0x4b9:
                uVar2 = 0x12;
                break;
              case 0x4ba:
                uVar2 = 0x34;
                break;
              case 0x4bb:
              case 0x4c0:
                uVar2 = 0xd;
                break;
              case 0x4c5:
                uVar2 = 0x55;
                break;
              case 0x4c8:
                uVar2 = 0x15;
                break;
              case 0x514:
              case 0x51f:
                uVar2 = 0x38;
                break;
              case 0x515:
                uVar2 = 0xb0;
                break;
              case 0x516:
                uVar2 = 0x39;
                break;
              case 0x521:
              case 0x578:
              case 0x57d:
              case 0x581:
                uVar2 = 0x1f;
                break;
              case 0x522:
                uVar2 = 0xb7;
                break;
              case 0x525:
              case 0x527:
              case 0x52d:
                uVar2 = 0x12;
                break;
              case 0x532:
                uVar2 = 0x55;
                break;
              case 0x57a:
              case 0x588:
              case 0x5de:
              case 0x642:
                uVar2 = 0x34;
                break;
              case 0x584:
              case 0x585:
              case 0x586:
              case 0x587:
                uVar2 = 0x31;
                break;
              case 0x58b:
                return 0x28;
              case 0x58c:
                return 0x36;
              case 0x592:
                uVar2 = 0x1e;
                break;
              case 0x593:
                uVar2 = 8;
                break;
              case 0x5dc:
                uVar2 = 0xb1;
                break;
              case 0x641:
              case 0x644:
              case 0x646:
              case 0x647:
              case 0x648:
              case 0x649:
              case 0x64d:
              case 0x64e:
              case 0x64f:
                uVar2 = 0x12;
                break;
              case 0x643:
                uVar2 = 0x50;
                break;
              case 0x645:
              case 0x64b:
                uVar2 = 0x14;
                break;
              case 0x6a9:
                uVar2 = 0x1a;
                break;
              case 0x6aa:
              case 0x6af:
                uVar2 = 0x3e;
                break;
              case 0x6b1:
                uVar2 = 0x18;
                break;
              case 0x6b3:
                uVar2 = 0x1b;
                break;
              case 0x6b6:
                return 8;
              case 0x6b8:
                uVar2 = 0xdf;
                break;
              case 0x70c:
              case 0x71a:
                uVar2 = 0x34;
                break;
              case 0x70e:
              case 0x70f:
              case 0x710:
              case 0x76e:
              case 0x76f:
              case 0x7d1:
              case 0x7d2:
                return 0xe;
              case 0x715:
              case 0x716:
                uVar2 = 0x13;
                break;
              case 0x71d:
              case 0x71e:
              case 0x770:
                uVar2 = 0x14;
                break;
              case 0x76c:
                uVar2 = 0x3a;
                break;
              case 2000:
                uVar2 = 0x3b;
                break;
              case 0x7d4:
                uVar2 = 0x18;
                break;
              case 0x83c:
                uVar2 = 0x13;
                break;
              case 0x898:
                uVar2 = 0x65;
                break;
              case 0x89c:
              case 0x8a6:
              case 0x8a7:
              case 0x8a8:
              case 0x8a9:
              case 0x8aa:
              case 0x8ac:
              case 0x8ae:
              case 0x8b0:
              case 0x8b1:
              case 0x8b2:
              case 0x8b3:
              case 0x8b4:
              case 0x8b5:
              case 0x8b6:
              case 0x8b7:
              case 0x8b8:
              case 0x8cd:
              case 0x8ce:
                uVar2 = 0x20;
                break;
              case 0x8a4:
              case 0x8a5:
              case 0x8ab:
              case 0x8ad:
                return 0x12;
              case 0x8d1:
                return 8;
              case 0x8fd:
                uVar2 = 0x85;
                break;
              case 0x903:
              case 0x904:
              case 0x905:
                uVar2 = 0x31;
                break;
              case 0x906:
                uVar2 = 0x14;
                break;
              case 0x907:
                return 0x18;
              case 0x908:
                uVar2 = 0xd;
                break;
              case 0x9c4:
                uVar2 = 0x72;
                break;
              case 0x9c9:
              case 0x9ca:
                uVar2 = 0x20;
                break;
              case 0x9cb:
                return 0x34;
              case 0x9d0:
              case 0x9d1:
              case 0x9d3:
                return 0xe;
              case 0x9d6:
              case 0x9d7:
              case 0x9d8:
              case 0x9d9:
              case 0x9da:
              case 0x9db:
              case 0x9dc:
              case 0x9dd:
                uVar2 = 0x34;
                break;
              case 0xa8d:
                uVar2 = 0x50;
              }
            }
          }
          else if (param_1 < 0xbc7) {
            if (param_1 < 0xbc5) {
              if (param_1 == 0xb54) {
                return 0x31;
              }
              if (param_1 < 0xb55) {
                if (param_1 == 0xafd) {
                  return 0xf;
                }
                if (param_1 < 0xafe) {
                  if (param_1 - 0xaf0U < 4) {
                    return 0x34;
                  }
                }
                else if (param_1 == 0xafe) {
                  return 0x34;
                }
              }
              else {
                if (param_1 == 0xbba) {
                  return 0x6d;
                }
                if (param_1 < 0xbbb) {
                  if (param_1 == 0xb55) {
                    return 0xe;
                  }
                  if (param_1 - 0xb58U < 3) {
                    return 0x31;
                  }
                }
                else {
                  if (param_1 == 0xbbb) {
                    return 0x6e;
                  }
                  if (param_1 == 0xbbc) {
                    return 0x6d;
                  }
                }
              }
            }
            else {
              uVar2 = 0xb6;
            }
          }
          else if (param_1 < 0xc40) {
            if (0xc21 < param_1) {
              switch(param_1) {
              case 0xc22:
                return 0x2a;
              case 0xc32:
                return 0x29;
              case 0xc33:
              case 0xc34:
              case 0xc35:
              case 0xc36:
              case 0xc37:
                return 0xe;
              case 0xc39:
              case 0xc3a:
                uVar2 = 0x34;
                break;
              case 0xc3f:
                return 0x28;
              }
            }
          }
          else {
            if (param_1 == 0xc87) {
              return 0xd;
            }
            if (param_1 < 0xc88) {
              if (param_1 == 0xc84) {
                return 0xd;
              }
            }
            else if (param_1 - 0xcebU < 3) {
              return 0x1f;
            }
          }
        }
        else {
          switch(param_1) {
          case 0xd48:
            return 0x44;
          case 0xdae:
          case 0xdca:
          case 0xdd0:
          case 0xe17:
          case 0xe18:
          case 0xe19:
            uVar2 = 0xe;
            break;
          case 0xdb0:
            return 2;
          case 0xdb2:
          case 0xdb3:
            uVar2 = 8;
            break;
          case 0xdb4:
          case 0xdb5:
          case 0xdb6:
          case 0xdb7:
          case 0xdb8:
          case 0xdbe:
            return 0x1f;
          case 0xdb9:
          case 0xdbb:
            return 0xd;
          case 0xdbd:
          case 0xdc8:
            uVar2 = 0x12;
            break;
          case 0xdcc:
            uVar2 = 0x28;
            break;
          case 0xdce:
            uVar2 = 0x34;
            break;
          case 0xdd2:
            uVar2 = 0xc3;
            break;
          case 0xdd3:
            uVar2 = 0xdf;
            break;
          case 0xe10:
          case 0xe15:
          case 0xe16:
          case 0xe1b:
          case 0xe1c:
          case 0xe1d:
          case 0xe1e:
          case 0xe23:
          case 0xe28:
            uVar2 = 0x14;
            break;
          case 0xe1a:
            uVar2 = 0x13;
            break;
          case 0xe24:
            return 8;
          case 0xe26:
            uVar2 = 0x12;
            break;
          case 0xe27:
            uVar2 = 5;
            break;
          case 0xe2b:
          case 0xe2c:
            uVar2 = 0x1e;
          }
        }
      }
      else if (param_1 < 0x1e1f) {
        if (param_1 < 0x1db0) {
          if (param_1 < 0x191a) {
            if (param_1 < 0x1900) {
              if (param_1 < 0x1397) {
                if (param_1 < 0x138a) {
                  if (param_1 == 0x1068) {
                    uVar2 = 0xa5;
                  }
                  else if (param_1 < 0x1069) {
                    if (param_1 < 0xfb9) {
                      if (param_1 < 0xfa4) {
                        if (param_1 < 0xf41) {
                          if (0xf3c < param_1) {
                            return 0x34;
                          }
                          if (param_1 == 0xf3c) {
                            return 0x94;
                          }
                        }
                        else {
                          if (param_1 == 0xf42) {
                            return 0xd;
                          }
                          if (param_1 - 0xf43U < 2) {
                            return 8;
                          }
                        }
                      }
                      else {
                        switch(param_1) {
                        case 0xfa4:
                          uVar2 = 0x31;
                          break;
                        case 0xfa5:
                        case 0xfaa:
                          return 8;
                        case 0xfaf:
                          return 0x2a;
                        case 0xfb6:
                          return 0x28;
                        case 0xfb8:
                          uVar2 = 4;
                        }
                      }
                    }
                    else {
                      switch(param_1) {
                      case 0x1004:
                        return 0x52;
                      case 0x100e:
                        uVar2 = 0xc;
                        break;
                      case 0x100f:
                        uVar2 = 0x6f;
                        break;
                      case 0x1013:
                        uVar2 = 0x28;
                        break;
                      case 0x1015:
                        return 0xdc;
                      case 0x1016:
                        uVar2 = 0xdd;
                      }
                    }
                  }
                  else if (param_1 == 0x11f8) {
                    uVar2 = 0x67;
                  }
                  else if (param_1 < 0x11f9) {
                    if (param_1 < 0x1136) {
                      if (0x1133 < param_1) {
                        return 0x31;
                      }
                      if (param_1 == 0x10cc) {
                        return 0x66;
                      }
                      if (param_1 < 0x10cd) {
                        if (param_1 == 0x1069) {
                          return 0xa4;
                        }
                        if (param_1 - 0x106aU < 2) {
                          return 0xe;
                        }
                      }
                      else if (param_1 - 0x1130U < 4) {
                        return 0x14;
                      }
                    }
                    else {
                      if (param_1 == 0x1195) {
                        return 0xa3;
                      }
                      if (param_1 == 0x1196) {
                        return 0xe;
                      }
                      if (param_1 == 0x1194) {
                        return 0xa6;
                      }
                    }
                  }
                  else if (param_1 < 0x1330) {
                    if (param_1 < 0x1324) {
                      if (param_1 == 0x125e) {
                        return 0xd;
                      }
                      if (param_1 == 0x125f) {
                        return 0xe;
                      }
                      if (param_1 == 0x125d) {
                        return 0x6a;
                      }
                    }
                    else {
                      switch(param_1) {
                      case 0x1324:
                      case 0x1326:
                        return 0xa1;
                      case 0x1325:
                      case 0x1327:
                        uVar2 = 0xa2;
                        break;
                      case 0x1329:
                        return 0xe;
                      case 0x132c:
                      case 0x132d:
                      case 0x132e:
                      case 0x132f:
                        uVar2 = 0x30;
                      }
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case 0x138a:
                    return 0xf;
                  case 0x1393:
                    uVar2 = 0xe5;
                    break;
                  case 0x1394:
                    return 0x31;
                  case 0x1395:
                    uVar2 = 0x28;
                    break;
                  case 0x1396:
                    uVar2 = 0xe4;
                  }
                }
              }
              else if (param_1 == 0x1518) {
                uVar2 = 0xd5;
              }
              else if (param_1 < 0x1519) {
                if (param_1 < 0x14c5) {
                  if (param_1 < 0x1454) {
                    if (param_1 == 0x13f6) {
                      return 0x2b;
                    }
                    if (param_1 < 0x13f7) {
                      if (param_1 == 0x13ec) {
                        return 0x47;
                      }
                      if (param_1 == 0x13f0) {
                        return 0x1e;
                      }
                    }
                    else if (param_1 - 0x13f7U < 4) {
                      return 0x47;
                    }
                  }
                  else {
                    switch(param_1) {
                    case 0x1454:
                    case 0x14b6:
                    case 0x14b8:
                    case 0x14bd:
                    case 0x14be:
                      return 0x34;
                    case 0x1457:
                      return 0x14;
                    case 0x1458:
                      return 0xd;
                    case 0x1459:
                    case 0x14b7:
                    case 0x14b9:
                    case 0x14ba:
                    case 0x14bb:
                    case 0x14bc:
                      return 0xf;
                    case 0x145a:
                      uVar2 = 0x31;
                      break;
                    case 0x14bf:
                    case 0x14c0:
                    case 0x14c1:
                      uVar2 = 0x18;
                      break;
                    case 0x14c4:
                      return 8;
                    }
                  }
                }
              }
              else if (param_1 < 0x1653) {
                if (param_1 < 0x1645) {
                  if (param_1 == 0x15e0) {
                    return 0x12;
                  }
                  if (param_1 == 0x15e2) {
                    return 0xd;
                  }
                  if (param_1 == 0x151b) {
                    return 0xd;
                  }
                }
                else {
                  switch(param_1) {
                  case 0x1645:
                  case 0x164e:
                  case 0x164f:
                    return 0xd;
                  case 0x1646:
                    return 0x13;
                  case 0x1647:
                    return 8;
                  case 0x1650:
                    return 0x4e;
                  case 0x1652:
                    return 0x4d;
                  }
                }
              }
              else {
                if (param_1 == 0x16af) {
                  return 0x12;
                }
                if (param_1 < 0x16b0) {
                  if (param_1 == 0x16a8) {
                    return 0x34;
                  }
                  if (param_1 - 0x16aaU < 2) {
                    return 0x34;
                  }
                }
                else if (param_1 < 0x1713) {
                  if (0x1710 < param_1) {
                    return 0xd;
                  }
                  if (param_1 == 0x170c) {
                    return 0x14;
                  }
                  if (param_1 - 0x170eU < 2) {
                    return 0x14;
                  }
                }
                else if (param_1 - 0x183eU < 2) {
                  return 0x45;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x1900:
                uVar2 = 0x96;
                break;
              case 0x1901:
                uVar2 = 0x23;
                break;
              case 0x1913:
                return 0xe;
              case 0x1914:
                return 0x10;
              case 0x1915:
              case 0x1919:
                uVar2 = 0x13;
              }
            }
          }
          else if (param_1 < 0x1b06) {
            if (0x1964 < param_1) {
              switch(param_1) {
              case 0x1965:
                uVar2 = 0xe0;
                break;
              case 0x1966:
              case 0x196d:
              case 0x196e:
              case 0x1989:
              case 0x198a:
              case 0x198b:
              case 0x1a41:
              case 0x1a42:
              case 0x1a43:
                uVar2 = 0x12;
                break;
              case 0x1977:
                uVar2 = 0xc;
                break;
              case 0x1978:
              case 0x1979:
              case 0x197a:
              case 0x1981:
              case 0x1982:
              case 0x1983:
                uVar2 = 0x20;
                break;
              case 0x197b:
                uVar2 = 5;
                break;
              case 0x197c:
              case 0x197d:
              case 0x197f:
              case 0x1980:
                uVar2 = 0x14;
                break;
              case 0x1985:
              case 0x1999:
              case 0x19cf:
              case 0x1a3b:
              case 0x1a3c:
              case 0x1a3e:
              case 0x1a45:
              case 0x1b05:
                return 0xd;
              case 0x1996:
                uVar2 = 0x27;
                break;
              case 0x1997:
              case 0x1998:
              case 0x199c:
              case 0x19a9:
              case 0x19aa:
              case 0x19ac:
              case 0x19b4:
                return 0xe;
              case 0x19c8:
                return 0x4f;
              case 0x19c9:
                uVar2 = 0x40;
                break;
              case 0x19d0:
              case 0x1a2d:
              case 0x1a33:
                uVar2 = 0xf;
                break;
              case 0x19d6:
                uVar2 = 0x34;
                break;
              case 0x19d8:
              case 0x19d9:
              case 0x19da:
              case 0x19db:
              case 0x19dc:
              case 0x19dd:
              case 0x19de:
              case 0x19e0:
              case 0x19e2:
                uVar2 = 0x3e;
                break;
              case 0x19e1:
              case 0x19e4:
              case 0x19e5:
                uVar2 = 0x1f;
                break;
              case 0x1a2c:
                uVar2 = 0x5a;
                break;
              case 0x1a2e:
                uVar2 = 0x2a;
                break;
              case 0x1a36:
                uVar2 = 4;
                break;
              case 0x1a3a:
              case 0x1a46:
              case 0x1a48:
                uVar2 = 0x28;
                break;
              case 0x1a40:
                uVar2 = 0x46;
                break;
              case 0x1a49:
                uVar2 = 0xa8;
                break;
              case 0x1aff:
                return 0x45;
              case 0x1b03:
                uVar2 = 0x31;
              }
            }
          }
          else if (param_1 < 0x1ca2) {
            if (param_1 < 0x1bbf) {
              switch(param_1) {
              case 0x1b59:
              case 0x1b70:
                return 0x45;
              case 0x1b62:
              case 0x1b63:
              case 0x1b64:
              case 0x1b65:
              case 0x1b66:
              case 0x1b67:
              case 0x1b68:
              case 0x1b69:
                return 0x1e;
              case 0x1b6c:
                return 0xd;
              case 0x1b6e:
                uVar2 = 0xdb;
              }
            }
            else {
              switch(param_1) {
              case 0x1bbf:
              case 0x1bc8:
              case 0x1bc9:
              case 0x1bca:
              case 0x1bcb:
              case 0x1bd4:
              case 0x1bd5:
                uVar2 = 0x34;
                break;
              case 0x1bc0:
              case 0x1bd3:
                return 8;
              case 0x1bc1:
              case 0x1bcf:
              case 0x1bd0:
                return 0x14;
              case 0x1bc4:
                uVar2 = 0xe9;
                break;
              case 0x1c20:
              case 0x1c21:
                return 0x5b;
              case 0x1c22:
              case 0x1c23:
                uVar2 = 4;
                break;
              case 0x1c24:
                uVar2 = 1;
                break;
              case 0x1c25:
                uVar2 = 0x28;
                break;
              case 0x1c26:
              case 0x1c90:
                return 0xe;
              case 0x1c88:
                uVar2 = 0x55;
                break;
              case 0x1c89:
              case 0x1c8a:
              case 0x1c8b:
              case 0x1c8c:
              case 0x1c8d:
              case 0x1c8e:
                uVar2 = 0xf;
                break;
              case 0x1c93:
              case 0x1c94:
                return 0xd;
              case 0x1c95:
              case 0x1c96:
              case 0x1c97:
              case 0x1ca0:
                uVar2 = 0x14;
                break;
              case 0x1c9a:
              case 0x1ca1:
                uVar2 = 8;
                break;
              case 0x1c9b:
              case 0x1c9c:
                uVar2 = 0x20;
                break;
              case 0x1c9d:
              case 0x1c9e:
              case 0x1c9f:
                uVar2 = 0x12;
              }
            }
          }
          else if (param_1 == 0x1d4c) {
            return 0x51;
          }
        }
        else {
          switch(param_1) {
          case 0x1db0:
            return 0xb8;
          case 0x1db1:
          case 0x1db2:
            return 0x31;
          case 0x1db5:
          case 0x1db6:
            uVar2 = 0x13;
            break;
          case 0x1db7:
          case 0x1dbe:
            return 0xe;
          case 0x1db8:
            uVar2 = 0xd;
            break;
          case 0x1db9:
          case 0x1dba:
          case 0x1dbb:
          case 0x1dbc:
          case 0x1dbd:
            uVar2 = 0x45;
            break;
          case 0x1dbf:
            uVar2 = 0x33;
            break;
          case 0x1dc1:
            uVar2 = 0x46;
            break;
          case 0x1dc3:
            uVar2 = 0x28;
            break;
          case 0x1e15:
            uVar2 = 0x52;
            break;
          case 0x1e16:
            uVar2 = 0x2a;
            break;
          case 0x1e19:
          case 0x1e1b:
          case 0x1e1d:
            uVar2 = 0x1f;
            break;
          case 0x1e1e:
            return 0x34;
          }
        }
      }
      else if (param_1 < 0x258a) {
        if (param_1 < 0x24b9) {
          if (param_1 < 0x2205) {
            if (param_1 < 0x2134) {
              if (param_1 < 0x1eed) {
                if (0x1e7b < param_1) {
                  switch(param_1) {
                  case 0x1e7c:
                    return 0x34;
                  case 0x1e82:
                  case 0x1ede:
                  case 0x1ee7:
                    return 0xd;
                  case 0x1e83:
                  case 0x1e92:
                  case 0x1e93:
                    return 0xe;
                  case 0x1e84:
                    return 0x5e;
                  case 0x1e85:
                    uVar2 = 4;
                    break;
                  case 0x1e87:
                    return 0x28;
                  case 0x1e94:
                    uVar2 = 0xdf;
                    break;
                  case 0x1e97:
                    uVar2 = 0xf;
                    break;
                  case 0x1edc:
                    uVar2 = 0x5c;
                    break;
                  case 0x1edd:
                    uVar2 = 4;
                    break;
                  case 0x1edf:
                  case 0x1ee0:
                    uVar2 = 0x15;
                    break;
                  case 0x1ee8:
                    uVar2 = 0x28;
                    break;
                  case 0x1ee9:
                    uVar2 = 0xdb;
                    break;
                  case 0x1eea:
                    return 0x34;
                  case 0x1eec:
                    uVar2 = 0xe;
                  }
                }
              }
              else if (param_1 == 0x2010) {
                uVar2 = 0x29;
              }
              else if (param_1 < 0x2011) {
                if (param_1 < 0x1fb2) {
                  if (0x1f41 < param_1) {
                    switch(param_1) {
                    case 0x1f42:
                    case 0x1f43:
                    case 0x1f45:
                    case 0x1f46:
                    case 0x1f48:
                    case 0x1f49:
                    case 0x1f4a:
                    case 0x1f4c:
                    case 0x1f4d:
                    case 0x1f4e:
                    case 0x1f4f:
                    case 0x1f50:
                      return 0x14;
                    case 0x1fa5:
                    case 0x1fab:
                    case 0x1faf:
                    case 0x1fb0:
                    case 0x1fb1:
                      return 0x34;
                    case 0x1fa7:
                    case 0x1fa8:
                      return 0x31;
                    case 0x1fac:
                    case 0x1fad:
                      return 0x45;
                    }
                  }
                }
                else if (param_1 == 0x200c) {
                  return 0x34;
                }
              }
              else if (param_1 < 0x2083) {
                if (0x206b < param_1) {
                  switch(param_1) {
                  case 0x206c:
                    return 0x5d;
                  case 0x206f:
                    return 4;
                  case 0x2074:
                    uVar2 = 0xab;
                    break;
                  case 0x2075:
                    uVar2 = 0x2b;
                    break;
                  case 0x2076:
                  case 0x2077:
                  case 0x2078:
                  case 0x2079:
                  case 0x207a:
                  case 0x207b:
                  case 0x207c:
                  case 0x207d:
                  case 0x207e:
                  case 0x207f:
                  case 0x2080:
                  case 0x2081:
                  case 0x2082:
                    return 0x31;
                  }
                }
              }
              else if (param_1 == 0x20da) {
                return 0x34;
              }
            }
            else {
              switch(param_1) {
              case 0x2134:
                return 2;
              case 0x2137:
              case 0x213e:
              case 0x21a2:
              case 0x21a4:
              case 0x21b0:
              case 0x21b3:
              case 0x21b7:
              case 0x21c0:
                uVar2 = 0xe;
                break;
              case 0x213a:
                return 0x52;
              case 0x213c:
                return 0x55;
              case 0x21a1:
                uVar2 = 0xe5;
                break;
              case 0x21a3:
              case 0x21a5:
              case 0x21a6:
              case 0x21a7:
              case 0x21a8:
              case 0x21a9:
              case 0x21aa:
                return 0x34;
              case 0x21af:
                uVar2 = 0x12;
                break;
              case 0x21b2:
                uVar2 = 0xd;
                break;
              case 0x21b5:
                uVar2 = 0x13;
                break;
              case 0x21b6:
                return 0x33;
              case 0x21bd:
                uVar2 = 0xe4;
                break;
              case 0x21be:
                uVar2 = 0xdf;
                break;
              case 0x21bf:
                uVar2 = 0x45;
                break;
              case 0x21fc:
                uVar2 = 0x60;
                break;
              case 0x21fd:
                uVar2 = 4;
                break;
              case 0x2201:
              case 0x2202:
                uVar2 = 0x57;
                break;
              case 0x2203:
              case 0x2204:
                uVar2 = 0x28;
              }
            }
          }
          else if (param_1 < 0x22ca) {
            if (0x2261 < param_1) {
              switch(param_1) {
              case 0x2262:
              case 0x2263:
              case 0x2265:
              case 0x2266:
              case 0x226b:
              case 0x226c:
                return 0x33;
              case 0x2269:
              case 0x22c9:
                return 0xe;
              case 0x226a:
              case 0x22c4:
                return 0x13;
              case 0x226d:
                return 0x1f;
              case 0x22c6:
                uVar2 = 0x45;
                break;
              case 0x22c7:
                return 0x14;
              }
            }
          }
          else if (param_1 < 0x2403) {
            if (param_1 < 0x23f5) {
              if (param_1 - 9000U < 3) {
                return 0x13;
              }
            }
            else {
              switch(param_1) {
              case 0x23f5:
                return 0x34;
              case 0x23f6:
              case 0x23f8:
                return 0x18;
              case 0x23fb:
                uVar2 = 0xd;
                break;
              case 0x2400:
                uVar2 = 0x20;
                break;
              case 0x2401:
              case 0x2402:
                uVar2 = 0x12;
              }
            }
          }
          else {
            if (param_1 == 0x2456) {
              return 0x14;
            }
            if (param_1 == 0x2457) {
              return 0x31;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x24b9:
            return 0x2b;
          case 0x24bc:
          case 0x2526:
            return 0x31;
          case 0x24bf:
          case 0x24d1:
            return 0x13;
          case 0x24c1:
            uVar2 = 0xe;
            break;
          case 0x24c7:
          case 0x24c8:
          case 0x24cf:
          case 0x24d2:
          case 0x24d5:
            uVar2 = 0x34;
            break;
          case 0x24c9:
          case 0x24cb:
          case 0x24cc:
          case 0x24cd:
            uVar2 = 0x1a;
            break;
          case 0x24d9:
            uVar2 = 0x68;
            break;
          case 0x24db:
            uVar2 = 0x94;
            break;
          case 0x24dc:
          case 0x24de:
            uVar2 = 0x1e;
            break;
          case 0x24dd:
            uVar2 = 0x55;
            break;
          case 0x24df:
          case 0x24e0:
          case 0x24e1:
          case 0x24e2:
          case 0x24e3:
          case 0x24e4:
            uVar2 = 0x28;
            break;
          case 0x251d:
            uVar2 = 0x56;
            break;
          case 0x251e:
            uVar2 = 0x2a;
            break;
          case 0x2524:
          case 0x2527:
            uVar2 = 0xe;
            break;
          case 0x2528:
            return 8;
          case 0x2580:
            return 0x14;
          case 0x2588:
          case 0x2589:
            return 0xe;
          }
        }
      }
      else if (param_1 < 0x284f) {
        if (param_1 < 0x27da) {
          if (param_1 < 0x2778) {
            if (param_1 < 10000) {
              if (param_1 == 0x264c) {
                return 0x31;
              }
              if (param_1 < 0x264d) {
                if (param_1 == 0x25e8) {
                  return 0x1f;
                }
                if (param_1 < 0x25e9) {
                  if (param_1 == 0x25e5) {
                    return 0x2a;
                  }
                }
                else if (param_1 - 0x2648U < 4) {
                  return 0x14;
                }
              }
              else if (param_1 < 0x26af) {
                if (0x26ab < param_1) {
                  return 0x1e;
                }
                if (param_1 == 0x264d) {
                  return 0xe;
                }
              }
              else if (param_1 - 0x26bbU < 2) {
                return 0x34;
              }
            }
            else {
              switch(param_1) {
              case 10000:
                return 0x5f;
              case 0x2712:
              case 0x2713:
              case 0x2714:
                uVar2 = 0x57;
                break;
              case 0x2715:
              case 0x271e:
                uVar2 = 4;
                break;
              case 0x2719:
                return 0x1f;
              case 0x271a:
              case 0x271b:
              case 0x271c:
                return 0x31;
              case 0x271d:
              case 0x271f:
                uVar2 = 0x28;
                break;
              case 0x2774:
                uVar2 = 9;
                break;
              case 0x2775:
                uVar2 = 5;
                break;
              case 0x2776:
                uVar2 = 6;
                break;
              case 0x2777:
                uVar2 = 7;
              }
            }
          }
        }
        else {
          switch(param_1) {
          case 0x27da:
          case 0x27db:
          case 0x27e1:
          case 0x27e2:
          case 0x27e3:
          case 0x27f4:
            return 0x34;
          case 0x27de:
          case 0x27df:
          case 0x27e0:
            return 0x1f;
          case 0x27f0:
            return 0xdf;
          case 0x283e:
          case 0x2847:
            uVar2 = 0xe0;
            break;
          case 0x2844:
            return 0xe;
          case 0x2845:
          case 0x2846:
            return 0x20;
          case 0x2848:
            uVar2 = 0x2b;
            break;
          case 0x2849:
            uVar2 = 8;
            break;
          case 0x284a:
          case 0x284b:
          case 0x284c:
          case 0x284d:
          case 0x284e:
            return 0x1e;
          }
        }
      }
      else if (param_1 < 0x29d8) {
        if (param_1 < 0x2968) {
          if (param_1 == 0x2908) {
            return 0xaf;
          }
          if (param_1 < 0x2909) {
            if (param_1 - 0x28a0U < 3) {
              return 0xb5;
            }
          }
          else if (param_1 == 0x2909) {
            return 0xae;
          }
        }
        else {
          switch(param_1) {
          case 0x2968:
          case 0x296a:
            return 0xaa;
          case 0x296c:
          case 0x296d:
          case 0x296f:
            return 0x45;
          case 0x2971:
          case 0x2972:
          case 0x2973:
            return 0x20;
          case 0x29cc:
            uVar2 = 0x62;
            break;
          case 0x29cd:
            uVar2 = 0x61;
            break;
          case 0x29ce:
            uVar2 = 4;
            break;
          case 0x29d3:
          case 0x29d6:
            uVar2 = 0x28;
            break;
          case 0x29d5:
            uVar2 = 8;
            break;
          case 0x29d7:
            return 0xe;
          }
        }
      }
      else {
        switch(param_1) {
        case 0x2a30:
          return 0xae;
        case 0x2a31:
        case 0x2a4f:
          return 0xaf;
        case 0x2a32:
        case 0x2a34:
        case 0x2a35:
        case 0x2a39:
        case 0x2a3a:
          uVar2 = 0x34;
          break;
        case 0x2a38:
          uVar2 = 0xdf;
          break;
        case 0x2a44:
        case 0x2a47:
          return 0x31;
        case 0x2a45:
          uVar2 = 0x1e;
          break;
        case 0x2a49:
          return 0xe;
        case 0x2a53:
          return 0x28;
        case 0x2a94:
          return 0x49;
        case 0x2a96:
          return 0x15;
        }
      }
    }
    else {
      switch(param_1) {
      case 11000:
        return 0x18;
      case 0x2afb:
      case 0x2afc:
      case 0x2afd:
      case 0x2b01:
        return 0x31;
      case 0x2afe:
        return 0xd;
      case 0x2aff:
      case 0x2b6b:
        return 0x28;
      case 0x2b5c:
      case 0x2b5d:
      case 0x2b5f:
      case 0x2b60:
      case 0x2b61:
        uVar2 = 0x14;
        break;
      case 0x2b5e:
        uVar2 = 0x2b;
        break;
      case 0x2b62:
        uVar2 = 8;
        break;
      case 0x2b63:
      case 0x2b64:
      case 0x2b65:
      case 0x2b66:
        return 0x1f;
      }
    }
  }
  else if (param_1 < 0x4c9b) {
    if (param_1 < 0x4c90) {
      if (param_1 < 0x3a99) {
        if (param_1 < 0x3a34) {
          if (param_1 < 0x371f) {
            if (param_1 < 0x3586) {
              if (param_1 == 0x2fac) {
                uVar2 = 0x1f;
              }
              else if (param_1 < 0x2fad) {
                if (param_1 < 0x2efb) {
                  if (param_1 < 0x2e1e) {
                    if (param_1 < 0x2c8d) {
                      if (param_1 < 0x2c2a) {
                        if (param_1 == 0x2bcb) {
                          return 0x1f;
                        }
                        if (param_1 == 0x2bce) {
                          return 0x1f;
                        }
                      }
                      else {
                        switch(param_1) {
                        case 0x2c2a:
                        case 0x2c2f:
                        case 0x2c31:
                        case 0x2c32:
                        case 0x2c33:
                          return 0x1f;
                        case 0x2c2c:
                        case 0x2c2d:
                        case 0x2c2e:
                          uVar2 = 0x20;
                          break;
                        case 0x2c56:
                        case 0x2c57:
                          uVar2 = 0x7f;
                          break;
                        case 0x2c5b:
                          uVar2 = 0x52;
                          break;
                        case 0x2c88:
                        case 0x2c8a:
                        case 0x2c8b:
                        case 0x2c8c:
                          return 0xf;
                        case 0x2c89:
                          return 0x10;
                        }
                      }
                    }
                    else if (param_1 < 0x2d5f) {
                      if (param_1 < 0x2d50) {
                        if (param_1 == 0x2cf2) {
                          return 0xd;
                        }
                        if (param_1 < 0x2cf3) {
                          if (param_1 < 0x2cf0) {
                            if (0x2cec < param_1) {
                              return 0xf;
                            }
                          }
                          else if (param_1 == 0x2cf1) {
                            return 0xf;
                          }
                        }
                      }
                      else {
                        switch(param_1) {
                        case 0x2d50:
                        case 0x2d52:
                        case 0x2d57:
                        case 0x2d58:
                          return 0x59;
                        case 0x2d53:
                        case 0x2d54:
                        case 0x2d5c:
                        case 0x2d5d:
                        case 0x2d5e:
                          return 0x1f;
                        case 0x2d59:
                          return 0x31;
                        }
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case 0x2e1e:
                    case 0x2e1f:
                    case 0x2e34:
                      return 0xd;
                    case 0x2e27:
                      uVar2 = 0xdf;
                      break;
                    case 0x2e28:
                      return 8;
                    case 0x2e2a:
                    case 0x2e2b:
                      uVar2 = 0x34;
                      break;
                    case 0x2e2c:
                      uVar2 = 0x46;
                      break;
                    case 0x2e2f:
                    case 0x2e30:
                    case 0x2e31:
                    case 0x2e33:
                    case 0x2e35:
                      uVar2 = 0x45;
                      break;
                    case 0x2e36:
                    case 0x2e37:
                    case 0x2e38:
                      uVar2 = 0x18;
                      break;
                    case 0x2e3a:
                      uVar2 = 0xe;
                      break;
                    case 0x2e3f:
                      return 0x34;
                    case 0x2e41:
                    case 0x2e46:
                      return 0xd;
                    case 0x2e44:
                      uVar2 = 1;
                      break;
                    case 0x2e81:
                    case 0x2e82:
                    case 0x2ee2:
                    case 0x2ee5:
                    case 0x2ee6:
                    case 0x2ee7:
                    case 0x2ef1:
                    case 0x2ef2:
                    case 0x2ef3:
                      uVar2 = 0x45;
                      break;
                    case 0x2eea:
                    case 0x2eeb:
                    case 0x2eec:
                      return 0x1e;
                    case 0x2ef6:
                    case 0x2ef8:
                    case 0x2ef9:
                      return 0x1f;
                    case 0x2ef7:
                      uVar2 = 0xe;
                      break;
                    case 0x2efa:
                      uVar2 = 0xdf;
                    }
                  }
                }
                else if (param_1 == 0x2faa) {
                  return 0xe0;
                }
              }
              else if (param_1 == 0x33f4) {
                uVar2 = 0x20;
              }
              else if (param_1 < 0x33f5) {
                if (param_1 == 0x32c9) {
                  uVar2 = 0x29;
                }
                else if (param_1 < 0x32ca) {
                  if (param_1 == 0x31a4) {
                    return 0xf;
                  }
                  if (param_1 < 0x31a5) {
                    if (param_1 == 0x3072) {
                      return 0x1e;
                    }
                    if (param_1 < 0x3073) {
                      if (param_1 == 0x2fb4) {
                        return 0x1f;
                      }
                      if (param_1 == 0x300c) {
                        return 0x23;
                      }
                    }
                    else {
                      if (param_1 == 0x3077) {
                        return 0x31;
                      }
                      if (param_1 - 0x30d4U < 2) {
                        return 0x1e;
                      }
                    }
                  }
                  else {
                    if (param_1 == 0x3264) {
                      return 0xb9;
                    }
                    if (param_1 < 0x3265) {
                      if (param_1 - 0x3207U < 2) {
                        return 0x31;
                      }
                    }
                    else if (param_1 - 0x3268U < 5) {
                      return 0x14;
                    }
                  }
                }
                else if (param_1 < 0x3395) {
                  if (0x3392 < param_1) {
                    return 0xe;
                  }
                  if (param_1 == 0x32cd) {
                    return 0x12;
                  }
                  if (param_1 == 0x32d1) {
                    return 0x34;
                  }
                  if (param_1 == 0x32ca) {
                    return 0x2b;
                  }
                }
                else {
                  if (param_1 == 0x3396) {
                    return 0x31;
                  }
                  if (param_1 < 0x3397) {
                    if (param_1 == 0x3395) {
                      return 0x14;
                    }
                  }
                  else if (param_1 - 0x3397U < 2) {
                    return 0x10;
                  }
                }
              }
              else if (param_1 == 0x34c0) {
                uVar2 = 0xd;
              }
              else if (param_1 < 0x34c1) {
                if (param_1 < 0x3464) {
                  if (param_1 < 0x3458) {
                    if (param_1 - 0x33faU < 0x10) {
                      return 0x25;
                    }
                  }
                  else {
                    switch(param_1) {
                    case 0x3458:
                    case 0x3459:
                      return 0xa7;
                    case 0x345a:
                      uVar2 = 0xd;
                      break;
                    case 0x345d:
                    case 0x345e:
                      return 0x20;
                    case 0x3460:
                      return 0x12;
                    case 0x3462:
                      uVar2 = 0x28;
                      break;
                    case 0x3463:
                      uVar2 = 0x56;
                    }
                  }
                }
                else if (param_1 == 0x34bd) {
                  return 0x69;
                }
              }
              else {
                switch(param_1) {
                case 0x3521:
                  return 0x6b;
                case 0x3525:
                  return 0x31;
                case 0x3527:
                  return 0xe;
                case 0x3529:
                case 0x352a:
                  uVar2 = 0x1e;
                  break;
                case 0x352b:
                  uVar2 = 0x34;
                  break;
                case 0x352d:
                  return 0x12;
                case 0x352e:
                case 0x352f:
                  return 8;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x3586:
              case 0x359a:
              case 0x35a3:
              case 0x35a4:
              case 0x35a5:
              case 0x35a6:
                return 0x34;
              case 0x3588:
                uVar2 = 0x31;
                break;
              case 0x358c:
              case 0x359d:
                uVar2 = 0x1e;
                break;
              case 0x358e:
              case 0x358f:
              case 0x35a1:
              case 0x3718:
              case 0x3719:
                return 8;
              case 0x3591:
              case 0x359b:
              case 0x35a0:
                uVar2 = 0xe;
                break;
              case 0x359c:
              case 0x35a2:
                uVar2 = 0x45;
                break;
              case 0x35a7:
                return 0x12;
              case 0x35a9:
                uVar2 = 5;
                break;
              case 0x35ab:
              case 0x35b0:
                return 0x34;
              case 0x35ad:
              case 0x35b2:
                return 0xd;
              case 0x35e8:
                return 0x31;
              case 0x35e9:
                uVar2 = 0x57;
                break;
              case 0x364d:
                uVar2 = 0xb7;
                break;
              case 0x364e:
              case 0x364f:
              case 0x3650:
              case 0x3651:
              case 0x3652:
              case 0x3653:
              case 0x3654:
              case 0x3655:
              case 0x3656:
              case 0x3657:
              case 0x3658:
              case 0x3659:
              case 0x365a:
              case 0x365b:
              case 0x365c:
              case 0x365d:
              case 0x365e:
              case 0x365f:
              case 0x3660:
              case 0x3661:
              case 0x3662:
              case 0x3663:
              case 0x3664:
              case 0x3665:
              case 0x3666:
              case 0x3667:
              case 0x3668:
              case 0x3669:
              case 0x366a:
              case 0x366b:
              case 0x366c:
              case 0x366d:
              case 0x366e:
              case 0x366f:
              case 0x3670:
              case 0x3671:
              case 0x3672:
              case 0x3673:
              case 0x3674:
              case 0x3675:
              case 14000:
                uVar2 = 0x73;
                break;
              case 0x3695:
                uVar2 = 0xe;
                break;
              case 0x3696:
              case 0x369e:
                uVar2 = 0x13;
                break;
              case 0x36b1:
                uVar2 = 0x74;
                break;
              case 0x36b2:
                uVar2 = 0x75;
                break;
              case 0x36b3:
                uVar2 = 0x76;
                break;
              case 0x36b4:
                uVar2 = 0x77;
                break;
              case 0x36b5:
                uVar2 = 0x78;
                break;
              case 0x36b6:
                uVar2 = 0x79;
                break;
              case 0x36b7:
                uVar2 = 0x7a;
                break;
              case 0x36b8:
                uVar2 = 0x7b;
                break;
              case 0x36b9:
                uVar2 = 0x7c;
                break;
              case 0x36ba:
                uVar2 = 0x7d;
                break;
              case 0x36bb:
                uVar2 = 0x7e;
                break;
              case 0x36bc:
                uVar2 = 0x7f;
                break;
              case 0x36bd:
                uVar2 = 0x80;
                break;
              case 0x36be:
                uVar2 = 0x81;
                break;
              case 0x36bf:
                uVar2 = 0x82;
                break;
              case 0x36c0:
                uVar2 = 0x83;
                break;
              case 0x3715:
                uVar2 = 0x84;
                break;
              case 0x3717:
              case 0x371a:
                uVar2 = 0x1e;
                break;
              case 0x371e:
                uVar2 = 0xd;
              }
            }
          }
          else if (param_1 < 0x3919) {
            if (param_1 < 0x3840) {
              switch(param_1) {
              case 0x377a:
                return 0x28;
              case 0x37e2:
                return 0x14;
              case 0x37e4:
                uVar2 = 0x15;
                break;
              case 0x37e5:
              case 0x37e7:
              case 0x37ed:
                uVar2 = 0x9b;
                break;
              case 0x37e6:
                uVar2 = 0x86;
                break;
              case 0x37e8:
                uVar2 = 5;
                break;
              case 0x37e9:
                return 8;
              case 0x37ea:
                uVar2 = 0x87;
                break;
              case 0x37ec:
                uVar2 = 0x88;
                break;
              case 0x37ee:
                uVar2 = 0x89;
                break;
              case 0x37f3:
                uVar2 = 0x1f;
                break;
              case 0x37f4:
                uVar2 = 0x10;
                break;
              case 0x37f8:
                uVar2 = 0xe;
                break;
              case 0x37f9:
              case 0x37fa:
              case 0x37fd:
                return 0x34;
              case 0x37fb:
                uVar2 = 0x45;
              }
            }
            else {
              switch(param_1) {
              case 0x3840:
              case 0x3841:
                return 0x73;
              case 0x3842:
              case 0x38b1:
              case 0x38ba:
              case 0x38c0:
              case 0x390c:
              case 0x390f:
                return 0x34;
              case 0x38a7:
              case 0x38a8:
              case 0x38a9:
              case 0x38b3:
              case 0x38b4:
              case 0x38b5:
              case 0x38b6:
              case 0x38b7:
              case 0x38bc:
              case 0x38bd:
              case 0x38c2:
              case 0x38c5:
              case 0x38c6:
                return 0x31;
              case 0x38af:
              case 0x38b8:
              case 0x38be:
              case 0x38c3:
                uVar2 = 0x2b;
                break;
              case 0x38b0:
              case 0x38b9:
              case 0x38bf:
              case 0x38c4:
                uVar2 = 0x12;
                break;
              case 0x3912:
                return 8;
              case 0x3913:
              case 0x3918:
                uVar2 = 0xe;
                break;
              case 0x3916:
              case 0x3917:
                uVar2 = 0x1e;
              }
            }
          }
          else {
            switch(param_1) {
            case 0x396d:
            case 0x39d4:
              return 0xf;
            case 0x396e:
            case 0x396f:
              return 0x1f;
            case 0x3970:
            case 0x3971:
              uVar2 = 0x31;
              break;
            case 0x3976:
              uVar2 = 0x2b;
              break;
            case 0x3977:
              return 8;
            case 0x39d0:
              uVar2 = 0x56;
              break;
            case 0x39d2:
              uVar2 = 0x34;
              break;
            case 0x39d3:
              uVar2 = 0xd;
              break;
            case 0x39d5:
              uVar2 = 0x12;
              break;
            case 0x39d6:
              uVar2 = 0x45;
              break;
            case 0x39d7:
              uVar2 = 0x14;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x3a34:
            return 0x20;
          case 0x3a39:
          case 0x3a3a:
            return 0x2a;
          case 0x3a40:
          case 0x3a41:
          case 0x3a42:
          case 0x3a43:
          case 0x3a45:
          case 0x3a46:
          case 0x3a47:
          case 0x3a49:
          case 0x3a4a:
          case 0x3a4b:
          case 0x3a4c:
          case 0x3a4f:
            uVar2 = 0xe;
            break;
          case 0x3a44:
          case 0x3a48:
          case 0x3a4d:
          case 0x3a4e:
            uVar2 = 0x46;
            break;
          case 0x3a51:
            return 0x28;
          case 15000:
            uVar2 = 0x98;
          }
        }
      }
      else if (param_1 < 0x44c7) {
        if (param_1 < 0x44c1) {
          if (param_1 < 0x3f58) {
            if (param_1 < 0x3f48) {
              if (param_1 < 0x3cfa) {
                if (param_1 < 0x3c8c) {
                  if (param_1 < 0x3b06) {
                    if (0x3afb < param_1) {
                      switch(param_1) {
                      case 0x3afc:
                        return 99;
                      case 0x3afd:
                        return 0xb0;
                      case 0x3afe:
                        uVar2 = 4;
                        break;
                      case 0x3b00:
                        return 0x28;
                      case 0x3b01:
                        uVar2 = 0x9d;
                        break;
                      case 0x3b02:
                      case 0x3b03:
                      case 0x3b04:
                      case 0x3b05:
                        return 0x31;
                      }
                    }
                  }
                  else if (param_1 < 0x3bca) {
                    if (0x3bc5 < param_1) {
                      return 0x31;
                    }
                    if (param_1 < 0x3b66) {
                      if (0x3b61 < param_1) {
                        return 0x33;
                      }
                      if (param_1 == 0x3b60) {
                        return 0xad;
                      }
                    }
                    else if (param_1 == 0x3bc4) {
                      return 0xad;
                    }
                  }
                  else {
                    if (param_1 == 0x3bcc) {
                      return 0xe;
                    }
                    if (param_1 == 0x3c28) {
                      return 0xad;
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case 0x3c8c:
                    return 0x95;
                  case 0x3c8d:
                  case 0x3c97:
                  case 0x3c98:
                    uVar2 = 0x1b;
                    break;
                  case 0x3c8e:
                  case 0x3cf1:
                    uVar2 = 0x34;
                    break;
                  case 0x3c90:
                  case 0x3c91:
                  case 0x3c94:
                  case 0x3cf7:
                  case 0x3cf8:
                    return 0xe;
                  case 0x3c99:
                  case 0x3c9b:
                    uVar2 = 8;
                    break;
                  case 0x3cf2:
                    uVar2 = 0x12;
                    break;
                  case 0x3cf3:
                    uVar2 = 5;
                    break;
                  case 0x3cf4:
                    uVar2 = 6;
                    break;
                  case 0x3cf5:
                  case 0x3cf6:
                    uVar2 = 0xf;
                    break;
                  case 0x3cf9:
                    uVar2 = 0x31;
                  }
                }
              }
              else {
                switch(param_1) {
                case 0x3db1:
                  return 0x1e;
                case 0x3db8:
                  uVar2 = 0xae;
                  break;
                case 0x3db9:
                case 0x3dba:
                  uVar2 = 0x20;
                  break;
                case 0x3dc0:
                  uVar2 = 0xe4;
                  break;
                case 0x3e1c:
                case 0x3e1e:
                case 0x3e20:
                case 0x3e22:
                case 0x3e24:
                case 0x3e26:
                case 0x3e28:
                case 0x3e2a:
                case 0x3e2c:
                case 0x3e2e:
                case 0x3e30:
                case 0x3e32:
                case 0x3e34:
                case 0x3e36:
                case 0x3e38:
                case 0x3e3a:
                case 0x3e3c:
                case 0x3e3e:
                case 0x3e40:
                case 0x3e42:
                case 0x3e44:
                case 0x3e46:
                case 0x3e48:
                case 0x3e4a:
                case 0x3e4e:
                case 0x3e51:
                case 0x3e53:
                case 0x3e58:
                  uVar2 = 0x1f;
                  break;
                case 0x3e50:
                  return 0xe;
                case 0x3e57:
                  uVar2 = 0x9d;
                  break;
                case 0x3e5a:
                case 0x3e5b:
                case 0x3e5c:
                case 0x3e5d:
                  return 0x28;
                case 0x3e60:
                  return 8;
                case 0x3e81:
                case 0x3e82:
                case 0x3e83:
                  uVar2 = 0x46;
                  break;
                case 0x3ee9:
                  return 2;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x3f48:
              case 0x3f49:
              case 0x3f4a:
              case 0x3f4b:
              case 0x3f4d:
                return 0x34;
              case 0x3f51:
                return 0xe;
              case 0x3f53:
                return 0x28;
              case 0x3f54:
                return 0xdb;
              case 0x3f55:
                return 0x1e;
              case 0x3f57:
                uVar2 = 8;
              }
            }
          }
          else if (param_1 < 0x42d1) {
            if (param_1 < 0x4204) {
              if (param_1 < 0x41ab) {
                if (param_1 < 0x40d8) {
                  if (param_1 == 0x4079) {
                    return 0x31;
                  }
                  if (param_1 == 0x407a) {
                    return 0x34;
                  }
                }
                else {
                  switch(param_1) {
                  case 0x40d8:
                  case 0x40da:
                  case 0x40de:
                  case 0x40e4:
                  case 0x40eb:
                  case 0x40f1:
                  case 0x40f2:
                  case 0x40f6:
                  case 0x40f7:
                  case 0x40fb:
                  case 0x40fe:
                  case 0x4107:
                  case 0x4108:
                    return 0x18;
                  case 0x40d9:
                  case 0x40e3:
                  case 0x40ed:
                  case 0x40ef:
                  case 0x40f5:
                  case 0x4100:
                  case 0x4102:
                  case 0x4106:
                    return 0xe;
                  case 0x40f3:
                  case 0x4104:
                    uVar2 = 8;
                    break;
                  case 0x4109:
                    return 0x28;
                  case 0x410a:
                    uVar2 = 0xdb;
                    break;
                  case 0x413c:
                    uVar2 = 0x9e;
                    break;
                  case 0x4140:
                    return 0x31;
                  case 0x41a2:
                  case 0x41aa:
                    return 0x34;
                  case 0x41a4:
                  case 0x41a5:
                    uVar2 = 0xd;
                  }
                }
              }
            }
            else {
              switch(param_1) {
              case 0x4204:
              case 0x4205:
              case 0x4206:
                return 0x12;
              case 0x420b:
              case 0x420c:
                return 0x34;
              case 17000:
              case 0x426a:
                return 1;
              case 0x4269:
              case 0x426b:
              case 0x426d:
              case 0x426e:
              case 0x4270:
              case 0x4272:
              case 0x4273:
              case 0x4275:
              case 0x4278:
              case 0x427a:
              case 0x427c:
              case 0x427e:
              case 0x4280:
              case 0x4281:
              case 0x4282:
              case 0x4283:
              case 0x42cd:
              case 0x42d0:
                return 0x31;
              case 0x426f:
              case 0x4271:
                uVar2 = 0x8a;
                break;
              case 0x4274:
                uVar2 = 0x2b;
                break;
              case 0x4276:
                uVar2 = 0x2a;
                break;
              case 0x4277:
              case 0x4279:
                uVar2 = 0x8b;
                break;
              case 0x427b:
              case 0x427d:
                uVar2 = 0x8c;
                break;
              case 0x427f:
                return 0xe;
              case 0x42ce:
                uVar2 = 0x29;
              }
            }
          }
          else if (param_1 < 0x43a9) {
            if (param_1 < 0x4395) {
              if (param_1 - 0x4330U < 3) {
                return 0x12;
              }
            }
            else {
              switch(param_1) {
              case 0x4395:
                uVar2 = 0xa0;
                break;
              case 0x439b:
                uVar2 = 0x13;
                break;
              case 0x439d:
                return 0x55;
              case 0x439f:
                return 0xe;
              case 0x43a4:
                return 0x31;
              case 0x43a6:
                return 0x28;
              case 0x43a7:
              case 0x43a8:
                uVar2 = 8;
              }
            }
          }
          else {
            if (param_1 == 0x4465) {
              return 0x45;
            }
            if (param_1 < 0x4466) {
              if ((param_1 & 0xfffffffdU) == 0x445c) {
                return 0x60;
              }
            }
            else if (param_1 == 0x4468) {
              return 0xe;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x44c2:
            return 0x8b;
          case 0x44c3:
            uVar2 = 0x8c;
            break;
          case 0x44c4:
            uVar2 = 0x8d;
            break;
          case 0x44c5:
            return 0x34;
          case 0x44c6:
            uVar2 = 0xd;
            break;
          default:
            return 0x8a;
          }
        }
      }
      else if (param_1 < 0x490f) {
        if (param_1 < 0x48a8) {
          if (param_1 < 0x4723) {
            if (param_1 < 0x4719) {
              if (param_1 == 0x45f1) {
                uVar2 = 0x28;
              }
              else if (param_1 < 0x45f2) {
                if (param_1 == 0x4588) {
                  return 0xae;
                }
                if (param_1 < 0x4589) {
                  if (param_1 == 0x4527) {
                    return 0xe;
                  }
                  if (param_1 < 0x4528) {
                    if (param_1 == 0x4524) {
                      return 0x30;
                    }
                    if (param_1 == 0x4525) {
                      return 0xe;
                    }
                  }
                  else if (param_1 == 0x4528) {
                    return 0x34;
                  }
                }
                else {
                  if (param_1 == 0x45ee) {
                    return 0x22;
                  }
                  if (param_1 < 0x45ef) {
                    if (param_1 < 0x458b) {
                      return 0x1e;
                    }
                    if (param_1 == 0x458d) {
                      return 0xe4;
                    }
                  }
                  else if (param_1 != 0x45f1) {
                    return 0x1e;
                  }
                }
              }
              else {
                if (param_1 == 0x46b5) {
                  return 0xad;
                }
                if (param_1 < 0x46b6) {
                  if (param_1 == 0x4654) {
                    return 0x1e;
                  }
                  if (param_1 < 0x4655) {
                    if (param_1 < 0x45f4) {
                      return 0x1e;
                    }
                    if (param_1 == 0x4651) {
                      return 0x7f;
                    }
                  }
                  else if ((param_1 & 0xfffffffdU) == 0x4661) {
                    return 0x15;
                  }
                }
                else {
                  if (param_1 < 0x46b9) {
                    return ((param_1 != 0x46b6) - 1 & 0xffffffde) + 0x31;
                  }
                  if (param_1 == 0x46be) {
                    return 8;
                  }
                }
              }
            }
            else {
              uVar2 = 0x1f;
            }
          }
          else if (param_1 < 0x4852) {
            if (param_1 < 0x47e0) {
              if (param_1 == 0x4725) {
                return 0x28;
              }
              if (param_1 < 0x4726) {
                if (param_1 == 0x4724) {
                  return 0xe;
                }
              }
              else if (param_1 - 0x477cU < 3) {
                return 0x34;
              }
            }
            else {
              switch(param_1) {
              case 0x47e0:
              case 0x47e2:
              case 0x47e3:
                return 0x48;
              case 0x47e8:
              case 0x47e9:
                return 0x1e;
              case 0x47eb:
              case 0x47ec:
              case 0x47ed:
              case 0x47f7:
              case 0x4850:
                return 0xd;
              case 0x47ef:
                uVar2 = 0x13;
                break;
              case 0x47f0:
                uVar2 = 0x46;
                break;
              case 0x47f9:
                uVar2 = 0xdb;
                break;
              case 0x47fa:
                uVar2 = 0xe4;
                break;
              case 0x4844:
              case 0x4845:
                uVar2 = 100;
                break;
              case 0x4846:
                uVar2 = 4;
                break;
              case 0x4848:
                return 0x1f;
              case 0x4849:
              case 0x484a:
              case 0x484b:
                return 0x31;
              case 0x484e:
                uVar2 = 0x28;
                break;
              case 0x4851:
                return 0x34;
              }
            }
          }
        }
        else {
          switch(param_1) {
          case 0x48a8:
          case 0x48a9:
          case 0x48b9:
          case 0x48bd:
          case 0x48be:
          case 0x48c0:
            return 0x31;
          case 0x48ac:
          case 0x48bb:
          case 0x48c2:
            return 0xd;
          case 0x48ad:
          case 0x48ae:
            return 0x45;
          case 0x490c:
            return 0x1a;
          case 0x490e:
            return 0x1f;
          }
        }
      }
      else if (param_1 < 0x4aa8) {
        if (param_1 < 0x49d4) {
          if (param_1 == 0x4970) {
            return 0x1b;
          }
          if (param_1 == 0x4972) {
            return 0x20;
          }
        }
        else {
          switch(param_1) {
          case 0x49d4:
          case 0x49d5:
          case 0x49d6:
          case 0x49da:
          case 0x49ec:
            return 0x18;
          case 0x49dc:
          case 0x49e3:
          case 0x49e4:
          case 0x49e5:
          case 0x49e9:
            return 0xd;
          case 0x49de:
          case 0x49e7:
            return 0x34;
          case 0x49e1:
            uVar2 = 4;
            break;
          case 0x49eb:
            return 0xdb;
          case 0x49ee:
            uVar2 = 0xdf;
            break;
          case 0x49f1:
            uVar2 = 0xe4;
            break;
          case 19000:
          case 0x4a39:
          case 0x4a3c:
          case 0x4a3d:
            uVar2 = 0x40;
            break;
          case 0x4a3b:
          case 0x4aa2:
          case 0x4aa3:
            uVar2 = 0x15;
            break;
          case 0x4a40:
          case 0x4aa7:
            uVar2 = 0xe;
            break;
          case 0x4a9c:
          case 0x4a9d:
          case 0x4a9e:
          case 0x4aa0:
            uVar2 = 0x41;
            break;
          case 0x4a9f:
            uVar2 = 0x50;
          }
        }
      }
      else if (param_1 < 0x4bd9) {
        if (param_1 < 0x4b64) {
          if (param_1 == 0x4b06) {
            return 0x13;
          }
          if (param_1 < 0x4b07) {
            if ((param_1 & 0xfffffffdU) == 0x4b00) {
              return 0x4a;
            }
          }
          else if (param_1 == 0x4b07) {
            return 0x4a;
          }
        }
        else {
          switch(param_1) {
          case 0x4b64:
          case 0x4b66:
          case 0x4b6c:
            return 0x46;
          case 0x4b65:
          case 0x4b68:
          case 0x4b6f:
          case 0x4b70:
          case 0x4bca:
          case 0x4bcb:
          case 0x4bcd:
          case 0x4bce:
          case 0x4bcf:
            return 0x45;
          case 0x4bc9:
          case 0x4bd3:
            return 0x34;
          case 0x4bd5:
            uVar2 = 0xd;
            break;
          case 0x4bd8:
            uVar2 = 8;
          }
        }
      }
      else if (param_1 == 0x4c2d) {
        return 0xaa;
      }
    }
    else {
      switch(param_1) {
      case 0x4c90:
        return 0x99;
      case 0x4c91:
        return 2;
      case 0x4c92:
        uVar2 = 0xe;
        break;
      case 0x4c93:
        uVar2 = 0x88;
        break;
      case 0x4c97:
        return 0x34;
      case 0x4c98:
        uVar2 = 0x9d;
        break;
      case 0x4c9a:
        uVar2 = 0x46;
      }
    }
  }
  else if (param_1 < 0x5e89) {
    if (param_1 < 0x5c31) {
      if (param_1 == 0x5528) {
        uVar2 = 0xba;
      }
      else if (param_1 < 0x5529) {
        if (param_1 == 0x5080) {
          uVar2 = 0x14;
        }
        else if (param_1 < 0x5081) {
          if (param_1 < 0x4f5a) {
            if (param_1 < 0x4f52) {
              if (param_1 < 0x4e2a) {
                if (param_1 < 20000) {
                  if (param_1 == 0x4d58) {
                    return 0xb4;
                  }
                  if (param_1 < 0x4d59) {
                    if (param_1 == 0x4cf9) {
                      return 0x34;
                    }
                    if ((param_1 < 0x4cfa) && ((param_1 - 0x4cf4U & 0xfffffffb) == 0)) {
                      return 0x97;
                    }
                  }
                  else {
                    if ((param_1 - 0x4dbeU & 0xfffffffd) == 0) {
                      return 0x2b;
                    }
                    if (param_1 == 0x4d5a) {
                      return 4;
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case 20000:
                  case 0x4e21:
                  case 0x4e25:
                    return 0x43;
                  case 0x4e22:
                    return 0x50;
                  case 0x4e24:
                    return 0x13;
                  case 0x4e28:
                  case 0x4e29:
                    return 0x34;
                  }
                }
              }
              else {
                switch(param_1) {
                case 0x4e84:
                case 0x4e85:
                case 0x4e86:
                case 0x4e8c:
                case 0x4ee8:
                case 0x4ee9:
                case 0x4eea:
                case 0x4ef1:
                  return 0xf;
                case 0x4e88:
                case 0x4e89:
                case 0x4e8b:
                  return 0x18;
                case 0x4e8d:
                case 0x4e8e:
                case 0x4ef3:
                  return 8;
                case 0x4eeb:
                  return 0xe;
                case 0x4eef:
                  return 0x13;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x4f52:
                return 4;
              case 0x4f55:
              case 0x4f57:
                return 8;
              case 0x4f56:
                return 0x76;
              case 0x4f58:
              case 0x4f59:
                uVar2 = 0xdb;
              }
            }
          }
          else if (param_1 < 0x5024) {
            if (0x4faf < param_1) {
              switch(param_1) {
              case 0x4fb0:
              case 0x4fb1:
              case 0x4fb6:
                return 0x42;
              case 0x4fb2:
              case 0x5016:
                return 0x50;
              case 0x4fb5:
              case 0x5019:
                return 0x13;
              case 0x4fb9:
                return 0xb7;
              case 0x5014:
              case 0x5015:
              case 0x501a:
              case 0x5021:
                uVar2 = 0x3f;
                break;
              case 0x501c:
              case 0x5023:
                uVar2 = 4;
                break;
              case 0x501d:
                uVar2 = 0xe;
                break;
              case 0x5020:
                uVar2 = 0x3e;
              }
            }
          }
          else {
            if (param_1 == 0x507a) {
              return 0xf;
            }
            if (param_1 == 0x507d) {
              return 0xdf;
            }
          }
        }
        else if (param_1 < 0x52e6) {
          if (param_1 < 0x52d0) {
            if (param_1 < 0x527a) {
              if (param_1 < 0x5236) {
                if (param_1 == 0x51b0) {
                  return 0x13;
                }
                if (param_1 < 0x51b1) {
                  if (param_1 == 0x5142) {
                    return 0x20;
                  }
                  if (param_1 < 0x5143) {
                    if (param_1 == 0x5140) {
                      return 0x7f;
                    }
                    if (param_1 < 0x5141) {
                      if (param_1 == 0x50dc) {
                        return 0xae;
                      }
                      if (param_1 == 0x50df) {
                        return 0xae;
                      }
                    }
                  }
                  else if (param_1 < 0x5150) {
                    if (0x514d < param_1) {
                      return 0x20;
                    }
                  }
                  else if (param_1 - 0x51a5U < 2) {
                    return 0x21;
                  }
                }
                else if (param_1 < 0x520c) {
                  if (20999 < param_1) {
                    return 0x23;
                  }
                  if (param_1 - 0x51b5U < 6) {
                    return 0xb0;
                  }
                }
                else if (param_1 == 0x520c) {
                  return 0x36;
                }
              }
              else {
                switch(param_1) {
                case 0x5236:
                  return 0x28;
                case 0x5237:
                  return 8;
                case 0x5238:
                case 0x526d:
                  return 0xe;
                case 0x523b:
                  return 0xdf;
                case 0x526c:
                  return 0x13;
                case 0x5275:
                case 0x5276:
                  return 0xd;
                case 0x5279:
                  uVar2 = 0x10;
                }
              }
            }
          }
          else {
            switch(param_1) {
            case 0x52d0:
            case 0x52d1:
            case 0x52d2:
            case 0x52d3:
            case 0x52d4:
            case 0x52d5:
            case 0x52d7:
            case 0x52d8:
              return 0x1e;
            case 0x52d6:
              return 0xd;
            case 0x52db:
              uVar2 = 0x31;
              break;
            case 0x52dd:
              uVar2 = 0x59;
              break;
            case 0x52e5:
              return 0x28;
            }
          }
        }
        else if (param_1 < 0x5408) {
          if (param_1 < 0x53fc) {
            if (param_1 == 0x539e) {
              return 0x2b;
            }
            if (param_1 < 0x539f) {
              if (param_1 < 0x539a) {
                if (0x5397 < param_1) {
                  return 0x23;
                }
              }
              else if (param_1 == 0x539b) {
                return 0x23;
              }
            }
            else if (param_1 == 0x539f) {
              return 0x2a;
            }
          }
          else {
            switch(param_1) {
            case 0x53fc:
              return 0xf;
            case 0x53fd:
            case 0x5400:
            case 0x5401:
              return 0x7f;
            case 0x5403:
            case 0x5407:
              return 0xe;
            }
          }
        }
        else {
          if (param_1 == 0x5471) {
            return 0x46;
          }
          if (param_1 < 0x5472) {
            if (param_1 == 0x546d) {
              return 0xe;
            }
            if (param_1 == 0x546f) {
              return 0x14;
            }
            if (param_1 == 0x5468) {
              return 0xe;
            }
          }
          else {
            if (param_1 == 0x54c6) {
              return 0xe;
            }
            if (param_1 == 0x54c7) {
              return 0x18;
            }
            if (param_1 == 0x54c4) {
              return 0x3c;
            }
          }
        }
      }
      else if (param_1 < 0x5aa4) {
        if (param_1 < 0x5974) {
          if (param_1 < 0x565a) {
            if (param_1 < 0x5654) {
              if (param_1 == 0x5598) {
                uVar2 = 0x46;
              }
              else if (param_1 < 0x5599) {
                if (param_1 == 0x5530) {
                  return 0x46;
                }
                if (param_1 < 0x5531) {
                  if (param_1 < 0x552b) {
                    return 0xd;
                  }
                  if (param_1 == 0x552e) {
                    return 0x14;
                  }
                }
                else {
                  if (param_1 == 0x5596) {
                    return 0xd;
                  }
                  if (param_1 == 0x5597) {
                    return 0x2b;
                  }
                }
              }
              else {
                if (param_1 == 0x559b) {
                  return 0x1f;
                }
                switch(param_1) {
                case 0x55f1:
                case 0x55f2:
                case 0x55f3:
                case 0x55f6:
                  return 0x1a;
                case 0x55f5:
                  return 0x34;
                case 0x55f7:
                case 0x55f8:
                case 0x55f9:
                  return 0x12;
                case 0x55fc:
                  return 0xe;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x5654:
              case 0x5656:
                return 0xd6;
              case 0x5657:
                uVar2 = 4;
                break;
              case 0x5658:
                return 0x46;
              case 0x5659:
                return 0xe;
              }
            }
          }
          else if (param_1 == 0x57e6) {
            uVar2 = 0xd9;
          }
          else if (param_1 < 0x57e7) {
            if (param_1 == 0x5781) {
              return 0x12;
            }
            if (param_1 < 0x5782) {
              if (param_1 == 0x56bb) {
                return 0x1a;
              }
              if (param_1 < 0x56bc) {
                if (param_1 == 0x56b9) {
                  return 0x34;
                }
              }
              else if ((param_1 & 0xfffffffdU) == 0x571d) {
                return 0x1b;
              }
            }
            else {
              if (param_1 == 0x57e4) {
                return 0xd7;
              }
              if (param_1 == 0x57e5) {
                return 0xd8;
              }
              if (param_1 == 0x5782) {
                return 0xe;
              }
            }
          }
          else if (param_1 < 0x591b) {
            if (param_1 < 0x5910) {
              if (param_1 == 0x5848) {
                return 0xb9;
              }
              if (param_1 == 0x58ac) {
                return 0xdb;
              }
              if (param_1 == 0x57e7) {
                return 0xda;
              }
            }
            else {
              switch(param_1) {
              case 0x5910:
              case 0x5913:
              case 0x5915:
              case 0x5916:
              case 0x5917:
                return 0x4b;
              case 0x5918:
                return 0xe;
              case 0x5919:
                return 0x10;
              case 0x591a:
                uVar2 = 0x31;
              }
            }
          }
        }
        else {
          switch(param_1) {
          case 0x5974:
          case 0x5975:
          case 0x5976:
          case 0x5977:
          case 0x5978:
          case 0x5979:
          case 0x5980:
          case 0x5986:
          case 0x5988:
            uVar2 = 0x34;
            break;
          case 0x597c:
            uVar2 = 0x1f;
            break;
          case 0x597e:
          case 0x597f:
            uVar2 = 0x28;
            break;
          case 0x5985:
            uVar2 = 0x33;
            break;
          case 0x5987:
            uVar2 = 0xd;
            break;
          case 0x598a:
            return 0xdb;
          case 0x598b:
          case 0x598e:
            return 0xe;
          case 0x598c:
          case 0x598d:
            uVar2 = 8;
            break;
          case 0x59da:
            uVar2 = 0x18;
            break;
          case 0x59db:
            uVar2 = 0x4a;
            break;
          case 0x59dc:
            uVar2 = 0x43;
            break;
          case 0x59dd:
            uVar2 = 0x42;
            break;
          case 0x59de:
            uVar2 = 0x3f;
            break;
          case 0x59df:
            uVar2 = 0x41;
            break;
          case 0x59e0:
            uVar2 = 0xd;
            break;
          case 0x59e1:
          case 0x59e3:
            uVar2 = 0x45;
            break;
          case 0x59e2:
          case 0x59e4:
          case 0x59e5:
            uVar2 = 0xdb;
            break;
          case 0x59e8:
          case 0x59e9:
          case 0x59ef:
            uVar2 = 0x34;
            break;
          case 0x59eb:
            uVar2 = 0x28;
            break;
          case 0x59ec:
            uVar2 = 0xe;
            break;
          case 0x59ee:
          case 0x59f6:
            uVar2 = 0x46;
            break;
          case 0x59f0:
            uVar2 = 0x31;
            break;
          case 0x59f5:
            uVar2 = 0x33;
            break;
          case 0x5a40:
            return 0xdf;
          case 0x5aa3:
            return 0xb0;
          }
        }
      }
      else if (param_1 < 0x5b75) {
        if (param_1 < 0x5b68) {
          if (param_1 < 0x5b0b) {
            if (0x5b06 < param_1) {
              return 0x1e;
            }
            if (param_1 - 0x5b04U < 3) {
              return 0xe3;
            }
          }
          else if (param_1 - 0x5b0cU < 0xb) {
            return 0x1e;
          }
        }
        else {
          switch(param_1) {
          case 0x5b68:
          case 0x5b6e:
          case 0x5b6f:
            return 0xe6;
          case 0x5b6a:
          case 0x5b70:
          case 0x5b71:
          case 0x5b72:
          case 0x5b73:
          case 0x5b74:
            return 0xe7;
          case 0x5b6c:
            uVar2 = 0xe8;
          }
        }
      }
      else if (param_1 == 0x5bcf) {
        return 0xe;
      }
    }
    else {
      switch(param_1) {
      case 0x5c31:
      case 0x5c97:
        return 0x9d;
      case 0x5c35:
      case 0x5c9b:
        uVar2 = 0x31;
        break;
      case 0x5c37:
        return 0x1e;
      case 0x5c39:
      case 0x5c41:
      case 0x5ca7:
        return 0xe;
      case 0x5c3e:
      case 0x5c3f:
        uVar2 = 0x10;
        break;
      case 0x5c42:
      case 0x5ca8:
        uVar2 = 0x1f;
        break;
      case 0x5c94:
      case 0x5c95:
      case 0x5c96:
      case 0x5c9e:
      case 0x5c9f:
      case 0x5ca0:
      case 0x5ca1:
        uVar2 = 0x33;
        break;
      case 0x5c9d:
      case 0x5ca2:
        uVar2 = 0xdf;
        break;
      case 0x5ca6:
        uVar2 = 0x46;
        break;
      case 0x5cf8:
        uVar2 = 0xe1;
        break;
      case 0x5cf9:
        uVar2 = 0xe2;
        break;
      case 0x5cfa:
      case 0x5d0a:
        uVar2 = 0xb0;
        break;
      case 0x5cfb:
        uVar2 = 0x27;
        break;
      case 0x5cfc:
      case 0x5d0c:
      case 0x5d0d:
        uVar2 = 0x13;
        break;
      case 0x5cfd:
        uVar2 = 0xa9;
        break;
      case 0x5d00:
        uVar2 = 0xab;
        break;
      case 0x5d02:
        uVar2 = 0xae;
        break;
      case 0x5d04:
        uVar2 = 0xe0;
        break;
      case 0x5d06:
        uVar2 = 0xe9;
        break;
      case 0x5d5d:
        uVar2 = 0x45;
        break;
      case 0x5d5e:
      case 0x5d7d:
        uVar2 = 0x28;
        break;
      case 0x5d5f:
        uVar2 = 0x56;
        break;
      case 0x5d60:
      case 0x5d62:
        uVar2 = 0x15;
        break;
      case 0x5d63:
      case 0x5d66:
      case 0x5d67:
        uVar2 = 0xf;
        break;
      case 0x5d64:
      case 0x5d71:
      case 0x5d72:
      case 0x5d86:
        uVar2 = 0xe4;
        break;
      case 0x5d6a:
        uVar2 = 0x10;
        break;
      case 0x5d6e:
      case 0x5d7c:
      case 0x5d7e:
      case 0x5d83:
        uVar2 = 0xe;
        break;
      case 0x5d6f:
      case 0x5d84:
      case 0x5d91:
        uVar2 = 0x2a;
        break;
      case 0x5d70:
      case 0x5d81:
        uVar2 = 0x17;
        break;
      case 0x5d75:
      case 0x5d77:
      case 0x5d78:
        uVar2 = 0x16;
        break;
      case 0x5d7f:
        uVar2 = 0xb3;
        break;
      case 0x5d85:
      case 0x5d88:
      case 0x5d89:
      case 0x5d8a:
        uVar2 = 0x45;
        break;
      case 0x5d8d:
        uVar2 = 0x35;
        break;
      case 0x5d8e:
        uVar2 = 0xae;
        break;
      case 0x5d8f:
        uVar2 = 0x15;
        break;
      case 0x5d90:
        uVar2 = 0x46;
        break;
      case 0x5d92:
        uVar2 = 0x1f;
        break;
      case 0x5e24:
      case 0x5e25:
      case 0x5e27:
      case 0x5e28:
      case 0x5e2a:
      case 0x5e2c:
        uVar2 = 0x34;
        break;
      case 0x5e26:
        uVar2 = 0xe4;
        break;
      case 0x5e2d:
        uVar2 = 0xd;
        break;
      case 0x5e2e:
      case 0x5e2f:
        return 0xe;
      case 0x5e88:
        uVar2 = 0x9a;
      }
    }
  }
  else if (param_1 < 0x6aa9) {
    if (param_1 < 0x6a00) {
      if (param_1 == 0x6784) {
        uVar2 = 0x7f;
      }
      else if (param_1 < 0x6785) {
        if (param_1 < 0x6603) {
          if (param_1 < 0x65f7) {
            if (param_1 < 0x61b0) {
              if (param_1 < 0x61a9) {
                if (param_1 == 0x5eec) {
                  return 0x7f;
                }
              }
              else {
                switch(param_1) {
                case 0x61a9:
                case 0x61ae:
                case 0x61af:
                  return 0x14;
                case 0x61aa:
                  return 0xe;
                case 0x61ab:
                  return 0x26;
                case 0x61ac:
                  return 0x15;
                }
              }
            }
            else if (param_1 < 0x6593) {
              if (25999 < param_1) {
                return 0x14;
              }
            }
            else if (param_1 - 0x6594U < 3) {
              return 0x14;
            }
          }
          else {
            switch(param_1) {
            case 0x65f7:
            case 0x6600:
              return 0xe;
            case 0x65fa:
            case 0x6602:
              return 0x40;
            case 0x65fb:
              return 0x42;
            case 0x65fc:
              uVar2 = 0x41;
              break;
            case 0x65fe:
              return 0x15;
            case 0x65ff:
              uVar2 = 0x31;
              break;
            case 0x6601:
              uVar2 = 0xdb;
            }
          }
        }
        else {
          if (param_1 == 0x6658) {
            return 0xe6;
          }
          switch(param_1) {
          case 0x6720:
          case 0x672a:
            return 4;
          case 0x6721:
          case 0x6725:
            return 0x1e;
          case 0x6722:
          case 0x6726:
            uVar2 = 0x14;
            break;
          case 0x6729:
            return 0xe;
          case 0x672b:
            uVar2 = 0xe5;
            break;
          case 0x672c:
            uVar2 = 0x33;
            break;
          case 0x672d:
            uVar2 = 0xed;
          }
        }
      }
      else if (param_1 < 0x6991) {
        if (param_1 < 0x6917) {
          if (param_1 < 0x68bf) {
            if (param_1 < 0x68b0) {
              if (param_1 == 0x67e8) {
                return 0x7f;
              }
              if (param_1 == 0x684c) {
                return 4;
              }
            }
            else {
              switch(param_1) {
              case 0x68b0:
                return 0x40;
              case 0x68b2:
              case 0x68b6:
              case 0x68be:
                return 0xe;
              case 0x68b3:
              case 0x68b8:
              case 0x68ba:
                return 0x23;
              case 0x68b7:
                uVar2 = 0xdb;
                break;
              case 0x68bb:
              case 0x68bc:
                uVar2 = 0x28;
              }
            }
          }
        }
        else {
          switch(param_1) {
          case 0x6917:
          case 0x6918:
            return 0xb0;
          case 0x691a:
            uVar2 = 0x20;
            break;
          case 0x691b:
          case 0x691e:
            uVar2 = 0x1d;
            break;
          case 0x691c:
            uVar2 = 0xe0;
            break;
          case 0x691d:
            uVar2 = 0x1f;
            break;
          case 0x691f:
            uVar2 = 0xee;
            break;
          case 0x6922:
            return 8;
          case 0x692e:
            return 0xe;
          case 0x692f:
            uVar2 = 0x50;
            break;
          case 0x6930:
            uVar2 = 0x2a;
            break;
          case 0x6931:
          case 0x6932:
          case 0x6933:
          case 0x6934:
          case 0x6935:
          case 0x6936:
          case 0x6937:
            uVar2 = 0x28;
            break;
          case 0x6939:
            uVar2 = 0xdf;
            break;
          case 0x6990:
            return 2;
          }
        }
      }
      else {
        if (param_1 == 0x69a1) {
          return 2;
        }
        if (param_1 == 0x69aa) {
          return 0x34;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x6a00:
        return 2;
      case 0x6a04:
      case 0x6a07:
        return 0x1a;
      case 0x6a40:
      case 0x6a41:
      case 0x6a4b:
      case 0x6a53:
      case 0x6a57:
      case 0x6a59:
      case 0x6a66:
        uVar2 = 0x1d;
        break;
      case 0x6a42:
      case 0x6a4a:
        return 8;
      case 0x6a52:
      case 0x6a65:
      case 0x6a69:
      case 0x6aa4:
        return 0xe;
      case 0x6a5d:
      case 0x6a67:
      case 0x6a68:
        uVar2 = 0xe2;
        break;
      case 0x6a6c:
      case 0x6a6d:
      case 0x6a6e:
        uVar2 = 0x14;
        break;
      case 0x6aa5:
      case 0x6aa6:
      case 0x6aa7:
      case 0x6aa8:
        return 0x23;
      }
    }
  }
  else if (param_1 < 0x6e31) {
    if (param_1 < 0x6e28) {
      if (param_1 < 0x6c56) {
        if (param_1 < 0x6bd3) {
          if (param_1 < 0x6b1c) {
            if (0x6b0a < param_1) {
              switch(param_1) {
              case 0x6b0b:
                uVar2 = 0x2a;
                break;
              case 0x6b0c:
                return 0xd;
              case 0x6b14:
              case 0x6b15:
                return 0x1a;
              case 0x6b17:
                return 0x12;
              case 0x6b19:
              case 0x6b1a:
                return 4;
              case 0x6b1b:
                uVar2 = 0xdb;
              }
            }
          }
          else {
            if (param_1 == 0x6b6c) {
              return 0x28;
            }
            if (param_1 == 0x6b6d) {
              return 0xd;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x6bd3:
          case 0x6bd9:
            return 0x23;
          case 0x6bd4:
          case 0x6bd5:
            return 0xef;
          case 0x6bd8:
            return 0x52;
          case 0x6c34:
          case 0x6c35:
          case 0x6c36:
          case 0x6c37:
            uVar2 = 0xf0;
            break;
          case 0x6c38:
            uVar2 = 0x27;
            break;
          case 0x6c39:
            return 4;
          case 0x6c3a:
            uVar2 = 8;
            break;
          case 0x6c46:
            return 0x34;
          case 0x6c4b:
          case 0x6c4d:
          case 0x6c4e:
          case 0x6c4f:
          case 0x6c50:
          case 0x6c54:
          case 0x6c55:
            uVar2 = 0x28;
            break;
          case 0x6c4c:
            uVar2 = 0x13;
            break;
          case 0x6c51:
            uVar2 = 0x25;
          }
        }
      }
      else {
        if (param_1 == 0x6cfe) {
          return 0x34;
        }
        if (param_1 < 0x6cff) {
          if (param_1 == 0x6c99) {
            return 0x1e;
          }
          if (param_1 == 0x6cfc) {
            return 0xb2;
          }
        }
        else {
          switch(param_1) {
          case 0x6dca:
            return 2;
          case 0x6dcb:
          case 0x6dcd:
          case 0x6dcf:
          case 0x6dd1:
            return 0x46;
          }
        }
      }
    }
    else {
      switch(param_1) {
      case 0x6e28:
        return 0xf3;
      case 0x6e29:
        return 0xe2;
      case 0x6e2d:
        uVar2 = 0xea;
        break;
      case 0x6e2f:
        return 8;
      case 0x6e30:
        return 0xe;
      }
    }
  }
  else if (param_1 < 0x6f62) {
    if (0x6e8b < param_1) {
      switch(param_1) {
      case 0x6e8c:
      case 0x6e8d:
        return 0xf1;
      case 0x6e8e:
      case 0x6f00:
        return 0x27;
      case 0x6e8f:
        uVar2 = 4;
        break;
      case 0x6e90:
      case 0x6f07:
        return 8;
      case 0x6e93:
      case 0x6e95:
        uVar2 = 0x25;
        break;
      case 0x6e9b:
        return 0xe;
      case 0x6e9c:
      case 0x6e9d:
      case 0x6e9e:
        uVar2 = 0x28;
        break;
      case 0x6ef0:
        uVar2 = 199;
        break;
      case 0x6ef1:
      case 0x6ef2:
      case 0x6ef4:
      case 0x6ef5:
      case 0x6ef6:
      case 0x6ef9:
      case 0x6efa:
      case 0x6efc:
        uVar2 = 0x1d;
        break;
      case 0x6eff:
        uVar2 = 0x26;
        break;
      case 0x6f54:
        uVar2 = 0x9b;
        break;
      case 0x6f55:
      case 0x6f57:
      case 0x6f58:
      case 0x6f59:
      case 0x6f5a:
      case 0x6f5b:
      case 0x6f5c:
      case 0x6f5d:
      case 0x6f5e:
      case 0x6f5f:
      case 0x6f60:
        uVar2 = 0x9c;
        break;
      case 0x6f56:
        return 0xe2;
      case 0x6f61:
        uVar2 = 0x46;
      }
    }
  }
  else if (param_1 < 0x6fcb) {
    if (0x6fb7 < param_1) {
      switch(param_1) {
      case 0x6fb8:
        return 0xe2;
      case 0x6fbb:
        return 0x34;
      case 0x6fc0:
      case 0x6fca:
        return 0xe;
      case 0x6fc8:
        return 8;
      case 0x6fc9:
        uVar2 = 0xea;
      }
    }
  }
  else if (param_1 - 0x701cU < 4) {
    return 0xdf;
  }
  return uVar2;
}





















/* IsXarBlockVisiblySolid(int) */

int IsXarBlockVisiblySolid(int param_1)

{ 
  if (0x3a9a < param_1) {
    if (param_1 < 0x5024) {
      if (param_1 < 0x4fb0) {
        if (param_1 < 0x4667) {
          if (param_1 < 0x3cf0) {
            if (param_1 < 0x3bcd) {
              if (0x3bc3 < param_1) {
                switch(param_1) {
                case 0x3bc5:
                case 0x3bca:
                case 0x3bcb:
                  return 0;
                default:
                  return 1;
                }
              }
              if (param_1 < 0x3b06) {
                if (0x3afb < param_1) {
                  switch(param_1) {
                  case 0x3afd:
                  case 0x3aff:
                    return 0;
                  default:
                    return 1;
                  }
                }
              }
              else {
                if (param_1 == 0x3b61) {
                  return 0;
                }
                if (param_1 < 0x3b62) {
                  if (param_1 == 0x3b60) {
                    return 1;
                  }
                }
                else if (param_1 - 0x3b62U < 5) {
                  return 1;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x3c28:
              case 0x3c8c:
              case 0x3c8d:
              case 0x3c8e:
              case 0x3c90:
              case 0x3c91:
              case 0x3c94:
              case 0x3c97:
              case 0x3c98:
              case 0x3c99:
              case 0x3c9b:
                return 1;
              case 0x3c8f:
              case 0x3c92:
              case 0x3c93:
              case 0x3c95:
              case 0x3c96:
              case 0x3c9a:
                return 0;
              }
            }
          }
          else {
            switch(param_1) {
            case 0x3cf0:
            case 0x3cf1:
            case 0x3cf2:
            case 0x3cf3:
            case 0x3cf4:
            case 0x3cf5:
            case 0x3cf6:
            case 0x3cf7:
            case 0x3cf8:
            case 0x3cf9:
            case 0x3d54:
            case 0x3d55:
            case 0x3d56:
            case 0x3d57:
            case 0x3d59:
            case 0x3d5a:
            case 0x3d5b:
            case 0x3d5d:
            case 0x3d5e:
            case 0x3d5f:
            case 0x3d61:
            case 0x3d62:
            case 0x3d63:
            case 0x3d65:
            case 0x3d66:
            case 0x3d67:
            case 0x3d69:
            case 0x3d6a:
            case 0x3d6b:
            case 0x3d6d:
            case 0x3d6e:
            case 0x3d6f:
            case 0x3d71:
            case 0x3d72:
            case 0x3d73:
            case 0x3d75:
            case 0x3d76:
            case 0x3d77:
            case 0x3d79:
            case 0x3d7a:
            case 0x3d7b:
            case 0x3d7d:
            case 0x3d7e:
            case 0x3d7f:
            case 0x3d81:
            case 0x3d82:
            case 0x3d83:
            case 0x3d85:
            case 0x3d86:
            case 0x3d87:
            case 0x3d89:
            case 0x3d8a:
            case 0x3d8b:
            case 0x3d8d:
            case 0x3d8e:
            case 0x3d8f:
            case 0x3d91:
            case 0x3d92:
            case 0x3d93:
            case 0x3d95:
            case 0x3d96:
            case 0x3d97:
            case 0x3d99:
            case 0x3d9a:
            case 0x3d9b:
            case 0x3d9d:
            case 0x3d9e:
            case 0x3d9f:
            case 0x3da1:
            case 0x3da2:
            case 0x3da3:
            case 0x3da5:
            case 0x3da6:
            case 0x3da7:
            case 0x3da9:
            case 0x3daa:
            case 0x3dab:
            case 0x3dad:
            case 0x3dae:
            case 0x3daf:
            case 0x3db1:
            case 0x3db8:
            case 0x3db9:
            case 0x3dba:
            case 0x3dc0:
            case 0x3e1c:
            case 0x3e1e:
            case 0x3e20:
            case 0x3e22:
            case 0x3e24:
            case 0x3e26:
            case 0x3e28:
            case 0x3e2a:
            case 0x3e2c:
            case 0x3e2e:
            case 0x3e30:
            case 0x3e32:
            case 0x3e34:
            case 0x3e36:
            case 0x3e38:
            case 0x3e3a:
            case 0x3e3c:
            case 0x3e3e:
            case 0x3e40:
            case 0x3e42:
            case 0x3e44:
            case 0x3e46:
            case 0x3e48:
            case 0x3e4a:
            case 0x3e4c:
            case 0x3e4e:
            case 0x3e50:
            case 0x3e51:
            case 0x3e53:
            case 0x3e57:
            case 0x3e58:
            case 0x3e5a:
            case 0x3e5b:
            case 0x3e5c:
            case 0x3e5d:
            case 0x3e60:
            case 0x3e81:
            case 0x3e82:
            case 0x3e83:
            case 0x3ee9:
            case 0x3f48:
            case 0x3f49:
            case 0x3f4a:
            case 0x3f4b:
            case 0x3f51:
            case 0x3f53:
            case 0x3f54:
            case 0x3f55:
            case 0x3f56:
            case 0x3f57:
            case 0x4018:
            case 0x4079:
            case 0x407a:
            case 0x40d8:
            case 0x40d9:
            case 0x40da:
            case 0x40de:
            case 0x40e3:
            case 0x40e4:
            case 0x40e8:
            case 0x40eb:
            case 0x40ed:
            case 0x40ef:
            case 0x40f1:
            case 0x40f2:
            case 0x40f3:
            case 0x40f5:
            case 0x40f6:
            case 0x40f7:
            case 0x40fb:
            case 0x40fe:
            case 0x4100:
            case 0x4102:
            case 0x4104:
            case 0x4106:
            case 0x4107:
            case 0x4108:
            case 0x4109:
            case 0x410a:
            case 0x413c:
            case 0x413f:
            case 0x4140:
            case 0x41a2:
            case 0x41a4:
            case 0x41a5:
            case 0x41a8:
            case 0x41a9:
            case 0x41aa:
            case 0x4204:
            case 0x4205:
            case 0x4206:
            case 0x420b:
            case 0x420c:
            case 17000:
            case 0x4269:
            case 0x426a:
            case 0x426b:
            case 0x426c:
            case 0x426d:
            case 0x426e:
            case 0x426f:
            case 0x4270:
            case 0x4271:
            case 0x4272:
            case 0x4273:
            case 0x4274:
            case 0x4275:
            case 0x4276:
            case 0x4277:
            case 0x4278:
            case 0x4279:
            case 0x427a:
            case 0x427b:
            case 0x427c:
            case 0x427d:
            case 0x427e:
            case 0x427f:
            case 0x4280:
            case 0x4281:
            case 0x4282:
            case 0x4283:
            case 0x42cd:
            case 0x42ce:
            case 0x42d0:
            case 0x4330:
            case 0x4331:
            case 0x4332:
            case 0x4333:
            case 0x4395:
            case 0x4397:
            case 0x4398:
            case 0x4399:
            case 0x439a:
            case 0x439b:
            case 0x439d:
            case 0x439f:
            case 0x43a4:
            case 0x43a6:
            case 0x43a7:
            case 0x43a8:
            case 0x43f8:
            case 0x4405:
            case 0x4406:
            case 0x4407:
            case 0x445c:
            case 0x445d:
            case 0x445e:
            case 0x445f:
            case 0x4460:
            case 0x4461:
            case 0x4465:
            case 0x4468:
            case 0x4469:
            case 0x44c1:
            case 0x44c2:
            case 0x44c3:
            case 0x44c4:
            case 0x44c5:
            case 0x44c6:
            case 0x4524:
            case 0x4525:
            case 0x4527:
            case 0x4528:
            case 0x4588:
            case 0x4589:
            case 0x458a:
            case 0x458c:
            case 0x458d:
            case 0x45ee:
            case 0x45ef:
            case 0x45f0:
            case 0x45f1:
            case 0x45f2:
            case 0x45f3:
            case 0x4651:
            case 0x4654:
            case 0x4661:
            case 0x4663:
              return 1;
            case 0x3d58:
            case 0x3d5c:
            case 0x3d60:
            case 0x3d64:
            case 0x3d68:
            case 0x3d6c:
            case 0x3d70:
            case 0x3d74:
            case 0x3d78:
            case 0x3d7c:
            case 0x3d80:
            case 0x3d84:
            case 0x3d88:
            case 0x3d8c:
            case 0x3d90:
            case 0x3d94:
            case 0x3d98:
            case 0x3d9c:
            case 0x3da0:
            case 0x3da4:
            case 0x3da8:
            case 0x3dac:
            case 0x3db0:
            case 0x3db2:
            case 0x3dbc:
            case 0x3dbd:
            case 0x3dbe:
            case 0x3dbf:
            case 0x3e1d:
            case 0x3e1f:
            case 0x3e21:
            case 0x3e23:
            case 0x3e25:
            case 0x3e27:
            case 0x3e29:
            case 0x3e2b:
            case 0x3e2d:
            case 0x3e2f:
            case 0x3e31:
            case 0x3e33:
            case 0x3e35:
            case 0x3e37:
            case 0x3e39:
            case 0x3e3b:
            case 0x3e3d:
            case 0x3e3f:
            case 0x3e41:
            case 0x3e43:
            case 0x3e45:
            case 0x3e47:
            case 0x3e49:
            case 0x3e4b:
            case 0x3e4d:
            case 0x3e4f:
            case 0x3e52:
            case 0x3e54:
            case 0x3e55:
            case 0x3e56:
            case 0x3e59:
            case 0x3e5e:
            case 0x3e5f:
            case 16000:
            case 0x3ee4:
            case 0x3ee5:
            case 0x3ee6:
            case 0x3ee7:
            case 0x3ee8:
            case 0x3eea:
            case 0x3eeb:
            case 0x3f4c:
            case 0x3f4d:
            case 0x3f4e:
            case 0x3f4f:
            case 0x3f50:
            case 0x3f52:
            case 0x3fac:
            case 0x3fad:
            case 0x3fae:
            case 0x3faf:
            case 0x3fb0:
            case 0x3fb1:
            case 0x3fb4:
            case 0x3fb5:
            case 0x4074:
            case 0x4075:
            case 0x4076:
            case 0x4077:
            case 0x4078:
            case 0x40db:
            case 0x40dc:
            case 0x40dd:
            case 0x40df:
            case 0x40e0:
            case 0x40e1:
            case 0x40e2:
            case 0x40e5:
            case 0x40e6:
            case 0x40e7:
            case 0x40e9:
            case 0x40ea:
            case 0x40ec:
            case 0x40ee:
            case 0x40f0:
            case 0x40f4:
            case 0x40f8:
            case 0x40f9:
            case 0x40fa:
            case 0x40fc:
            case 0x40fd:
            case 0x40ff:
            case 0x4101:
            case 0x4103:
            case 0x4105:
            case 0x413d:
            case 0x413e:
            case 0x4141:
            case 0x4142:
            case 0x41a0:
            case 0x41a1:
            case 0x41a3:
            case 0x4207:
            case 0x4208:
            case 0x4209:
            case 0x420a:
            case 0x42cc:
            case 0x42cf:
            case 0x42d1:
            case 0x42d2:
            case 0x42d3:
            case 0x4394:
            case 0x4396:
            case 0x439c:
            case 0x439e:
            case 0x43a0:
            case 0x43a1:
            case 0x43a2:
            case 0x43a3:
            case 0x43a5:
            case 0x43f9:
            case 0x43fa:
            case 0x43fb:
            case 0x43fc:
            case 0x43fd:
            case 0x43fe:
            case 0x43ff:
            case 0x4400:
            case 0x4401:
            case 0x4402:
            case 0x4403:
            case 0x4404:
            case 0x4462:
            case 0x4463:
            case 0x4464:
            case 0x4466:
            case 0x4467:
            case 0x446a:
            case 0x446b:
            case 0x44c0:
            case 0x44c7:
            case 0x44c8:
            case 0x4526:
            case 0x4529:
            case 0x458b:
            case 0x45ec:
            case 0x45ed:
            case 18000:
            case 0x4652:
            case 0x4653:
            case 0x4655:
            case 0x4656:
            case 0x4657:
            case 0x4658:
            case 0x4659:
            case 0x465a:
            case 0x465b:
            case 0x465c:
            case 0x465d:
            case 0x465e:
            case 0x465f:
            case 0x4660:
            case 0x4662:
            case 0x4664:
            case 0x4665:
            case 0x4666:
              return 0;
            }
          }
        }
        else if (param_1 < 0x4a43) {
          if (0x46b3 < param_1) {
            switch(param_1) {
            case 0x46b4:
            case 0x46b9:
            case 0x46ba:
            case 0x46bb:
            case 0x46be:
            case 0x4718:
            case 0x4723:
            case 0x477f:
            case 0x47e1:
            case 0x47e4:
            case 0x47e5:
            case 0x47e6:
            case 0x47e7:
            case 0x47ea:
            case 0x47ee:
            case 0x47f2:
            case 0x47f3:
            case 0x47f4:
            case 0x47f6:
            case 0x47f8:
            case 0x4847:
            case 0x484c:
            case 0x484d:
            case 0x48aa:
            case 0x48ab:
            case 0x48af:
            case 0x48b0:
            case 0x48b1:
            case 0x48b2:
            case 0x48b3:
            case 0x48b4:
            case 0x48b5:
            case 0x48b6:
            case 0x48b7:
            case 0x48b8:
            case 0x48ba:
            case 0x48bc:
            case 0x48bf:
            case 0x48c1:
            case 0x48c3:
            case 0x490d:
            case 0x490f:
            case 0x4910:
            case 0x4911:
            case 0x4912:
            case 0x4913:
            case 0x4914:
            case 0x4915:
            case 0x4916:
            case 0x4971:
            case 0x4973:
            case 0x4974:
            case 0x4975:
            case 0x4976:
            case 0x4977:
            case 0x4978:
            case 0x4979:
            case 0x49d7:
            case 0x49d8:
            case 0x49d9:
            case 0x49db:
            case 0x49dd:
            case 0x49df:
            case 0x49e0:
            case 0x49e2:
            case 0x49e6:
            case 0x49e8:
            case 0x49ea:
            case 0x49ed:
            case 0x49ef:
            case 0x49f0:
            case 0x4a3a:
            case 0x4a3e:
            case 0x4a3f:
            case 0x4a41:
            case 0x4a42:
              return 0;
            case 0x46b5:
            case 0x46b6:
            case 0x46b7:
            case 0x46b8:
            case 0x46bc:
            case 0x46bd:
            case 0x4719:
            case 0x471a:
            case 0x471b:
            case 0x471c:
            case 0x471d:
            case 0x471e:
            case 0x471f:
            case 0x4720:
            case 0x4721:
            case 0x4722:
            case 0x4724:
            case 0x4725:
            case 0x477c:
            case 0x477d:
            case 0x477e:
            case 0x47e0:
            case 0x47e2:
            case 0x47e3:
            case 0x47e8:
            case 0x47e9:
            case 0x47eb:
            case 0x47ec:
            case 0x47ed:
            case 0x47ef:
            case 0x47f0:
            case 0x47f1:
            case 0x47f5:
            case 0x47f7:
            case 0x47f9:
            case 0x47fa:
            case 0x4844:
            case 0x4845:
            case 0x4846:
            case 0x4848:
            case 0x4849:
            case 0x484a:
            case 0x484b:
            case 0x484e:
            case 0x484f:
            case 0x4850:
            case 0x4851:
            case 0x48a8:
            case 0x48a9:
            case 0x48ac:
            case 0x48ad:
            case 0x48ae:
            case 0x48b9:
            case 0x48bb:
            case 0x48bd:
            case 0x48be:
            case 0x48c0:
            case 0x48c2:
            case 0x490c:
            case 0x490e:
            case 0x4970:
            case 0x4972:
            case 0x49d4:
            case 0x49d5:
            case 0x49d6:
            case 0x49da:
            case 0x49dc:
            case 0x49de:
            case 0x49e1:
            case 0x49e3:
            case 0x49e4:
            case 0x49e5:
            case 0x49e7:
            case 0x49e9:
            case 0x49eb:
            case 0x49ec:
            case 0x49ee:
            case 0x49f1:
            case 19000:
            case 0x4a39:
            case 0x4a3b:
            case 0x4a3c:
            case 0x4a3d:
            case 0x4a40:
              return 1;
            }
          }
        }
        else if (param_1 < 0x4cfa) {
          if (param_1 < 0x4c90) {
            if (param_1 < 0x4b08) {
              if (0x4a9b < param_1) {
                switch(param_1) {
                case 0x4a9c:
                case 0x4a9d:
                case 0x4a9e:
                case 0x4a9f:
                case 0x4aa0:
                case 0x4aa2:
                case 0x4aa3:
                case 0x4aa7:
                case 0x4b00:
                case 0x4b02:
                case 0x4b06:
                case 0x4b07:
                  return 1;
                case 0x4aa1:
                case 0x4aa4:
                case 0x4aa5:
                case 0x4aa6:
                case 0x4b01:
                case 0x4b03:
                case 0x4b04:
                case 0x4b05:
                  return 0;
                }
              }
            }
            else {
              switch(param_1) {
              case 0x4b64:
              case 0x4b65:
              case 0x4b66:
              case 0x4b68:
              case 0x4b6a:
              case 0x4b6b:
              case 0x4b6c:
              case 0x4b6f:
              case 0x4b70:
              case 0x4bc9:
              case 0x4bca:
              case 0x4bcb:
              case 0x4bcd:
              case 0x4bce:
              case 0x4bcf:
              case 0x4bd3:
              case 0x4bd5:
              case 0x4bd8:
              case 0x4c2d:
              case 0x4c2f:
                return 1;
              case 0x4b67:
              case 0x4b69:
              case 0x4b6d:
              case 0x4b6e:
              case 0x4bc8:
              case 0x4bd0:
              case 0x4bd1:
              case 0x4bd2:
              case 0x4bd4:
              case 0x4bd6:
              case 0x4bd7:
              case 0x4c2c:
              case 0x4c2e:
                return 0;
              }
            }
          }
          else {
            switch(param_1) {
            case 0x4c90:
            case 0x4c91:
            case 0x4c92:
            case 0x4c93:
            case 0x4c97:
            case 0x4c98:
            case 0x4c9a:
            case 0x4cf4:
            case 0x4cf5:
            case 0x4cf8:
            case 0x4cf9:
              return 1;
            case 0x4c94:
            case 0x4c95:
            case 0x4c96:
            case 0x4c99:
            case 0x4cf6:
            case 0x4cf7:
              return 0;
            }
          }
        }
        else if (param_1 < 0x4e8f) {
          if (param_1 < 20000) {
            if (param_1 == 0x4dbc) {
              return 0;
            }
            if (param_1 < 0x4dbd) {
              if (param_1 == 0x4d5a) {
                return 1;
              }
              if (param_1 < 0x4d5b) {
                if (param_1 == 0x4d58) {
                  return 1;
                }
                if (param_1 == 0x4d59) {
                  return 0;
                }
              }
              else if (param_1 - 0x4d5bU < 3) {
                return 0;
              }
            }
            else {
              if (param_1 == 0x4dbf) {
                return 0;
              }
              if (param_1 < 0x4dc0) {
                return 1;
              }
              if (param_1 == 0x4dc0) {
                return 1;
              }
            }
          }
          else {
            switch(param_1) {
            case 20000:
            case 0x4e21:
            case 0x4e22:
            case 0x4e23:
            case 0x4e24:
            case 0x4e25:
            case 0x4e28:
            case 0x4e29:
            case 0x4e84:
            case 0x4e85:
            case 0x4e86:
            case 0x4e88:
            case 0x4e89:
            case 0x4e8b:
            case 0x4e8c:
            case 0x4e8d:
            case 0x4e8e:
              return 1;
            case 0x4e26:
            case 0x4e27:
            case 0x4e87:
            case 0x4e8a:
              return 0;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x4ee8:
          case 0x4ee9:
          case 0x4eea:
          case 0x4eeb:
          case 0x4eef:
          case 0x4ef1:
          case 0x4ef3:
          case 0x4f52:
          case 0x4f55:
          case 0x4f56:
          case 0x4f57:
          case 0x4f58:
          case 0x4f59:
            return 1;
          case 0x4eec:
          case 0x4eed:
          case 0x4eee:
          case 0x4ef0:
          case 0x4ef2:
          case 0x4ef4:
          case 0x4ef5:
          case 0x4ef6:
          case 0x4ef7:
          case 0x4ef8:
          case 0x4ef9:
          case 0x4f4c:
          case 0x4f4d:
          case 0x4f4e:
          case 0x4f4f:
          case 0x4f50:
          case 0x4f51:
          case 0x4f53:
          case 0x4f54:
            return 0;
          }
        }
      }
      else {
        switch(param_1) {
        case 0x4fb0:
        case 0x4fb1:
        case 0x4fb2:
        case 0x4fb3:
        case 0x4fb4:
        case 0x4fb5:
        case 0x4fb6:
        case 0x4fb9:
        case 0x5014:
        case 0x5015:
        case 0x5016:
        case 0x5017:
        case 0x5018:
        case 0x5019:
        case 0x501a:
        case 0x501c:
        case 0x501d:
        case 0x5020:
        case 0x5021:
        case 0x5023:
          return 1;
        case 0x4fb7:
        case 0x4fb8:
        case 0x501b:
        case 0x501e:
        case 0x501f:
        case 0x5022:
          return 0;
        }
      }
    }
    else if (param_1 < 0x5eef) {
      if (param_1 < 0x5d5c) {
        if (param_1 < 0x56c4) {
          if (0x56b7 < param_1) {
            switch(param_1) {
            case 0x56b9:
            case 0x56bb:
              return 1;
            default:
              return 0;
            }
          }
          if (param_1 < 0x54ca) {
            if (param_1 < 0x52d0) {
              if (param_1 < 0x527a) {
                if (param_1 < 0x51a4) {
                  if (param_1 < 0x50e0) {
                    if (0x5077 < param_1) {
                      switch(param_1) {
                      case 0x5078:
                      case 0x5079:
                      case 0x507b:
                      case 0x507c:
                      case 0x507e:
                      case 0x507f:
                      case 0x50dd:
                      case 0x50de:
                        return 0;
                      case 0x507a:
                      case 0x507d:
                      case 0x5080:
                      case 0x50dc:
                      case 0x50df:
                        return 1;
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case 0x5140:
                    case 0x5142:
                    case 0x514e:
                    case 0x514f:
                      return 1;
                    case 0x5141:
                    case 0x5143:
                    case 0x5144:
                    case 0x5145:
                    case 0x5146:
                    case 0x5147:
                    case 0x5148:
                    case 0x5149:
                    case 0x514a:
                    case 0x514b:
                    case 0x514c:
                    case 0x514d:
                      return 0;
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case 0x51a4:
                  case 0x51a7:
                  case 0x51a8:
                  case 0x51a9:
                  case 0x51aa:
                  case 0x51ab:
                  case 0x51ac:
                  case 0x51ad:
                  case 0x51ae:
                  case 0x51af:
                  case 0x51b1:
                  case 0x51b2:
                  case 0x51b3:
                  case 0x51b4:
                  case 0x51b5:
                  case 0x51b6:
                  case 0x51b7:
                  case 0x51b8:
                  case 0x51b9:
                  case 0x51ba:
                  case 0x51bb:
                  case 0x51bc:
                  case 0x51bd:
                  case 0x51be:
                  case 0x51bf:
                  case 0x51c0:
                  case 0x51c1:
                  case 0x51c2:
                  case 0x51c3:
                  case 0x51c4:
                  case 0x51c5:
                  case 0x51c6:
                  case 0x51c7:
                  case 0x520d:
                  case 0x520e:
                  case 0x520f:
                  case 0x5210:
                  case 0x5213:
                  case 0x5214:
                  case 0x5215:
                  case 0x5216:
                  case 0x5217:
                  case 0x5218:
                  case 0x5219:
                  case 0x521a:
                  case 0x521b:
                  case 0x521c:
                  case 0x521d:
                  case 0x521e:
                  case 0x521f:
                  case 0x5220:
                  case 0x5221:
                  case 0x5222:
                  case 0x5223:
                  case 0x5224:
                  case 0x5225:
                  case 0x5235:
                  case 0x5238:
                  case 0x5239:
                  case 0x526e:
                  case 0x526f:
                  case 0x5270:
                  case 0x5271:
                  case 0x5272:
                  case 0x5273:
                  case 0x5274:
                  case 0x5277:
                  case 0x5278:
                    return 0;
                  case 0x51a5:
                  case 0x51a6:
                  case 0x51b0:
                  case 21000:
                  case 0x5209:
                  case 0x520a:
                  case 0x520b:
                  case 0x520c:
                  case 0x5211:
                  case 0x5212:
                  case 0x5236:
                  case 0x5237:
                  case 0x523b:
                  case 0x526c:
                  case 0x526d:
                  case 0x5275:
                  case 0x5276:
                  case 0x5279:
                    return 1;
                  }
                }
              }
            }
            else {
              switch(param_1) {
              case 0x52d0:
              case 0x52d1:
              case 0x52d2:
              case 0x52d3:
              case 0x52d4:
              case 0x52d5:
              case 0x52d6:
              case 0x52d7:
              case 0x52d8:
              case 0x52db:
              case 0x52dd:
              case 0x52de:
              case 0x52df:
              case 0x52e2:
              case 0x52e5:
              case 0x5347:
              case 0x534c:
              case 0x5350:
              case 0x5398:
              case 0x5399:
              case 0x539b:
              case 0x539e:
              case 0x539f:
              case 0x53fc:
              case 0x53fd:
              case 0x5400:
              case 0x5401:
              case 0x5403:
              case 0x5405:
              case 0x5407:
              case 0x5468:
              case 0x546d:
              case 0x546f:
              case 0x5471:
              case 0x54c4:
              case 0x54c6:
              case 0x54c7:
                return 1;
              case 0x52d9:
              case 0x52da:
              case 0x52dc:
              case 0x52e0:
              case 0x52e1:
              case 0x52e3:
              case 0x52e4:
              case 0x52e6:
              case 0x52e7:
              case 0x52e8:
              case 0x5334:
              case 0x5335:
              case 0x5336:
              case 0x5337:
              case 0x5338:
              case 0x5339:
              case 0x533a:
              case 0x533b:
              case 0x533c:
              case 0x533d:
              case 0x533e:
              case 0x533f:
              case 0x5340:
              case 0x5341:
              case 0x5342:
              case 0x5343:
              case 0x5344:
              case 0x5345:
              case 0x5346:
              case 0x5348:
              case 0x5349:
              case 0x534a:
              case 0x534b:
              case 0x534d:
              case 0x534e:
              case 0x534f:
              case 0x5351:
              case 0x5352:
              case 0x5353:
              case 0x539a:
              case 0x539c:
              case 0x539d:
              case 0x53a0:
              case 0x53a1:
              case 0x53a2:
              case 0x53a3:
              case 0x53fe:
              case 0x53ff:
              case 0x5402:
              case 0x5404:
              case 0x5406:
              case 0x5460:
              case 0x5461:
              case 0x5462:
              case 0x5463:
              case 0x5464:
              case 0x5465:
              case 0x5466:
              case 0x5467:
              case 0x5469:
              case 0x546a:
              case 0x546b:
              case 0x546c:
              case 0x546e:
              case 0x5470:
              case 0x54c5:
              case 0x54c8:
              case 0x54c9:
                return 0;
              }
            }
          }
          else {
            if (param_1 == 22000) {
              return 0;
            }
            if (param_1 < 0x55f1) {
              if (param_1 < 0x5531) {
                if (0x5527 < param_1) {
                  switch(param_1) {
                  case 0x552b:
                  case 0x552c:
                  case 0x552d:
                  case 0x552f:
                    return 0;
                  default:
                    return 1;
                  }
                }
              }
              else if (param_1 < 0x5596) {
                if (0x558b < param_1) {
                  return 0;
                }
              }
              else if (param_1 - 0x5596U < 6) {
                return 1;
              }
            }
            else {
              if (param_1 == 0x5654) {
                return 1;
              }
              if (param_1 < 0x5655) {
                if (param_1 == 0x55fa) {
                  return 0;
                }
                if (param_1 < 0x55fb) {
                  return 1;
                }
                if (param_1 - 0x55fbU < 2) {
                  return 1;
                }
              }
              else {
                if (param_1 == 0x5655) {
                  return 0;
                }
                if (param_1 - 0x5656U < 4) {
                  return 1;
                }
              }
            }
          }
        }
        else if (param_1 < 0x5d0e) {
          if (param_1 < 0x5b04) {
            if (param_1 < 0x5aa8) {
              if (param_1 < 0x5910) {
                if (param_1 < 0x57e8) {
                  if (0x57e3 < param_1) {
                    return 1;
                  }
                  if (param_1 < 0x5725) {
                    if (0x571b < param_1) {
                      switch(param_1) {
                      case 0x571d:
                      case 0x571f:
                        return 1;
                      default:
                        return 0;
                      }
                    }
                  }
                  else if (param_1 < 0x5783) {
                    if (0x5780 < param_1) {
                      return 1;
                    }
                    if (param_1 == 0x5780) {
                      return 0;
                    }
                  }
                  else if (param_1 == 0x5783) {
                    return 0;
                  }
                }
                else if (param_1 < 0x584e) {
                  if (0x584b < param_1) {
                    return 1;
                  }
                  if (param_1 == 0x5848) {
                    return 1;
                  }
                  if (param_1 - 0x5849U < 3) {
                    return 0;
                  }
                }
                else {
                  if (param_1 == 0x58ac) {
                    return 1;
                  }
                  if (param_1 < 0x58ad) {
                    if (param_1 - 0x584eU < 3) {
                      return 0;
                    }
                  }
                  else if (param_1 - 0x58adU < 0xc) {
                    return 0;
                  }
                }
              }
              else {
                switch(param_1) {
                case 0x5910:
                case 0x5911:
                case 0x5912:
                case 0x5913:
                case 0x5915:
                case 0x5916:
                case 0x5917:
                case 0x5918:
                case 0x5919:
                case 0x591a:
                case 0x5974:
                case 0x5975:
                case 0x5976:
                case 0x5977:
                case 0x5978:
                case 0x5979:
                case 0x597c:
                case 0x597e:
                case 0x597f:
                case 0x5980:
                case 0x5985:
                case 0x5986:
                case 0x5987:
                case 0x5988:
                case 0x598a:
                case 0x598b:
                case 0x598c:
                case 0x598d:
                case 0x598e:
                case 23000:
                case 0x59da:
                case 0x59db:
                case 0x59dc:
                case 0x59dd:
                case 0x59de:
                case 0x59df:
                case 0x59e0:
                case 0x59e1:
                case 0x59e2:
                case 0x59e3:
                case 0x59e4:
                case 0x59e5:
                case 0x59e8:
                case 0x59e9:
                case 0x59eb:
                case 0x59ec:
                case 0x59ee:
                case 0x59ef:
                case 0x59f0:
                case 0x59f5:
                case 0x59f6:
                case 0x5a3f:
                case 0x5a40:
                case 0x5aa4:
                case 0x5aa5:
                  return 1;
                case 0x5914:
                case 0x591b:
                case 0x591c:
                case 0x597a:
                case 0x597b:
                case 0x597d:
                case 0x5981:
                case 0x5982:
                case 0x5983:
                case 0x5984:
                case 0x5989:
                case 0x59d9:
                case 0x59e6:
                case 0x59e7:
                case 0x59ea:
                case 0x59ed:
                case 0x59f1:
                case 0x59f2:
                case 0x59f3:
                case 0x59f4:
                case 0x59f7:
                case 0x5a3c:
                case 0x5a3d:
                case 0x5a3e:
                case 0x5aa0:
                case 0x5aa1:
                case 0x5aa2:
                case 0x5aa3:
                case 0x5aa6:
                case 0x5aa7:
                  return 0;
                }
              }
            }
          }
          else {
            switch(param_1) {
            case 0x5b04:
            case 0x5b05:
            case 0x5b06:
            case 0x5b07:
            case 0x5b08:
            case 0x5b09:
            case 0x5b0a:
            case 0x5b0b:
            case 0x5b0c:
            case 0x5b0d:
            case 0x5b0e:
            case 0x5b0f:
            case 0x5b10:
            case 0x5b11:
            case 0x5b12:
            case 0x5b13:
            case 0x5b14:
            case 0x5b15:
            case 0x5b16:
            case 0x5b17:
            case 0x5b68:
            case 0x5b6a:
            case 0x5b6c:
            case 0x5b6e:
            case 0x5b6f:
            case 0x5b70:
            case 0x5b71:
            case 0x5b72:
            case 0x5b73:
            case 0x5b74:
            case 0x5bcc:
            case 0x5bcf:
            case 0x5c31:
            case 0x5c32:
            case 0x5c35:
            case 0x5c37:
            case 0x5c39:
            case 0x5c3b:
            case 0x5c3e:
            case 0x5c3f:
            case 0x5c41:
            case 0x5c42:
            case 0x5c94:
            case 0x5c95:
            case 0x5c96:
            case 0x5c97:
            case 0x5c98:
            case 0x5c9a:
            case 0x5c9b:
            case 0x5c9d:
            case 0x5c9e:
            case 0x5c9f:
            case 0x5ca0:
            case 0x5ca1:
            case 0x5ca2:
            case 0x5ca6:
            case 0x5ca7:
            case 0x5ca8:
            case 0x5cf8:
            case 0x5cf9:
            case 0x5cfb:
            case 0x5cfc:
            case 0x5cfd:
            case 0x5d00:
            case 0x5d02:
            case 0x5d04:
            case 0x5d06:
            case 0x5d08:
            case 0x5d0c:
            case 0x5d0d:
              return 1;
            case 0x5b69:
            case 0x5b6b:
            case 0x5b6d:
            case 0x5bcd:
            case 0x5bce:
            case 0x5bd0:
            case 0x5c30:
            case 0x5c33:
            case 0x5c34:
            case 0x5c36:
            case 0x5c38:
            case 0x5c3a:
            case 0x5c3c:
            case 0x5c3d:
            case 0x5c40:
            case 0x5c99:
            case 0x5c9c:
            case 0x5ca3:
            case 0x5ca4:
            case 0x5ca5:
            case 0x5cfa:
            case 0x5cfe:
            case 0x5cff:
            case 0x5d01:
            case 0x5d03:
            case 0x5d05:
            case 0x5d07:
            case 0x5d09:
            case 0x5d0a:
            case 0x5d0b:
              return 0;
            }
          }
        }
      }
      else {
        switch(param_1) {
        case 0x5d5c:
        case 0x5d61:
        case 0x5d65:
        case 0x5d68:
        case 0x5d69:
        case 0x5d6d:
        case 0x5d73:
        case 0x5d74:
        case 0x5d76:
        case 0x5d79:
        case 0x5d7a:
        case 0x5d7b:
        case 0x5d80:
        case 0x5d82:
        case 0x5d87:
        case 0x5d8b:
        case 0x5d8c:
        case 24000:
        case 0x5e29:
        case 0x5e2b:
        case 0x5e2e:
        case 0x5e8a:
        case 0x5eed:
        case 0x5eee:
          return 0;
        case 0x5d5d:
        case 0x5d5e:
        case 0x5d5f:
        case 0x5d60:
        case 0x5d62:
        case 0x5d63:
        case 0x5d64:
        case 0x5d66:
        case 0x5d67:
        case 0x5d6a:
        case 0x5d6b:
        case 0x5d6c:
        case 0x5d6e:
        case 0x5d6f:
        case 0x5d70:
        case 0x5d71:
        case 0x5d72:
        case 0x5d75:
        case 0x5d77:
        case 0x5d78:
        case 0x5d7c:
        case 0x5d7d:
        case 0x5d7e:
        case 0x5d7f:
        case 0x5d81:
        case 0x5d83:
        case 0x5d84:
        case 0x5d85:
        case 0x5d86:
        case 0x5d88:
        case 0x5d89:
        case 0x5d8a:
        case 0x5d8d:
        case 0x5d8e:
        case 0x5d8f:
        case 0x5d90:
        case 0x5d91:
        case 0x5d92:
        case 0x5e24:
        case 0x5e25:
        case 0x5e26:
        case 0x5e27:
        case 0x5e28:
        case 0x5e2a:
        case 0x5e2c:
        case 0x5e2d:
        case 0x5e2f:
        case 0x5e88:
        case 0x5e89:
        case 0x5eec:
          return 1;
        }
      }
    }
    else if (param_1 < 0x6d06) {
      if (param_1 < 0x67e8) {
        if (param_1 < 0x665b) {
          if (param_1 < 0x65f4) {
            if (param_1 < 0x61b0) {
              if (0x61ad < param_1) {
                return 1;
              }
              if (param_1 == 0x61ad) {
                return 0;
              }
              if (25000 < param_1) {
                return 1;
              }
              if (param_1 == 25000) {
                return 0;
              }
            }
            else if (param_1 - 26000U < 7) {
              return 1;
            }
          }
          else {
            switch(param_1) {
            case 0x65f4:
            case 0x65f5:
            case 0x65f6:
            case 0x65f8:
            case 0x65f9:
            case 0x65fd:
            case 0x6659:
            case 0x665a:
              return 0;
            case 0x65f7:
            case 0x65fa:
            case 0x65fb:
            case 0x65fc:
            case 0x65fe:
            case 0x65ff:
            case 0x6600:
            case 0x6601:
            case 0x6602:
            case 0x6658:
              return 1;
            }
          }
        }
        else if (param_1 < 0x6788) {
          if (param_1 < 0x6720) {
            if (param_1 == 0x66bc) {
              return 1;
            }
            if (param_1 == 0x66bd) {
              return 0;
            }
          }
          else {
            switch(param_1) {
            case 0x6720:
            case 0x6721:
            case 0x6722:
            case 0x6725:
            case 0x6726:
            case 0x6729:
            case 0x672a:
            case 0x672b:
            case 0x672c:
            case 0x672d:
            case 0x6784:
              return 1;
            case 0x6723:
            case 0x6724:
            case 0x6727:
            case 0x6728:
            case 0x6785:
            case 0x6786:
            case 0x6787:
              return 0;
            }
          }
        }
      }
      else {
        switch(param_1) {
        case 0x67e8:
        case 0x684c:
        case 0x68b0:
        case 0x68b2:
        case 0x68b3:
        case 0x68b6:
        case 0x68b7:
        case 0x68b8:
        case 0x68ba:
        case 0x68bb:
        case 0x68bc:
        case 0x68be:
        case 0x691a:
        case 0x691b:
        case 0x691c:
        case 0x691d:
        case 0x691e:
        case 0x691f:
        case 0x6920:
        case 0x6921:
        case 0x6922:
        case 0x6925:
        case 0x6926:
        case 0x6927:
        case 0x692e:
        case 0x692f:
        case 0x6930:
        case 0x6931:
        case 0x6932:
        case 0x6933:
        case 0x6934:
        case 0x6935:
        case 0x6936:
        case 0x6937:
        case 0x6939:
        case 27000:
        case 0x698f:
        case 0x6990:
        case 0x6991:
        case 0x6992:
        case 0x6993:
        case 0x6994:
        case 0x6995:
        case 0x6996:
        case 0x6997:
        case 0x6998:
        case 0x6999:
        case 0x699a:
        case 0x699b:
        case 0x699c:
        case 0x69a1:
        case 0x69a7:
        case 0x69a8:
        case 0x69a9:
        case 0x69aa:
        case 0x69ab:
        case 0x69ac:
        case 0x69ad:
        case 0x69b4:
        case 0x69b5:
        case 0x69b6:
        case 0x69b7:
        case 0x69e0:
        case 0x69e1:
        case 0x69e2:
        case 0x69e3:
        case 0x69e4:
        case 0x69e5:
        case 0x69e6:
        case 0x69e7:
        case 0x69ea:
        case 0x69eb:
        case 0x69f6:
        case 0x69f8:
        case 0x69fe:
        case 0x69ff:
        case 0x6a00:
        case 0x6a01:
        case 0x6a02:
        case 0x6a04:
        case 0x6a05:
        case 0x6a06:
        case 0x6a07:
        case 0x6a08:
        case 0x6a09:
        case 0x6a0b:
        case 0x6a0c:
        case 0x6a0d:
        case 0x6a0e:
        case 0x6a0f:
        case 0x6a10:
        case 0x6a11:
        case 0x6a12:
        case 0x6a13:
        case 0x6a14:
        case 0x6a15:
        case 0x6a16:
        case 0x6a40:
        case 0x6a41:
        case 0x6a42:
        case 0x6a45:
        case 0x6a4a:
        case 0x6a4b:
        case 0x6a4c:
        case 0x6a4d:
        case 0x6a4e:
        case 0x6a52:
        case 0x6a53:
        case 0x6a54:
        case 0x6a57:
        case 0x6a59:
        case 0x6a5c:
        case 0x6a5d:
        case 0x6a5f:
        case 0x6a61:
        case 0x6a63:
        case 0x6a65:
        case 0x6a66:
        case 0x6a67:
        case 0x6a68:
        case 0x6a69:
        case 0x6a6c:
        case 0x6a6d:
        case 0x6a6e:
        case 0x6aa4:
        case 0x6aa5:
        case 0x6aa6:
        case 0x6aa7:
        case 0x6aa8:
        case 0x6b0b:
        case 0x6b0c:
        case 0x6b14:
        case 0x6b15:
        case 0x6b17:
        case 0x6b18:
        case 0x6b19:
        case 0x6b1a:
        case 0x6b1b:
        case 0x6b6c:
        case 0x6b6d:
        case 0x6bd3:
        case 0x6bd4:
        case 0x6bd5:
        case 0x6bd6:
        case 0x6bd8:
        case 0x6bd9:
        case 0x6c34:
        case 0x6c35:
        case 0x6c36:
        case 0x6c37:
        case 0x6c38:
        case 0x6c39:
        case 0x6c3a:
        case 0x6c3d:
        case 0x6c3e:
        case 0x6c41:
        case 0x6c42:
        case 0x6c44:
        case 0x6c46:
        case 0x6c48:
        case 0x6c4a:
        case 0x6c4b:
        case 0x6c4c:
        case 0x6c4d:
        case 0x6c4e:
        case 0x6c4f:
        case 0x6c50:
        case 0x6c51:
        case 0x6c53:
        case 0x6c54:
        case 0x6c55:
        case 0x6c99:
        case 0x6cfc:
        case 0x6cfe:
        case 0x6cff:
        case 0x6d04:
        case 0x6d05:
          return 1;
        case 0x67e9:
        case 0x67ea:
        case 0x684d:
        case 0x684e:
        case 0x684f:
        case 0x6850:
        case 0x6851:
        case 0x6852:
        case 0x68b1:
        case 0x68b4:
        case 0x68b5:
        case 0x68b9:
        case 0x68bd:
        case 0x6914:
        case 0x6915:
        case 0x6916:
        case 0x6917:
        case 0x6918:
        case 0x6919:
        case 0x6923:
        case 0x6924:
        case 0x6928:
        case 0x6929:
        case 0x692a:
        case 0x692b:
        case 0x692c:
        case 0x692d:
        case 0x6979:
        case 0x697a:
        case 0x697b:
        case 0x697c:
        case 0x697d:
        case 0x697e:
        case 0x697f:
        case 0x6980:
        case 0x6981:
        case 0x6982:
        case 0x6983:
        case 0x6984:
        case 0x6985:
        case 0x6986:
        case 0x6987:
        case 0x6988:
        case 0x6989:
        case 0x698a:
        case 0x698b:
        case 0x698c:
        case 0x698d:
        case 0x698e:
        case 0x699d:
        case 0x699e:
        case 0x699f:
        case 0x69a0:
        case 0x69a2:
        case 0x69a3:
        case 0x69a4:
        case 0x69a5:
        case 0x69a6:
        case 0x69ae:
        case 0x69af:
        case 0x69b0:
        case 0x69b1:
        case 0x69b2:
        case 0x69b3:
        case 0x69dc:
        case 0x69dd:
        case 0x69de:
        case 0x69df:
        case 0x69e8:
        case 0x69e9:
        case 0x69ec:
        case 0x69ed:
        case 0x69ee:
        case 0x69ef:
        case 0x69f0:
        case 0x69f1:
        case 0x69f2:
        case 0x69f3:
        case 0x69f4:
        case 0x69f5:
        case 0x69f7:
        case 0x69f9:
        case 0x69fa:
        case 0x69fb:
        case 0x69fc:
        case 0x69fd:
        case 0x6a03:
        case 0x6a0a:
        case 0x6a43:
        case 0x6a44:
        case 0x6a46:
        case 0x6a47:
        case 0x6a48:
        case 0x6a49:
        case 0x6a4f:
        case 0x6a50:
        case 0x6a51:
        case 0x6a55:
        case 0x6a56:
        case 0x6a58:
        case 0x6a5a:
        case 0x6a5b:
        case 0x6a5e:
        case 0x6a60:
        case 0x6a62:
        case 0x6a64:
        case 0x6a6a:
        case 0x6a6b:
        case 0x6a6f:
        case 0x6a70:
        case 0x6a71:
        case 0x6b08:
        case 0x6b09:
        case 0x6b0a:
        case 0x6b0d:
        case 0x6b0e:
        case 0x6b0f:
        case 0x6b10:
        case 0x6b11:
        case 0x6b12:
        case 0x6b13:
        case 0x6b16:
        case 0x6bd0:
        case 0x6bd1:
        case 0x6bd2:
        case 0x6bd7:
        case 0x6bda:
        case 0x6bdb:
        case 0x6bdc:
        case 0x6c3b:
        case 0x6c3c:
        case 0x6c3f:
        case 0x6c40:
        case 0x6c43:
        case 0x6c45:
        case 0x6c47:
        case 0x6c49:
        case 0x6c52:
        case 0x6c98:
        case 0x6c9a:
        case 0x6cfd:
        case 0x6d00:
        case 0x6d01:
        case 0x6d02:
        case 0x6d03:
          return 0;
        }
      }
    }
    else if (param_1 < 0x6f62) {
      if (param_1 < 0x6dc4) {
        if (param_1 - 28000U < 4) {
          return 1;
        }
      }
      else {
        switch(param_1) {
        case 0x6dc4:
        case 0x6dcc:
        case 0x6dce:
        case 0x6dd0:
        case 0x6dd2:
        case 0x6e2b:
        case 0x6e2c:
        case 0x6e91:
        case 0x6e92:
        case 0x6e94:
        case 0x6e96:
        case 0x6e97:
        case 0x6e98:
        case 0x6e99:
        case 0x6e9a:
        case 0x6ef3:
        case 0x6ef8:
        case 0x6efb:
        case 0x6efd:
        case 0x6efe:
        case 0x6f01:
        case 0x6f02:
        case 0x6f06:
          return 0;
        case 0x6dc5:
        case 0x6dc6:
        case 0x6dc7:
        case 0x6dc8:
        case 0x6dc9:
        case 0x6dca:
        case 0x6dcb:
        case 0x6dcd:
        case 0x6dcf:
        case 0x6dd1:
        case 0x6dd3:
        case 0x6dd4:
        case 0x6dd5:
        case 0x6dd6:
        case 0x6dd7:
        case 0x6dd8:
        case 0x6dd9:
        case 0x6dda:
        case 0x6ddb:
        case 0x6ddc:
        case 0x6ddd:
        case 0x6dde:
        case 0x6ddf:
        case 0x6de0:
        case 0x6de1:
        case 0x6de2:
        case 0x6de3:
        case 0x6e28:
        case 0x6e29:
        case 0x6e2a:
        case 0x6e2d:
        case 0x6e2e:
        case 0x6e2f:
        case 0x6e30:
        case 0x6e8c:
        case 0x6e8d:
        case 0x6e8e:
        case 0x6e8f:
        case 0x6e90:
        case 0x6e93:
        case 0x6e95:
        case 0x6e9b:
        case 0x6e9c:
        case 0x6e9d:
        case 0x6e9e:
        case 0x6ef0:
        case 0x6ef1:
        case 0x6ef2:
        case 0x6ef4:
        case 0x6ef5:
        case 0x6ef6:
        case 0x6ef7:
        case 0x6ef9:
        case 0x6efa:
        case 0x6efc:
        case 0x6eff:
        case 0x6f00:
        case 0x6f03:
        case 0x6f04:
        case 0x6f05:
        case 0x6f07:
        case 0x6f08:
        case 0x6f09:
        case 0x6f0a:
        case 0x6f0b:
        case 0x6f0c:
        case 0x6f54:
        case 0x6f55:
        case 0x6f56:
        case 0x6f57:
        case 0x6f58:
        case 0x6f59:
        case 0x6f5a:
        case 0x6f5b:
        case 0x6f5c:
        case 0x6f5d:
        case 0x6f5e:
        case 0x6f5f:
        case 0x6f60:
        case 0x6f61:
          return 1;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x6fb8:
      case 0x6fbb:
      case 0x6fc0:
      case 0x6fc8:
      case 0x6fc9:
      case 0x6fca:
      case 0x701c:
      case 0x701d:
      case 0x701e:
      case 0x701f:
        return 1;
      case 0x6fb9:
      case 0x6fba:
      case 0x6fbc:
      case 0x6fbd:
      case 0x6fbe:
      case 0x6fbf:
      case 0x6fc1:
      case 0x6fc2:
      case 0x6fc3:
      case 0x6fc4:
      case 0x6fc5:
      case 0x6fc6:
      case 0x6fc7:
        return 0;
      }
    }
    goto switchD_0116db29_default;
  }
  if (param_1 < 0x3584) {
    if (0x1a92 < param_1) {
      if (param_1 < 0x264e) {
        if (param_1 < 0x24b8) {
          if (param_1 < 0x2013) {
            if (param_1 < 0x1edc) {
              if (0x1ca1 < param_1) {
                switch(param_1) {
                case 0x1d4c:
                case 0x1db0:
                case 0x1db1:
                case 0x1db2:
                case 0x1db5:
                case 0x1db6:
                case 0x1db7:
                case 0x1db8:
                case 0x1db9:
                case 0x1dba:
                case 0x1dbb:
                case 0x1dbc:
                case 0x1dbd:
                case 0x1dbe:
                case 0x1dbf:
                case 0x1dc1:
                case 0x1dc3:
                case 0x1e15:
                case 0x1e16:
                case 0x1e19:
                case 0x1e1b:
                case 0x1e1d:
                case 0x1e1e:
                case 0x1e1f:
                case 0x1e20:
                case 0x1e22:
                case 0x1e7c:
                case 0x1e80:
                case 0x1e81:
                case 0x1e82:
                case 0x1e83:
                case 0x1e84:
                case 0x1e85:
                case 0x1e86:
                case 0x1e87:
                case 0x1e8a:
                case 0x1e8b:
                case 0x1e8e:
                case 0x1e8f:
                case 0x1e90:
                case 0x1e91:
                case 0x1e92:
                case 0x1e93:
                case 0x1e94:
                case 0x1e96:
                case 0x1e97:
                  return 1;
                case 0x1d4d:
                case 0x1db3:
                case 0x1db4:
                case 0x1dc0:
                case 0x1dc2:
                case 0x1e14:
                case 0x1e17:
                case 0x1e18:
                case 0x1e1a:
                case 0x1e1c:
                case 0x1e21:
                case 0x1e78:
                case 0x1e79:
                case 0x1e7a:
                case 0x1e7b:
                case 0x1e7d:
                case 0x1e7e:
                case 0x1e7f:
                case 0x1e88:
                case 0x1e89:
                case 0x1e8c:
                case 0x1e8d:
                case 0x1e95:
                  return 0;
                case 0x1d4e:
                case 0x1d4f:
                case 0x1d50:
                case 0x1d51:
                case 0x1d52:
                case 0x1d53:
                case 0x1d54:
                case 0x1d55:
                case 0x1d56:
                case 0x1d57:
                case 0x1d58:
                case 0x1d59:
                case 0x1d5a:
                case 0x1d5b:
                case 0x1d5c:
                case 0x1d5d:
                case 0x1d5e:
                case 0x1d5f:
                case 0x1d60:
                case 0x1d61:
                case 0x1d62:
                case 0x1d63:
                case 0x1d64:
                case 0x1d65:
                case 0x1d66:
                case 0x1d67:
                case 0x1d68:
                case 0x1d69:
                case 0x1d6a:
                case 0x1d6b:
                case 0x1d6c:
                case 0x1d6d:
                case 0x1d6e:
                case 0x1d6f:
                case 0x1d70:
                case 0x1d71:
                case 0x1d72:
                case 0x1d73:
                case 0x1d74:
                case 0x1d75:
                case 0x1d76:
                case 0x1d77:
                case 0x1d78:
                case 0x1d79:
                case 0x1d7a:
                case 0x1d7b:
                case 0x1d7c:
                case 0x1d7d:
                case 0x1d7e:
                case 0x1d7f:
                case 0x1d80:
                case 0x1d81:
                case 0x1d82:
                case 0x1d83:
                case 0x1d84:
                case 0x1d85:
                case 0x1d86:
                case 0x1d87:
                case 0x1d88:
                case 0x1d89:
                case 0x1d8a:
                case 0x1d8b:
                case 0x1d8c:
                case 0x1d8d:
                case 0x1d8e:
                case 0x1d8f:
                case 0x1d90:
                case 0x1d91:
                case 0x1d92:
                case 0x1d93:
                case 0x1d94:
                case 0x1d95:
                case 0x1d96:
                case 0x1d97:
                case 0x1d98:
                case 0x1d99:
                case 0x1d9a:
                case 0x1d9b:
                case 0x1d9c:
                case 0x1d9d:
                case 0x1d9e:
                case 0x1d9f:
                case 0x1da0:
                case 0x1da1:
                case 0x1da2:
                case 0x1da3:
                case 0x1da4:
                case 0x1da5:
                case 0x1da6:
                case 0x1da7:
                case 0x1da8:
                case 0x1da9:
                case 0x1daa:
                case 0x1dab:
                case 0x1dac:
                case 0x1dad:
                case 0x1dae:
                case 0x1daf:
                case 0x1dc4:
                case 0x1dc5:
                case 0x1dc6:
                case 0x1dc7:
                case 0x1dc8:
                case 0x1dc9:
                case 0x1dca:
                case 0x1dcb:
                case 0x1dcc:
                case 0x1dcd:
                case 0x1dce:
                case 0x1dcf:
                case 0x1dd0:
                case 0x1dd1:
                case 0x1dd2:
                case 0x1dd3:
                case 0x1dd4:
                case 0x1dd5:
                case 0x1dd6:
                case 0x1dd7:
                case 0x1dd8:
                case 0x1dd9:
                case 0x1dda:
                case 0x1ddb:
                case 0x1ddc:
                case 0x1ddd:
                case 0x1dde:
                case 0x1ddf:
                case 0x1de0:
                case 0x1de1:
                case 0x1de2:
                case 0x1de3:
                case 0x1de4:
                case 0x1de5:
                case 0x1de6:
                case 0x1de7:
                case 0x1de8:
                case 0x1de9:
                case 0x1dea:
                case 0x1deb:
                case 0x1dec:
                case 0x1ded:
                case 0x1dee:
                case 0x1def:
                case 0x1df0:
                case 0x1df1:
                case 0x1df2:
                case 0x1df3:
                case 0x1df4:
                case 0x1df5:
                case 0x1df6:
                case 0x1df7:
                case 0x1df8:
                case 0x1df9:
                case 0x1dfa:
                case 0x1dfb:
                case 0x1dfc:
                case 0x1dfd:
                case 0x1dfe:
                case 0x1dff:
                case 0x1e00:
                case 0x1e01:
                case 0x1e02:
                case 0x1e03:
                case 0x1e04:
                case 0x1e05:
                case 0x1e06:
                case 0x1e07:
                case 0x1e08:
                case 0x1e09:
                case 0x1e0a:
                case 0x1e0b:
                case 0x1e0c:
                case 0x1e0d:
                case 0x1e0e:
                case 0x1e0f:
                case 0x1e10:
                case 0x1e11:
                case 0x1e12:
                case 0x1e13:
                case 0x1e23:
                case 0x1e24:
                case 0x1e25:
                case 0x1e26:
                case 0x1e27:
                case 0x1e28:
                case 0x1e29:
                case 0x1e2a:
                case 0x1e2b:
                case 0x1e2c:
                case 0x1e2d:
                case 0x1e2e:
                case 0x1e2f:
                case 0x1e30:
                case 0x1e31:
                case 0x1e32:
                case 0x1e33:
                case 0x1e34:
                case 0x1e35:
                case 0x1e36:
                case 0x1e37:
                case 0x1e38:
                case 0x1e39:
                case 0x1e3a:
                case 0x1e3b:
                case 0x1e3c:
                case 0x1e3d:
                case 0x1e3e:
                case 0x1e3f:
                case 0x1e40:
                case 0x1e41:
                case 0x1e42:
                case 0x1e43:
                case 0x1e44:
                case 0x1e45:
                case 0x1e46:
                case 0x1e47:
                case 0x1e48:
                case 0x1e49:
                case 0x1e4a:
                case 0x1e4b:
                case 0x1e4c:
                case 0x1e4d:
                case 0x1e4e:
                case 0x1e4f:
                case 0x1e50:
                case 0x1e51:
                case 0x1e52:
                case 0x1e53:
                case 0x1e54:
                case 0x1e55:
                case 0x1e56:
                case 0x1e57:
                case 0x1e58:
                case 0x1e59:
                case 0x1e5a:
                case 0x1e5b:
                case 0x1e5c:
                case 0x1e5d:
                case 0x1e5e:
                case 0x1e5f:
                case 0x1e60:
                case 0x1e61:
                case 0x1e62:
                case 0x1e63:
                case 0x1e64:
                case 0x1e65:
                case 0x1e66:
                case 0x1e67:
                case 0x1e68:
                case 0x1e69:
                case 0x1e6a:
                case 0x1e6b:
                case 0x1e6c:
                case 0x1e6d:
                case 0x1e6e:
                case 0x1e6f:
                case 0x1e70:
                case 0x1e71:
                case 0x1e72:
                case 0x1e73:
                case 0x1e74:
                case 0x1e75:
                case 0x1e76:
                case 0x1e77:
                  goto switchD_0116db29_caseD_45f;
                default:
                  goto switchD_0116db29_default;
                }
              }
              if (param_1 < 0x1af4) goto switchD_0116db29_default;
              switch(param_1) {
              case 0x1af4:
              case 0x1af5:
              case 0x1af6:
              case 0x1af7:
              case 0x1af8:
              case 0x1af9:
              case 0x1afa:
              case 0x1afb:
              case 0x1afc:
              case 0x1afd:
              case 0x1afe:
              case 0x1b00:
              case 0x1b01:
              case 0x1b02:
              case 0x1b04:
              case 7000:
              case 0x1b5e:
              case 0x1b5f:
              case 0x1b60:
              case 0x1b61:
              case 0x1b6a:
              case 0x1b6b:
              case 0x1b6d:
              case 0x1b6f:
              case 0x1bbc:
              case 0x1bbd:
              case 0x1bbe:
              case 0x1bc2:
              case 0x1bc3:
              case 0x1bc5:
              case 0x1bc6:
              case 0x1bc7:
              case 0x1bcd:
              case 0x1bce:
              case 0x1bd2:
              case 0x1bd6:
              case 0x1bd7:
              case 0x1c84:
              case 0x1c85:
              case 0x1c86:
              case 0x1c87:
              case 0x1c91:
              case 0x1c98:
              case 0x1c99:
              case 0x1ca0:
                return 0;
              case 0x1aff:
              case 0x1b03:
              case 0x1b05:
              case 0x1b59:
              case 0x1b5a:
              case 0x1b5b:
              case 0x1b5c:
              case 0x1b5d:
              case 0x1b62:
              case 0x1b63:
              case 0x1b64:
              case 0x1b65:
              case 0x1b66:
              case 0x1b67:
              case 0x1b68:
              case 0x1b69:
              case 0x1b6c:
              case 0x1b6e:
              case 0x1b70:
              case 0x1bbf:
              case 0x1bc0:
              case 0x1bc1:
              case 0x1bc4:
              case 0x1bc8:
              case 0x1bc9:
              case 0x1bca:
              case 0x1bcb:
              case 0x1bcc:
              case 0x1bcf:
              case 0x1bd0:
              case 0x1bd1:
              case 0x1bd3:
              case 0x1bd4:
              case 0x1bd5:
              case 0x1c20:
              case 0x1c21:
              case 0x1c22:
              case 0x1c23:
              case 0x1c24:
              case 0x1c25:
              case 0x1c26:
              case 0x1c88:
              case 0x1c89:
              case 0x1c8a:
              case 0x1c8b:
              case 0x1c8c:
              case 0x1c8d:
              case 0x1c8e:
              case 0x1c8f:
              case 0x1c90:
              case 0x1c92:
              case 0x1c93:
              case 0x1c94:
              case 0x1c95:
              case 0x1c96:
              case 0x1c97:
              case 0x1c9a:
              case 0x1c9b:
              case 0x1c9c:
              case 0x1c9d:
              case 0x1c9e:
              case 0x1c9f:
              case 0x1ca1:
                return 1;
              }
            }
            else {
              switch(param_1) {
              case 0x1edc:
              case 0x1edd:
              case 0x1ede:
              case 0x1edf:
              case 0x1ee0:
              case 0x1ee4:
              case 0x1ee5:
              case 0x1ee7:
              case 0x1ee8:
              case 0x1ee9:
              case 0x1eea:
              case 0x1eeb:
              case 0x1eec:
              case 0x1f42:
              case 0x1f43:
              case 0x1f45:
              case 0x1f46:
              case 0x1f48:
              case 0x1f49:
              case 0x1f4a:
              case 0x1f4c:
              case 0x1f4d:
              case 0x1f4e:
              case 0x1f4f:
              case 0x1f50:
              case 0x1fa5:
              case 0x1fa6:
              case 0x1fa7:
              case 0x1fa8:
              case 0x1fab:
              case 0x1fac:
              case 0x1fad:
              case 0x1faf:
              case 0x1fb0:
              case 0x1fb1:
              case 0x200c:
              case 0x200e:
              case 0x200f:
              case 0x2010:
                return 1;
              case 0x1ee1:
              case 0x1ee2:
              case 0x1ee3:
              case 0x1ee6:
              case 8000:
              case 0x1f41:
              case 0x1f44:
              case 0x1f47:
              case 0x1f4b:
              case 0x1f51:
              case 0x1fa4:
              case 0x1fa9:
              case 0x1faa:
              case 0x1fae:
              case 0x2008:
              case 0x2009:
              case 0x200a:
              case 0x200b:
              case 0x200d:
              case 0x2011:
              case 0x2012:
                return 0;
              }
            }
          }
          else {
            if (0x2204 < param_1) {
              if (param_1 < 0x232b) {
                if (8999 < param_1) {
                  return 1;
                }
                switch(param_1) {
                case 0x2260:
                case 0x2261:
                case 0x2267:
                case 0x2268:
                case 0x22c5:
                case 0x22c8:
                  return 0;
                case 0x2262:
                case 0x2263:
                case 0x2264:
                case 0x2265:
                case 0x2266:
                case 0x2269:
                case 0x226a:
                case 0x226b:
                case 0x226c:
                case 0x226d:
                case 0x22c4:
                case 0x22c6:
                case 0x22c7:
                case 0x22c9:
                  return 1;
                case 0x226e:
                case 0x226f:
                case 0x2270:
                case 0x2271:
                case 0x2272:
                case 0x2273:
                case 0x2274:
                case 0x2275:
                case 0x2276:
                case 0x2277:
                case 0x2278:
                case 0x2279:
                case 0x227a:
                case 0x227b:
                case 0x227c:
                case 0x227d:
                case 0x227e:
                case 0x227f:
                case 0x2280:
                case 0x2281:
                case 0x2282:
                case 0x2283:
                case 0x2284:
                case 0x2285:
                case 0x2286:
                case 0x2287:
                case 0x2288:
                case 0x2289:
                case 0x228a:
                case 0x228b:
                case 0x228c:
                case 0x228d:
                case 0x228e:
                case 0x228f:
                case 0x2290:
                case 0x2291:
                case 0x2292:
                case 0x2293:
                case 0x2294:
                case 0x2295:
                case 0x2296:
                case 0x2297:
                case 0x2298:
                case 0x2299:
                case 0x229a:
                case 0x229b:
                case 0x229c:
                case 0x229d:
                case 0x229e:
                case 0x229f:
                case 0x22a0:
                case 0x22a1:
                case 0x22a2:
                case 0x22a3:
                case 0x22a4:
                case 0x22a5:
                case 0x22a6:
                case 0x22a7:
                case 0x22a8:
                case 0x22a9:
                case 0x22aa:
                case 0x22ab:
                case 0x22ac:
                case 0x22ad:
                case 0x22ae:
                case 0x22af:
                case 0x22b0:
                case 0x22b1:
                case 0x22b2:
                case 0x22b3:
                case 0x22b4:
                case 0x22b5:
                case 0x22b6:
                case 0x22b7:
                case 0x22b8:
                case 0x22b9:
                case 0x22ba:
                case 0x22bb:
                case 0x22bc:
                case 0x22bd:
                case 0x22be:
                case 0x22bf:
                case 0x22c0:
                case 0x22c1:
                case 0x22c2:
                case 0x22c3:
                  goto switchD_0116db29_caseD_45f;
                }
              }
              else if (param_1 < 0x2458) {
                if (0x23f2 < param_1) {
                  switch(param_1) {
                  case 0x23f3:
                  case 0x23f7:
                  case 0x23f9:
                  case 0x23fa:
                  case 0x23fc:
                  case 0x23fd:
                  case 0x23fe:
                  case 0x23ff:
                  case 0x2454:
                  case 0x2455:
                    return 0;
                  case 0x23f4:
                  case 0x23f5:
                  case 0x23f6:
                  case 0x23f8:
                  case 0x23fb:
                  case 0x2400:
                  case 0x2401:
                  case 0x2402:
                  case 0x2456:
                  case 0x2457:
                    return 1;
                  }
                  goto switchD_0116db29_caseD_45f;
                }
                if (param_1 < 0x2330) {
                  return 0;
                }
                if (param_1 - 0x238cU < 3) {
                  return 0;
                }
              }
              goto switchD_0116db29_default;
            }
            if (param_1 < 0x2134) {
              switch(param_1) {
              case 0x206c:
              case 0x206f:
              case 0x2070:
              case 0x2071:
              case 0x2072:
              case 0x2073:
              case 0x2074:
              case 0x2075:
              case 0x2076:
              case 0x2077:
              case 0x2078:
              case 0x2079:
              case 0x207a:
              case 0x207b:
              case 0x207c:
              case 0x207d:
              case 0x207e:
              case 0x207f:
              case 0x2080:
              case 0x2081:
              case 0x2082:
              case 0x20d0:
              case 0x20d2:
              case 0x20d3:
              case 0x20d4:
              case 0x20d6:
              case 0x20d8:
              case 0x20da:
                return 1;
              case 0x206d:
              case 0x206e:
              case 0x20d1:
              case 0x20d5:
              case 0x20d7:
              case 0x20d9:
              case 0x20db:
                return 0;
              case 0x2083:
              case 0x2084:
              case 0x2085:
              case 0x2086:
              case 0x2087:
              case 0x2088:
              case 0x2089:
              case 0x208a:
              case 0x208b:
              case 0x208c:
              case 0x208d:
              case 0x208e:
              case 0x208f:
              case 0x2090:
              case 0x2091:
              case 0x2092:
              case 0x2093:
              case 0x2094:
              case 0x2095:
              case 0x2096:
              case 0x2097:
              case 0x2098:
              case 0x2099:
              case 0x209a:
              case 0x209b:
              case 0x209c:
              case 0x209d:
              case 0x209e:
              case 0x209f:
              case 0x20a0:
              case 0x20a1:
              case 0x20a2:
              case 0x20a3:
              case 0x20a4:
              case 0x20a5:
              case 0x20a6:
              case 0x20a7:
              case 0x20a8:
              case 0x20a9:
              case 0x20aa:
              case 0x20ab:
              case 0x20ac:
              case 0x20ad:
              case 0x20ae:
              case 0x20af:
              case 0x20b0:
              case 0x20b1:
              case 0x20b2:
              case 0x20b3:
              case 0x20b4:
              case 0x20b5:
              case 0x20b6:
              case 0x20b7:
              case 0x20b8:
              case 0x20b9:
              case 0x20ba:
              case 0x20bb:
              case 0x20bc:
              case 0x20bd:
              case 0x20be:
              case 0x20bf:
              case 0x20c0:
              case 0x20c1:
              case 0x20c2:
              case 0x20c3:
              case 0x20c4:
              case 0x20c5:
              case 0x20c6:
              case 0x20c7:
              case 0x20c8:
              case 0x20c9:
              case 0x20ca:
              case 0x20cb:
              case 0x20cc:
              case 0x20cd:
              case 0x20ce:
              case 0x20cf:
                goto switchD_0116db29_caseD_45f;
              default:
                goto switchD_0116db29_default;
              }
            }
            switch(param_1) {
            case 0x2134:
            case 0x2137:
            case 0x213a:
            case 0x213c:
            case 0x213e:
            case 0x21a1:
            case 0x21a2:
            case 0x21a3:
            case 0x21a4:
            case 0x21a5:
            case 0x21a6:
            case 0x21a7:
            case 0x21a8:
            case 0x21a9:
            case 0x21aa:
            case 0x21ac:
            case 0x21ad:
            case 0x21ae:
            case 0x21af:
            case 0x21b0:
            case 0x21b2:
            case 0x21b3:
            case 0x21b5:
            case 0x21b6:
            case 0x21b7:
            case 0x21bd:
            case 0x21be:
            case 0x21bf:
            case 0x21c0:
            case 0x21fc:
            case 0x21fd:
            case 0x2201:
            case 0x2202:
            case 0x2203:
            case 0x2204:
              return 1;
            case 0x2135:
            case 0x2136:
            case 0x2138:
            case 0x2139:
            case 0x213b:
            case 0x213d:
            case 0x2198:
            case 0x2199:
            case 0x219a:
            case 0x219b:
            case 0x219c:
            case 0x219d:
            case 0x219e:
            case 0x219f:
            case 0x21a0:
            case 0x21ab:
            case 0x21b1:
            case 0x21b4:
            case 0x21b8:
            case 0x21b9:
            case 0x21ba:
            case 0x21bb:
            case 0x21bc:
            case 0x21c1:
            case 0x21fe:
            case 0x21ff:
            case 0x2200:
              return 0;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x24b8:
          case 0x24ba:
          case 0x24bb:
          case 0x24bd:
          case 0x24be:
          case 0x24c0:
          case 0x24c2:
          case 0x24c3:
          case 0x24c4:
          case 0x24c5:
          case 0x24c6:
          case 0x24ca:
          case 0x24ce:
          case 0x24d0:
          case 0x24d3:
          case 0x24d4:
          case 0x24d6:
          case 0x24d7:
          case 0x24d8:
          case 0x24da:
          case 0x251c:
          case 0x251f:
          case 0x2520:
          case 0x2521:
          case 0x2522:
          case 0x2523:
          case 0x2525:
          case 0x2581:
          case 0x2582:
          case 0x2583:
          case 0x2584:
          case 0x2585:
          case 0x2586:
          case 0x25e7:
          case 0x25e9:
          case 0x25ea:
          case 0x25eb:
          case 0x25ec:
          case 0x25ed:
          case 0x25ee:
          case 0x25ef:
            return 0;
          case 0x24b9:
          case 0x24bc:
          case 0x24bf:
          case 0x24c1:
          case 0x24c7:
          case 0x24c8:
          case 0x24c9:
          case 0x24cb:
          case 0x24cc:
          case 0x24cd:
          case 0x24cf:
          case 0x24d1:
          case 0x24d2:
          case 0x24d5:
          case 0x24d9:
          case 0x24db:
          case 0x24dc:
          case 0x24dd:
          case 0x24de:
          case 0x24df:
          case 0x24e0:
          case 0x24e1:
          case 0x24e2:
          case 0x24e3:
          case 0x24e4:
          case 0x24e5:
          case 0x251d:
          case 0x251e:
          case 0x2524:
          case 0x2526:
          case 0x2527:
          case 0x2528:
          case 0x2580:
          case 0x2587:
          case 0x2588:
          case 0x2589:
          case 0x258a:
          case 0x25e4:
          case 0x25e5:
          case 0x25e6:
          case 0x25e8:
          case 0x25f0:
          case 0x2648:
          case 0x2649:
          case 0x264a:
          case 0x264b:
          case 0x264c:
          case 0x264d:
            return 1;
          }
        }
      }
      else if (param_1 < 0x2d5f) {
        if (param_1 < 0x2cec) {
          if (param_1 < 0x2b02) {
            if (param_1 < 0x2a30) {
              if (param_1 < 0x284f) {
                if (0x27d7 < param_1) {
                  switch(param_1) {
                  case 0x27d8:
                  case 0x27d9:
                  case 0x27dc:
                  case 0x27dd:
                  case 0x27e4:
                  case 0x27e5:
                  case 0x27e6:
                  case 0x27e7:
                  case 0x27e8:
                  case 0x27e9:
                  case 0x27ea:
                  case 0x27eb:
                  case 0x27ec:
                  case 0x27ed:
                  case 0x27ee:
                  case 0x27ef:
                  case 0x27f1:
                  case 0x27f2:
                  case 0x27f3:
                  case 0x27f5:
                  case 0x27f6:
                  case 0x27f7:
                  case 0x27f8:
                  case 0x27f9:
                  case 0x283c:
                  case 0x283d:
                  case 0x283f:
                  case 0x2840:
                  case 0x2841:
                  case 0x2842:
                  case 0x2843:
                    return 0;
                  case 0x27da:
                  case 0x27db:
                  case 0x27de:
                  case 0x27df:
                  case 0x27e0:
                  case 0x27e1:
                  case 0x27e2:
                  case 0x27e3:
                  case 0x27f0:
                  case 0x27f4:
                  case 0x283e:
                  case 0x2844:
                  case 0x2845:
                  case 0x2846:
                  case 0x2847:
                  case 0x2848:
                  case 0x2849:
                  case 0x284a:
                  case 0x284b:
                  case 0x284c:
                  case 0x284d:
                  case 0x284e:
                    return 1;
                  }
                  goto switchD_0116db29_caseD_45f;
                }
                if (param_1 < 0x2720) {
                  if (0x26ab < param_1) {
                    switch(param_1) {
                    case 0x26ac:
                    case 0x26ad:
                    case 0x26ae:
                    case 0x26bb:
                    case 0x26bc:
                    case 10000:
                    case 0x2712:
                    case 0x2713:
                    case 0x2714:
                    case 0x2715:
                    case 0x2719:
                    case 0x271a:
                    case 0x271b:
                    case 0x271c:
                    case 0x271d:
                    case 0x271e:
                    case 0x271f:
                      return 1;
                    case 0x26af:
                    case 0x26b0:
                    case 0x26b1:
                    case 0x26b2:
                    case 0x26b3:
                    case 0x26b4:
                    case 0x26b5:
                    case 0x26b6:
                    case 0x26b7:
                    case 0x26b8:
                    case 0x26b9:
                    case 0x26ba:
                    case 0x26bd:
                    case 0x2711:
                    case 0x2716:
                    case 0x2717:
                    case 0x2718:
                      return 0;
                    }
                    goto switchD_0116db29_caseD_45f;
                  }
                }
                else if (param_1 - 0x2774U < 4) {
                  return 1;
                }
              }
              else if (param_1 < 0x29d8) {
                if (0x2967 < param_1) {
                  switch(param_1) {
                  case 0x2968:
                  case 0x296a:
                  case 0x296c:
                  case 0x296d:
                  case 0x296f:
                  case 0x2971:
                  case 0x2972:
                  case 0x2973:
                  case 0x29cc:
                  case 0x29cd:
                  case 0x29ce:
                  case 0x29d2:
                  case 0x29d3:
                  case 0x29d4:
                  case 0x29d5:
                  case 0x29d6:
                  case 0x29d7:
                    return 1;
                  case 0x2969:
                  case 0x296b:
                  case 0x296e:
                  case 0x2970:
                  case 0x29cf:
                  case 0x29d0:
                  case 0x29d1:
                    return 0;
                  }
                  goto switchD_0116db29_caseD_45f;
                }
                if (param_1 < 0x28a3) {
                  if (0x289f < param_1) {
                    return 1;
                  }
                }
                else if (param_1 - 0x2904U < 0x11) {
                  return 0;
                }
              }
              goto switchD_0116db29_default;
            }
            switch(param_1) {
            case 0x2a30:
            case 0x2a31:
            case 0x2a32:
            case 0x2a34:
            case 0x2a35:
            case 0x2a36:
            case 0x2a37:
            case 0x2a38:
            case 0x2a39:
            case 0x2a3a:
            case 0x2a44:
            case 0x2a45:
            case 0x2a47:
            case 0x2a49:
            case 0x2a4f:
            case 0x2a53:
            case 0x2a55:
            case 0x2a94:
            case 0x2a96:
            case 11000:
            case 0x2afb:
            case 0x2afc:
            case 0x2afd:
            case 0x2afe:
            case 0x2aff:
            case 0x2b00:
              return 1;
            case 0x2a33:
            case 0x2a3b:
            case 0x2a3c:
            case 0x2a3d:
            case 0x2a3e:
            case 0x2a3f:
            case 0x2a40:
            case 0x2a41:
            case 0x2a42:
            case 0x2a43:
            case 0x2a46:
            case 0x2a48:
            case 0x2a4a:
            case 0x2a4b:
            case 0x2a4c:
            case 0x2a4d:
            case 0x2a4e:
            case 0x2a50:
            case 0x2a51:
            case 0x2a52:
            case 0x2a54:
            case 0x2a95:
            case 0x2af9:
            case 0x2afa:
            case 0x2b01:
              return 0;
            }
          }
          else {
            if (0x2bd3 < param_1) {
              switch(param_1) {
              case 0x2c24:
              case 0x2c25:
              case 0x2c26:
              case 0x2c27:
              case 0x2c28:
              case 0x2c29:
              case 0x2c2b:
              case 0x2c30:
              case 0x2c34:
              case 0x2c35:
              case 0x2c36:
              case 0x2c37:
              case 0x2c38:
              case 0x2c39:
              case 0x2c3a:
              case 0x2c3b:
              case 0x2c3c:
              case 0x2c3d:
              case 0x2c3e:
              case 0x2c3f:
              case 0x2c40:
              case 0x2c41:
              case 0x2c42:
              case 0x2c8d:
                return 0;
              case 0x2c2a:
              case 0x2c2c:
              case 0x2c2d:
              case 0x2c2e:
              case 0x2c2f:
              case 0x2c31:
              case 0x2c32:
              case 0x2c33:
              case 0x2c56:
              case 0x2c57:
              case 0x2c58:
              case 0x2c59:
              case 0x2c5a:
              case 0x2c5b:
              case 0x2c88:
              case 0x2c89:
              case 0x2c8a:
              case 0x2c8b:
              case 0x2c8c:
                return 1;
              case 0x2c43:
              case 0x2c44:
              case 0x2c45:
              case 0x2c46:
              case 0x2c47:
              case 0x2c48:
              case 0x2c49:
              case 0x2c4a:
              case 0x2c4b:
              case 0x2c4c:
              case 0x2c4d:
              case 0x2c4e:
              case 0x2c4f:
              case 0x2c50:
              case 0x2c51:
              case 0x2c52:
              case 0x2c53:
              case 0x2c54:
              case 0x2c55:
              case 0x2c5c:
              case 0x2c5d:
              case 0x2c5e:
              case 0x2c5f:
              case 0x2c60:
              case 0x2c61:
              case 0x2c62:
              case 0x2c63:
              case 0x2c64:
              case 0x2c65:
              case 0x2c66:
              case 0x2c67:
              case 0x2c68:
              case 0x2c69:
              case 0x2c6a:
              case 0x2c6b:
              case 0x2c6c:
              case 0x2c6d:
              case 0x2c6e:
              case 0x2c6f:
              case 0x2c70:
              case 0x2c71:
              case 0x2c72:
              case 0x2c73:
              case 0x2c74:
              case 0x2c75:
              case 0x2c76:
              case 0x2c77:
              case 0x2c78:
              case 0x2c79:
              case 0x2c7a:
              case 0x2c7b:
              case 0x2c7c:
              case 0x2c7d:
              case 0x2c7e:
              case 0x2c7f:
              case 0x2c80:
              case 0x2c81:
              case 0x2c82:
              case 0x2c83:
              case 0x2c84:
              case 0x2c85:
              case 0x2c86:
              case 0x2c87:
                goto switchD_0116db29_caseD_45f;
              default:
                goto switchD_0116db29_default;
              }
            }
            if (param_1 < 0x2b5c) goto switchD_0116db29_default;
            switch(param_1) {
            case 0x2b5c:
            case 0x2b5d:
            case 0x2b5e:
            case 0x2b5f:
            case 0x2b60:
            case 0x2b61:
            case 0x2b62:
            case 0x2b63:
            case 0x2b64:
            case 0x2b65:
            case 0x2b66:
            case 0x2b69:
            case 0x2b6b:
            case 0x2bcb:
            case 0x2bcc:
            case 0x2bce:
              return 1;
            case 0x2b67:
            case 0x2b68:
            case 0x2b6a:
            case 0x2bc0:
            case 0x2bc1:
            case 0x2bc2:
            case 0x2bc3:
            case 0x2bc4:
            case 0x2bc5:
            case 0x2bc6:
            case 0x2bc7:
            case 0x2bc8:
            case 0x2bc9:
            case 0x2bca:
            case 0x2bcd:
            case 0x2bcf:
            case 0x2bd0:
            case 0x2bd1:
            case 0x2bd2:
            case 0x2bd3:
              return 0;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x2cec:
          case 0x2cf0:
          case 0x2d51:
          case 0x2d55:
          case 0x2d56:
          case 0x2d5a:
          case 0x2d5b:
            return 0;
          case 0x2ced:
          case 0x2cee:
          case 0x2cef:
          case 0x2cf1:
          case 0x2cf2:
          case 0x2d50:
          case 0x2d52:
          case 0x2d53:
          case 0x2d54:
          case 0x2d57:
          case 0x2d58:
          case 0x2d59:
          case 0x2d5c:
          case 0x2d5d:
          case 0x2d5e:
            return 1;
          }
        }
      }
      else {
        if (param_1 < 0x30d6) {
          if (0x30d3 < param_1) {
            return 1;
          }
          if (param_1 < 0x300d) {
            if (0x2e17 < param_1) {
              switch(param_1) {
              case 0x2e18:
              case 0x2e19:
              case 0x2e1a:
              case 0x2e1b:
              case 0x2e1c:
              case 0x2e1d:
              case 0x2e21:
              case 0x2e22:
              case 0x2e23:
              case 0x2e24:
              case 0x2e25:
              case 0x2e26:
              case 0x2e29:
              case 0x2e2d:
              case 0x2e2e:
              case 0x2e32:
              case 0x2e39:
              case 0x2e3b:
              case 0x2e3c:
              case 0x2e3d:
              case 0x2e3e:
              case 0x2e40:
              case 0x2e42:
              case 0x2e43:
              case 0x2e45:
              case 0x2e47:
              case 0x2e7c:
              case 0x2e7d:
              case 0x2e7e:
              case 0x2e7f:
              case 0x2e80:
              case 12000:
              case 0x2ee1:
              case 0x2ee3:
              case 0x2ee4:
              case 0x2ee8:
              case 0x2ee9:
              case 0x2eed:
              case 0x2eee:
              case 0x2eef:
              case 0x2ef0:
              case 0x2ef4:
              case 0x2ef5:
              case 0x2f44:
              case 0x2f45:
              case 0x2f46:
              case 0x2f47:
              case 0x2f48:
              case 0x2f49:
              case 0x2f4a:
              case 0x2f4b:
              case 0x2f4c:
              case 0x2f4d:
              case 0x2fa8:
              case 0x2fa9:
              case 0x2fab:
              case 0x2fad:
              case 0x2fae:
              case 0x2faf:
              case 0x2fb0:
              case 0x2fb1:
              case 0x2fb2:
              case 0x2fb3:
              case 0x2fb5:
              case 0x2fb6:
              case 0x2fb7:
              case 0x2fb8:
              case 0x2fb9:
              case 0x2fba:
              case 0x2fbb:
              case 0x2fbc:
                return 0;
              case 0x2e1e:
              case 0x2e1f:
              case 0x2e20:
              case 0x2e27:
              case 0x2e28:
              case 0x2e2a:
              case 0x2e2b:
              case 0x2e2c:
              case 0x2e2f:
              case 0x2e30:
              case 0x2e31:
              case 0x2e33:
              case 0x2e34:
              case 0x2e35:
              case 0x2e36:
              case 0x2e37:
              case 0x2e38:
              case 0x2e3a:
              case 0x2e3f:
              case 0x2e41:
              case 0x2e44:
              case 0x2e46:
              case 0x2e81:
              case 0x2e82:
              case 0x2ee2:
              case 0x2ee5:
              case 0x2ee6:
              case 0x2ee7:
              case 0x2eea:
              case 0x2eeb:
              case 0x2eec:
              case 0x2ef1:
              case 0x2ef2:
              case 0x2ef3:
              case 0x2ef6:
              case 0x2ef7:
              case 0x2ef8:
              case 0x2ef9:
              case 0x2efa:
              case 0x2faa:
              case 0x2fac:
              case 0x2fb4:
              case 0x300c:
                return 1;
              }
              goto switchD_0116db29_caseD_45f;
            }
            if (param_1 - 0x2db4U < 3) {
              return 0;
            }
          }
          else if (param_1 < 0x3077) {
            if (0x3072 < param_1) {
              return 0;
            }
            if (param_1 == 0x3072) {
              return 1;
            }
            if (0x306f < param_1) {
              return 0;
            }
          }
          else if (param_1 == 0x3077) {
            return 1;
          }
switchD_0116db29_default:
          goto LAB_0116d2ee;
        }
        if (0x3464 < param_1) {
          switch(param_1) {
          case 0x34bc:
          case 0x3520:
          case 0x3522:
          case 0x3526:
          case 0x3528:
          case 0x352c:
            return 0;
          case 0x34bd:
          case 0x34be:
          case 0x34bf:
          case 0x34c0:
          case 0x3521:
          case 0x3523:
          case 0x3524:
          case 0x3525:
          case 0x3527:
          case 0x3529:
          case 0x352a:
          case 0x352b:
          case 0x352d:
          case 0x352e:
          case 0x352f:
            return 1;
          case 0x34c1:
          case 0x34c2:
          case 0x34c3:
          case 0x34c4:
          case 0x34c5:
          case 0x34c6:
          case 0x34c7:
          case 0x34c8:
          case 0x34c9:
          case 0x34ca:
          case 0x34cb:
          case 0x34cc:
          case 0x34cd:
          case 0x34ce:
          case 0x34cf:
          case 0x34d0:
          case 0x34d1:
          case 0x34d2:
          case 0x34d3:
          case 0x34d4:
          case 0x34d5:
          case 0x34d6:
          case 0x34d7:
          case 0x34d8:
          case 0x34d9:
          case 0x34da:
          case 0x34db:
          case 0x34dc:
          case 0x34dd:
          case 0x34de:
          case 0x34df:
          case 0x34e0:
          case 0x34e1:
          case 0x34e2:
          case 0x34e3:
          case 0x34e4:
          case 0x34e5:
          case 0x34e6:
          case 0x34e7:
          case 0x34e8:
          case 0x34e9:
          case 0x34ea:
          case 0x34eb:
          case 0x34ec:
          case 0x34ed:
          case 0x34ee:
          case 0x34ef:
          case 0x34f0:
          case 0x34f1:
          case 0x34f2:
          case 0x34f3:
          case 0x34f4:
          case 0x34f5:
          case 0x34f6:
          case 0x34f7:
          case 0x34f8:
          case 0x34f9:
          case 0x34fa:
          case 0x34fb:
          case 0x34fc:
          case 0x34fd:
          case 0x34fe:
          case 0x34ff:
          case 0x3500:
          case 0x3501:
          case 0x3502:
          case 0x3503:
          case 0x3504:
          case 0x3505:
          case 0x3506:
          case 0x3507:
          case 0x3508:
          case 0x3509:
          case 0x350a:
          case 0x350b:
          case 0x350c:
          case 0x350d:
          case 0x350e:
          case 0x350f:
          case 0x3510:
          case 0x3511:
          case 0x3512:
          case 0x3513:
          case 0x3514:
          case 0x3515:
          case 0x3516:
          case 0x3517:
          case 0x3518:
          case 0x3519:
          case 0x351a:
          case 0x351b:
          case 0x351c:
          case 0x351d:
          case 0x351e:
          case 0x351f:
            goto switchD_0116db29_caseD_45f;
          default:
            goto switchD_0116db29_default;
          }
        }
        if (param_1 < 0x33f4) {
          if (param_1 < 0x32d2) {
            if (0x3263 < param_1) {
              switch(param_1) {
              case 0x3264:
              case 0x3268:
              case 0x3269:
              case 0x326a:
              case 0x326b:
              case 0x326c:
              case 0x32c9:
              case 0x32ca:
              case 0x32cd:
              case 0x32d1:
                return 1;
              case 0x3265:
              case 0x3266:
              case 0x3267:
              case 0x326d:
              case 0x326e:
              case 0x326f:
              case 13000:
              case 0x32cb:
              case 0x32cc:
              case 0x32ce:
              case 0x32cf:
              case 0x32d0:
                return 0;
              }
              goto switchD_0116db29_caseD_45f;
            }
            if (param_1 == 0x31a4) {
              return 1;
            }
            if (param_1 < 0x31a5) {
              if (param_1 == 0x313f) {
                return 1;
              }
              if (param_1 < 0x3140) {
                if (param_1 < 0x30dc) {
                  return 0;
                }
                if (param_1 - 0x3138U < 7) {
                  return 0;
                }
              }
              else if (param_1 - 0x319cU < 8) {
                return 0;
              }
            }
            else if (param_1 < 0x3207) {
              if (0x31ff < param_1) {
                return 0;
              }
            }
            else if (param_1 - 0x3207U < 2) {
              return 1;
            }
          }
          else if (param_1 < 0x3393) {
            if (0x338f < param_1) {
              return 0;
            }
            if (param_1 < 0x332e) {
              if (0x332b < param_1) {
                return 0;
              }
            }
            else if (param_1 == 0x332e) {
              return 1;
            }
          }
          else if (param_1 - 0x3393U < 6) {
            return 1;
          }
          goto switchD_0116db29_default;
        }
        switch(param_1) {
        case 0x33f4:
        case 0x33fa:
        case 0x33fb:
        case 0x33fc:
        case 0x33fd:
        case 0x33fe:
        case 0x33ff:
        case 0x3400:
        case 0x3401:
        case 0x3402:
        case 0x3403:
        case 0x3404:
        case 0x3405:
        case 0x3406:
        case 0x3407:
        case 0x3408:
        case 0x3409:
        case 0x3458:
        case 0x3459:
        case 0x345a:
        case 0x345d:
        case 0x345e:
        case 0x3460:
        case 0x3462:
        case 0x3463:
          return 1;
        case 0x33f5:
        case 0x33f6:
        case 0x33f7:
        case 0x33f8:
        case 0x33f9:
        case 0x345b:
        case 0x345c:
        case 0x345f:
        case 0x3461:
        case 0x3464:
          return 0;
        }
      }
      goto switchD_0116db29_caseD_45f;
    }
    if (5999 < param_1) {
      switch(param_1) {
      case 6000:
      case 0x1771:
      case 0x1772:
      case 0x1773:
      case 0x1774:
      case 0x1838:
      case 0x1839:
      case 0x183a:
      case 0x183b:
      case 0x183c:
      case 0x183d:
      case 0x189f:
      case 0x18a3:
      case 0x18a4:
      case 0x18a5:
      case 0x18af:
      case 0x18b0:
      case 0x18b1:
      case 0x18b2:
      case 0x18b3:
      case 0x18b4:
      case 0x18b5:
      case 0x18b6:
      case 0x18b9:
      case 0x1902:
      case 0x1903:
      case 0x1904:
      case 0x1905:
      case 0x1906:
      case 0x1907:
      case 0x1908:
      case 0x1909:
      case 0x190a:
      case 0x190b:
      case 0x190c:
      case 0x190d:
      case 0x190e:
      case 0x190f:
      case 0x1910:
      case 0x1911:
      case 0x1912:
      case 0x1917:
      case 0x1918:
      case 0x191a:
      case 0x1964:
      case 0x1967:
      case 0x1968:
      case 0x1969:
      case 0x196a:
      case 0x196b:
      case 0x196c:
      case 0x196f:
      case 0x1970:
      case 0x1971:
      case 0x1972:
      case 0x1973:
      case 0x1974:
      case 0x1975:
      case 0x1976:
      case 0x1984:
      case 0x1987:
      case 0x1988:
      case 0x198c:
      case 0x199a:
      case 0x199b:
      case 0x199d:
      case 0x199e:
      case 0x199f:
      case 0x19a0:
      case 0x19a1:
      case 0x19a2:
      case 0x19a3:
      case 0x19a4:
      case 0x19a5:
      case 0x19a6:
      case 0x19a7:
      case 0x19a8:
      case 0x19ab:
      case 0x19ad:
      case 0x19ae:
      case 0x19af:
      case 0x19b0:
      case 0x19b1:
      case 0x19b2:
      case 0x19b3:
      case 0x19b5:
      case 0x19ca:
      case 0x19cb:
      case 0x19cc:
      case 0x19ce:
      case 0x19d1:
      case 0x19d2:
      case 0x19d3:
      case 0x19d4:
      case 0x19d5:
      case 0x19d7:
      case 0x19df:
      case 0x19e3:
      case 0x19e6:
      case 0x19e7:
      case 0x1a2f:
      case 0x1a30:
      case 0x1a31:
      case 0x1a32:
      case 0x1a34:
      case 0x1a35:
      case 0x1a44:
      case 0x1a47:
        return 0;
      case 0x17d4:
      case 0x17d5:
      case 0x17d6:
      case 0x183e:
      case 0x183f:
      case 0x189c:
      case 0x189d:
      case 0x189e:
      case 0x18a0:
      case 0x18a1:
      case 0x18a2:
      case 0x18a6:
      case 0x18a7:
      case 0x18a8:
      case 0x18a9:
      case 0x18aa:
      case 0x18ab:
      case 0x18ac:
      case 0x18ad:
      case 0x18ae:
      case 0x18b7:
      case 0x18b8:
      case 0x1900:
      case 0x1901:
      case 0x1913:
      case 0x1914:
      case 0x1915:
      case 0x1916:
      case 0x1919:
      case 0x1965:
      case 0x1966:
      case 0x196d:
      case 0x196e:
      case 0x1977:
      case 0x1978:
      case 0x1979:
      case 0x197a:
      case 0x197b:
      case 0x197c:
      case 0x197d:
      case 0x197e:
      case 0x197f:
      case 0x1980:
      case 0x1981:
      case 0x1982:
      case 0x1983:
      case 0x1985:
      case 0x1986:
      case 0x1989:
      case 0x198a:
      case 0x198b:
      case 0x1996:
      case 0x1997:
      case 0x1998:
      case 0x1999:
      case 0x199c:
      case 0x19a9:
      case 0x19aa:
      case 0x19ac:
      case 0x19b4:
      case 0x19c8:
      case 0x19c9:
      case 0x19cd:
      case 0x19cf:
      case 0x19d0:
      case 0x19d6:
      case 0x19d8:
      case 0x19d9:
      case 0x19da:
      case 0x19db:
      case 0x19dc:
      case 0x19dd:
      case 0x19de:
      case 0x19e0:
      case 0x19e1:
      case 0x19e2:
      case 0x19e4:
      case 0x19e5:
      case 0x1a2c:
      case 0x1a2d:
      case 0x1a2e:
      case 0x1a33:
      case 0x1a36:
      case 0x1a37:
      case 0x1a38:
      case 0x1a39:
      case 0x1a3a:
      case 0x1a3b:
      case 0x1a3c:
      case 0x1a3d:
      case 0x1a3e:
      case 0x1a3f:
      case 0x1a40:
      case 0x1a41:
      case 0x1a42:
      case 0x1a43:
      case 0x1a45:
      case 0x1a46:
      case 0x1a48:
      case 0x1a49:
      case 0x1a90:
      case 0x1a91:
      case 0x1a92:
        return 1;
      }
      goto switchD_0116db29_caseD_45f;
    }
    if (0x9e0 < param_1) {
      if (param_1 < 0x106f) {
        if (param_1 < 4000) {
          if (param_1 < 0xe32) {
            if (0xc7f < param_1) {
              switch(param_1) {
              case 0xc80:
              case 0xc81:
              case 0xc82:
              case 0xc83:
              case 0xc85:
              case 0xce4:
              case 0xce7:
              case 0xce8:
              case 0xce9:
              case 0xcee:
              case 0xcef:
              case 0xcf0:
              case 0xdac:
              case 0xdad:
              case 0xdaf:
              case 0xdb1:
              case 0xdbf:
              case 0xdc0:
              case 0xdc1:
              case 0xdc2:
              case 0xdc3:
              case 0xdc4:
              case 0xdc5:
              case 0xdc6:
              case 0xdc7:
              case 0xdc9:
              case 0xdcb:
              case 0xdcd:
              case 0xdcf:
              case 0xdd1:
              case 0xe11:
              case 0xe12:
              case 0xe13:
              case 0xe14:
              case 0xe1f:
              case 0xe20:
              case 0xe21:
              case 0xe22:
              case 0xe25:
              case 0xe29:
              case 0xe2a:
              case 0xe31:
                return 0;
              case 0xc84:
              case 0xc86:
              case 0xc87:
              case 0xce5:
              case 0xce6:
              case 0xcea:
              case 0xceb:
              case 0xcec:
              case 0xced:
              case 0xd48:
              case 0xdae:
              case 0xdb0:
              case 0xdb2:
              case 0xdb3:
              case 0xdb4:
              case 0xdb5:
              case 0xdb6:
              case 0xdb7:
              case 0xdb8:
              case 0xdb9:
              case 0xdba:
              case 0xdbb:
              case 0xdbc:
              case 0xdbd:
              case 0xdbe:
              case 0xdc8:
              case 0xdca:
              case 0xdcc:
              case 0xdce:
              case 0xdd0:
              case 0xdd2:
              case 0xdd3:
              case 0xe10:
              case 0xe15:
              case 0xe16:
              case 0xe17:
              case 0xe18:
              case 0xe19:
              case 0xe1a:
              case 0xe1b:
              case 0xe1c:
              case 0xe1d:
              case 0xe1e:
              case 0xe23:
              case 0xe24:
              case 0xe26:
              case 0xe27:
              case 0xe28:
              case 0xe2b:
              case 0xe2c:
              case 0xe2d:
              case 0xe2e:
              case 0xe2f:
              case 0xe30:
                return 1;
              }
              goto switchD_0116db29_caseD_45f;
            }
            if (param_1 < 0xc40) {
              if (0xaef < param_1) {
                switch(param_1) {
                case 0xaf0:
                case 0xaf1:
                case 0xaf2:
                case 0xaf3:
                case 0xafd:
                case 0xafe:
                case 0xb54:
                case 0xb55:
                case 0xb58:
                case 0xb59:
                case 0xb5a:
                case 0xbba:
                case 0xbbb:
                case 0xbbc:
                case 0xbc0:
                case 0xbc3:
                case 0xbc5:
                case 0xbc6:
                case 0xc1d:
                case 0xc22:
                case 0xc26:
                case 0xc27:
                case 0xc2c:
                case 0xc2d:
                case 0xc30:
                case 0xc31:
                case 0xc32:
                case 0xc33:
                case 0xc34:
                case 0xc35:
                case 0xc36:
                case 0xc37:
                case 0xc39:
                case 0xc3a:
                case 0xc3f:
                  return 1;
                case 0xaf4:
                case 0xaf5:
                case 0xaf6:
                case 0xaf7:
                case 0xaf8:
                case 0xaf9:
                case 0xafa:
                case 0xafb:
                case 0xafc:
                case 0xb56:
                case 0xb57:
                case 3000:
                case 0xbb9:
                case 0xbbd:
                case 0xbbe:
                case 0xbbf:
                case 0xbc1:
                case 0xbc2:
                case 0xbc4:
                case 0xc1c:
                case 0xc1e:
                case 0xc1f:
                case 0xc20:
                case 0xc21:
                case 0xc23:
                case 0xc24:
                case 0xc25:
                case 0xc28:
                case 0xc29:
                case 0xc2a:
                case 0xc2b:
                case 0xc2e:
                case 0xc2f:
                case 0xc38:
                case 0xc3b:
                case 0xc3c:
                case 0xc3d:
                case 0xc3e:
                  return 0;
                }
                goto switchD_0116db29_caseD_45f;
              }
              if (param_1 == 0xa8c) {
                return 0;
              }
              if (param_1 - 0xa8dU < 2) {
                return 1;
              }
            }
          }
          else if (param_1 < 0xeda) {
            if (0xed7 < param_1) {
              return 0;
            }
          }
          else if (param_1 - 0xf3cU < 9) {
            return 1;
          }
          goto switchD_0116db29_default;
        }
        switch(param_1) {
        case 4000:
        case 0xfa1:
        case 0xfa6:
        case 0xfa7:
        case 0xfa8:
        case 0xfa9:
        case 0xfad:
        case 0xfb5:
        case 0x1005:
        case 0x1006:
        case 0x1007:
        case 0x1008:
        case 0x1009:
        case 0x100a:
        case 0x100b:
        case 0x100c:
        case 0x100d:
        case 0x1010:
        case 0x1011:
        case 0x1012:
        case 0x1013:
        case 0x1014:
        case 0x1017:
        case 0x1018:
          return 0;
        case 0xfa2:
        case 0xfa3:
        case 0xfa4:
        case 0xfa5:
        case 0xfaa:
        case 0xfab:
        case 0xfac:
        case 0xfae:
        case 0xfaf:
        case 0xfb0:
        case 0xfb1:
        case 0xfb2:
        case 0xfb3:
        case 0xfb4:
        case 0xfb6:
        case 0xfb7:
        case 0xfb8:
        case 0x1004:
        case 0x100e:
        case 0x100f:
        case 0x1015:
        case 0x1016:
        case 0x1068:
        case 0x1069:
        case 0x106a:
        case 0x106b:
        case 0x106c:
        case 0x106d:
        case 0x106e:
          return 1;
        }
      }
      else if (param_1 < 0x14c6) {
        if (param_1 < 0x1450) {
          if (param_1 < 0x13fb) {
            if (0x1323 < param_1) {
              switch(param_1) {
              case 0x1324:
              case 0x1325:
              case 0x1326:
              case 0x1327:
              case 0x1329:
              case 0x132c:
              case 0x132d:
              case 0x132e:
              case 0x132f:
              case 0x138a:
              case 0x138b:
              case 0x138f:
              case 0x1393:
              case 0x1394:
              case 0x1395:
              case 0x1396:
              case 0x1397:
              case 0x13ec:
              case 0x13f0:
              case 0x13f6:
              case 0x13f7:
              case 0x13f8:
              case 0x13f9:
              case 0x13fa:
                return 1;
              case 0x1328:
              case 0x132a:
              case 0x132b:
              case 0x1330:
              case 5000:
              case 0x1389:
              case 0x138c:
              case 0x138d:
              case 0x138e:
              case 0x1390:
              case 0x1391:
              case 0x1392:
              case 0x13ed:
              case 0x13ee:
              case 0x13ef:
              case 0x13f1:
              case 0x13f2:
              case 0x13f3:
              case 0x13f4:
              case 0x13f5:
                return 0;
              }
              goto switchD_0116db29_caseD_45f;
            }
            if (param_1 < 0x1199) {
              if (0x1193 < param_1) {
                return 1;
              }
              if (param_1 < 0x10cf) {
                if (0x10cc < param_1) {
                  return 0;
                }
                if (param_1 == 0x10cc) {
                  return 1;
                }
              }
              else if (param_1 - 0x1130U < 6) {
                return 1;
              }
            }
            else {
              if (param_1 == 0x125c) {
                return 0;
              }
              if (param_1 < 0x125d) {
                if (param_1 == 0x11f8) {
                  return 1;
                }
                if (param_1 < 0x11f9) {
                  if (param_1 == 0x1199) {
                    return 0;
                  }
                }
                else if (param_1 - 0x11f9U < 2) {
                  return 0;
                }
              }
              else {
                if (param_1 < 0x1260) {
                  return 1;
                }
                if (param_1 == 0x1260) {
                  return 0;
                }
                if (param_1 == 0x12c0) {
                  return 0;
                }
              }
            }
          }
          goto switchD_0116db29_default;
        }
        switch(param_1) {
        case 0x1450:
        case 0x1451:
        case 0x1452:
        case 0x1453:
        case 0x1455:
        case 0x1456:
        case 0x145b:
        case 0x145c:
        case 0x145d:
        case 0x145e:
        case 0x14b4:
        case 0x14b5:
        case 0x14c2:
        case 0x14c3:
          return 0;
        case 0x1454:
        case 0x1457:
        case 0x1458:
        case 0x1459:
        case 0x145a:
        case 0x14b6:
        case 0x14b7:
        case 0x14b8:
        case 0x14b9:
        case 0x14ba:
        case 0x14bb:
        case 0x14bc:
        case 0x14bd:
        case 0x14be:
        case 0x14bf:
        case 0x14c0:
        case 0x14c1:
        case 0x14c4:
        case 0x14c5:
          return 1;
        }
      }
      else {
        if (0x1653 < param_1) {
          switch(param_1) {
          case 0x16a8:
          case 0x16aa:
          case 0x16ab:
          case 0x16af:
          case 0x170c:
          case 0x170e:
          case 0x170f:
          case 0x1711:
          case 0x1712:
            return 1;
          case 0x16a9:
          case 0x16ac:
          case 0x16ad:
          case 0x16ae:
          case 0x170d:
          case 0x1710:
            return 0;
          case 0x16b0:
          case 0x16b1:
          case 0x16b2:
          case 0x16b3:
          case 0x16b4:
          case 0x16b5:
          case 0x16b6:
          case 0x16b7:
          case 0x16b8:
          case 0x16b9:
          case 0x16ba:
          case 0x16bb:
          case 0x16bc:
          case 0x16bd:
          case 0x16be:
          case 0x16bf:
          case 0x16c0:
          case 0x16c1:
          case 0x16c2:
          case 0x16c3:
          case 0x16c4:
          case 0x16c5:
          case 0x16c6:
          case 0x16c7:
          case 0x16c8:
          case 0x16c9:
          case 0x16ca:
          case 0x16cb:
          case 0x16cc:
          case 0x16cd:
          case 0x16ce:
          case 0x16cf:
          case 0x16d0:
          case 0x16d1:
          case 0x16d2:
          case 0x16d3:
          case 0x16d4:
          case 0x16d5:
          case 0x16d6:
          case 0x16d7:
          case 0x16d8:
          case 0x16d9:
          case 0x16da:
          case 0x16db:
          case 0x16dc:
          case 0x16dd:
          case 0x16de:
          case 0x16df:
          case 0x16e0:
          case 0x16e1:
          case 0x16e2:
          case 0x16e3:
          case 0x16e4:
          case 0x16e5:
          case 0x16e6:
          case 0x16e7:
          case 0x16e8:
          case 0x16e9:
          case 0x16ea:
          case 0x16eb:
          case 0x16ec:
          case 0x16ed:
          case 0x16ee:
          case 0x16ef:
          case 0x16f0:
          case 0x16f1:
          case 0x16f2:
          case 0x16f3:
          case 0x16f4:
          case 0x16f5:
          case 0x16f6:
          case 0x16f7:
          case 0x16f8:
          case 0x16f9:
          case 0x16fa:
          case 0x16fb:
          case 0x16fc:
          case 0x16fd:
          case 0x16fe:
          case 0x16ff:
          case 0x1700:
          case 0x1701:
          case 0x1702:
          case 0x1703:
          case 0x1704:
          case 0x1705:
          case 0x1706:
          case 0x1707:
          case 0x1708:
          case 0x1709:
          case 0x170a:
          case 0x170b:
            goto switchD_0116db29_caseD_45f;
          default:
            goto switchD_0116db29_default;
          }
        }
        if (param_1 < 0x15e0) {
          if (param_1 == 0x151b) {
            return 1;
          }
          if (param_1 < 0x151c) {
            if (param_1 == 0x1518) {
              return 1;
            }
            if (param_1 - 0x1519U < 2) {
              return 0;
            }
          }
          else if (param_1 == 0x157c) {
            return 0;
          }
          goto switchD_0116db29_default;
        }
        switch(param_1) {
        case 0x15e0:
        case 0x15e2:
        case 0x1645:
        case 0x1647:
        case 0x164a:
        case 0x164c:
        case 0x164d:
        case 0x164e:
        case 0x164f:
        case 0x1650:
        case 0x1652:
          return 1;
        case 0x15e1:
        case 0x15e3:
        case 0x15e4:
        case 0x1644:
        case 0x1646:
        case 0x1648:
        case 0x1649:
        case 0x164b:
        case 0x1651:
        case 0x1653:
          return 0;
        }
      }
      goto switchD_0116db29_caseD_45f;
    }
    if (0x897 < param_1) {
      switch(param_1) {
      case 0x898:
      case 0x89c:
      case 0x8a4:
      case 0x8a5:
      case 0x8a6:
      case 0x8a7:
      case 0x8a8:
      case 0x8a9:
      case 0x8aa:
      case 0x8ab:
      case 0x8ac:
      case 0x8ad:
      case 0x8ae:
      case 0x8b0:
      case 0x8b1:
      case 0x8b2:
      case 0x8b3:
      case 0x8b4:
      case 0x8b5:
      case 0x8b6:
      case 0x8b7:
      case 0x8b8:
      case 0x8cd:
      case 0x8ce:
      case 0x8d1:
      case 0x8fd:
      case 0x8ff:
      case 0x903:
      case 0x904:
      case 0x905:
      case 0x906:
      case 0x907:
      case 0x908:
      case 0x963:
      case 0x9c4:
      case 0x9c6:
      case 0x9c7:
      case 0x9c8:
      case 0x9c9:
      case 0x9ca:
      case 0x9cb:
      case 0x9d0:
      case 0x9d1:
      case 0x9d3:
      case 0x9d6:
      case 0x9d7:
      case 0x9d8:
      case 0x9d9:
      case 0x9da:
      case 0x9db:
      case 0x9dc:
      case 0x9dd:
      case 0x9de:
        return 1;
      case 0x899:
      case 0x89a:
      case 0x89b:
      case 0x89d:
      case 0x89e:
      case 0x89f:
      case 0x8a0:
      case 0x8a1:
      case 0x8a2:
      case 0x8a3:
      case 0x8af:
      case 0x8cf:
      case 0x8d0:
      case 0x8d2:
      case 0x8fe:
      case 0x900:
      case 0x901:
      case 0x902:
      case 0x960:
      case 0x961:
      case 0x962:
      case 0x9c5:
      case 0x9cc:
      case 0x9cd:
      case 0x9ce:
      case 0x9cf:
      case 0x9d2:
      case 0x9d4:
      case 0x9d5:
      case 0x9df:
      case 0x9e0:
        return 0;
      }
      goto switchD_0116db29_caseD_45f;
    }
    if (0x409 < param_1) {
      switch(param_1) {
      case 0x44c:
      case 0x457:
      case 0x458:
      case 0x45c:
      case 0x4b0:
      case 0x4b4:
      case 0x4bc:
      case 0x4bd:
      case 0x4be:
      case 0x4bf:
      case 0x4c1:
      case 0x4c2:
      case 0x4c3:
      case 0x4c4:
      case 0x4c6:
      case 0x515:
      case 0x517:
      case 0x518:
      case 0x519:
      case 0x51c:
      case 0x51d:
      case 0x51e:
      case 0x524:
      case 0x526:
      case 0x528:
      case 0x529:
      case 0x52a:
      case 0x52b:
      case 0x52c:
      case 0x52f:
      case 0x530:
      case 0x531:
      case 0x533:
      case 0x57b:
      case 0x57c:
      case 0x57e:
      case 0x580:
      case 0x582:
      case 0x583:
      case 0x589:
      case 0x58d:
      case 0x58e:
      case 0x5dd:
      case 0x640:
      case 0x64a:
      case 0x64c:
      case 0x650:
      case 0x6a7:
      case 0x6a8:
      case 0x6ab:
      case 0x6ad:
      case 0x6ae:
      case 0x6b0:
      case 0x6b4:
      case 0x6b5:
      case 0x6b7:
      case 0x6b9:
      case 0x6ba:
      case 0x6bb:
      case 0x6bc:
      case 0x708:
      case 0x709:
      case 0x70a:
      case 0x70b:
      case 0x712:
      case 0x713:
      case 0x714:
      case 0x719:
      case 0x71b:
      case 0x71c:
      case 0x71f:
      case 0x76d:
      case 0x7d1:
      case 0x7d5:
      case 0x7d6:
      case 0x7d7:
        return 0;
      case 0x44d:
      case 0x44e:
      case 0x44f:
      case 0x450:
      case 0x451:
      case 0x452:
      case 0x453:
      case 0x454:
      case 0x455:
      case 0x456:
      case 0x459:
      case 0x45a:
      case 0x45b:
      case 0x45d:
      case 0x45e:
      case 0x4b1:
      case 0x4b2:
      case 0x4b3:
      case 0x4b5:
      case 0x4b6:
      case 0x4b7:
      case 0x4b8:
      case 0x4b9:
      case 0x4ba:
      case 0x4bb:
      case 0x4c0:
      case 0x4c5:
      case 0x4c7:
      case 0x4c8:
      case 0x4c9:
      case 0x514:
      case 0x516:
      case 0x51a:
      case 0x51b:
      case 0x51f:
      case 0x520:
      case 0x521:
      case 0x522:
      case 0x523:
      case 0x525:
      case 0x527:
      case 0x52d:
      case 0x52e:
      case 0x532:
      case 0x578:
      case 0x579:
      case 0x57a:
      case 0x57d:
      case 0x57f:
      case 0x581:
      case 0x584:
      case 0x585:
      case 0x586:
      case 0x587:
      case 0x588:
      case 0x58a:
      case 0x58b:
      case 0x58c:
      case 0x58f:
      case 0x590:
      case 0x591:
      case 0x592:
      case 0x593:
      case 0x5dc:
      case 0x5de:
      case 0x5df:
      case 0x5e0:
      case 0x5e1:
      case 0x5e2:
      case 0x641:
      case 0x642:
      case 0x643:
      case 0x644:
      case 0x645:
      case 0x646:
      case 0x647:
      case 0x648:
      case 0x649:
      case 0x64b:
      case 0x64d:
      case 0x64e:
      case 0x64f:
      case 0x6a4:
      case 0x6a5:
      case 0x6a6:
      case 0x6a9:
      case 0x6aa:
      case 0x6ac:
      case 0x6af:
      case 0x6b1:
      case 0x6b2:
      case 0x6b3:
      case 0x6b6:
      case 0x6b8:
      case 0x70c:
      case 0x70d:
      case 0x70e:
      case 0x70f:
      case 0x710:
      case 0x711:
      case 0x715:
      case 0x716:
      case 0x717:
      case 0x718:
      case 0x71a:
      case 0x71d:
      case 0x71e:
      case 0x76c:
      case 0x76e:
      case 0x76f:
      case 0x770:
      case 2000:
      case 0x7d2:
      case 0x7d3:
      case 0x7d4:
      case 0x834:
      case 0x835:
      case 0x836:
      case 0x837:
      case 0x838:
      case 0x839:
      case 0x83a:
      case 0x83b:
      case 0x83c:
        return 1;
      case 0x45f:
      case 0x460:
      case 0x461:
      case 0x462:
      case 0x463:
      case 0x464:
      case 0x465:
      case 0x466:
      case 0x467:
      case 0x468:
      case 0x469:
      case 0x46a:
      case 0x46b:
      case 0x46c:
      case 0x46d:
      case 0x46e:
      case 0x46f:
      case 0x470:
      case 0x471:
      case 0x472:
      case 0x473:
      case 0x474:
      case 0x475:
      case 0x476:
      case 0x477:
      case 0x478:
      case 0x479:
      case 0x47a:
      case 0x47b:
      case 0x47c:
      case 0x47d:
      case 0x47e:
      case 0x47f:
      case 0x480:
      case 0x481:
      case 0x482:
      case 0x483:
      case 0x484:
      case 0x485:
      case 0x486:
      case 0x487:
      case 0x488:
      case 0x489:
      case 0x48a:
      case 0x48b:
      case 0x48c:
      case 0x48d:
      case 0x48e:
      case 0x48f:
      case 0x490:
      case 0x491:
      case 0x492:
      case 0x493:
      case 0x494:
      case 0x495:
      case 0x496:
      case 0x497:
      case 0x498:
      case 0x499:
      case 0x49a:
      case 0x49b:
      case 0x49c:
      case 0x49d:
      case 0x49e:
      case 0x49f:
      case 0x4a0:
      case 0x4a1:
      case 0x4a2:
      case 0x4a3:
      case 0x4a4:
      case 0x4a5:
      case 0x4a6:
      case 0x4a7:
      case 0x4a8:
      case 0x4a9:
      case 0x4aa:
      case 0x4ab:
      case 0x4ac:
      case 0x4ad:
      case 0x4ae:
      case 0x4af:
      case 0x4ca:
      case 0x4cb:
      case 0x4cc:
      case 0x4cd:
      case 0x4ce:
      case 0x4cf:
      case 0x4d0:
      case 0x4d1:
      case 0x4d2:
      case 0x4d3:
      case 0x4d4:
      case 0x4d5:
      case 0x4d6:
      case 0x4d7:
      case 0x4d8:
      case 0x4d9:
      case 0x4da:
      case 0x4db:
      case 0x4dc:
      case 0x4dd:
      case 0x4de:
      case 0x4df:
      case 0x4e0:
      case 0x4e1:
      case 0x4e2:
      case 0x4e3:
      case 0x4e4:
      case 0x4e5:
      case 0x4e6:
      case 0x4e7:
      case 0x4e8:
      case 0x4e9:
      case 0x4ea:
      case 0x4eb:
      case 0x4ec:
      case 0x4ed:
      case 0x4ee:
      case 0x4ef:
      case 0x4f0:
      case 0x4f1:
      case 0x4f2:
      case 0x4f3:
      case 0x4f4:
      case 0x4f5:
      case 0x4f6:
      case 0x4f7:
      case 0x4f8:
      case 0x4f9:
      case 0x4fa:
      case 0x4fb:
      case 0x4fc:
      case 0x4fd:
      case 0x4fe:
      case 0x4ff:
      case 0x500:
      case 0x501:
      case 0x502:
      case 0x503:
      case 0x504:
      case 0x505:
      case 0x506:
      case 0x507:
      case 0x508:
      case 0x509:
      case 0x50a:
      case 0x50b:
      case 0x50c:
      case 0x50d:
      case 0x50e:
      case 0x50f:
      case 0x510:
      case 0x511:
      case 0x512:
      case 0x513:
      case 0x534:
      case 0x535:
      case 0x536:
      case 0x537:
      case 0x538:
      case 0x539:
      case 0x53a:
      case 0x53b:
      case 0x53c:
      case 0x53d:
      case 0x53e:
      case 0x53f:
      case 0x540:
      case 0x541:
      case 0x542:
      case 0x543:
      case 0x544:
      case 0x545:
      case 0x546:
      case 0x547:
      case 0x548:
      case 0x549:
      case 0x54a:
      case 0x54b:
      case 0x54c:
      case 0x54d:
      case 0x54e:
      case 0x54f:
      case 0x550:
      case 0x551:
      case 0x552:
      case 0x553:
      case 0x554:
      case 0x555:
      case 0x556:
      case 0x557:
      case 0x558:
      case 0x559:
      case 0x55a:
      case 0x55b:
      case 0x55c:
      case 0x55d:
      case 0x55e:
      case 0x55f:
      case 0x560:
      case 0x561:
      case 0x562:
      case 0x563:
      case 0x564:
      case 0x565:
      case 0x566:
      case 0x567:
      case 0x568:
      case 0x569:
      case 0x56a:
      case 0x56b:
      case 0x56c:
      case 0x56d:
      case 0x56e:
      case 0x56f:
      case 0x570:
      case 0x571:
      case 0x572:
      case 0x573:
      case 0x574:
      case 0x575:
      case 0x576:
      case 0x577:
      case 0x594:
      case 0x595:
      case 0x596:
      case 0x597:
      case 0x598:
      case 0x599:
      case 0x59a:
      case 0x59b:
      case 0x59c:
      case 0x59d:
      case 0x59e:
      case 0x59f:
      case 0x5a0:
      case 0x5a1:
      case 0x5a2:
      case 0x5a3:
      case 0x5a4:
      case 0x5a5:
      case 0x5a6:
      case 0x5a7:
      case 0x5a8:
      case 0x5a9:
      case 0x5aa:
      case 0x5ab:
      case 0x5ac:
      case 0x5ad:
      case 0x5ae:
      case 0x5af:
      case 0x5b0:
      case 0x5b1:
      case 0x5b2:
      case 0x5b3:
      case 0x5b4:
      case 0x5b5:
      case 0x5b6:
      case 0x5b7:
      case 0x5b8:
      case 0x5b9:
      case 0x5ba:
      case 0x5bb:
      case 0x5bc:
      case 0x5bd:
      case 0x5be:
      case 0x5bf:
      case 0x5c0:
      case 0x5c1:
      case 0x5c2:
      case 0x5c3:
      case 0x5c4:
      case 0x5c5:
      case 0x5c6:
      case 0x5c7:
      case 0x5c8:
      case 0x5c9:
      case 0x5ca:
      case 0x5cb:
      case 0x5cc:
      case 0x5cd:
      case 0x5ce:
      case 0x5cf:
      case 0x5d0:
      case 0x5d1:
      case 0x5d2:
      case 0x5d3:
      case 0x5d4:
      case 0x5d5:
      case 0x5d6:
      case 0x5d7:
      case 0x5d8:
      case 0x5d9:
      case 0x5da:
      case 0x5db:
      case 0x5e3:
      case 0x5e4:
      case 0x5e5:
      case 0x5e6:
      case 0x5e7:
      case 0x5e8:
      case 0x5e9:
      case 0x5ea:
      case 0x5eb:
      case 0x5ec:
      case 0x5ed:
      case 0x5ee:
      case 0x5ef:
      case 0x5f0:
      case 0x5f1:
      case 0x5f2:
      case 0x5f3:
      case 0x5f4:
      case 0x5f5:
      case 0x5f6:
      case 0x5f7:
      case 0x5f8:
      case 0x5f9:
      case 0x5fa:
      case 0x5fb:
      case 0x5fc:
      case 0x5fd:
      case 0x5fe:
      case 0x5ff:
      case 0x600:
      case 0x601:
      case 0x602:
      case 0x603:
      case 0x604:
      case 0x605:
      case 0x606:
      case 0x607:
      case 0x608:
      case 0x609:
      case 0x60a:
      case 0x60b:
      case 0x60c:
      case 0x60d:
      case 0x60e:
      case 0x60f:
      case 0x610:
      case 0x611:
      case 0x612:
      case 0x613:
      case 0x614:
      case 0x615:
      case 0x616:
      case 0x617:
      case 0x618:
      case 0x619:
      case 0x61a:
      case 0x61b:
      case 0x61c:
      case 0x61d:
      case 0x61e:
      case 0x61f:
      case 0x620:
      case 0x621:
      case 0x622:
      case 0x623:
      case 0x624:
      case 0x625:
      case 0x626:
      case 0x627:
      case 0x628:
      case 0x629:
      case 0x62a:
      case 0x62b:
      case 0x62c:
      case 0x62d:
      case 0x62e:
      case 0x62f:
      case 0x630:
      case 0x631:
      case 0x632:
      case 0x633:
      case 0x634:
      case 0x635:
      case 0x636:
      case 0x637:
      case 0x638:
      case 0x639:
      case 0x63a:
      case 0x63b:
      case 0x63c:
      case 0x63d:
      case 0x63e:
      case 0x63f:
      case 0x651:
      case 0x652:
      case 0x653:
      case 0x654:
      case 0x655:
      case 0x656:
      case 0x657:
      case 0x658:
      case 0x659:
      case 0x65a:
      case 0x65b:
      case 0x65c:
      case 0x65d:
      case 0x65e:
      case 0x65f:
      case 0x660:
      case 0x661:
      case 0x662:
      case 0x663:
      case 0x664:
      case 0x665:
      case 0x666:
      case 0x667:
      case 0x668:
      case 0x669:
      case 0x66a:
      case 0x66b:
      case 0x66c:
      case 0x66d:
      case 0x66e:
      case 0x66f:
      case 0x670:
      case 0x671:
      case 0x672:
      case 0x673:
      case 0x674:
      case 0x675:
      case 0x676:
      case 0x677:
      case 0x678:
      case 0x679:
      case 0x67a:
      case 0x67b:
      case 0x67c:
      case 0x67d:
      case 0x67e:
      case 0x67f:
      case 0x680:
      case 0x681:
      case 0x682:
      case 0x683:
      case 0x684:
      case 0x685:
      case 0x686:
      case 0x687:
      case 0x688:
      case 0x689:
      case 0x68a:
      case 0x68b:
      case 0x68c:
      case 0x68d:
      case 0x68e:
      case 0x68f:
      case 0x690:
      case 0x691:
      case 0x692:
      case 0x693:
      case 0x694:
      case 0x695:
      case 0x696:
      case 0x697:
      case 0x698:
      case 0x699:
      case 0x69a:
      case 0x69b:
      case 0x69c:
      case 0x69d:
      case 0x69e:
      case 0x69f:
      case 0x6a0:
      case 0x6a1:
      case 0x6a2:
      case 0x6a3:
      case 0x6bd:
      case 0x6be:
      case 0x6bf:
      case 0x6c0:
      case 0x6c1:
      case 0x6c2:
      case 0x6c3:
      case 0x6c4:
      case 0x6c5:
      case 0x6c6:
      case 0x6c7:
      case 0x6c8:
      case 0x6c9:
      case 0x6ca:
      case 0x6cb:
      case 0x6cc:
      case 0x6cd:
      case 0x6ce:
      case 0x6cf:
      case 0x6d0:
      case 0x6d1:
      case 0x6d2:
      case 0x6d3:
      case 0x6d4:
      case 0x6d5:
      case 0x6d6:
      case 0x6d7:
      case 0x6d8:
      case 0x6d9:
      case 0x6da:
      case 0x6db:
      case 0x6dc:
      case 0x6dd:
      case 0x6de:
      case 0x6df:
      case 0x6e0:
      case 0x6e1:
      case 0x6e2:
      case 0x6e3:
      case 0x6e4:
      case 0x6e5:
      case 0x6e6:
      case 0x6e7:
      case 0x6e8:
      case 0x6e9:
      case 0x6ea:
      case 0x6eb:
      case 0x6ec:
      case 0x6ed:
      case 0x6ee:
      case 0x6ef:
      case 0x6f0:
      case 0x6f1:
      case 0x6f2:
      case 0x6f3:
      case 0x6f4:
      case 0x6f5:
      case 0x6f6:
      case 0x6f7:
      case 0x6f8:
      case 0x6f9:
      case 0x6fa:
      case 0x6fb:
      case 0x6fc:
      case 0x6fd:
      case 0x6fe:
      case 0x6ff:
      case 0x700:
      case 0x701:
      case 0x702:
      case 0x703:
      case 0x704:
      case 0x705:
      case 0x706:
      case 0x707:
      case 0x720:
      case 0x721:
      case 0x722:
      case 0x723:
      case 0x724:
      case 0x725:
      case 0x726:
      case 0x727:
      case 0x728:
      case 0x729:
      case 0x72a:
      case 0x72b:
      case 0x72c:
      case 0x72d:
      case 0x72e:
      case 0x72f:
      case 0x730:
      case 0x731:
      case 0x732:
      case 0x733:
      case 0x734:
      case 0x735:
      case 0x736:
      case 0x737:
      case 0x738:
      case 0x739:
      case 0x73a:
      case 0x73b:
      case 0x73c:
      case 0x73d:
      case 0x73e:
      case 0x73f:
      case 0x740:
      case 0x741:
      case 0x742:
      case 0x743:
      case 0x744:
      case 0x745:
      case 0x746:
      case 0x747:
      case 0x748:
      case 0x749:
      case 0x74a:
      case 0x74b:
      case 0x74c:
      case 0x74d:
      case 0x74e:
      case 0x74f:
      case 0x750:
      case 0x751:
      case 0x752:
      case 0x753:
      case 0x754:
      case 0x755:
      case 0x756:
      case 0x757:
      case 0x758:
      case 0x759:
      case 0x75a:
      case 0x75b:
      case 0x75c:
      case 0x75d:
      case 0x75e:
      case 0x75f:
      case 0x760:
      case 0x761:
      case 0x762:
      case 0x763:
      case 0x764:
      case 0x765:
      case 0x766:
      case 0x767:
      case 0x768:
      case 0x769:
      case 0x76a:
      case 0x76b:
      case 0x771:
      case 0x772:
      case 0x773:
      case 0x774:
      case 0x775:
      case 0x776:
      case 0x777:
      case 0x778:
      case 0x779:
      case 0x77a:
      case 0x77b:
      case 0x77c:
      case 0x77d:
      case 0x77e:
      case 0x77f:
      case 0x780:
      case 0x781:
      case 0x782:
      case 0x783:
      case 0x784:
      case 0x785:
      case 0x786:
      case 0x787:
      case 0x788:
      case 0x789:
      case 0x78a:
      case 0x78b:
      case 0x78c:
      case 0x78d:
      case 0x78e:
      case 0x78f:
      case 0x790:
      case 0x791:
      case 0x792:
      case 0x793:
      case 0x794:
      case 0x795:
      case 0x796:
      case 0x797:
      case 0x798:
      case 0x799:
      case 0x79a:
      case 0x79b:
      case 0x79c:
      case 0x79d:
      case 0x79e:
      case 0x79f:
      case 0x7a0:
      case 0x7a1:
      case 0x7a2:
      case 0x7a3:
      case 0x7a4:
      case 0x7a5:
      case 0x7a6:
      case 0x7a7:
      case 0x7a8:
      case 0x7a9:
      case 0x7aa:
      case 0x7ab:
      case 0x7ac:
      case 0x7ad:
      case 0x7ae:
      case 0x7af:
      case 0x7b0:
      case 0x7b1:
      case 0x7b2:
      case 0x7b3:
      case 0x7b4:
      case 0x7b5:
      case 0x7b6:
      case 0x7b7:
      case 0x7b8:
      case 0x7b9:
      case 0x7ba:
      case 0x7bb:
      case 0x7bc:
      case 0x7bd:
      case 0x7be:
      case 0x7bf:
      case 0x7c0:
      case 0x7c1:
      case 0x7c2:
      case 0x7c3:
      case 0x7c4:
      case 0x7c5:
      case 0x7c6:
      case 0x7c7:
      case 0x7c8:
      case 0x7c9:
      case 0x7ca:
      case 0x7cb:
      case 0x7cc:
      case 0x7cd:
      case 0x7ce:
      case 1999:
      case 0x7d8:
      case 0x7d9:
      case 0x7da:
      case 0x7db:
      case 0x7dc:
      case 0x7dd:
      case 0x7de:
      case 0x7df:
      case 0x7e0:
      case 0x7e1:
      case 0x7e2:
      case 0x7e3:
      case 0x7e4:
      case 0x7e5:
      case 0x7e6:
      case 0x7e7:
      case 0x7e8:
      case 0x7e9:
      case 0x7ea:
      case 0x7eb:
      case 0x7ec:
      case 0x7ed:
      case 0x7ee:
      case 0x7ef:
      case 0x7f0:
      case 0x7f1:
      case 0x7f2:
      case 0x7f3:
      case 0x7f4:
      case 0x7f5:
      case 0x7f6:
      case 0x7f7:
      case 0x7f8:
      case 0x7f9:
      case 0x7fa:
      case 0x7fb:
      case 0x7fc:
      case 0x7fd:
      case 0x7fe:
      case 0x7ff:
      case 0x800:
      case 0x801:
      case 0x802:
      case 0x803:
      case 0x804:
      case 0x805:
      case 0x806:
      case 0x807:
      case 0x808:
      case 0x809:
      case 0x80a:
      case 0x80b:
      case 0x80c:
      case 0x80d:
      case 0x80e:
      case 0x80f:
      case 0x810:
      case 0x811:
      case 0x812:
      case 0x813:
      case 0x814:
      case 0x815:
      case 0x816:
      case 0x817:
      case 0x818:
      case 0x819:
      case 0x81a:
      case 0x81b:
      case 0x81c:
      case 0x81d:
      case 0x81e:
      case 0x81f:
      case 0x820:
      case 0x821:
      case 0x822:
      case 0x823:
      case 0x824:
      case 0x825:
      case 0x826:
      case 0x827:
      case 0x828:
      case 0x829:
      case 0x82a:
      case 0x82b:
      case 0x82c:
      case 0x82d:
      case 0x82e:
      case 0x82f:
      case 0x830:
      case 0x831:
      case 0x832:
      case 0x833:
        goto switchD_0116db29_caseD_45f;
      default:
        goto switchD_0116db29_default;
      }
    }
    if (-1 < param_1) {
      switch(param_1) {
      case 0:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1a:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x6c:
      case 0x71:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x79:
      case 0x7f:
      case 0x82:
      case 0x83:
      case 0xca:
      case 0xcc:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd7:
      case 0xd9:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xea:
      case 0xeb:
      case 0xee:
      case 0xf0:
      case 0xf1:
      case 0xf4:
      case 300:
      case 700:
      case 0x2bd:
      case 0x2c1:
      case 0x2c5:
      case 0x2c6:
      case 0x2c8:
      case 0x2c9:
      case 0x2ca:
      case 0x2cb:
      case 0x2cc:
      case 0x2d0:
      case 0x2d1:
      case 0x2d4:
      case 0x2d6:
      case 0x2d9:
      case 0x2da:
      case 0x2dd:
      case 0x2e0:
      case 0x2e3:
      case 0x326:
      case 0x327:
      case 0x328:
      case 0x32a:
      case 0x331:
      case 0x333:
      case 0x335:
      case 0x337:
      case 0x338:
      case 0x33b:
      case 0x33c:
      case 900:
      case 0x3ee:
      case 0x3ef:
      case 0x404:
        return 0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0x19:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2d:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x72:
      case 0x73:
      case 0x78:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x80:
      case 0x81:
      case 200:
      case 0xc9:
      case 0xcb:
      case 0xcd:
      case 0xce:
      case 0xd5:
      case 0xd6:
      case 0xd8:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xec:
      case 0xed:
      case 0xef:
      case 0xf2:
      case 0xf3:
      case 0x12d:
      case 500:
      case 0x1f5:
      case 0x1f6:
      case 0x1f7:
      case 0x1f8:
      case 0x1f9:
      case 0x1fa:
      case 0x1fb:
      case 0x1fc:
      case 0x1fd:
      case 0x1fe:
      case 0x1ff:
      case 0x200:
      case 0x201:
      case 0x202:
      case 0x203:
      case 0x204:
      case 0x205:
      case 0x206:
      case 0x207:
      case 0x208:
      case 0x209:
      case 0x20a:
      case 0x20b:
      case 0x20c:
      case 0x20d:
      case 0x20e:
      case 0x20f:
      case 0x210:
      case 0x211:
      case 0x212:
      case 0x213:
      case 0x214:
      case 0x215:
      case 0x216:
      case 0x217:
      case 0x218:
      case 0x219:
      case 0x21a:
      case 0x21b:
      case 0x21c:
      case 0x21d:
      case 0x21e:
      case 0x21f:
      case 0x220:
      case 0x221:
      case 0x222:
      case 0x223:
      case 0x224:
      case 0x225:
      case 0x226:
      case 0x227:
      case 0x228:
      case 0x229:
      case 0x22a:
      case 0x22b:
      case 0x22c:
      case 0x22d:
      case 0x22e:
      case 0x22f:
      case 0x230:
      case 0x231:
      case 0x232:
      case 0x233:
      case 0x234:
      case 0x235:
      case 0x236:
      case 0x237:
      case 0x238:
      case 0x239:
      case 0x23a:
      case 0x23b:
      case 0x23c:
      case 0x23d:
      case 0x23e:
      case 0x23f:
      case 0x240:
      case 0x241:
      case 0x242:
      case 0x243:
      case 0x244:
      case 0x245:
      case 0x246:
      case 0x247:
      case 0x248:
      case 0x249:
      case 0x24a:
      case 0x24b:
      case 0x24c:
      case 0x24d:
      case 0x24e:
      case 0x24f:
      case 0x250:
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
      case 0x255:
      case 0x256:
      case 599:
      case 600:
      case 0x259:
      case 0x25a:
      case 0x25b:
      case 0x25c:
      case 0x25d:
      case 0x25e:
      case 0x25f:
      case 0x260:
      case 0x261:
      case 0x262:
      case 0x263:
      case 0x264:
      case 0x265:
      case 0x266:
      case 0x267:
      case 0x268:
      case 0x269:
      case 0x26a:
      case 0x26b:
      case 0x26c:
      case 0x26d:
      case 0x26e:
      case 0x26f:
      case 0x270:
      case 0x271:
      case 0x272:
      case 0x273:
      case 0x274:
      case 0x275:
      case 0x276:
      case 0x277:
      case 0x278:
      case 0x279:
      case 0x27a:
      case 0x27b:
      case 0x27c:
      case 0x27d:
      case 0x27e:
      case 0x27f:
      case 0x280:
      case 0x281:
      case 0x2be:
      case 0x2bf:
      case 0x2c0:
      case 0x2c2:
      case 0x2c3:
      case 0x2c4:
      case 0x2c7:
      case 0x2cd:
      case 0x2ce:
      case 0x2cf:
      case 0x2d2:
      case 0x2d3:
      case 0x2d5:
      case 0x2d7:
      case 0x2d8:
      case 0x2db:
      case 0x2dc:
      case 0x2de:
      case 0x2df:
      case 0x2e1:
      case 0x2e2:
      case 800:
      case 0x321:
      case 0x322:
      case 0x323:
      case 0x324:
      case 0x325:
      case 0x329:
      case 0x32b:
      case 0x32c:
      case 0x32d:
      case 0x32e:
      case 0x32f:
      case 0x330:
      case 0x332:
      case 0x334:
      case 0x336:
      case 0x339:
      case 0x33a:
      case 0x385:
      case 0x386:
      case 0x387:
      case 0x388:
      case 0x389:
      case 0x38a:
      case 0x38b:
      case 0x38c:
      case 0x38d:
      case 0x38e:
      case 0x38f:
      case 0x390:
      case 0x391:
      case 0x392:
      case 0x393:
      case 0x394:
      case 0x395:
      case 0x396:
      case 0x397:
      case 0x398:
      case 0x399:
      case 0x39a:
      case 0x39b:
      case 0x39c:
      case 0x39d:
      case 0x39e:
      case 0x39f:
      case 0x3a0:
      case 0x3a1:
      case 1000:
      case 0x3e9:
      case 0x3ea:
      case 0x3eb:
      case 0x3ec:
      case 0x3ed:
      case 0x3f0:
      case 0x3f1:
      case 0x3f2:
      case 0x3f3:
      case 0x3f4:
      case 0x3f5:
      case 0x3f6:
      case 0x3f7:
      case 0x3f8:
      case 0x3f9:
      case 0x3fa:
      case 0x3fb:
      case 0x3fc:
      case 0x3fd:
      case 0x3fe:
      case 0x3ff:
      case 0x400:
      case 0x401:
      case 0x402:
      case 0x403:
      case 0x405:
      case 0x406:
      case 0x407:
      case 0x408:
      case 0x409:
        return 1;
      }
      goto switchD_0116db29_caseD_45f;
    }
  }
  else {
    switch(param_1) {
    case 0x3584:
    case 0x3585:
    case 0x3589:
    case 0x358a:
    case 0x358b:
    case 0x358d:
    case 0x3590:
    case 0x3592:
    case 0x3593:
    case 0x3594:
    case 0x3595:
    case 0x3596:
    case 0x3597:
    case 0x3598:
    case 0x3599:
    case 0x359e:
    case 0x359f:
    case 0x35a8:
    case 0x35aa:
    case 0x35ac:
    case 0x35ae:
    case 0x35af:
    case 0x35b1:
    case 0x35b3:
    case 0x35ea:
    case 0x35eb:
    case 0x35ec:
    case 0x35ed:
    case 0x35ee:
    case 0x35ef:
    case 0x35f0:
    case 0x35f1:
    case 0x3676:
    case 0x3677:
    case 0x3678:
    case 0x3679:
    case 0x3692:
    case 0x3693:
    case 0x3697:
    case 0x3699:
    case 0x3714:
    case 0x3716:
    case 0x371b:
    case 0x371c:
    case 0x371d:
    case 0x3778:
    case 0x3779:
    case 0x377b:
    case 0x377d:
    case 0x377f:
    case 0x3780:
    case 0x3781:
    case 0x3782:
    case 0x3783:
    case 0x3784:
    case 0x3785:
    case 0x3786:
    case 0x3787:
    case 0x3788:
    case 0x3789:
    case 0x378f:
    case 0x3793:
    case 0x3795:
    case 0x37dc:
    case 0x37f0:
    case 0x37f1:
    case 0x37f2:
    case 0x37f5:
    case 0x37f6:
    case 0x37ff:
    case 0x3844:
    case 0x38a4:
    case 0x38a5:
    case 0x38a6:
    case 0x38aa:
    case 0x38ad:
    case 0x38ae:
    case 0x38b2:
    case 0x38bb:
    case 0x38c1:
    case 0x38c7:
    case 0x38c8:
    case 0x38c9:
    case 0x38ca:
    case 0x38cb:
    case 0x38cc:
    case 0x390b:
    case 0x390d:
    case 0x3910:
    case 0x3911:
    case 0x3914:
    case 0x3915:
    case 0x3919:
    case 0x391a:
    case 0x391b:
    case 0x391c:
    case 0x391d:
    case 0x391e:
    case 0x391f:
    case 0x3920:
    case 0x396c:
    case 0x3972:
    case 0x3973:
    case 0x3974:
    case 0x39d1:
    case 0x39d8:
    case 0x3a35:
    case 0x3a36:
    case 0x3a37:
    case 0x3a38:
    case 0x3a3b:
    case 0x3a3c:
    case 0x3a3d:
    case 0x3a3f:
    case 0x3a50:
    case 0x3a99:
      return 0;
    case 0x3586:
    case 0x3587:
    case 0x3588:
    case 0x358c:
    case 0x358e:
    case 0x358f:
    case 0x3591:
    case 0x359a:
    case 0x359b:
    case 0x359c:
    case 0x359d:
    case 0x35a0:
    case 0x35a1:
    case 0x35a2:
    case 0x35a3:
    case 0x35a4:
    case 0x35a5:
    case 0x35a6:
    case 0x35a7:
    case 0x35a9:
    case 0x35ab:
    case 0x35ad:
    case 0x35b0:
    case 0x35b2:
    case 0x35e8:
    case 0x35e9:
    case 0x364d:
    case 0x364e:
    case 0x364f:
    case 0x3650:
    case 0x3651:
    case 0x3652:
    case 0x3653:
    case 0x3654:
    case 0x3655:
    case 0x3656:
    case 0x3657:
    case 0x3658:
    case 0x3659:
    case 0x365a:
    case 0x365b:
    case 0x365c:
    case 0x365d:
    case 0x365e:
    case 0x365f:
    case 0x3660:
    case 0x3661:
    case 0x3662:
    case 0x3663:
    case 0x3664:
    case 0x3665:
    case 0x3666:
    case 0x3667:
    case 0x3668:
    case 0x3669:
    case 0x366a:
    case 0x366b:
    case 0x366c:
    case 0x366d:
    case 0x366e:
    case 0x366f:
    case 0x3670:
    case 0x3671:
    case 0x3672:
    case 0x3673:
    case 0x3674:
    case 0x3675:
    case 0x367a:
    case 0x367b:
    case 0x367c:
    case 0x367d:
    case 0x367e:
    case 0x367f:
    case 0x3680:
    case 0x3681:
    case 0x3682:
    case 0x3683:
    case 0x3684:
    case 0x368f:
    case 0x3690:
    case 0x3691:
    case 0x3694:
    case 0x3695:
    case 0x3696:
    case 0x3698:
    case 0x369a:
    case 0x369b:
    case 0x369c:
    case 0x369d:
    case 0x369e:
    case 14000:
    case 0x36b1:
    case 0x36b2:
    case 0x36b3:
    case 0x36b4:
    case 0x36b5:
    case 0x36b6:
    case 0x36b7:
    case 0x36b8:
    case 0x36b9:
    case 0x36ba:
    case 0x36bb:
    case 0x36bc:
    case 0x36bd:
    case 0x36be:
    case 0x36bf:
    case 0x36c0:
    case 0x3715:
    case 0x3717:
    case 0x3718:
    case 0x3719:
    case 0x371a:
    case 0x371e:
    case 0x377a:
    case 0x377c:
    case 0x377e:
    case 0x378a:
    case 0x378b:
    case 0x378c:
    case 0x378d:
    case 0x378e:
    case 0x3790:
    case 0x3791:
    case 0x3792:
    case 0x3794:
    case 0x37dd:
    case 0x37de:
    case 0x37df:
    case 0x37e0:
    case 0x37e1:
    case 0x37e2:
    case 0x37e4:
    case 0x37e5:
    case 0x37e6:
    case 0x37e7:
    case 0x37e8:
    case 0x37e9:
    case 0x37ea:
    case 0x37eb:
    case 0x37ec:
    case 0x37ed:
    case 0x37ee:
    case 0x37ef:
    case 0x37f3:
    case 0x37f4:
    case 0x37f7:
    case 0x37f8:
    case 0x37f9:
    case 0x37fa:
    case 0x37fb:
    case 0x37fc:
    case 0x37fd:
    case 0x37fe:
    case 0x3840:
    case 0x3841:
    case 0x3842:
    case 0x3843:
    case 0x38a7:
    case 0x38a8:
    case 0x38a9:
    case 0x38ab:
    case 0x38ac:
    case 0x38af:
    case 0x38b0:
    case 0x38b1:
    case 0x38b3:
    case 0x38b4:
    case 0x38b5:
    case 0x38b6:
    case 0x38b7:
    case 0x38b8:
    case 0x38b9:
    case 0x38ba:
    case 0x38bc:
    case 0x38bd:
    case 0x38be:
    case 0x38bf:
    case 0x38c0:
    case 0x38c2:
    case 0x38c3:
    case 0x38c4:
    case 0x38c5:
    case 0x38c6:
    case 0x3908:
    case 0x3909:
    case 0x390a:
    case 0x390c:
    case 0x390e:
    case 0x390f:
    case 0x3912:
    case 0x3913:
    case 0x3916:
    case 0x3917:
    case 0x3918:
    case 0x396d:
    case 0x396e:
    case 0x396f:
    case 0x3970:
    case 0x3971:
    case 0x3975:
    case 0x3976:
    case 0x3977:
    case 0x39d0:
    case 0x39d2:
    case 0x39d3:
    case 0x39d4:
    case 0x39d5:
    case 0x39d6:
    case 0x39d7:
    case 0x3a34:
    case 0x3a39:
    case 0x3a3a:
    case 0x3a40:
    case 0x3a41:
    case 0x3a42:
    case 0x3a43:
    case 0x3a44:
    case 0x3a45:
    case 0x3a46:
    case 0x3a47:
    case 0x3a48:
    case 0x3a49:
    case 0x3a4a:
    case 0x3a4b:
    case 0x3a4c:
    case 0x3a4d:
    case 0x3a4e:
    case 0x3a4f:
    case 0x3a51:
    case 15000:
    case 0x3a9a:
      return 1;
    }
switchD_0116db29_caseD_45f:
    if (-1 < param_1) goto LAB_0116d2ee;
  }
LAB_0116d2ee:
  //PoliteExit();
  return 0;
}

