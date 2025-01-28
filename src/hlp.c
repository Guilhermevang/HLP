#include "hlp.h"
#include <stdarg.h>

// Função de log genérico
void HLP_Log(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    printf("[LOG]: ");
    vprintf(format, args);
    printf("\n");
    va_end(args);
}

// Função de log para erros
void HLP_LogError(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    fprintf(stderr, "[ERROR]: ");
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");
    va_end(args);
}

// Gerenciamento seguro de memória
void *HLP_SafeMalloc(size_t size)
{
    void *ptr = malloc(size);
    if (!ptr)
    {
        HLP_LogError("Erro ao alocar memória. Tamanho solicitado: %zu bytes", size);
        exit(EXIT_FAILURE); // Encerrar o programa em caso de falha
    }
    return ptr;
}

void HLP_SafeFree(void *ptr)
{
    if (ptr)
    {
        free(ptr);
        ptr = NULL; // Evitar uso de ponteiros soltos
    }
}
