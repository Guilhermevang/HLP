#ifndef HLP_H
#define HLP_H

#include <stdio.h>
#include <stdlib.h>

// Funções de log
void HLP_Log(const char *format, ...);
void HLP_LogError(const char *format, ...);

// Gerenciamento seguro de memória
void *HLP_SafeMalloc(size_t size);
void HLP_SafeFree(void *ptr);

#endif // HLP_H
