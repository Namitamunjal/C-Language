/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    //Question 1 Area of triangle
    int a,b,c,s;
    float equi,iso;
    printf("Enter sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    equi=((3)^1/2/4)*a*a;
    s=(a+b+c)/2;
    iso=sqrt(s*(s-a)*(s-b)*(s-c));
    if(a==b==c)
    {
        printf("Area of triangle is:%f",equi);
    }
    else if(a!=b | a!=c)
    {
        printf("Area of triangle:%f",iso);
    }
    
    //Question 2 To convert co-ordinates to polar co-ordinates
    int x,y,r,phi,z;
    printf("Enter x and y co-ordinates:");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    z=y/x;
    phi=atan(z);
    printf("Polar co-ordiantes are:%d and %d",r,phi);
    
    
    //Question 3 to find the distance between latitude and longitude
    float l1,l2,g1,g2;
    double d;
    
    printf("Enter the values of Latitude in degree:");
    scanf("%f%f",&l1,&l2);
    printf("Enter the values of Longitude in degree:");
    scanf("%f%f",&g1,&g2);
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("The distance in nautical miles:%lf",d);
    
    
    
    //Question 4 to calculate the Wind chill factor
    int t,v,s;
    float wcf;
    printf("Enter the temperature:");
    scanf("%d",&t);
    printf("Enter the wind velocity:");
    scanf("%d",&v);
    s=pow(v,0.16);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*s;
    printf("The wind chill factor is:%f",wcf);

    
    //Question 5 To find all the trignometric ratios
    float radian,degree;
    printf("Enter the angle in degree :");
    scanf("%f",&degree);
    radian=degree*3.14/180.0;
    printf("sin(%f)=%f \n",degree,sin(radian));
    printf("cos(%f)=%f \n",degree,cos(radian));
    printf("tan(%f)=%f \n",degree,tan(radian));
    printf("cosec(%f)=%f \n",degree,(1/sin(radian)));
    printf("sec(%f)=%f \n",degree,(1/cos(radian)));
    printf("cot(%f)=%f \n",degree,(1/tan(radian)));

    
    //Question 6  To calculate profit and loss 
    int cp,sp;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Profit has occured\n");
        printf("Profit amount is:%d",sp-cp);
    }
    
    else if(cp>sp)
    {
        printf("Loss has occured\n");
        printf("Loss amount is:%d",cp-sp);
    }
    
    //Question 7 To check if the number is odd or even 
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
    
    
    
    //Question 8 To find the youngest of three
    int r,s,a;
    printf("Enter age of Ram:");
    scanf("%d",&r);
    printf("Enter age of Shyam:");
    scanf("%d",&s);
    printf("Enter age of Ajay:");
    scanf("%d",&a);
    
    if(r<s && r<a)
    {
        printf("Ram whose age is %d is youngest of all.",r);
    }
    else if(s<a)
    {
        printf("Shyam whose age is %d is youngest of all.",s);
    }
    else
    {
        printf("Ajay whose age is %d is youngest of all.",a);
    }
    
    //Question 9 To check validity of angles of triangle
    int a,b,c,d;
    printf("Enter 3 angles of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    if(d==180)
    {
        printf("This triangle is Valid");
    }
    else if(d!=180)
    {
        printf("This triangle is not valid");
    }
    
    //Question 10
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    b=-a;
    printf("Absolute number is:%d",b);
    return 0;
}
