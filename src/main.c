#include <stdio.h>
#include <string.h>

int bin2source(char *inputfile, char *outputfile, char *tablename, int amiga);

const char *HELP = "bin2source 1.1.0\n\
Creates a C bytes array from a file.\n\n\
USAGE:\n\
    bin2source inputfile outputfile arrayname [--amiga]\n\
\n\
EXAMPLE:\n\
    bin2source test test.c TESTARRAY\n";

int main( int argc, char *argv[] )  {
    // Amiga mode ?
    int amiga;
    if( argc == 4 || argc == 5) {
        if (argv[4] && (strncmp(argv[4], "--amiga", 7) == 0)) {
            amiga = 1;
        }
        else amiga = 0;

        switch (bin2source(argv[1], argv[2], argv[3], amiga)) {
            case 0: return 0;

            case 1: printf("Can't open input file\n");
            return 1;

            case 2: printf("Can't open output file\n");
            return 2;
        }
    }
    else printf("%s", HELP);
}
