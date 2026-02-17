#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int val;
    char selecionar;

    inicio:
    system("cls");

    cout << "Selecione uma cor:" << endl;
    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho:", cin >> val;
    cout << "-----------------------------------------\n";

    

    switch(val){
        case 1:
            cout << "Cor selecionada: Verde!!\n";
            break;
        case 2:
            cout << "Cor selecionada: Azul!!\n";
            break;
        case 3:
            cout << "Cor selecionada: Vermelho!!\n";
            break;
        default:
            cout << "Nenhuma cor selecionada!\n"; 
    }

    cout << "-----------------------------------------\n";
    cout << "Deseja selecionar outra cor? [S] ou [N]:";
    cin >> selecionar;

    if(selecionar == 's' || selecionar == 'S'){
        goto inicio;
    }else{
        cout << "-----------------------------------------\n";

        cout << "Programa Finalizado!";
    }


    return 0;
}

