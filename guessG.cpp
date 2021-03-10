#include <iostream>

using namespace std;

int main(){
   
   int actualGuessNum = 7;
   int Guessnum; 
   int Count = 0;
   int CountLimit = 3;

   bool OutOfGuess = false;
 
    while(actualGuessNum != Guessnum && !OutOfGuess){
        if(Count < CountLimit){
            cout << "guess a number between 1 to 10: \n";
            cin >> Guessnum;
            Count++;
        }else{
            OutOfGuess = true;
        }
    }
    if(OutOfGuess){
        cout <<"you lost!!";
    }else{
        cout << "you won!!";
    }
  
}