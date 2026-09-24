#include <iostream>

using namespace std;

int main() {
    float peso;

    cout << "Digite o peso dos peixes em kg: ";
    cin >> peso;

    if (peso > 50.0) {
        float excesso = peso - 50.0;
        float multa = excesso * 4.0;

        cout << "O excesso e de: " << excesso << " kg" << endl;
        cout << "A multa e de: " << multa << " reais" << endl;
    } else {
        cout << "Esta dentro do limite!" << endl;
    }

    return 0;
}
