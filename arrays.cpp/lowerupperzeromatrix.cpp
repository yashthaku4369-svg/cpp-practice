#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows and columns "<<endl;
    
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
   bool  upper = true , lower = true, zero = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0){
                zero = false;

            }
             if(j>i && a[i][j]!=0){
                lower = false;


            }
             if(i>j && a[i][j]!=0){
                upper = false;

             }

        }
    }

        if(zero == true){
            cout<<"zero matrix"<<endl;

        }
        else if(lower == true){
            cout<<"lower tri matrix "<<endl;

        }
        else if(upper == true){
            cout<<"just a matrix "<<endl;

        }
        else {
            cout<<"just a matrix "<<endl;
            
        }
    

    
}