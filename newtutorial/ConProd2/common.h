#ifndef COMMON_H
#define COMMON_H

#include <QSemaphore>
#include "myconstants.h"

extern char buffer[BufferSize];
extern QSemaphore freeBytes(BufferSize);
extern QSemaphore usedBytes;



#endif // COMMON_H
