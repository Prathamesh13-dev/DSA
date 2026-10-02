#include <iostream>
using namespace std;
/*
Floyd's triangle pattern
.....
1
2 3
4 5 6
7 8 9 10
.....
*/
int main() {
    int n = 4;
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}