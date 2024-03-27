#include <iostream>
using namespace std;

int main(){
    char opcao;
    int nota1, nota2, resultado;

    inicio: 
    system("color 4"); //cmd vermelho 
    system("cls"); //para limpar a tela 
    cout<<"\n\nDigite a primeira nota: ";
    cin>>nota1;
    cout<<"Digite a segunda nota: ";
    cin>>nota2;
    resultado=nota1+nota2;

    if(resultado>=6){
        cout<<"Aprovado.\n"<<endl;
    }else if(resultado>=5){
        cout<<"Recuperacao.\n"<<endl;
    }else{
        cout<<"Reprovado.\n"<<endl;
    }

    cout<<"Deseja calcular mais uma nota? [s/n]: "<<endl;
    cin>>opcao;
    if(opcao=='s' or opcao=='S'){
        goto inicio; //goto envia todo o programa para o label inicio:
    }

    system("pause");
}

// Um label é um identificador seguido por dois pontos (:), e é colocado antes de uma instrução específica no código. É uma marcação utilizada em conjunto com instruções de controle de fluxo, como loops (for, while, do-while) e comandos de desvio (goto). 