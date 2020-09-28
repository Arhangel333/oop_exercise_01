#include <iostream>
using namespace std;

/*в этом файле описан класс FazzyNumber для работы с нечеткими числами, которые представляются тройками чисел (x – el, x, x + er). Для чисел A = (A – al, A, A + ar) и B = (B – bl, B, B + br) арифметические операции выполняются по следующим формулам:

-         сложение A + B = (A + B – al – bl, A + B, A + B + ar + br);

-         вычитание A – B = (A – B – al – bl, A – B, A – B + ar + br);

-         умножение A · B = (A ´ B – B ´ al – A ´ bl + al ´ bl, A ´ B, A ´ B + B ´ al + A ´ bl + al ´ bl);

-         обратное число A = (1 / (A + ar), 1 / A, 1 / (A – al)), A > 0;

-         деление A / B = ((A – al) / (B + br), A / B, (A + ar) / (B – bl)), B > 0;

Считать el = er, то есть число представлено парой <x, e>.

Реализованы операции сравнения по х.

*/



class FazzyNumber
{
private:
    int x;
    int e;
    int l, c, r;
public:
    FazzyNumber(int a, int b){
    x = a;
    e = b;
    l = x - e;
    c = x;
    r = x + e;
    }

    friend int valx(FazzyNumber & n){
    return n.x;
}


    friend int vale(FazzyNumber & n){
    return n.e;
};
    friend int vall(FazzyNumber & n){
        int l = n.l;
        return l;
    }
    friend int valc(FazzyNumber & n){
        int c = n.c;
        return c;
    };
    friend int valr(FazzyNumber & n){
        int r = n.r;
        return r;
    }
    friend void show(FazzyNumber & n);
    friend void rshow(FazzyNumber & n);

   FazzyNumber operator + (const FazzyNumber & other){
        FazzyNumber s(0, 0);
        s.x = this->x + other.x;
        s.e = this->e + other.e;
        s.l = s.x - s.e;
        s.c = s.x;
        s.r = s.x + s.e;
        return s;
   }

    FazzyNumber operator - (const FazzyNumber & other){
        FazzyNumber s(0, 0);
        s.x = this->x - other.x;
        s.e = this->e + other.e;   //в задании формула из которой следует , что е складывается при вычитании объектов FazzyNumber
        s.l = this->x - other.x - (this->e + other.e);
        s.c = s.x;
        s.r = this->x - other.x + (this->e + other.e);
        return s;
   }

   FazzyNumber operator * (const FazzyNumber & other){
        FazzyNumber s(0, 0);
        s.x = this->x * other.x;
        s.e = this->x;
        s.l = this->x * other.x + this->e * other.e - other.x * this->e - this->x * other.e;
        s.c = this->x * other.x;
        s.r = this->x * other.x + this->e * other.e + other.x * this->e + this->x * other.e;
        return s;
   }

    friend FazzyNumber reverse(const FazzyNumber & other);

   FazzyNumber operator / (const FazzyNumber & other){
        FazzyNumber s(0, 0);
        s.x = this->x / other.x;
        s.e = this->x;
        s.l = (this->x - this->e)/(other.x + other.e);
        s.c = this->x / other.x;
        s.r = (this->x + this->e)/(other.x - other.e);
        return s;
   }

    

    
bool operator > (const FazzyNumber & other){
        return this->x > other.x;
   }

bool operator < (const FazzyNumber & other){
        return this->x < other.x;
   }

bool operator == (const FazzyNumber & other){
        return this->x == other.x;
   }

bool operator >= (const FazzyNumber & other){
        return this->x >= other.x;
   }

bool operator <= (const FazzyNumber & other){
        return this->x <= other.x;
   }

};
