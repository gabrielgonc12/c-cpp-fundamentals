#include <iostream>
#include <cctype>
using namespace std;

int main(){
    
    char letra;
    
    cout << "Digite uma letra:\n";
    cin >> letra;

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout << "voce digitou uma vogal!\n";
    } 
    else if (letra >= 'a' && letra <= 'z'){
        cout << "voce digitou uma consoante!\n";
    } 
    else{
        cout << "digitacao invalida\n";
    }

    return 0;
}