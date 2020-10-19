# bin2source

Creates a C const array from a file.

Usage:
bin2source inputfile outputfile arrayname

Example:
```
echo "abcd" > test.txt
bin2source test.txt test.c TESTARRAY
cat test.c
typedef unsigned char UINT8;
const UINT8 TESTARRAY[5] = {
        97,
        98,
        99,
        100,
        10,
};
```

With the --amiga commutator (I use it with VBCC for instance), the output will be like:
```
#include <exec/types.h>
const UBYTE TESTARRAY[5] = {
...
```
I use that in place of the AsmPro INCBIN macro. To use this data in your source, you can make an 'extern' declaration:
```
extern const UBYTE test[5];
```

To compile the bin2source utility, just clone and type ```make```.