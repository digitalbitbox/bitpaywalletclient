/**********************************************************************
* Copyright (c) 2015 Jonas Schnelli                                  *
* Distributed under the MIT software license, see the accompanying   *
* file COPYING or http://www.opensource.org/licenses/mit-license.php.*
**********************************************************************/

#include <btc/random.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_random()
{
    unsigned char r_buf[32];
    memset(r_buf, 0, 32);
    random_init();
    random_bytes(r_buf, 32, 0);
}
