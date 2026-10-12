#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows and columnsw ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];


        }
    }
    cout<<"matric is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;

    }

    //sum of diagonals elements ;
    int mSum =0, sSum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                   mSum+= a[i][j];

            }
            if(j==n-i-1){
                sSum += a[i][j];

            }
         

        }
    }
    cout<<"mSum : "<<mSum << " sSum : "<<sSum<<endl;
    int totalsum = mSum + sSum;
    if(n%2!=0){
        totalsum -= a[(n-1)/2][(n-1)/2];

    
    cout<<"total sum : "<< totalsum;
    }








}