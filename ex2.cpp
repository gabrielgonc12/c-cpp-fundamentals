#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    // Converte para minúscula para facilitar a verificação
    char letra_lower = tolower(letra);

    // Verifica se é uma letra do alfabeto
    if (isalpha(letra)) {
        if (letra_lower == 'a' || letra_lower == 'e' || letra_lower == 'i' || 
            letra_lower == 'o' || letra_lower == 'u') {
            cout << "voce digitou uma vogal!" << endl;
        } else {
            cout << "voce digitou uma consoante!" << endl;
        }
    } else {
        cout << "digitacao invalida" << endl;
    }

    return 0;
}
