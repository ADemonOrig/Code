#ifndef _linux_x64_h_
#define _linux_x64_h_


#include "local.h"
#include <stdio.h>
#include <stdlib.h>


u64 slen(const _string s) {
    const _string p = s;
    while(*p++);
    return (p - s);
}


#endif
