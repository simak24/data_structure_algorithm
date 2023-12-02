#include<iostream>
using namespace std;
int binarySearch(int ar[],int x,int n){
int left=0,right=n-1,mid;
while(left<=right){
    mid=left+right/2;
    if(ar[mid]==x){
        return mid;
    }if(mid<x){
    left=mid+1;
    }else{
    right=mid-1;
    }
}
return -1;
}

int main(){
int x=1,n=20,ar[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
cout<<binarySearch(ar,x,n)<<endl;

return 0;
}
