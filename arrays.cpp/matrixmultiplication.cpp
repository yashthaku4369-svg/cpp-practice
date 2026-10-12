#include <iostream>
using namespace std;
int main() {
    //matrix 1
    int m,n;
    cout<<"enter rows and columns of matirx 1 : "<<endl;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

        }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

            
        }
        cout<<endl;

    }

    //matrix 2
    int p,q;
    cout<<"enter rows and columns of matrix 2 : "<<endl;
    cin>>p>>q;
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];

        }
    }

    //output matrix two
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";

            
        }
        cout<<endl;

    }
    if(n != p) {
    cout << "Matrix multiplication is not possible" << endl;
    return 0;
}

    //matrix three
    int c[m][q];
    for(int i=0;i<m;i++){
        
        for(int j=0;j<q;j++){
             c[i][j]=0;
            for(int k =0;k<n;k++){
                c[i][j]+= a[i][k]*b[k][j];


            }
            

        }
    }
    //final matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
        cout<<c[i][j]<<" ";
        }
        cout<<endl;


    }



}