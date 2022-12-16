/*
   Troglobyte AppHub:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#ifndef APP_H
#define APP_H

/*
   header files for project development
 */

// standard files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// app or lib headers
#include "defs.h"

/*
   applcation functions listed for unit testing with
   Troglo test framework in the test directory.
*/
#ifdef __cplusplus
extern "C" {
#endif

const char *salutations(void);

#ifdef __cplusplus
}
#endif

#endif
