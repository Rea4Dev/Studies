#include <iostream>
using namespace std; //Indica onde estão as bibliotecas que iremos utilizar.

int main(){

    //*?               1 byte
    char caractere='R';
    //*!               -128 a 127 (ou 0 a 255 se unsigned)


    //*?              1 byte - Primitivo
    bool verdadeiro=1;


    //*?            4 bytes - Primitivo
    int inteiro=74;
    //!             -2,147,483,648 a 2,147,483,647
    

    //*?                 4 bytes  - Primitivo
    float decimal1=3.14;                              
    //*!                 1.17549e-38 a 3.40282e+38  
    

    //?                  8 bytes - Primitivo
    double decimal2=3.14;                               //Precisão decimal maior se comparada ao float.
    //*!                 2.22507e-308 a 1.79769e+308    


    char nome1[4]="Rea";

    //?                Depende - Não primitivo
    string nome2="Rea";
    //*!               Depende

    cout<<"\nChar: "<<caractere<<"\nOcupando: "<<sizeof(caractere)<<"byte"<<endl;
    cout<<"\nBoll: "<<verdadeiro<<"\nOcupando: "<<sizeof(verdadeiro)<<"byte"<<endl;
    cout<<"\nInt: "<<inteiro<<"\nOcupando: "<<sizeof(inteiro)<<"byte"<<endl;
    cout<<"\nFloat: "<<decimal1<<"\nOcupando: "<<sizeof(decimal1)<<"byte"<<endl;
    cout<<"\nDouble: "<<decimal2<<"\nOcupando: "<<sizeof(decimal2)<<"byte"<<endl;
    cout<<"\nVetor de 3+1 caracteres: "<<nome1<<"\nOcupando: "<<sizeof(nome1)<<"byte"<<endl;
    cout<<"\nString: "<<nome2<<"\nOcupando: "<<sizeof(nome2)<<"byte\n"<<endl;
    system("pause"); //Para o executável não abrir e fechar imediatamente.
    return 0;
}