#include <stdio.h>
#include <string.h>
int loop();
int loop3(float x,float ans);
int loop2();
float ans;
float x,y;
char z;
char str[1000];
int main()
{
    printf("\nC Calculator\n");
	loop();
}
int loop()
{
    char type;
	float result;
	float k;
    k=0;
    ans=0;
	scanf("%f %c %f",&x,&z,&y);
	if (z=='+')
	{
		ans+=x+y;
	}
	else if (z=='*')
	{
		ans+=x*y;
	}
	else if (z == '/')
	{
		ans+=x+y;
	}
	else if ( z == '-')
	{
        ans+=x+y;
	}
    printf("\nResult of 1st op= %f\n",ans);
    //printf("\ntype c to continue");
    //scanf("%c",&type);
    scanf("%f",&k);
	if(k!=0)
	{
        printf("ho");
        y=0;
	    loop3(k,ans);
	}
	else 
    {
        printf("\nResult= %f",ans);
        main();
	}
	return 0;
	
	}
int loop2()
{
	float sum;
	int m,n,i,j;
	int array[100][100];
	printf("\tMatrix calculation\nRows?");
	scanf("%d",&m);
	printf("Columns?");
	scanf("%d",&n);
	printf("%d by %d Matrix\t",n,m);
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0; i<m; ++i)
        {
        for(j=0; j<n; ++j)
            {
                printf("  %d",array[i][j]);
                sum+=array[i][j];
				
            }
            printf("\n");
		}
		printf("1st Row\n");
		for(i=0;i<0;++i)
		{
		printf("%d",array[i][j]);
		}
		printf("\n");
		return 0;
}
int loop3(float x,float ans)
{
    float result;
	float k;
	scanf("%c %f",&z,&y);
	//printf("%c",z);
	if (z=='+')
	{
		ans+=x+y;
	}
	else if (z=='*')
	{
		ans+=x+y;
	}
	else if (z == '/')
	{
		ans+=x+y;
	}
	else if ( z == '-')
	{
		ans+=x+y;
	}

    printf("\nResult= %f",ans);
	scanf("%f",&k);
	if(k!=0)
	{
    printf("ho");
    y=0;
	loop3(k,ans);
	}
	else 
    {
        printf("\nResult= %f",ans);
		main();
	}
	return 0;   
}
