#include <iostream> 
using namespace std;
int main(){
    int r,c;
    cout<<"enter rows and columns : "<<endl;
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
    int c1 ,c2;
    cout<<"enter c1 and c2 "<<endl;
    cin>>c1>>c2;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            swap(a[i][c1],a[i][c2]);

        }
    }
    cout<<"final matrix is : "<<endl;

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          cout<<a[i][j]<<" ";



        }
        cout<<endl;
        
    }

}