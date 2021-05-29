// Union and Intersection of two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr[], int arr1[], int n, int m)
{
        set<int>op;
        for(int i=0;i<n;i++){
            op.insert(arr[i]);
        }
        for(int i=0;i<m;i++){
            op.insert(arr1[i]);
        }
        vector<int>mp;
        for(auto it=op.begin();it!=op.end();it++){
            mp.push_back(*it);
        }
        return mp;
}
vector<int>NumberofElementsInIntersection(int a[], int b[], int n, int m )
{
        map<int,int>op;
        map<int,int>::iterator itr;
        vector<int>op1;
        int count=0;
        if(n>=m){
            for(int i=0;i<m;i++){
                op[b[i]]++;
            }
            for(int j=0;j<n;j++){
                if(op.find(a[j])!=op.end()){
                    count++;
                    op1.push_back(b[j]);
                }
            }
        }
        else if(n<m){
            for(int i=0;i<n;i++){
                op[a[i]]++;
            }
            for(int j=0;j<m;j++){
                if(op.find(b[j])!=op.end()){
                    count++;
                    op1.push_back(b[j]);
                }
            }
        }
        return op1;
}
int main()
{
    int n,m;
    // array size
    cin>>n>>m;
    int arr[n],arr1[m];
    vector<int>fu,fi;
    //Element of first array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Element of second array
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    //Union of two array
    fu=findUnion(arr,arr1,n,m);
    for(int i=0;i<fu.size();i++){
        cout<<fu[i]<<" ";
    }
    cout<<endl;
    //Intersection of two array
    fi=NumberofElementsInIntersection(arr,arr1,n,m);
    for(int i=0;i<fi.size();i++){
        cout<<fi[i]<<" ";
    }
    return 0;
}