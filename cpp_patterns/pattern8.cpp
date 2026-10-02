#include <iostream>
using namespace std;
/*
      1         6
    1 2 1       4
  1 2 3 2 1     2
1 2 3 4 3 2 1   0

*/
int main() {
    int n = 4;
    int s = 0;
    int p = 7;
    int centre = 1;
    for(int i=n;i>0;i--){
        // spaces
        for(int k=s;k<6;k++){
            cout<<" ";
        }
        s+=2;

        for(int j=p;j<=7;j++){
            for(int t1=1;t1<=centre;t1++){
                cout<<t1<<" ";
            }
            // for(int t2=centre;t2>=1;t2--){
            //     cout<<t2<<" ";
            // }

        }
        p-=2;
        
        
        cout<<endl;
        
    }
    cout<<endl;
    return 0;
}