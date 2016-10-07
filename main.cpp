#include <iostream>

using namespace std;
double sum (double a, double b);
double subtraction (double a, double b);
double divison (double a, double b);
double multiplication (double a, double b);
double square (double a, double b);
double power (double a, unsigned int b);


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}


double sum (double a, double b){
    return(a+b);}

double subtraction (double a, double b){
    return(a-b);
}

double division (double a, double b){
    if (b==0) {cout << "error\n";
               return(0);} else
    return(a/b);
}

double multyplication (double a, double b){
    return(a*b);
}

double square (double a){

        unsigned rslt = (unsigned)a;
        long div = a;
        if (a <= 0) return 0;
        while (a)
        {
            div = (a / div + div) / 2;
            if (rslt > div) rslt = (unsigned)div;
            else return rslt;
        }


    return(a);
}

double power (double a, unsigned int b){
    if (b==0) a=0; else{
    for(int i=0; i<b; i++){a=a*a;};}
    return(a);
}