/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Question 1 To calculate gross salary
    int bs,al,hs,gs;
    printf("Enter Salary:");
    scanf("%d",&bs);
    al=0.4*bs;
    hs=0.2*bs;
    gs=bs+al+hs;
    printf("Gross Salary:%d",gs);

    return 0;
    
    //Question2 to convert km to different units
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
    
    //Question 3 To calculate aggregate and percentage of marks
    int a,b,c,d,e,ag,per;
    printf("Enter marks in five subjects:");
    scanf("%d%d%d%d%d:",&a,&b,&c,&d,&e);
    ag=a+b+c+d+e;
    per=ag/5;
    printf("Aggregate marks of student are:%d \n Percentage of student is:%d",ag,per);
    
    
    //Question 4 To convert temperature to celcius
    float f,c;
    printf("Enter temperature in Farenheit:");
    scanf("%f",&f);
    c=32-((9/5)*f);
    printf("Temperature in celcius is:%f",c);
    
    //Question 5 To find area and perimeter of rectangle and circle
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
    
    //Question 6 Switch variables
    int c,d,e;
    printf("Enter any number C:");
    scanf("%d",&c);
    printf("Enter any number D:");
    scanf("%d",&d);
    e=d;
    d=c;
    c=e;
    printf("Now C is:%d and D is:%d",c,d);
    
    //Question 7 Sum of five digit number
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
    
    //Question 8 Reverse a number
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
    
    //Question 9 Sum of 1st and last digit in Four digit number 
    int a,b,c,d,e;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    b=a/1000;
    c=a%10;
    d=b+c;
    printf("sum:%d",d);
    
    
    
    //Question 10 Calculate number of currency notes
    int a,note1,note2,note5,note10,note20,note50,note100,note500;
    printf("Enter the amount you want to calculate notes of:");
    scanf("%d",&a);
    note1=note2=note5=note10=note50=note100=note500=0;
    if(a>=500)
    {
        note500=a/500;
        a=(a-note500*500);
    }
    if(a>=100)
    {
        note100=a/100;
        a=(a-note100*100);
    }
    if(a>=50)
    {
        note50=a/50;
        a=(a-note50*50);
    }
    if(a>=20)
    {
        note20=a/20;
        a=(a-note20*20);
    }
    if(a>=10)
    {
        note10=a/10;
        a=(a-note10*10);
    }
    
    if(a>=5)
    {
        note5=a/5;
        a=(a-note500*5);
    }
    if(a>=2)
    {
        note2=a/2;
        a=(a-note2*2);
    }
    if(a>=1)
    {
        note1=a/1;
        a=(a-note1*1);
    }

    printf("The number of notes needed is:");
    printf("500:%d \n100:%d \n50:%d \n20:%d \n10:%d \n5:%d \n2:%d \n1:%d \n",note500,note100,note50,note20,note10,note5,note2,note1);



    
    

}
