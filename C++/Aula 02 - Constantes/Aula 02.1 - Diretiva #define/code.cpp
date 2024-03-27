#include <iostream>
using namespace std; 

//Exemplo mais usual
#define pi 3.1415

//Exemplo de outra aplicação
#define msg1 cout<<"\nPonto e virgula quando usado"<<endl 
#define msg2 cout<<"\nPonto e virgula na declaracao\n"<<endl;

int main(){

    cout<<"\nValor, que e constante, de pi: "<<pi<<endl;

    msg1;
    msg2

    system("pause"); 
    return 0;
}