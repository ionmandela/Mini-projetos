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
    int op;

    while(true){
        funInicio();
        cin >> op;
        if(op == 1 || op == 2 || op == 3){
            
            //COMO FUNCIONA A CALCULADORA
            if(op == 1){
                do{
                funComoUsar();
                cin >> op;
                if(op == 2){exit(EXIT_SUCCESS);}
                system("cls");
                }while(op != 1);
                system("cls");
            }
            //OPERAÇÃO
            if(op == 2){

            }
            //SAIR DA CALCULADORA
            if(op == 3){
                exit(EXIT_SUCCESS);
            }
        }
        else{
            system("cls");
        }

    }
    return 0;
}

void funInicio(){
    cout << "=============================================================" << endl;
    cout << "CALCULADORA - SOMA, DIFERENÇA, PRODUTO E RAZÃO: " << endl;
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

void funOpErro(){
    system("cls");
    cout << "=============ERRO-DIGITE-UMA-OPÇÃO-VÁLIDA================" << endl;
    cout << "1 - Como usar a calculadora  " << "2 - Operar  "<< "3 - Sair  " << endl;
    cout << "=============================================================" << endl;
}