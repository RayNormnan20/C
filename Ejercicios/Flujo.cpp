#include "iostream"
int Valor, Num, Resu;
using namespace std;

int main(int argc, char const *argv[])
{
  while (true)//Mientras sea verdad //Bucle repetitivo
    {  
        cout<<"Tabla del: ";
          cin>>Num;
          for (int Valor = 1; Valor<=12; ++Valor)//Para//Iteracion o contador//++Valor contea de 1+1
          {
            Resu=Valor*Num;
            cout<<Num<<" x "<<Valor<<" = "<<Resu<<endl;
          }
          char StrRp;//Caracter
          cout<<"Continua S/N:";
            cin>>StrRp;  
      
          if (StrRp=='n' || StrRp=='N')//Si//condicional
            {
                break;//ruptura
            }            
      	}
        return 0;//Retorna al vacio
}
