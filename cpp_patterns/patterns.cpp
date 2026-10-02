#include<iostream>
using namespace std;
/* 1 2 3
   4 5 6
   7 8 9*/
int main(){
    int k = 1;
    for(int i = 1; i <=3 ; i++){

        for(int j = 1 ; j<=3 ; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}