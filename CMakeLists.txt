cmake_minimum_required(VERSION 3.16)
project(cam_hlp VERSION 1.0 LANGUAGES C)

# Incluir os cabeçalhos da biblioteca
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Adicionar a biblioteca estática cam_hlp
add_library(cam_hlp STATIC src/hlp.c)

# Adicionar os testes
file(GLOB TEST_SOURCES tests/*.c)
add_executable(cam_hlp_tests ${TEST_SOURCES})
target_link_libraries(cam_hlp_tests cam_hlp)

# Adicionar suporte ao CTest para executar os testes
enable_testing()
add_test(NAME cam_hlp_tests COMMAND cam_hlp_tests)
