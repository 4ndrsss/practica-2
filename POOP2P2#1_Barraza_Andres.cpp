/* 1. Un programa que crea una constante como uno de los lados de un rectángulo y luego
   pide que ingreses otro para imprimirte las dimensiones del área y su perímetro.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class rectangulo{

  double numAle(){
    srand((unsigned int)time(NULL));
    int a = 25;
    double ranNum = (float(rand())/float((RAND_MAX)) * a);
    return ranNum;
  }

public:
  rectangulo();
  rectangulo(double x){
    ladoB = x;
  }
  double recAre(){
    return ladoA * ladoB;
  }
  double recPer(){
    return (2 * ladoA) + (2 * ladoB);
  }
  void get_lado(){
    cout << "El lado constante del rectangulo es " << ladoA << endl;
  }

private:
  const double ladoA = numAle();
  double ladoB;

};



int main(){
  double lado;
  cout << "Introduce el lado del rectangulo que no es constante ";
  cin >> lado;
  rectangulo rect1(lado);
  rect1.get_lado();
  cout << "El area del rectangulo es: " << rect1.recAre() << " y su perimetro es " << rect1.recPer() << endl;





  return 0;
}
