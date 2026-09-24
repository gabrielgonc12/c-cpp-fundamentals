#include <iostream>

using namespace std;

int main() {
    float valor_hora, horas_trabalhadas;
    
    // Pergunta o valor por hora e a quantidade de horas no mês
    cout << "Quantos reais voce recebe por hora?" << endl;
    cin >> valor_hora;
    
    cout << "Quantas horas voce trabalha por mes?" << endl;
    cin >> horas_trabalhadas;
    
    // Cálculos dos valores e descontos
    float salario_bruto = valor_hora * horas_trabalhadas;
    float ir = salario_bruto * 0.11;        // Imposto de Renda (11%)
    float inss = salario_bruto * 0.08;      // INSS (8%)
    float sindicato = salario_bruto * 0.05; // Sindicato (5%)
    float salario_liquido = salario_bruto - ir - inss - sindicato;
    
    // Exibição dos resultados
    cout << "Seu salario bruto e " << salario_bruto << " reais" << endl;
    cout << "voce paga " << ir << " reais referente ao imposto de renda" << endl;
    cout << "Voce paga " << inss << " reais referente ao inss" << endl;
    cout << sindicato << " reais para o sindicato" << endl;
    cout << "Seu salario liquido e: " << salario_liquido << endl;
    
    return 0;
}
