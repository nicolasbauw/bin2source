#include <stdio.h>

int bin2source(char inputfile[], char outputfile[], char tablename[]);

int main( int argc, char *argv[] )  {

   if( argc == 4 ) {
      bin2source(argv[1], argv[2], argv[3]);
   }
   else printf("Invalid number of arguments.\n");
}