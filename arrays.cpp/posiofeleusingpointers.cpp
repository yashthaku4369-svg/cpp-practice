#include <iostream>
using namespace std;

int main(){
    int r ,c;
    cout<<"enter rows and columns "<<endl;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];

        }
    }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;

    }
    int count =0;


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(isprime(a[i][j])){
                count++;

            }
        }
    }
    cout<<count;
}



    


    
    

    



    