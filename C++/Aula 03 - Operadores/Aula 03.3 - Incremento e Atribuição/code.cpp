//O resultado de uma operação com operadores de atribuição é sempre um valor aritmético.
#include <iostream>
using namespace std; 

#define print_n1 cout<<"O valor de n1 e: "<<num1<<endl
#define print_n2 cout<<"O valor de n2 e: "<<num2<<endl
#define espaco cout<<"\n"<<endl

int main(){

    //? Abaixo temos exemplos de pós incrementos. 
    // Primeiro usa-se o valor da variável e depois incrementa.

    int num1=0, num2=0;

    espaco;
    cout<<num1++<<endl; //a saída aqui é zero, pois primeiro foi usado e depois incrementado
    espaco;

    num1++;
    print_n1;
    num1+=2;
    print_n1;
    num1*=2;
    print_n1;

    espaco;

    num2--;
    print_n2;
    num2-=2;
    print_n2;
    num2*=2;
    print_n2;
    


    //? Abaixo temos exemplos de pré incrementos.
    // Primeiro incrementa-se à variável e somente depois usa-se o valor. 
    
    num1=0, num2=0;

    espaco;
    cout<<++num1<<endl; //a saída aqui é 1, pois primeiro foi incrementado e depois usado
    espaco;

    system("pause"); 
    return 0;
}