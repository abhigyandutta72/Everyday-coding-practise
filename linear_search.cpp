#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
for(int i=0; i<size;i++){
    if(arr[i]==key){
        return 1;
}
}
return 0;
}
int main(){
int arr[10]={2,7,5,10,-2,0,22,12,92,8};
cout<<"Enter the element to search"<<endl;
int key;
cin>>key;
bool found=search(arr, 10, key);
if(found){
    cout<<"Is present"<<endl;
}else{
    cout<<"Is not present"<<endl;
}
return 0;
}