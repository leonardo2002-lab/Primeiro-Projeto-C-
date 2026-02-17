#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    float n1,n2,media;
    char opc;

    inicio:

    system("cls");


    //adicionando na nova branch
    cout << "Digite a primeira nota:";
    cin >> n1;

    cout << "Digite a segunda nota:";
    cin >> n2;

    cout << "------------------------"<<endl;

    media = (n1+n2)/2;

    cout << "a media das notas e:" << media << endl;

    if(media >= 7){
        cout << "Aluno esta aprovado!!" << endl;

    }else if(media >= 5.5 && media < 7){
        cout << "Aluno esta de recuperacao!!" <<endl;

    }else{
        cout << "Aluno esta reprovado!!" <<endl;
    }
    
    cout << "----------------------------" <<endl;
    cout << "Quer digitas novas notas?[S/N]:";
    cin >> opc;
    cout << "----------------------------" <<endl;

    if(opc == 'S' || opc == 's'){
        goto inicio;
    }else{
        cout << "Programa Finalizado!!";
    }

    return 0;
}