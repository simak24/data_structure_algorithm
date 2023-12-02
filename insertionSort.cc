#include<iostream>
using namespace std;
int main(){
int ar[]={5,4,3,2,1},i,j,n=5,item;
for(i=0;i<n;i++){
        cout<<ar[i]<<endl;
}
for(i=1;i<n;i++){
    item=ar[i];
    j=i-1;
    while(j>=0 && ar[j]>item){
        ar[j+1]=ar[j];
        j=j-1;
    }
    ar[j+1]=item;
}


for(i=0;i<n;i++){
        cout<<ar[i]<<endl;
}

return 0;
}
