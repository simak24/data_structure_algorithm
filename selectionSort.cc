#include<iostream>
using namespace std;
int selectionSort(int ar[],int n){
int i,j,temp,min_ind;
for(i=0;i<n-1;i++){
        min_ind=i;
    for(j=i+1;j<n;j++){
        if(ar[j]<ar[min_ind]){
            min_ind=j;
        }
    }
    if(min_ind!=i){
           temp=ar[i];
           ar[i]=ar[min_ind];
           ar[min_ind]=temp;
        }
}
}

int main(){
int n=8,ar[]={10,3,7,5,2,9,11,1};
cout<<"Initial values:"<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<",";
    }cout<<endl;

selectionSort(ar,n);
cout<<"Ultimate result:"<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<",";
    }cout<<endl;

return 0;
}
