#include<iostream>
using namespace std ; 
void greet(){
    cout << "Hello World " ; 
}
int main()
{    
    cout << (void*)greet << endl  ; //Typecasting is necessary here, other wise it will give us problems.
    cout << (void*)&greet << endl ; 
    void(*gptr)() = &greet ; //*gptr is a pointer to a function which returns nothing
return 0; 
}