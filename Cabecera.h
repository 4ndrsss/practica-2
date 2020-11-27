class Trabajador{
public:
     Trabajador(int, int, int);
     int sueldo();
private:
     int a;
     int b;
     int c;
};
Trabajador::Trabajador(int A, int B, int C){
     a = A;
     b = B;
     c = C;
}
int Trabajador::sueldo(){
     int sueldoanual;
     sueldoanual = (a * 12) + (b * c);
     return sueldoanual;
}
