#include<stdio.h>
int main()
{
    //matrix input
    int mat[3][3],dat[2][3],i,j,c=0,res=0;
    for(i=0;i<3;i++)
    {
        printf("enter elements of %d row of 3x3 matrix\n",i+1);
        for(j=0;j<3;j++)
        {
            
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<3;i++) dat[0][i]=mat[0][i];

    //determinant calculation
    dat[1][0]=(mat[1][1]*mat[2][2])-(mat[2][1]*mat[1][2]);
    dat[1][1]=(mat[1][0]*mat[2][2])-(mat[2][0]*mat[1][2]);
    dat[1][2]=(mat[1][0]*mat[2][1])-(mat[2][0]*mat[1][1]);

    while(c<3)
    {
        if(c%2==0) res+=(dat[0][c]*dat[1][c]);
        else res-=(dat[0][c]*dat[1][c]);
    c+=1;
    }

    
    printf("Determinant of entered matrix is %d ",res);
    return 0;
}