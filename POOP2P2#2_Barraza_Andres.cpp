/* 2.Cree una clase base llamada Edificio, cree 3 clases derivadas de la clase Edificio,
   llamadas Residencial, Comercial, Educativo. Haga uso del polimorfismo incluyendo la
   función virtual mostrarEificio(); en la clase Edificio esta función solo mostrara la
   Ubicación y Color, pero en las demás clases deberá imprimir al menos un dato especifico
   de la clase derivada Ejemplo: en Residencial, numeroDeResidentes. */
#include <iostream>
#include <string>

using namespace std;

class Edificio{
public:

  void set_color(){
    cout << "Introduce el color: ";
    cin >> color;
  }
  void set_ubicacion(){
    cout << "Introduce la ubicacion: ";
    cin >> ubicacion;
  }
  string get_color(){
    return color;
  }
  string get_ubicacion(){
    string x = ubicacion;
    return x;
  }
  virtual void mostrarEdificio(){
    cout << "El color del Edificio es " << get_color();
    cout << "La ubicacion del Edificio es " << get_ubicacion();
  }
private:
  string color;
  string ubicacion;

};

class Residencial: public Edificio{
public:

  void set_numeroResidentes(int x){
    numeroResidentes = x;
  }
  void set_numHabitaciones(int x){
    numHabitaciones = x;
  }
  void set_seguridad(bool x){
    seguridad = x;
  }
  void set_gimnasio(bool x){
    gimnasio = x;
  }
  void set_plusvalia(bool x){
    plusvalia = x;
  }

  void mostrarEdificio(){

    cout << "La residencia color " << get_color();
    cout << " ubicada en " << get_ubicacion();
    cout << " cuenta con " << numHabitaciones << " habitaciones"
         << ", el numero maximo de residentes es " << numeroResidentes << endl;
    seguridad == true ? cout << "La residencia cuenta con seguridad privada" : cout << "La residencia no cuenta con seguridad privada";
    gimnasio == true ? cout << ", gimnasio propio" : cout << ",  no cuenta con gimansio propio";
    plusvalia == true ? cout << ", esta bien ubicada.\n" : cout << ",  se encuentra en zona de desarrollo.\n";
  }
private:
  int numeroResidentes;
  int numHabitaciones;
  bool seguridad;
  bool gimnasio;
  bool plusvalia;

};

class Comercial: public Edificio{
public:

  void set_renta(double x){
    renta = x;
  }
  void set_proteccion(bool x){
    x = proteccion;
  }
  double get_renta(){
    return renta;
  }
  bool get_proteccion(){
    return proteccion;
  }
  void mostrarEdificio(){
    cout << "La residencia color " << get_color();
    cout << " ubicada en " << get_ubicacion();
    cout << " renta mensual $" << renta << " mxn.";
    proteccion == true ? cout << " El comercio cuenta con proteccion" : cout << " El comercio no cuenta con proteccion";

  }
private:
  double renta;
  bool proteccion;
};


int main(){
  Residencial casa1;
  casa1.set_color();
  casa1.set_ubicacion();
  casa1.set_numHabitaciones(4);
  casa1.set_numeroResidentes(32);
  casa1.set_gimnasio(false);
  casa1.set_plusvalia(true);
  casa1.set_seguridad(true);
  casa1.mostrarEdificio();

  Comercial comercio1;
  comercio1.set_color();
  comercio1.set_ubicacion();
  comercio1.set_proteccion(false);
  comercio1.set_renta(2500);
  comercio1.mostrarEdificio();


  return 0;
}
