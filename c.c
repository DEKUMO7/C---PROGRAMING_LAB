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
//	int len,br;
//	printf("Enter the length of the rectangle: ");
//	scanf("%d",&len);
//	printf("Enter the breadth of the rectangle: ");
//	scanf("%d",&br);
//	printf("the area of the rectangle is: %d",len*br);
//	printf("\nthe perimeter of teh rectangle is: %d",2*(len+br));
//	
//}

//write a program to convert celsius to farenheite

//#include<stdio.h>
//int main(){
//	int cel,far;
//	printf("Enter celcius: ");
//	scanf("%d",&cel);
//	far = (cel*1.8)+32;
//	printf(" farenheite: %d",far);
//}

//write a program to convert celsius to farenheite

//#include<stdio.h>
//int main(){
//	int far,cel;
//	printf("Enter farenheite: ");
//	scanf("%d",&far);
//	cel = (far-32)*5/9;
//	printf("celcius: %d",cel);
//}

//write a program to calculate simple interest

//#include<stdio.h>
//int main(){
//	int p,t,r;
//	printf("Enter principal: ");
//	scanf("%d",&p);
//	printf("Enter rate of interest: ");
//	scanf("%d",&r);
//	printf("Enter time: ");
//	scanf("%d",&t);
//	int s = (p*r*t)/100;
//	printf("Simple interest: %d",s);
//}

//write a c program to calculate sum of digits
//#include<stdio.h>
//void main(){
//	int num,sum;
//	printf("Enter numbers: ");
//	scanf("%d",&num);
//	while(num!=0){
//		int digits = num%10;
//		sum += digits;
//		num /= 10;
//	}
//	printf("Sum of Digits is: %d",sum);
//}

//write a c program to count the digits of a whole number
//#include<stdio.h>
//void main(){
//	int num,i=0;
//	printf("Enter numbers: ");
//	scanf("%d",&num);
//	while(num!=0){
//		int digits = num%10;
//		num /= 10;
//		i++;
//	}
//	printf("total digits: %d",i);
//}

//write a c program to reverse the digits of a whole number

//#include<stdio.h>
//int main(){
//	int num,reverse=0,digit;
//	printf("Enter numbers: ");
//	scanf("%d",&num);
//	while(num!=0){
//		digit = num%10;
//		reverse =reverse*10+digit;
//		num /= 10;
//	}
//	printf("total digits: %d",reverse);
//}

//write a c program to print tribonacci series
#include<stdio.h>
int main(){
	int a=0,b=1,c=1,d,n,i=1;
	printf("Enter the terms: ");
	scanf("%d",&n);
	printf("tribonacci series: ");
	while(i<=n){
		printf("%d",a);
		d= a+b+c;
		a= b;
		b= c;
		c= d;
		i++;
	}
}
