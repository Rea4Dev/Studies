#include <iostream>
using namespace std; 

int main(){

    //24032024 - Saiba também que, se você inicializar uma variável apenas com "num1;", não será zero, e sim um valor aleatório naquele lugar da memória.
    int num1;
    float num2;
    double num3;
    bool estado;
    char nome1[10];
    string nome2;

    cout<<"Insira um numero inteiro: "<<endl;
    cin>>num1;
    cout<<"Insira um numero decimal: "<<endl;
    cin>>num2;
    cout<<"Insira outro numero decimal: "<<endl;
    cin>>num3;
    cout<<"Insira 0 ou 1, estado logico: "<<endl;
    cin>>estado;
    cout<<"Insira um nome de ate 10 letras: "<<endl;
    cin>>nome1;
    cout<<"Insira outro nome: "<<endl;
    cin>>nome2;

    cout<<"\nO numero inteiro foi: "<<num1<<endl;
    cout<<"\nO numero decimal foi: "<<num2<<endl;
    cout<<"\nOutro decimal foi: "<<num3<<endl;
    cout<<"\nO estado logico foi: "<<estado<<endl;
    cout<<"\nO nome foi: "<<nome1<<endl;
    cout<<"\nO outro nome foi: "<<nome2<<"\n"<<endl;

    system("pause"); 
    return 0;
}