#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int opcional, cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float op0, op1, op2, op3, op4, IPI, pfabrica, desconto, pfinal, opcionais = 0, valopcional = 0;
    char carro[30];
    cout << "\n********************\n";
    cout <<   "MONTE SEU CARRO";
    cout << "\n********************\n";
    cout << "Digite o nome do carro que deseja comprar: ";
    cin.getline(carro, 30);
    cout << "Insira o preco de fabrica do carro: R$ ";
    cin >> pfabrica;
    do
    {
        cout << "Selecione os opcionais: \n";
        cout << "(0) Nenhum \n";
        cout << "(1) Trio Eletrico \n";
        cout << "(2) Ar Condicionado \n";
        cout << "(3) Direcao Hidraulica \n";
        cout << "(4) Completo \n";
        cout << "(5) Sair \n";
        cout << "OPCAO: \n";
        cin >> opcional;
        system("cls");
        IPI = 0.08;
        desconto = 0.035;
        op1 = op2 = op3 = 0.02;
        op4 = (op1 + op2 + op3 + IPI) - desconto;
        cout << fixed << setprecision(2);
        switch (opcional)
        {
        case 0:
            valopcional = (pfabrica * IPI);
            pfinal = valopcional + pfabrica;
            opcionais = valopcional = 0;
            cout << "Valor do Carro sem opcional e: R$ " << pfinal << "\n";
            cont0++;
            break;
        case 1:
            valopcional = ((pfabrica * IPI + pfabrica) * op1);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "Valor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do Carro somente com Trio Eletrico e: R$ " << pfinal << "\n";
            cont1++;
            break;
        case 2:
            valopcional = (pfabrica * op2);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "Valor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do Carro somente com Ar Condicionado e: R$ " << pfinal << "\n";
            cont2++;
            break;
        case 3:
            valopcional = (pfabrica * op3);
            opcionais = opcionais + valopcional;
            pfinal = valopcional + pfabrica;
            cout << "Valor dos opcionais selecionado ate agora e de: R$ " << opcionais << "\n";
            cout << "Valor total do carro acrescido dos opcionais ate agora e: R$ " << pfabrica + opcionais << "\n";
            cout << "Valor do Carro somente com Direcao Hidraulica e: R$ " << pfinal << "\n";
            cont3++;
            break;
        case 4:
            valopcional = (pfabrica * op4);
            pfinal = valopcional + pfabrica;
            opcionais = 0;
            cout << "Valor do Carro Completo e: R$ " << pfinal << "\n";
            cont4++;
            break;
        case 5:
            cout << "O opcional (0) Nenhum, foi escolhido " << cont0 << " vezes\n";
            cout << "O opcional (1) Trio Eletrico, foi escolhido " << cont1 << " vezes\n";
            cout << "O opcional (2) Ar Condicionado, foi escolhido " << cont2 << " vezes\n";
            cout << "O opcional (3) Direcao Hidraulica, foi escolhido " << cont3 << " vezes\n";
            cout << "O opcional (4) Completo, foi escolhido " << cont4 << " vezes\n";
            cout << "O valor de fabrica do carro modelo: " << carro << " e: R$ " << pfabrica << "\n";
            if (opcionais > 0)
            {
                cout << "O valor dos opcionais e de: R$ " << opcionais;
                cout << "O valor total do carro modelo: " << carro << " e: R$ " << pfabrica + opcionais << "\n";
            }
            else
            {
                cout << "O valor dos opcionais e de: R$ " << valopcional;
                cout << "O valor total do carro modelo: " << carro << " e: R$ " << pfinal << "\n";
            }
            break;
        default:
            cout << "Opcao invalida!";
        }
        cout << "\n\n";
        system("pause");
    } while (opcional != 5);
    return 0;
}