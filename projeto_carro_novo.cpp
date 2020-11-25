#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "ptb");
    int opcional, cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float op0, op1, op2, op3, op4, ipi, pfabrica, desconto, imposto, pfinal, opcionais = 0, valopcional = 0;
    char carro[30];
    cout << "=====================\n";
    cout <<   "== MONTE SEU CARRO ==\n";
    cout << "=====================\n";
    cout << "Digite o carro que deseja comprar: ";
    cin.getline(carro, 30);
    cout << "Insira o preço de fábrica do carro: R$ ";
    cin >> pfabrica;
    do
    {
        cout << "Selecione os opcionais: \n";
        cout << "(0) Nenhum \n";
        cout << "(1) Trio Elétrico \n";
        cout << "(2) Ar Condicionado \n";
        cout << "(3) Direção Hidráulica \n";
        cout << "(4) Completo \n";
        cout << "(5) Sair \n";
        cout << "OPÇÃO: \n";
        cin >> opcional;
        system("cls");
        ipi = 0.08;
        imposto = pfabrica * ipi;
        desconto = 0.035;
        op1 = op2 = op3 = 0.02;
        op4 = (op1 + op2 + op3 + ipi) - desconto;
        cout << fixed << setprecision(2);
        switch (opcional)
        {
        case 0:
            valopcional = (pfabrica);
            opcionais = valopcional = 0;
            pfinal = valopcional + pfabrica;
            cout << "Valor do carro sem opcional e com IPI: R$ " << pfinal + imposto << "\n";
            cout << "Valor do IPI: RS " << imposto << "\n";
            cout << "Valor do carro sem opcional e sem IPI: R$ " << pfinal << "\n";
            cont0++;
            break;
        case 1:
            valopcional = ((pfabrica + imposto) * op1);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionados até o momento: R$ " << opcionais << "\n";
            cout << "Valor total do carro com IPI + os opcionais até o momento: R$ " << pfabrica + imposto + opcionais << "\n";
            cout << "Valor do IPI: RS " << imposto << "\n";
            cout << "Valor total do carro sem IPI + os opcionais até o momento: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do carro somente com trio elétrico: R$ " << pfinal << "\n";
            cont1++;
            break;
        case 2:
            valopcional = (pfabrica * op2);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionados até o momento: R$ " << opcionais << "\n";
            cout << "Valor total do carro com IPI + os opcionais até o momento: R$ " << pfabrica + imposto + opcionais << "\n";
            cout << "Valor do IPI: RS " << imposto << "\n";
            cout << "Valor total do carro sem IPI + os opcionais até o momento: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do carro somente com ar condicionado: R$ " << pfinal << "\n";
            cont2++;
            break;
        case 3:
            valopcional = (pfabrica * op3);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionado até o momento: R$ " << opcionais << "\n";
            cout << "Valor total do carro com IPI + os opcionais até o momento: R$ " << pfabrica + imposto + opcionais << "\n";
            cout << "Valor do IPI: RS " << imposto << "\n";
            cout << "Valor total do carro sem IPI + os opcionais até o momento: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do carro somente com direção hidráulica: R$ " << pfinal << "\n";
            cont3++;
            break;
        case 4:
            valopcional = (pfabrica * op4);
            opcionais = 0;
            pfinal = valopcional + pfabrica;
            cout << "Valor do carro completo com IPI: R$ " << pfinal << "\n";
            cout << "Valor do IPI: RS " << imposto << "\n";
            cout << "Valor do carro completo sem IPI: RS " << pfinal - imposto << "\n";
            cont4++;
            break;
        case 5:
            cout << "O opcional (0) Nenhum foi escolhido " << cont0 << " vezes\n";
            cout << "O opcional (1) Trio Elétrico foi escolhido " << cont1 << " vezes\n";
            cout << "O opcional (2) Ar Condicionado foi escolhido " << cont2 << " vezes\n";
            cout << "O opcional (3) Direção Hidráulica foi escolhido " << cont3 << " vezes\n";
            cout << "O opcional (4) Completo foi escolhido " << cont4 << " vezes\n";
            cout << "O valor de fábrica do carro modelo: " << carro << " é: R$ " << pfabrica << "\n";
            if (opcionais > 0)
            {
                cout << "Valor total dos opcionais: R$ " << opcionais << "\n";
                cout << "Valor total do carro modelo: " << carro << " e: R$ " << pfabrica + opcionais << "\n";
            }
            else
            {
                cout << "Valor total dos opcionais: R$ " << valopcional << "\n";
                cout << "Valor total do carro modelo: " << carro << " é: R$ " << pfinal << "\n";
            }
            break;
        default:
            cout << "Opção Inválida!";
        }
        cout << "\n\n";
        system("pause");
    } while (opcional != 5);
    return 0;
}