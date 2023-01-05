#pragma once
#include <cstdio>
#include <iostream> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cctype>

using namespace std;

class funcoes {
private:
    int processarComando(int argc, char** argv);

    int configurar(string objeto, string parametros[]);

    int criarLinkSimbolico(string objeto, string parametros[]);

    int criaVariavelAmbiente(string objeto, string parametros[]);

    void exibirHelpBasico();
};


