#include <stdio.h>

void test_safe_malloc();
void test_logging();

int main()
{
    printf("Iniciando os testes para cam_hlp...\n");

    // Rodar os testes
    test_safe_malloc();
    test_logging();

    printf("Todos os testes passaram com sucesso!\n");
    return 0;
}
