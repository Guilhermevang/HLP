#include <stdio.h>
#include <assert.h>
#include "hlp.h"

void test_safe_malloc()
{
    printf("Testando HLP_SafeMalloc...\n");
    int *ptr = HLP_SafeMalloc(10 * sizeof(int));
    assert(ptr != NULL);
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i * i;
    }
    printf("HLP_SafeMalloc funcionando corretamente!\n");
    HLP_SafeFree(ptr);
}

void test_logging()
{
    printf("Testando HLP_Log e HLP_LogError...\n");
    HLP_Log("Log de teste: %s", "isso é um teste");
    HLP_LogError("Log de erro de teste: %s", "isso é um teste de erro");
    printf("HLP_Log e HLP_LogError funcionando corretamente!\n");
}
