//PROGRAM : 1 FIND MAX NUMBER IN ARRAY   (START)

#include<stdio.h>

// DEFINE & DECLARATION OF FUNCTION

int findMaxNum(int []);
int n;

// LOGIC OF FIND MAX NUMBER IN FUNCTION DECLARATION

findMaxNum(int a[])
{
	fflush(stdin);
    int i=1,mxNUM;
    mxNUM=a[0];
    while(i <= n)
	{
      if(mxNUM<a[i])
           mxNUM=a[i];
      i++;
    }
    
}



int main()
{
    int a[100],mxNUM,i=1;
    fflush(stdin);
    
	printf("Function : get largest number :\n");
	printf("*****************************************************\n"); 

       printf(" enter the element:");
       scanf("%d",&n);
   
       printf(" Input %d number :\n",n);
       for(i=1;i<=n;i++)
        {
	      printf(" number - %d : ",i);
	      scanf("%d",&a[i]);
	    }
	    
	// CALLING THE FUNCTION
	
    mxNUM=findMaxNum(a);

    printf(" The largest number in the array is : %d\n\n",mxNUM);
    
}

//PROGRAM : 1 FIND MAX NUMBER IN ARRAY   (END)
