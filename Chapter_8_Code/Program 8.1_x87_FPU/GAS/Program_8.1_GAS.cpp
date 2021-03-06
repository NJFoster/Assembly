// Program 8.1
// x87 FPU - GAS, Clang/LLVM (32-bit)
// Copyright (c) 2017 Hall & Slonka

#include <iostream>
#include <iomanip>
using namespace std;

extern "C" void asmMain();

extern "C" void printFloat(float f){
   cout << setprecision(7) << f << endl;
}

extern "C" void printDouble(double f){
   cout << setprecision(15) << f << endl;
}

int main(){
   asmMain();
   return 0;
}
