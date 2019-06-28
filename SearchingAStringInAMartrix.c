#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],b[100];
    int i,j,m,n,l,flag=0;
        scanf("%s",b);
        printf("%s\n",b);
        for(i=0;i<5;i++)
        {

            for(j=0;j<5;j++)
            {
                scanf("%c",&a[i][j]);

            }

        }
         for(i=0;i<5;i++)
        {

            for(j=0;j<5;j++)
            {
                printf("%c",a[i][j]);

            }
            printf("\n");
        }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==b[0])
            {

                l=1;
                m=i+1;
                n=j;
                        while(a[m][n]==b[l])
                        {
                            m++;
                            l++;


                        }
                        if(l==strlen(b))
                        {
                             flag=1;
                            printf("%d %d",i,j);
                            break;
                        }
                        l=1;
                        m=i;
                        n=j+1;
                        while(a[m][n]==b[l])
                        {
                            n++;
                            l++;
                        }
                        if(l==strlen(b))
                        {
                             flag=1;
                            printf("%d %d",i,j);
                            break;
                        }
                        l=1;
                        m=i+1;
                        n=j+1;
                        while(a[m][n]==b[l])
                        {
                            m++;
                            n++;
                            l++;
                        }
                        if(l==strlen(b))
                        {
                             flag=1;
                            printf("%d %d",i,j);
                            break;
                        }








            }

        }

    }





}
