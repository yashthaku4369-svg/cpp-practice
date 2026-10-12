#include <iostream>
using namespace std;
int main() {
    int n, position = -1, target ; 
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];


    }
    //our arrat is;
    cout<<"our arraay is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

    //linear search 
    cout<<"enter target value :"<<endl;
    cin>>target;

    for(int i=0;i<n;i++){
        if(a[i] == target){
            position = i;
            break;

        }
        
    }
    
        if(position == -1){
            cout<<"element not found : "<<endl;

        }
        else {
            cout<<"element found at the position : "<<position<<endl;

        }

    }



    

