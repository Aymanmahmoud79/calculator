#include <stdio.h>
int main ()
{
	
	float operator1, operator2,result ;
	char operation, q;
	 
	 do{
		 printf("enter the first operator: ");
		 scanf("%f",&operator1);
		 printf("enter the second operator: ");
		 scanf("%f",&operator2);
		 printf("enter the first operation: ");
		 scanf(" %c",&operation);
	 
	 switch(operation){
		 case'+': result=operator1+operator2; break;
		 case'-': result=operator1-operator2; break;
		 case'*': result=operator1*operator2; break;
		 case'/': result=operator1/operator2; break;
		 default: printf("wrong operation\n"); continue;
		 
	 }
	 printf("Result = 0.2%f\n", result);
	 printf("enter e to end exit, and any other key to contineu");
	 } while(q != 'e');
	 
	 printf("thank  you\n");
}