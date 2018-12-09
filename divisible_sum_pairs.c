#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,a[100],b[100][100],k,c=0;
    float sum;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b[i][j]=a[i]+a[j];
            if(b[i][j]%k==0)
            c++;
            
                
            
        }

    }
    printf("%d",c);
}

