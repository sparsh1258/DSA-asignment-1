#include <stdio.h>
int main(){
int choice,n;
int  a[100], i, ele, pos,b[101];

    while (1)
    {
        
        printf("\n----MENU----\n 1.CREATE\n 2.DISPLAY \n 3.INSERT \n 4.DELETE\n 5.LINEAR SEARCH \n 6.EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("please input the size of the array :");
            scanf("%d", &n);
            printf("now enter the elements of the array :\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
               
            }
             printf("array created successfully\n");
            break;
        case 2:
            printf("the elements of the array are :\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 3:
            printf("enter the element to be inserted :");
            scanf("%d",&ele);
            printf("enter the position to insert the element :");
            scanf("%d", &pos);
            for(i=0;i<pos-1;i++){
                b[i] = a[i];
            }
            b[pos-1]=ele;
            for(i=pos;i<=n;i++){
                b[i] = a[i];
            }
           for(i=0;i<=n;i++){
            printf("%d", b[i]);}
            break;
        case 4:
            printf("enter the position to delete the element :");
            scanf("%d", &pos);
            for(i=0;i<pos-1;i++){
                b[i] = a[i];    }

            for(i=pos;i<n;i++){
                b[i-1] = a[i];}
            for(i=0;i<n-1;i++){
                printf("%d ", b[i]);
            }    break;
        case 5:
            printf("enter the element to be searched :");
            scanf("%d", &ele);
            for(i=0;i<n;i++){
                if(a[i]==ele){
                    printf("element found at position %d\n", i+1);
                    break;
                }
            }
        case 6:
            printf("Exiting the program.\n");
            return 0;         

        }
    }
    return 0;
}