#include <stdio.h>

int bin2source(char *inputfile, char *outputfile, char *tablename);

const char *HELP = "Creates a C const array from a file.\n\n\
USAGE:\n\
    bin2source inputfile outputfile tablename\n\
\n\
EXAMPLE:\n\
    bin2source test test.c TESTARRAY\n";

int main( int argc, char *argv[] )  {

   if( argc == 4 ) {
      switch (bin2source(argv[1], argv[2], argv[3])) {
          case 0: return 0;
          break;

          case 1: printf("Can't open input file\n");
          break;

          case 2: printf("Can't open output file\n");
          break;
      }

   }
   else printf("%s", HELP);
}
