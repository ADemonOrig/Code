#ifndef __ASM_H__
#define __ASM_H__


#undef   al
#undef   ah
#undef   ax
#undef  eax
#undef  rax

#undef   bl
#undef   bh
#undef   bx
#undef  ebx
#undef  rbx

#undef   cl
#undef   ch
#undef   cx
#undef  ecx
#undef  rcx

#undef   dl
#undef   dh
#undef   dx
#undef  edx
#undef  rdx

#undef   dil
#undef   di
#undef  edi
#undef  rdi

#undef   sil
#undef   si
#undef  esi
#undef  rsi

#undef   bpl
#undef   bp
#undef  ebp
#undef  rbp

#undef   spl
#undef   sp
#undef  esp
#undef  rsp

#undef  r8b
#undef  r8w
#undef  r8d
#undef  r8

#undef  r9b
#undef  r9w
#undef  r9d
#undef  r9

#undef  r10b
#undef  r10w
#undef  r10d
#undef  r10

#undef  r11b
#undef  r11w
#undef  r11d
#undef  r11

#undef  r12b
#undef  r12w
#undef  r12d
#undef  r12

#undef  r13b
#undef  r13w
#undef  r13d
#undef  r13

#undef  r14b
#undef  r14w
#undef  r14d
#undef  r14

#undef  r15b
#undef  r15w
#undef  r15d
#undef  r15

#undef  rip
#undef  rflags
#undef  eflags
#undef   flags
#undef   cs
#undef   ds
#undef   ss
#undef   es
#undef   fs
#undef   gs

#define  al  0x011
#define  ah  0x021
#define  ax  0x002
#define eax  0x004
#define rax  0x008

#define  bl  0x111
#define  bh  0x121
#define  bx  0x102
#define ebx  0x104
#define rbx  0x108

#define  cl  0x211
#define  ch  0x221
#define  cx  0x202
#define ecx  0x204
#define rcx  0x208

#define  dl  0x311
#define  dh  0x321
#define  dx  0x302
#define edx  0x304
#define rdx  0x308

#define  dil 0x411
#define  di  0x402
#define edi  0x404
#define rdi  0x408

#define  sil 0x511
#define  si  0x502
#define esi  0x504
#define rsi  0x508

#define  bpl 0x611
#define  bp  0x602
#define ebp  0x604
#define rbp  0x608

#define  spl 0x711
#define  sp  0x702
#define esp  0x704
#define rsp  0x708

#define r8b  0x811
#define r8w  0x802
#define r8d  0x804
#define r8   0x808

#define r9b  0x911
#define r9w  0x902
#define r9d  0x904
#define r9   0x908

#define r10b 0xa11
#define r10w 0xa02
#define r10d 0xa04
#define r10  0xa08

#define r11b 0xb11
#define r11w 0xb02
#define r11d 0xb04
#define r11  0xb08

#define r12b 0xc11
#define r12w 0xc02
#define r12d 0xc04
#define r12  0xc08

#define r13b 0xd11
#define r13w 0xd02
#define r13d 0xd04
#define r13  0xd08

#define r14b 0xe11
#define r14w 0xe02
#define r14d 0xe04
#define r14  0xe08

#define r15b 0xf11
#define r15w 0xf02
#define r15d 0xf04
#define r15  0xf08

#define rip    0x1008
#define rflags 0x2008
#define eflags 0x3008
#define  flags 0x4008
#define  cs    0x5008
#define  ds    0x6008
#define  ss    0x7008
#define  es    0x8008
#define  fs    0x9008
#define  gs    0xa008


#include "local.h"


#endif
