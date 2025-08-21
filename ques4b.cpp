# include <iostream>
using namespace std; 

void multiplication (int A[2][3], int B[3][2], int C[2][2]){
int sum=0;
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
sum=0;
for(int k=0; k<3; k++){
sum= sum+ (A[i][k] * B[k][j]);
C[i][j]= sum;
}
}}
}

int main (){
int arr[2][3]= { {2,3,6},{4,5,20}};
int brr[3][2]= { {1,2}, {3,4}, {5,6}};
int crr[2][2];
multiplication (arr,brr,crr);
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
cout<<crr[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}