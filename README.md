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

To compile, just type ```make```.