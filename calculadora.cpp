#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

    inicio:
    system("cls");

    int opc;
    int val1,val2;
    

    cout << "------Bem vindo a calculadora------" << endl;
    cout << "-----------------------------------" << endl;

    cout << "    Qual operacao quer realizar?" <<endl;
    cout << "[1] = Soma, [2] = Subtracao, [3] = multiplicacao, [4] = divisao:";
    cin >> opc;
    cout << "-----------------------------------" << endl;

    switch(opc){
        case 1:
            cout << "Digite o primeiro valor:";
            cin >> val1;
            cout << "Digite o segundo valor:";
            cin >> val2;
            cout << "O resultado da soma e:" << val1 + val2;
            break;
        case 2:
            cout << "Digite o primeiro valor:";
            cin >> val1;
            cout << "Digite o segundo valor:";
            cin >> val2;
            cout << "O resultado da subtracao e:" << val1 - val2;
            break;
        case 3:
            cout << "Digite o primeiro valor:";
            cin >> val1;
            cout << "Digite o segundo valor:";
            cin >> val2;
            cout << "O resultado da multiplicacao e:" << val1 * val2;
            break;
        case 4:
            cout << "Digite o primeiro valor:";
            cin >> val1;
            cout << "Digite o segundo valor:";
            cin >> val2;
            cout << "O resultado da divisao e:" << val1 / val2;
            break;
        default:
            cout << "Opcao invalida!!";

    }

    char continuar; 

    cout << "\n--------------------------------------------------" <<endl;
    cout << "Voce quer continuar a usar calculadora? [S] ou [N]:";
    cin >> continuar;

    if(continuar == 'S' || continuar == 's'){
        goto inicio;
    }else{
        cout << "Programa Finalizado!!";
    }


    return 0;
}