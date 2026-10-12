#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array matrix : "<<endl;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;

    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && a[i][j]!=0){
                flag =false;

            }

        }
    }
    if(flag == false ){
        cout<<"matrix is not diagonal ";

    }
    else{
        cout<<"diagonal matrix ";
    }
}