#include <cstdio>
#include <iostream> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cctype>
#include <main.h>

using namespace std;

int main(int argc, char** argv)
{
    try {
        Funcoes funcoes;
        funcoes.processarComando(argc, argv);
    } catch (exception exception) {
        cout << "gerou um erro";
    }

    printf("olá do %s!\n", "Onye");
    cout << argv[1] << endl;

    return 0;
}

class Funcoes {
public:
    int processarComando(int argc, char** argv)
    {
        string comando = argv[1];
        string objeto = argv[2];
        string parametros[argc - 2];

        for (int contador = 3; contador < argc + 1; contador++) {
            parametros[contador - 2] = argv[contador];
        }

        switch (tolower(comando)) {
        case 'configurar':
            configurar(objeto, parametros);
        case 'criarlinksimbolico':
            criarLinkSimbolico(objeto, parametros);
        case 'criarvariavelambiente':
            criaVariavelAmbiente(objeto, parametros);
        default:
            throw new exception();
            exibirHelpBasico();
        }
    }

    int configurar(string objeto, string parametros[])
    {
        cout << "Configurando!";
    }

    int criarLinkSimbolico(string objeto, string parametros[])
    {
        cout << "Criando Link!";
    }

    int criaVariavelAmbiente(string objeto, string parametros[])
    {
        cout << "Criando Varíável!";
    }

    void exibirHelpBasico()
    {
        cout << "Help Básico";
    }
};
