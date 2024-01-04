#include <iostream>
using namespace std;

double square(double x){
    return x*x;
}

void printSquare(double x){
    cout<<"The square of "<<x<<" is "<<square(x)<<"\n";
}

int main(){
    printSquare(1.234);   
}