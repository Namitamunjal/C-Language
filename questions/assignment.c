#include <stdio.h>
int main()
{
	//Assignment 1
    
    
    //Question 1
    // Develop a C program to input one integer value (a), one float value (b), one character value (c),
    // and one string (str) from the user. Name these variables as a, b, c, and str respectively. Print these 
    // values separating by them using next line character.
    
	int a;
	float b;
	char c;
	
	printf("Enter any integer value:");
	scanf("%d",&a);
	
	printf("Enter any float value:");
	scanf("%f",&b);
	
	printf("Enter any character value:");
	scanf("%c",c);
	
	printf("%c",c);



 //Question 2
//	The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print 
//	this distance in meters, feet, inches and centimetres.
	int km,m,cm;
	float ft,in;
	printf("Enter the value of distance in km:");
	scanf("%d",&km);
	m=km*1000;
	ft=3280.84*km;
	in=39370.1*km;
	cm=100*m;
	printf("The value in meter is:%d\n in feet is:%f\n in inches is:%f\n in centimeter is:%d",m,ft,in,cm);

	//question 3
	If the marks obtained by a student in five different subjects are input through the keyboard, find 
	out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that
	can be obtained by a student in each subject is 100.

	int i,a,ag,b,per;
	b=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter marks in subject out of 100:");
		scanf("%d",&a);
		b=b+a;
	}
	ag=b;
	per=ag/5;
	printf("Aggregate is:%d and percentage is:%d",ag,per);
	

	//Question 4
	//Write a program to print the ASCII value of a character.
	
	char a;
	printf("Enter any character:");
	scanf("%c",&a);
	printf("Its ASCII value is:%d",a);

	//question 5
	//Write a program to read a character in upper case and print it in lower case.
	int ch;
	printf("Enter any character in upper case:");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("Its lower case is:%c",ch+32);
	}
	else{
		printf("Entered character is not in upper case.Try again.");
	}
	

	//Question 6
	//Write a program to print the size of basic data types such as int, char, float and double.
	int in;
	char ch;
	float fl;
	double db;
	printf("Size of the data types is as follows:\n%lu bytes\n%lu bytes\n%lu bytes\n%lu bytes",sizeof(in),sizeof(ch),sizeof(fl),sizeof(db));
	
	//Question 7
	
	//Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
	int c,d,e;
	printf("Enter the value to be interchanged:\n");
	printf("Enter c,d:");
	scanf("%d%d",&c,&d);
	e=c;
	c=d;
	d=e;
	printf("C is :%d and D is :%d",c,d);
	

	Question 8
	If a five-digit number is input through the keyboard, write a program to print a new number by adding
	one to each of its digits. For example, if the number that is input is 12391 then the output should be displayed as 23402.
	
	int a,b,c,d,i;
	printf("Enter any 5 digit number:");
	scanf("%d",&a);
	printf("The number with digit+1 is:");
	d=a;
	for(i=1;i<=5;i++)
	{
		b=d%10;
		c=d/10;	
		b=c;
		printf("%d",b);
	}


	int num, sum, i, number, count=0, n=1;

    printf("Enter N Digit's Number: ");
    scanf("%d", &num);

    number=num;

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  //n = 10
         n = n + 1;   //n = 11
    }

    sum = num + n;
    printf("Output: %d", sum);

	//Question 9
	//Write a program to find largest of three numbers using ternary operators.
	
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	a>b? (a>c?	printf("%d is greatest",a):	printf("%d is greatest",c))
	: (b>c?	printf("%d is greatest",b):	printf("%d is greatest",c));
    
	
	//Question 10
	//Write a program to find maximum of three numbers  using if statement.
	
	int a,b,c;
	printf("Enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greatest",a);
	}
	else if(b<c)
	{
		printf("%d is greatest",c);
	}
	else
	{
		printf("%d is grestest",c);
	}
	
	//Question 11
	//If the three sides of a triangle are entered through the keyboard, write a program to check
	//whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater 
	//than the largest of the three sides.
	
	int a,b,c,d;
	printf("Enter the sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>=c || b+c>=a || a+c>=b)
	{
		printf("Valid triangle");
	}
	else
	{
		printf("Invalid triangle");
	}
	
	
	//Question 12
	//Write a program to check if the number is a perfect number or not.
	//Hint: Take number 6.
	//Proper positive divisors of 6 is 1, 2, 3 and their sum is 1+2+3=6.
	//So, 6 is a perfect number.
	
	int a,b,c,d,i;
	printf("Enter the number:");
	scanf("%d",&a);
	b=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			printf("%d\n",i);
			b=b+i;
		}
		else
		break;
		
	}
	if(b==a)
			{
				printf("prime number");
			}
			else
			{
				printf("Not prime");
			}
	
	
	//Question	13
	//Write a program to find sum of first n natural numbers without using loop.
	int a,b,c;
	printf("Enter the number you want to calculate sum till:");
	scanf("%d",&a);
	b=a*(a+1)/2;
	printf("Sum of %d natural numbers is:%d",a,b);


	 Question 14
	Write a C program to convert specified days into years, weeks and days.
	int day,year,week,days;
	printf("Enter the number of days:");
	scanf("%d",&day);
	year=day/365;
	week=day%365;
	week=week/7;
	day=week%7;
	printf("This is:%d years %d weeks %d days",year,week,day);
	
	
	Question 15
	//Take a float input from the user and type cast it to int and print it on the screen.
	float a;
	int b;
	printf("Enter any decimal number:");
	scanf("%f",&a);
	b=(int)(a+0.5);
	printf("%0.1f %d",a,b);
	
	
	
	
	
	return 0;
}
