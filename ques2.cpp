# include <iostream>
using namespace std; 

void bubblesort (int a[], int size){
for(int i= 0; i<size-1; i++){
for(int j= 0; j< size-1; j++){
if(a[j] > a[j+1]){
int temp= a[j];
a[j]= a[j+1];
a[j+1]= temp;
}}}
}

void duplicate (int a[], int size){
for(int i=0; i<size; i++){
for(int j=0; j<size; j++){
if(a[j]== a[j+1]){
for(int k=j; k<size; k++){
a[k]= a[k+1];
}
size--;
}}}
for(int i=0; i<size; i++){
cout<<a[i]<<" ";
}
}

int main () {
int arr[] = {1,5,2,3,6,5,2,8,6};
int n= sizeof(arr)/ sizeof(int);
bubblesort(arr,n);
duplicate (arr,n);
return 0;
}
