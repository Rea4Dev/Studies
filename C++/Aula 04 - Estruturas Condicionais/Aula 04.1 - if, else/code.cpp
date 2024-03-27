#include <iostream>
using namespace std; 
#define funciona cout<<"Se isso aparecer, funcinou."<<endl;
#define naoFunciona cout<<"Se isso aparecer, nao funcinou."<<endl;

int main(){
    
    int num1=1;
    bool result=1;
    char algarismo=1;

    //?Aqui vemos uma aplicação diferente da que estamos acostumados. Ao invés de fazer a verificação dentro do parâmetro do If, apenas usamos um valor lógico.
    if(num1){
        funciona //Funcionará
    } else{
        naoFunciona
    }

    if(result){
        funciona //Funcionará
    } else{
        naoFunciona
    }
    
    if(algarismo){
        funciona //Funcionará
    } else{
        naoFunciona
    }

    //?Agora temos a aplicação que estamos acostumados.
    if (num1==algarismo)
    {
        funciona //Funcionará
    }else
    {
        naoFunciona
    }
    
    

    system("pause"); 
    return 0;
}