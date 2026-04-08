#include <iostream>
using namespace std;

int main(){

    float limiteKG = 50;
    float pesoPeixes, excesso, multa;

    cout << "Digite o peso dos peixes em kg:\n";
    cin >> pesoPeixes;

    if(pesoPeixes > limiteKG){
        excesso = (pesoPeixes - limiteKG);
        cout << "O excesso e de: " << excesso << " kg\n";

        multa = (excesso * 4);
        cout << "A multa e de: " << multa << " reais\n";
    } 
    else {
        cout << "Esta dentro do limite!\n";
    }

    return 0;
}
