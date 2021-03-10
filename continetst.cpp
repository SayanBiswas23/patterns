// #include <iostream>

// using namespace std;

// int main(){
//     int i = 1;
//     while (i%2==0)
//     {
//         continue;
//         cout << i;
//         i++;
//     }
    
// }
    
    // C++ program to illustrate while loop 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// initialization expression 
	int i = 1; 

	// test expression 
	while (i<7) 
	{ 
		if(i%2==0){
          continue;
        }
      	else{
          cout << i;
          }
     i++;
	} 

	return 0; 
} 
