#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=5;i<=n;i--){
        for(int j=1;j<=i;j++){
            cout<< j <<" ";
        }
        if(i<1)
            break;
        cout<<endl;
    }
    return 0;
}
/*
    alternate code to generate the same

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
*/