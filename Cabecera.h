class Trabajador{
public:
     trabajador(int, int, int);
     int sueldo();
private:
     int a;
     int b;
     int c;
};
trabajador::trabajador(int A, int B, int C){
     a = A;
     b = B;
     c = C;
}
int trabajador::sueldo(){
     int sueldoanual;
     sueldoanual = (a * 12) + (b * c);
     return sueldoanual;
}
