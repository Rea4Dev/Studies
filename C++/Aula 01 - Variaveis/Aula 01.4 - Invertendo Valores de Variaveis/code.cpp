#include <iostream>
using namespace std;
#define imprimir cout<<num1<<"\n"<<endl;

int main(){
    int num1=3;
    imprimir

    num1=num1*-1; //aqui o valor foi invertido inclusive na variável.
    //também poderia ser num1=-num1; 
    //não confunda acima com -=, pois seria num1 - num1 que daria 0. Agora, =- apenas atribui o oposto.
    imprimir

    num1=3;
    cout<<-num1<<endl; //ja aqui, o valor só foi alterado na hora de operar/usar ele, na variável continua o mesmo.
    imprimir 
}