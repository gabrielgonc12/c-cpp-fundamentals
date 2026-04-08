#include <iostream>
using namespace std;

int main(){
    int valor1, valor2, resultado;
    char operador;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite qual operador deseja utilizar (*, /, +, -, %): ";
    cin >> operador;

    while (!(operador == '*' || operador == '/' || operador == '+' || operador == '-' || operador == '%')) {
        cout << "Operador invalido, digite novamente: ";
        cin >> operador;
    }

    if ((operador == '/' || operador == '%') && valor2 == 0) {
        cout << "Erro: A divisao por zero esta indefinida." << endl;
    } else {
        if (operador == '+') resultado = valor1 + valor2;
        else if (operador == '-') resultado = valor1 - valor2;
        else if (operador == '*') resultado = valor1 * valor2;
        else if (operador == '/') resultado = valor1 / valor2;
        else if (operador == '%') resultado = valor1 % valor2;

        cout << "O resultado da operacao e: " << resultado << endl;
    }

    return 0; 
}