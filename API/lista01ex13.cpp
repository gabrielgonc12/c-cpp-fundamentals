#include <iostream>
using namespace std;

int main(){

    float salarioHoras, horasTrabalho, totalBruto, IRenda, inss, sindicato, totalLiquido, descontos;

    cout << "Quantos reais voce recebe por hora?\n";
    cin >> salarioHoras;

    cout << "Quantas horas voce trabalha por mes?\n";
    cin >> horasTrabalho;

    totalBruto = (salarioHoras * horasTrabalho);
    cout << "Seu salario bruto e " << totalBruto << " reais\n";
    
    IRenda = (totalBruto * 0.11);
    cout << "voce paga " << IRenda << " reais referente ao imposto de renda\n";
    
    inss = (totalBruto * 0.08);
    cout << "Voce paga " << inss << " reais referente ao inss\n";
    
    sindicato = (totalBruto * 0.05);
    cout << "Voce paga " << sindicato << " reais para o sindicato\n";

    descontos = (IRenda + inss + sindicato);

    totalLiquido = (totalBruto - descontos);

    cout << "Seu salario liquido e: " << totalLiquido << " reais\n";

    return 0;
}
