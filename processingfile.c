#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// c file operations
// creation of a new file, opening, writing data in a file, closing a file
// 
// steps for processing a file
// 1. declare a file pointer variable
// 2. open a file using fopen()
// 3. process the file using the suitable function
// 4. close the file using fclose() function
//
// fopen, fclose, getc, putc, getw, putw, fprintf, fscanf, fget(string of char),fput, feof(single marker)

int main()
{
	/*FILE *fopen( const char * filepath, const char * mode );*/
	FILE *fp;
	fp = fopen("filename.txt", "w");
	//processing of the fie
	fprintf(fp, "%s", "Tawai testing");
	//end of processing
	fclose(fp);
	return 0;
}
