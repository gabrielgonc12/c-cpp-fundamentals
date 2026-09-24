#include <iostream>

using namespace std;

int main() {
    int num1, num2, resultado;
    char op;

    cout << "Digite o primeiro valor: ";
    cin >> num1;

    cout << "Digite o segundo valor: ";
    cin >> num2;

    cout << "Digite qual operador deseja utilizar (*, /, +, -, %): ";
    cin >> op;

    // Validação do operador
    while (op != '*' && op != '/' && op != '+' && op != '-' && op != '%') {
        cout << "Operador invalido, digite novamente: ";
        cin >> op;
    }

    // Execução da operação escolhida
    if (op == '+') {
        resultado = num1 + num2;
    } else if (op == '-') {
        resultado = num1 - num2;
    } else if (op == '*') {
        resultado = num1 * num2;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Erro: A divisao por zero esta indefinida." << endl;
            return 0;
        }
        resultado = num1 / num2;
    } else if (op == '%') {
        if (num2 == 0) {
            cout << "Erro: A divisao por zero esta indefinida." << endl;
            return 0;
        }
        resultado = num1 % num2;
    }

    cout << "O resultado da operacao e: " << resultado << endl;

    return 0;
}
