#include <stdio.h>
#include <stdlib.h>

int bin2source(char *inputfile, char *outputfile, char *tablename);

// returns 0:OK|1:Can't open input file|2:Can't open output file
int bin2source(char *inputfile, char *outputfile, char *tablename)
{
    unsigned char *data;
    FILE *file;
    int i,lenght;
    // open data file
    file = fopen( inputfile, "rb" );
    if ( file == NULL ) return 1;

    // get file size
    fseek(file,0,SEEK_END);
    lenght=ftell(file);
    fseek(file,0,SEEK_SET);

    // allocate buffer
    data = (unsigned char*)malloc(lenght);

    // read file data
    fread( data, lenght, 1, file );
    fclose( file );

    file=fopen(outputfile, "w");
    if ( file == NULL ) return 2;

    fprintf(file,"typedef unsigned char UINT8;\nconst UINT8 %s[%d] = {\n",tablename,lenght);
    for (i=0; i<lenght; i++) {
        fprintf(file,"\t%i,\n",data[i]);
    }
    fprintf(file,"};\n");
    fclose( file );
    free( data );
    return 0;
}
