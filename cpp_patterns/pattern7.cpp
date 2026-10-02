#include <iostream>
using namespace std;
/*
1 1 1 1     0
  2 2 2     2
    3 3     4
      4     6
*/
int main() {
    int n = 4;
    int num = 1;
    int s = 4;
    for(int i=n;i>=1;i--){
        for(int j = i;j>=1;j--){
            cout<<num<<" ";
        }
        cout<<endl;
        for(int k=s;k<6;k++){
            cout<<" ";
        }
        s-=2;
        num++;
    }
    return 0;
}