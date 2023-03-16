#include <stdio.h>

main(){
    int a[10][10],b[10][10],r,c,l;
    
    printf("Enter number of  row : \n");
    scanf("%d",&r);
    printf("Enter number of  column:\n");
    scanf("%d",&c);
    printf("Enter the elements inside  in the %d*%d matrix : \n",r,c);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);

    }
}
printf("Enter the elements inside in the 2nd %d*%d matrix : \n",r,c);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&b[i][j]);

    }
}
printf("1st matrix : \n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf(" %d ",a[i][j]);

    }
    printf("\n");
}
printf("2nd matrix : \n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf(" %d ",a[i][j]);

    }
    printf("\n");
}

printf("Enter 1 for transposing the matrix \n Enter 2 for multiplying the matrix \n Enter 3 for adding the matrix \n");
scanf("%d",&l);

switch(l){
    case 1:
    printf("Transpose of 1st matrix are : \n");
    for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf(" %d ",a[i][j]);

    }
    printf("\n");
              }
    printf("Transpose of 2st matrix are : \n");
    for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf(" %d ",b[i][j]);

    }
    printf("\n");
                 }
     break;
    case 2:
    int O[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            O[i][j]=0;
            for(int k=0;k<r;k++){
                O[i][j]= O[i][j] + a[i][k] * b[k][j]; 
            }
            printf(" %d ",O[i][j]);
        }
        printf("\n");

    } 
    break;

    case 3:
    int o[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            o[i][j]=0;
            for(int k=0;k<r;k++){
                o[i][j]=  a[i][k] + b[k][j]; 
            }
            printf(" %d ",o[i][j]);
        }
        printf("\n");

    }
    break;
    
}
}
