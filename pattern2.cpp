//code to print  inverted half pyramid

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "enter n \n";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";//if u give 1 space here and in the *..it will print half pyramid..if u give no spce here and give space in the * it will be a full pyramid
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;
}