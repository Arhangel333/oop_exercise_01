#include <iostream>
using namespace std;



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