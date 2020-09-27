#include<iostream>
#include<cstdio>
//using namespace std;
#include"FazzyNumber.cpp"

FazzyNumber reverse(const FazzyNumber & other){
        FazzyNumber s(0, 0);
        
        s.x = 1/other.x;
        s.e = other.e;
        s.l = 1/(other.x + other.e);
        s.c = s.x;
        s.r = 1/(other.x - other.e);
        //printf("*****%d %d %d %d",other.x,5,other.e,1/(other.x - other.e));
 
        return s;
    }

void show(FazzyNumber & n)
    {
        int l, c, r;
        l = vall(n);
        c = valc(n);
        r = valr(n);
        printf("(%d, %d, %d)\n", l, c, r);
    };

void rshow(FazzyNumber & n){  
        int x, e;
        x = valx(n);
        e = vale(n);
        printf("(%d, %d)\n", x, e);
    };

int main(){
    int a,s,d,f;

    FILE * test1 = freopen("test_01.txt", "r", stdin);
//scanf("%d %d\n %d %d", &a, &s, &d, &f);
        fscanf(test1,"%d %d\n %d %d", &a, &s, &d, &f);
        std::cout << " 1 " << a << " " << s << " " << d << " " << f << endl;
            FazzyNumber one31(a, s), two31(d,f);
            FazzyNumber three31 = one31 + two31;
            show(three31);
            three31 = one31 - two31;
            show(three31);
            three31 = one31 * two31;
            show(three31);
            three31 = reverse(one31);
            show(three31);
            three31 = one31 / two31;
            show(three31);

            if(three31 > one31){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three31 < one31){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three31 == one31){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three31 >= one31){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three31 <= one31){
                printf("true\n");
            }else{printf("false\n");
            }


    FILE * test2 = freopen("test_02.txt", "r", stdin);

        fscanf(test2,"%d %d\n %d %d", &a, &s, &d, &f);
        std::cout << " 1 " << a << " " << s << " " << d << " " << f << endl;
            FazzyNumber one32(a, s), two32(d,f);
            FazzyNumber three32 = one32 + two32;
            show(three32);
            three32 = one32 - two32;
            show(three32);
            three32 = one32 * two32;
            show(three32);
            three32 = reverse(one32);
            show(three32);
            three32 = one32 / two32;
            show(three32);

            if(two32 > one32){
                printf("true\n");
            }else{printf("false\n");
            }

            if(two32 < one32){
                printf("true\n");
            }else{printf("false\n");
            }

            if(two32 == one32){
                printf("true\n");
            }else{printf("false\n");
            }

            if(two32 >= one32){
                printf("true\n");
            }else{printf("false\n");
            }

            if(two32 <= one32){
                printf("true\n");
            }else{printf("false\n");
            }

    FILE * test3 = freopen("test_03.txt", "r", stdin);

        fscanf(test3,"%d %d\n %d %d", &a, &s, &d, &f);
        std::cout << " 1 " << a << " " << s << " " << d << " " << f << endl;
        FazzyNumber one3(a, s), two3(d,f);
            FazzyNumber three3 = one3 + two3;
            show(three3);
            three3 = one3 - two3;
            show(three3);
            three3 = one3 * two3;
            show(three3);
            three3 = reverse(one3);
            show(three3);
            three3 = one3 / two3;
            show(three3);

            if(three3 > one3){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three3 < one3){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three3 == one3){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three3 >= one3){
                printf("true\n");
            }else{printf("false\n");
            }

            if(three3 <= one3){
                printf("true\n");
            }else{printf("false\n");
            }




}