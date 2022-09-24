/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    Question 1 To calculate gross salary
    int bs,al,hs,gs;
    printf("Enter Salary:");
    scanf("%d",&bs);
    al=0.4*bs;
    hs=0.2*bs;
    gs=bs+al+hs;
    printf("Gross Salary:%d",gs);

    return 0;
    
    Question2 to convert km to different units
    int km,m,cm;
    float in,ft;
    printf("Enter distance in km:");
    scanf("%d",&km);
    m=km*1000;
    cm=m*100;
    ft=0.304*m;
    in=0.083*ft;
    printf("Distance in km is:%d",km);
    printf("\n in m:%dm \n in cm:%dcm \n in feet:%fft \n, in inch:%fin",m,cm,ft,in);
    
    Question 3 To calculate aggregate and percentage of marks
    int a,b,c,d,e,ag,per;
    printf("Enter marks in five subjects:");
    scanf("%d%d%d%d%d:",&a,&b,&c,&d,&e);
    ag=a+b+c+d+e;
    per=ag/5;
    printf("Aggregate marks of student are:%d \n Percentage of student is:%d",ag,per);
    
    
    Question 4 To convert temperature to celcius
    float f,c;
    printf("Enter temperature in Farenheit:");
    scanf("%f",&f);
    c=32-((9/5)*f);
    printf("Temperature in celcius is:%f",c);
    
    Question 5 To find area and perimeter of rectangle and circle
    int l,b,r,ar,cr,a,p;
    printf("Enter length and bredth:");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area of rectangle is :%d \n Perimeter of rectangle is:%d",a,p);
    printf("\nEnter radius of circle:");
    scanf("%d",&r);
    ar=3.14*r*r;
    cr=2*3.14*r;
    printf("Area of circle:%d \n Circumference of circle:%d",ar,cr);
    
    Question 6 Switch variables
    int c,d,e;
    printf("Enter any number C:");
    scanf("%d",&c);
    printf("Enter any number D:");
    scanf("%d",&d);
    e=d;
    d=c;
    c=e;
    printf("Now C is:%d and D is:%d",c,d);
    
    Question 7 Sum of five digit number
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter a five digit number:");
    scanf("%d",&a);
    b=a/10000;
    c=a%10000;
    d=c/1000;
    e=c%1000;
    f=e/100;
    g=e%100;
    h=g/10;
    i=g%10;
    j=b+d+f+h+i;
    printf("%d%d%d%d%d",b,d,f,h,i);
    printf("\nSum of all digits of five digit number is:%d",j);
    
    Question 8 Reverse a number
    int a,b,c,d,e,f,g,h,i;
    printf("Enter a five digit number:");
    scanf("%d",&a);
    b=a/10000;
    c=a%10000;
    d=c/1000;
    e=c%1000;
    f=e/100;
    g=e%100;
    h=g/10;
    i=g%10;
    printf("Reversed number is:%d%d%d%d%d",i,h,f,d,b);
    
    Question 9 Sum of 1st and last digit in Four digit number 
    int a,b,c,d,e;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    b=a/1000;
    c=a%10;
    d=b+c;
    printf("sum:%d",d);
    
    

}
