#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>
using namespace std;

void funInicio();
void funComoUsar();
void funOpErro();

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int opcao, opcao2;

    do{
        system("cls");
        funInicio();
        cin >> opcao;
        if(opcao == 1 || opcao == 2 || opcao == 3){
            if(opcao == 3){exit(EXIT_SUCCESS);}
            else if(opcao == 1){
                funComoUsar();
                cin >> opcao2;
                    if(opcao2 == 1 || opcao2 == 2){
                        if(opcao2 == 1){}
                        if(opcao2 == 2){exit(EXIT_SUCCESS);}
                    }
                    else{
                        while(opcao2!=1 || opcao2!=2){
                            funOpErro();
                            cin >> opcao2;
                        }
                    }
            }
        }
        else{
            while(opcao2!=1 && opcao2!=2){
                funOpErro();
                cin >> opcao2;
            }
        }


    }while(true);

    return 0;
}

void funOpErro(){
    system("cls");
    cout << "=============ERRO-DIGITE-UMA-OPÇÃO-VÁLIDA================" << endl;
    cout << "1 - voltar  " << "2 - Sair  " << endl;
    cout << "=============================================================" << endl;
}

void funInicio(){
    cout << "=============================================================" << endl;
    cout << "CALCULADORA - SOMA, DIFERENÇA, PRODUTO E RAZÃO " << endl;
    cout << "1 - Como usar a calculadora  " << "2 - Operar  "<< "3 - Sair  " << endl;
    cout << "=============================================================" << endl;
    cout << "Digite a opção desejada: ";
}

void funComoUsar(){
    system("cls");
    cout << "=============================================================" << endl;
    cout << "Use o + para adição " << endl;
    cout << "Use o - para subtração " << endl;
    cout << "Use o x para multiplicação " << endl;
    cout << "Use o / para divisão " << endl;
    cout << "=============================================================" << endl;
    cout << "1 - voltar  " << "2 - Sair  " << endl;
    cout << "=============================================================" << endl;
    cout << "Digite a opção desejada: " << endl;
}
