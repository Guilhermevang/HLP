# HLP - Core Helper Library for cAM-Sys

O **HLP** é a biblioteca central de funções auxiliares (helpers) para o sistema **cAM-Sys**. Ele foi projetado para fornecer utilitários reutilizáveis e seguros para projetos modulares em C, com foco em confiabilidade, desempenho e boas práticas.

## **Recursos**
- **Gerenciamento Seguro de Memória**:
  - `HLP_SafeMalloc(size_t size)`: Aloca memória e encerra o programa em caso de falha.
  - `HLP_SafeFree(void *ptr)`: Libera memória e protege contra ponteiros soltos.
  
- **Sistema de Logs**:
  - `HLP_Log(const char *format, ...)`: Logs informativos.
  - `HLP_LogError(const char *format, ...)`: Logs para mensagens de erro.

- **Extensível**:
  - Projetado para ser integrado a múltiplos projetos do cAM-Sys, como ACR, ACW, etc.

## **Instalação**

### **1. Clonando o Repositório**
Adicione o HLP como um submódulo ao seu projeto:
```bash
git submodule add https://github.com/guilhermevang/HLP modules/hlp
