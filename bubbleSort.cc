#include<iostream>
using namespace std;
void bubbleSort(int ar[],int n){
int i,j,temp;
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(ar[j]>ar[j+1]){
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
    }
}


}


int main(){
int n=8,ar[]={10,3,7,5,2,9,11,1};
cout<<"Initial values:"<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<",";
    }cout<<endl;
cout<<endl;
bubbleSort(ar,n);

cout<<"Ultimate result:"<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<",";
    }cout<<endl;


return 0;
}
