/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Question 1
    int a,b,add,sub,mul,di,mod;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    di=a/b;
    mod=a%b;
    printf("Sum = %d+%d = %d \n",a,b,add);
    printf("Difference = %d-%d = %d \n",a,b,sub);
    printf("Product = %d*%d = %d \n",a,b,mul);
    printf("Division = %d \n",di);
    printf("Modulus = %d \n",mod);
    

    //Question 2
    int km,m,cm;
    float in,ft;
    printf("Enter distance in km:");
    scanf("%d",&km);
    m=km*1000;
    cm=m*100;
    ft=0.304*m;
    in=0.083*ft;
    printf("Distance in km is:%d",km);
    printf("\n in m:%dm \n in cm:%dcm \n in feet:%fft \n in inch:%fin",m,cm,ft,in);
    
    
    
    //Question 3
    int a,b;
    printf("Enter a and b to perform bit wise operators:");
    scanf("%d%d",&a,&b);
    printf("a & b=%d",a&b);
    printf("\na | b=%d",a|b);
    printf("\na ^ b=%d",a^b);
    printf("\n~b=%d",~b);
     printf("\n~a=%d",~a);
    printf("\na<<1=%d",a<<1);
    printf("\n1>>b=%d",1>>b);

    
    
    //Question 4
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    a>b?(a>c?printf("%d is greatest of all",a):printf("%d is greatest of all",c)):
    (b>c?printf("%d is greatest of all",b):printf("%d is greatest of all",c));
    
    //Question 5 To check leap year
    int year,a;
    printf("Enter the year to check if it is leap:");
    scanf("%d",&year);
    //Bit wise operator or will be used for the same
    a=year%4==0 | year%100==0?printf("Year is leap"):printf("Year is not leap");

    
    
    

    //Question 6 to find out roots of a quadratic equation
    int a,b,c,d,dis,r,re,root,e,real,img,f;
    printf("Enter the values of a,b,c in the equation ax^2+bx+c=0 :");
    scanf("%d%d%d",&a,&b,&c);
    dis=b*b-(4*a*c);
    e=dis^(1/2);
    f=(-dis)^(1/2);
    root=-b/(2*a);
    r=(-b+e)/2*a;
    re=(-b-e)/2*a;
    real=-b/(2*a);
    img=f/(2*a);
    dis=0?(printf("Only one real root i.e:"),root):(dis>0?printf("Two real roots are:%d and %d",r,re):
    printf("Complex roots are possible they are:%d+%di,%d-%di",real,img,real,img));
    
    
    //Question 7
    float a,b,c,d,e,per;
    printf("Enter marks of student in five subjects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5.0;
    printf("Percentage of student is:%f",per);
    printf("\n");
    per>=70?(per>=80?(per>=90?printf("Grade is A"):printf("Grade is B")):printf("Grade is C")):
    (per>=60?printf("Grade is D"):printf("Grade is E"));
    
    
}




