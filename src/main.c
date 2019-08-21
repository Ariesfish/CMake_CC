#include <stdio.h>
#include <stdlib.h>
#include "xml_reader.h"

int main(int argc, char **argv)
{
	if (argc != 2)
		return(1);

	/*
	* this initialize the library and check potential ABI mismatches
	* between the version it was compiled for and the actual shared
	* library used.
	*/
	streamFile(argv[1]);

	/*
	* Cleanup function for the XML library.
	*/
	xmlCleanupParser();
	/*
	* this is to debug memory for regression tests
	*/
	xmlMemoryDump();
	return(0);
}

