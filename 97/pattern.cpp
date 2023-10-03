#include <iostream>

using namespace std;

int main(){

    int n , a= 0 , b = 0;

    cout<<"Enter the number of lines : \n";
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        a += 1;
        b = a;
        for(int k = n-i ; k>0;k--){
            cout<<" ";
        }
        for(int j = 0 ; j<=i ; j++){
            if(j == 0){
                cout<<a;
            }
            else{
                
                if(j>i/2){
                    b--;
                    cout<<b;
                    
                }
                else{
                    b++;
                    cout<<b;
                    
                }
            }
        }

    cout<<"\n";
    }
}