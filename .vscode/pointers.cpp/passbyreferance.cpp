#include <iostream>
using namespace std;
 void changeA(int* ptr){// passs by reference using pointers 
        *ptr = 20;
        
    }
int main() {
   
    int a =10;
    changeA(&a);
    cout<<"inside main fnx : "<< a <<endl;

    
   

   return 0;

    

    return 0;

}