#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int U[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&U[i]);
    }
    int m;
    scanf("%d",&m);
    int A[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
    int p=n-m;
    int C[p];
    int k=0;
    int r=0;
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<m;j++)
        {
            if(A[j]==U[i])
            {
                f++;
            }
        }
        if(f==0)
        C[r++]=U[i];
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",C[i]);
    }
}
