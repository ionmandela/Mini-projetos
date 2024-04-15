#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

void funInicio();
void funComoUsar();
void inOperacao();
void operacoes(char operacaoC[100000]);
void fimOperacao();

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int op, resultado;
    char es, op2;
    char operacao[100000];

    while(true){
        funInicio();
        op = getche() - '0';
        if(op == 1 || op == 2 || op == 3){

            //COMO FUNCIONA A CALCULADORA
            if(op == 1){
                do{
                funComoUsar();
                op = getche() - '0';
                if(op == 2){exit(EXIT_SUCCESS);}
                system("cls");
                }while(op != 1);
                system("cls");
            }
            //OPERAÇÃO
            if(op == 2){
                do{
                    inOperacao();
                    operacoes(operacao);
                    do{
                        system("cls");
                        cout << "RESULTADO: " << endl;
                        fimOperacao();
                        op2 = getche();
                        if(op2 == 'S' || op2 == 's'){
                            exit(EXIT_SUCCESS);
                        } else{break;}
                    }while(true);
                    
                    
                }while(true);
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
    cout << "=========================================================================================================" << endl;
    cout << "Digite os números que quiser e use os sinais operatórios: " << endl;
    cout << "Use o + para adição " << endl;
    cout << "Use o - para subtração " << endl;
    cout << "Use o x para multiplicação " << endl;
    cout << "Use o / para divisão " << endl;
    cout << "=========================================================================================================" << endl;
    cout << "Digitação de expressão: " << endl;
    cout << "Exemplo: " << " se digitar uma expressão do tipo 2+3/4, o programa irá seguir as ordens de operação." << endl;
    cout << "Sendo elas por prioridade: " << endl;
    cout << "\n 1° - ( ) parênteses \n 2° - [ ] colchetes \n 3° - { } chaves";
    cout << "\n 4° - multiplicação e divisão \n 5° - adição e subtração \n" << endl;
    cout << "Ao terminar de escrever sua expressão, aperte 'enter' do teclado para obter o resultado. " << endl;
    cout << "=========================================================================================================" << endl;
    cout << "1 - voltar  " << "2 - Sair  " << endl;
    cout << "=========================================================================================================" << endl;
    cout << "Digite a opção desejada: " << endl;
}

void inOperacao(){
    system("cls");
    cout << "================================================================================================" << endl;
    cout << "Expressões somente numéricas!" << endl;
    cout << "================================================================================================" << endl;
    cout << "Operação: " << endl;
}

void operacoes(char operacaoC[100000]) {
    int i = 0;
    char ch;
    
    while (true) {
        ch = getche(); // Lê um caractere sem pressionar Enter
        if (ch == '=') {
            operacaoC[i] = '\0'; // Adiciona o terminador nulo para indicar o fim da string
            break; // Sai do loop quando encontrar o caractere '='
        } else {
            operacaoC[i] = ch; // Armazena o caractere na string
            i++;
        }
    }
}

void fimOperacao(){
    cout << "================================================================================================" << endl;
    cout << "Digite S para sair ou qualquer letra para fazer uma nova operação." << endl;
    cout << "================================================================================================" << endl;
}
