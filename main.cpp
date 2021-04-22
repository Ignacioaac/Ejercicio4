#include <iostream>
float Segundos;
float lustro;
float Resultado1;
float Resultado2;
float Resultado3;
float Resultado4;
float Resultado5;
float año;
float dias;
float horas;
float minutos;
using namespace std;
int main() {
  cout<<"Ingrese la cantidad de lustros: ";
  cin>>lustro;
  año=1;
  dias=360;
  horas=24;
  minutos=60;
  Segundos=60;
  Resultado1=(lustro*5*año);
  Resultado2=(Resultado1*dias);
  Resultado3=(Resultado2*horas);
  Resultado4=(Resultado3*minutos);
  Resultado5=(Resultado4*Segundos);
  cout<<"Cantidad de años del lustro: "<<Resultado1<<endl;
  cout<<"Cantidad de dias del lustro: "<<Resultado2<<endl;
  cout<<"Cantidad de horas del lustro: "<<Resultado3<<endl;
  cout<<"Cantidad de minutos del lustro: "<<Resultado4<<endl;
  cout<<"Cantidad de segundos del lustro: "<<Resultado5<<endl;
}