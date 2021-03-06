// Program 8.1
// x87 FPU - MASM (32-bit)
// Copyright (c) 2017 Hall & Slonka

#include <iostream>
#include <iomanip>
using namespace std;

extern "C" void _asmMain();

extern "C" void _printFloat(float f){
   cout << setprecision(7) << f << endl;
}

extern "C" void _printDouble(double f){
   cout << setprecision(15) << f << endl;
}

int main(){
   _asmMain();
   return 0;
}
