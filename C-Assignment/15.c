//programe to find multiplication of two matrics
#include<stdio.h>
#include<conio.h>
void input(int [][10],int,int);
void output(int [][10],int,int);
void main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
    printf("Enter row for first matrics:");
    scanf("%d",&r1);
    printf("Enter columns for first matrics:");
    scanf("%d",&c1);
    printf("Enter row for second matrics:");
    scanf("%d",&r2);
    printf("Enter columns for second matrics:");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("Enter elements of first matrics:\n");
        input(a,r1,c1);
        printf("Enter elements for second matrics:\n");
        input(b,r2,c2);
        
    }else{
        printf("First matric's column and second matric's row should be equal");
    }
    printf("Your two matrics are:\n");
    output(a,r1,c1);
    printf("\n");
    output(b,r2,c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<r2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of these two matrics is:\n");
    output(c,r1,c2);
    getch();
}
void input(int a[][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int a[][10],int r,int c){
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}