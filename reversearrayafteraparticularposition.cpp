#include<iostream>
using namespace std;
void reversearray(int arr[],int n,int m){
    int start=m;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int m;
        cin>>n>>m;
        int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reversearray(arr,n,m);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}