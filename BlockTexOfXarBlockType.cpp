#include "block_textures.h"

/* BlockTexOfXarBlockType(int) */

int BlockTexOfXarBlockType(int param_1)
{
  int uVar2 = -1;
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

