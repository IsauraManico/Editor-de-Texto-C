#!/bin/bash



#compila os arquivos .c
gcc -c editorTexto.c programa.c

#Compila e cria um executavel
gcc programa.o editorTexto.o -o executavel

#executar o programa
./executavel

#Remover os arquivos .o e Limpar a tela totalmente
rm -rf executavel *.o

#limpar o terminal
clear
