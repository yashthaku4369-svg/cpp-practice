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
            bool flag = true;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(a[i][j]!= a[j][i]){
                        flag = false;

                    }
                }
            }
            if(flag == true){
                cout<<"symmetric";

            }
            else{
                cout<<"not symm ";
            }
            

           
                

            
            
            
            


        }
    
