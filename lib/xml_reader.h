#ifndef XML_READER_H
#define XML_READER_H

#include <libxml/xmlreader.h>

void processNode(xmlTextReaderPtr reader);
void streamFile(const char *filename);

#endif
