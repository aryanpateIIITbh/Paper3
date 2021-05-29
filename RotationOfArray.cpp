#include<bits/stdc++.h>
using namespace std;
 void rotate(int nums[],int k,int n) {
        int tmp=n-k;
        int k1=k%n;
        for(int i=0,j=k1-1;i<j;i++,j--){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(int i=k1,j=n-1;i<j;i++,j--){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(int i=0,j=n-1;i<j;i++,j--){
             int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        }
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,d,x;
    //Enter array size and d
    cin>>n>>d;
    int arr[n];
    //Enter array element
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //array Rotation
    rotate(arr,d,n);
    cout<<endl;
    }
    return 0;
}