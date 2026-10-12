#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array ";
    
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

    //identity matrix 
    bool flag = true;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && a[i][j] !=1){
                flag = false;

            }
            else if(i!=j && a[i][j]!=0){
                flag = false;

            }
        }
    }
    if(flag == false){
        cout<<"not an identity matrix : "<<endl;

    }
    else {
        cout<<"identity matrix: "<<endl;

    }

}