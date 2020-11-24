#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int opcional, cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float op0, op1, op2, op3, op4, IPI, pfabrica, desconto, pfinal, opcionais = 0, valopcional = 0;
    char carro[20];
    cout << "\n ==================================== \n";
    cout << " SISTEMA DE CALCULO DE VALORES DE CARRO 0KM ";
    cout << "\n ==================================== \n";
    cout << "\nDigite o nome do carro que deseja comprar: ";
    cin.getline(carro, 20);
    cout << "\nInsira o preco de fabrica do carro: R$ ";
    cin >> pfabrica;
    do
    {
        cout << "\nInsira qual opcional desejado, sendo: ";
        cout << "\n (0) Nenhum ";
        cout << "\n (1) Trio Eletrico ";
        cout << "\n (2) Ar Condicionado ";
        cout << "\n (3) Direcao Hidraulica ";
        cout << "\n (4) Completo ";
        cout << "\n (5) Sair ";
        cout << "\n\n OPCAO: ";
        cin >> opcional;
        system("cls");
        op1 = op2 = op3 = 0.02;
        IPI = 0.08;
        desconto = 0.035;
        op4 = (op1 + op2 + op3 + IPI) - desconto;
        cout << fixed << setprecision(2);
        switch (opcional)
        {
        case 0:
            valopcional = (pfabrica * IPI);
            pfinal = valopcional + pfabrica;
            opcionais = valopcional = 0;
            cout << "\nValor do Carro sem opcional e: R$ " << pfinal << "\n";
            cont0++;
            break;
        case 1:
            valopcional = (pfabrica * op1);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "\nValor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "\nValor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "\nValor do Carro somente com Trio Eletrico e: R$ " << pfinal << "\n";
            cont1++;
            break;
        case 2:
            valopcional = (pfabrica * op2);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "\nValor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "\nValor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "\nValor do Carro somente com Ar Condicionado e: R$ " << pfinal << "\n";
            cont2++;
            break;
        case 3:
            valopcional = (pfabrica * op3);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "\nValor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "\nValor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "\nValor do Carro somente com Direcao Hidraulica e: R$ " << pfinal << "\n";
            cont3++;
            break;
        case 4:
            valopcional = (pfabrica * op4);
            pfinal = valopcional + pfabrica;
            opcionais = 0;
            cout << "\nValor do Carro Completo e: R$ " << pfinal << "\n";
            cont4++;
            break;
        case 5:
            cout << "\nO opcional (0) Nenhum, foi escolhido " << cont0 << " vezes\n";
            cout << "\nO opcional (1) Trio Eletrico, foi escolhido " << cont1 << " vezes\n";
            cout << "\nO opcional (2) Ar Condicionado, foi escolhido " << cont2 << " vezes\n";
            cout << "\nO opcional (3) Direcao Hidraulica, foi escolhido " << cont3 << " vezes\n";
            cout << "\nO opcional (4) Completo, foi escolhido " << cont4 << " vezes\n";
            cout << "\n\nO valor de fabrica do carro modelo: " << carro << " e: R$ " << pfabrica;
            if (opcionais > 0)
            {
                cout << "\nO valor dos opcionais e de: R$ " << opcionais;
                cout << "\nO valor total do carro modelo: " << carro << " e: R$ " << pfabrica + opcionais << "\n";
            }
            else
            {
                cout << "\nO valor dos opcionais e de: R$ " << valopcional;
                cout << "\nO valor total do carro modelo: " << carro << " e: R$ " << pfinal << "\n";
            }
            break;
        default:
            cout << "\nOpcao invalida!";
        }
        cout << "\n\n";
        system("pause");
    } while (opcional != 5);
    return 0;
}