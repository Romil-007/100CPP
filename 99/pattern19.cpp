#include <iostream>

using namespace std;

int main(){
    int n;
    char c [] = {'x','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    cout<<"Enter the no. of lines you want(Less than 26) : \n";
    cin>>n;

    for(int i = n ; i>0 ; i--){
        for(int j = i ; j > 0 ; j--)
        {
            cout<<c[i];
        }
        cout<<"\n";
    }

    return 0;
}