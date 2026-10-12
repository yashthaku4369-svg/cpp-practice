#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];

    }
    cout<<"our array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }


    //bubble sorting 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j] , a[j+1]);

            }
        }
    }
    //array after sorting 
    cout<<"array after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }

}