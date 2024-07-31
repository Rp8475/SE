//PROGRAM : 2 ADD,SUB,MULT,DIV USING BY SWITCH CASE (START)

#include<stdio.h>
#include<string.h>



choice(){
	printf("\n1. add");
	printf("\n2. sub");
	printf("\n3. mult");
	printf("\n4. div");
	printf("\n5. exit");
}
int a,b;

add(){
	fflush(stdin);
	printf("enter a num : ");
	scanf("%d",&a);
		printf("enter a num : ");
	scanf("%d",&b);

     printf("addition of number is : %d + %d = %d",a,b,a+b);
	
}
sub(){
		fflush(stdin);
	printf("enter a num : ");
	scanf("%d",&a);
		printf("enter a num : ");
	scanf("%d",&b);

     printf("subtraction of number is : %d - %d = %d",a,b,a-b);
	

}

mult(){
		fflush(stdin);
	printf("enter a num : ");
	scanf("%d",&a);
		printf("enter a num : ");
	scanf("%d",&b);

     printf("multiplication of number is : %d * %d = %d",a,b,a*b);
	
	
	}
	
	
div(){
		fflush(stdin);
	printf("enter a num : ");
	scanf("%d",&a);
		printf("enter a num : ");
	scanf("%d",&b);

     printf("division of number is : %d / %d = %d",a,b,a/b);
	
	
}
main(){

	printf("start your program\n");
	
	while(1){
		choice();
		
		 int choice;
        printf("\n\nEnter Choice : ");
        scanf("%d", &choice);

        if(choice == 1){
            add();
        }

        else if(choice == 2){
           sub();
        }

        else if(choice == 3){
            mult();
        }

        else if(choice == 4){
            div();
            break;
        }
        else if(choice == 5){
            printf("Thank You!");
            break;
        }
        else{
            printf("\n\nInvalid choice!!");
            break;
        }
    }

}
	
//PROGRAM : 2 ADD,SUB,MULT,DIV USING BY SWITCH CASE (END)	
	
	
	
	

	

