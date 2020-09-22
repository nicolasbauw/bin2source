#include <stdio.h>

int bin2source(char inputfile[], char outputfile[], char tablename[]);

const char *HELP = "Creates a C source array from a file.\n\n\
USAGE:\n\
    bin2source inputfile outputfile tablename\n\
\n\
EXAMPLE:\n\
    bin2source test test.c TESTARRAY\n";

int main( int argc, char *argv[] )  {

   if( argc == 4 ) {
      bin2source(argv[1], argv[2], argv[3]);
   }
   else printf("%s", HELP);
}
