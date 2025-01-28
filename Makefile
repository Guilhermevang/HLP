# Diretórios
BUILD_DIR = build
SRC_DIR = src
TEST_DIR = tests

# Executáveis
EXEC = cam_hlp
TEST_EXEC = cam_hlp_tests

# Comandos
CMAKE = cmake
MAKE = make
CTEST = ctest

# Alvo padrão (build)
.PHONY: all
all: build

# Configurar e compilar o projeto
.PHONY: build
build:
	@mkdir -p $(BUILD_DIR)
	@cd $(BUILD_DIR) && $(CMAKE) .. && $(MAKE)

# Rodar o executável principal
.PHONY: run
run: build
	@$(BUILD_DIR)/$(EXEC)

# Rodar os testes usando CTest
.PHONY: test
test: build
	@cd $(BUILD_DIR) && $(CTEST)

# Rodar os testes com detalhes (verbose)
.PHONY: test-verbose
test-verbose: build
	@cd $(BUILD_DIR) && $(CTEST) --verbose

# Limpar arquivos gerados
.PHONY: clean
clean:
	@rm -rf $(BUILD_DIR)

# Recompilar tudo
.PHONY: rebuild
rebuild: clean build
