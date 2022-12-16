/*
   Troglobyte AppHub:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#include "app.h"


/*
  overview:
  >
  > Should output a greeting message to the standerd
  > output console for the user.
  >
  args:
  -> ...: N/A
*/
const char *salutations(void)
{
    return "Salutations and welcome to C";
} // end of func


/*
  overview:
  >
  > Should output a usage message to the standerd
  > output console for the user to see what CLI
  > commands can be used.
  >
  args:
  -> ...: N/A
*/
static void usage(void)
{
    puts("USAGE: <program> --<flag>");
    puts("--help: Output the help menu.");
} // end of func


/*
  overview:
  >
  > This is where all Troglobyte apps start there operation.
  >
  > We can also give command-line arguments in C. CLI
  > arguments are given after the name of the program in
  > command-line shell of Operating Systems.
  >
  
  args:
   -> argc: stores the number of command-line arguments passed in.
   -> argv: array of character pointers listing all the arguments.
*/
int foundation(int argc, char **argv)
{   
    if (!strcmp(*(argv + 1), "--help"))
    {
        usage();
        return EXIT_FAILURE;
    } // end if

    /*
      Begin to code here.
    */
    printf("%s", salutations());

    return EXIT_SUCCESS;
} // end of func
