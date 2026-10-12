#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];

    }
    cout<<"our arrray is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }

    //sorting of array 
    //using bubble sort 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j] , a[j+1]);

            }
        }
    }
    cout<<"our sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

    
    //binary search
    int key;
    cout<<"enter key value : "<<endl;
    cin>>key;

    int start =0,end =n-1;
    

        
        while(start<=end){
            int mid = (start + end)/2;
            if(a[mid]<key){
                start = mid+1;
            }
             else if(a[mid]>key ){
                end = mid-1;

            }
            
            
            else {
                cout<<"element found " << key << endl;
                cout<<"index : "<<mid <<endl;

                return 0;
                

            }

            
        
        

    }

    




}