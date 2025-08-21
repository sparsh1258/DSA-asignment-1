 # include <stdio.h>
int main() { 
int i; 
int arr[5] = {1}; 
for (i = 0; i < 5; i++) 
printf("%d",arr[i]); 
return 0; 
}
// it will print 1 and at remaining places any garbage value will be stored.