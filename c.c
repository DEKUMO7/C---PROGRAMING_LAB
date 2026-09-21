//#include<stdio.h>
//int main()
//{
//	//statements
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("NAME: DEBANGSHU KUMAR MONDAL\n");
//	printf("ROLL NO.: 29\n");
//	printf("COURSE: BCA\n");
//	printf("SEMESTER: FIRST\n");
//}

//#include<stdio.h>
//int main()
//{
//	int num1,num2,sub;
//	printf("ENTER FIRST NUMBER: ");
//	scanf("%d",&num1);
//	printf("ENTER SECOND NUMBER: ");
//	scanf("%d",&num2);
//	sub = num1+num2;
//	printf("SUM OF TWO NUMBERS: %d",sub);
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	float marks = 85.5;
//	char grade = 'A';
//	printf("Age = %d\n",age);
//	printf("Marks = %.2f\n",marks);
//	printf("grade = %c\n",grade);
//	printf("%zu\n",sizeof(marks));
//}

//#include<stdio.h>
//int main()
//{
//	int num1,num2,swap;
//	printf("ENTER FIRST NUMBER: ");
//	scanf("%d",&num1);
//	printf("ENTER SECOND NUMBER: ");
//	scanf("%d",&num2);
//	swap = num1;
//	num1 = num2;
//	num2 = swap;
//	printf("FIRST NO. = %d\n",num1);
//	printf("SECOND NO. = %d",num2);
//}

//write a c program to calculate the area & perimeter of a rectangle

//#include<stdio.h>
//int main(){
//	int len,br,sum;
//	printf("Enter the length of the rectangle: ");
//	scanf("%d",&len);
//	printf("Enter the breadth of the rectangle: ");
//	scanf("%d",&br);
//	printf("the area of the rectangle is: %d",len*br);
//	printf("\nthe perimeter of teh rectangle is: %d",2*(len+br));
//	
//}

//write a c program which read an intger value and check whether it is positive or not, after satisfied the integer value > 0.if it is possitive then check whether it is odd or even

//#include <stdio.h>
//int main(){
//	int num;
//	printf("Enter a number: ");
//	scanf("%d",&num);
//	if(num>0)
//	{
//		printf("The number is possitive number...\n");
//		if(num%2 == 0)
//		{
//			printf("Even number");
//		}else{
//			printf("odd number");
//		}
//	}
//	else
//	{
//		printf("The number is nagative number...");
//	}
//}


// wrtie a c program to find the greatest among 3 inputade numbers

//#include <stdio.h>
//int main(){
//	int num1,num2,num3;
//	printf("Enter first a number: ");
//	scanf("%d",&num1);
//	printf("Enter second a number: ");
//	scanf("%d",&num2);
//	printf("Enter third a number: ");
//	scanf("%d",&num3);
//	if(num1>num2 && num1 > num3)
//	{
//		printf("The first number is greatest... %d",num1);
//		
//	}
//	else if (num2 > num3)
//	{
//		printf("The second number is greatest... %d",num2);
//	}
//	else{
//		printf("The third number is greatest... %d",num3);
//	}
//}

// write a c program to calculate the electricity bill based on the number of units consumed the charges are
// 0 to 100 2rs per unit
//101 to 200 3rs per unit
//201 to 300 5rs  per unit
// above 300 7rs per unit

//#include <stdio.h>
//int main(){
//	int unit;
//	printf("Enter number of units consumed: ");
//	scanf("%d",&unit);
//	if (unit <= 100)
//	{
//	    printf( "Electricity bill= %d",unit *2);
//	}
//	else if (unit <=200)
//	{
//		printf( "Electricity bill= %d",(100 *2)+(unit - 100)*3);
//	}
//	else if(unit <=300)
//	{
//		printf( "Electricity bill= %d",(100 *2)+(100*3)+(unit - 200)*5);
//	}
//	else{
//		printf( "Electricity bill= %d",(100 *2)+(100*3)+(100*5)+(unit - 300)*7);
//	}
//}

//write a program to print 1 - 5 uxing in while loop

//#include <stdio.h>
//int main(){
//	int num= 0;
//	while(num <=5)
//	{
//		++num;
//		printf("%d",num);
//	}
//}

//write a program to print 5 - 1 uxing in while loop
//#include <stdio.h>
//int main(){
//	int num= 5;
//	while(num >=1)
//	{
//		printf("%d",num);
//		--num;
//		
//	}
//}

//WRITE A C PROGRAM TO PRINT EVEN NUMBERS TO 10

//#include<stdio.h>
//int main(){
//	int num = 1;
//	while(num<=10)
//	{
//		if(num%2==0)
//		printf("\neven number is: %d",num);
//		num++;
//	}
//}

//WRITE A C PROGRAM TO PRINT EVEN NUMBERS TO 10

#include<stdio.h>
int main(){
	int num = 1;
	while(num<=10)
	{
		if(num%2!=0)
		printf("\nodd number is: %d",num);
		num++;
	}
}

//write a c program to calculate sum of numbers from 1 to 5
//write a c program to calculate sum of numbers from 1 to n
//write a c program to calculate sum of numbers from 1 to 10


