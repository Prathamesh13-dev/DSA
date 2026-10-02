#include <iostream>
using namespace std;
/*

   *
  * *
 * * *
* * * * 

*/
int main() {
    int n;
    cout<<"Enter number of rows you want to print stars :"<<endl;
    cin>>n;
    int k=n-1;
    for(int i=1;i<=n;i++){
        for(int t=1;t<=k;t++){
            cout<<" ";
        }
        k--;
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
}