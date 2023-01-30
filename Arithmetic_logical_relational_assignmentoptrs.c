/*ARITHMETIC OPTRS
#include<stdio.h>
int main()
{
        int a,b;
        printf("Enter  a number:");
        scanf("%d%d",&a,&b);
        printf("sum of %d and %d is %d\n",a,b,a+b);
        printf("%d - %d =%d\n",a,b,a-b);
        printf("mul of a * b =%d\n",a*b);
        printf("Remainder of %d %%  %d =%d\n",a,b,a%b);
        printf("a value is %d\n",a++);
        printf("a value is %d\n",a);

        return 0;
}
*/





/*
#include<stdio.h>
int main()
{
        float a,b;
        printf("Enter any 2 numbers:");
        scanf("%f%f",&a,&b);
        float  res;
        res=a+b;
        printf("Addition is %f\n",res);
        res=a-b;
        printf("%f - %f =%f\n",a,b,res);
        return 0;
}
*/





/*
#include<stdio.h>
int main()
{
	int a,b,c;
	float z;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Total:%d\n",c);
	c=a-b;
	printf("Sub :%d\n",c);
	c=a*b;
	printf("Mul:%d\n",c);
	z=(float)a/(float)b;
	printf("Div:%0.2f\n",z);
	c=a%b;
	printf("Mod :%d\n",c);
	return 0;
}
*/





/*
#include<stdio.h>
int main()
{
        float basic_sal,DA,HRA,gross_salary;
        printf("Enter your basic salary:");
        scanf("%f",&basic_sal);
        DA=basic_sal*0.4;
        HRA=basic_sal*0.2;
        gross_salary=basic_sal+DA+HRA;
        printf("Basic salary:%0.2f\n",basic_sal);
        printf("DA :%0.2f\n",DA);
        printf("HRA :%0.2f\n",HRA);
        printf("Gross salary :%0.2f\n",gross_salary);
        return 0;
}
*/







/*
#include<stdio.h>
int main()
{
	float km,m,cm,ft,i;
	printf("Enter kilometers:");
	scanf("%f",&km);
	m=1000*km;
	cm=m*100;
	i=cm/2.54;
	ft=i/12;
	printf("KM :%0.2f\n",km);
	printf("M :%0.2f\n",m);
	printf("CM :%0.2f\n",cm);
	printf("FT :%0.2f\n",ft);
	printf("I :%0.2f\n",i);
	return 0;
}
*/








/*LOGICAL OPTRS
#include<stdio.h>
int main()
{
        int a=0,b=0;
        printf("%d\n",a&&b);
        return 0;
}
*/





/*
#include<stdio.h>
int main()
{
        float a=2.1,b=2.2;
        printf("%d\n",a&&b);
        return 0;
}
*/





/*
#include<stdio.h>
int main()
{
        int a=6,b=10;
        printf("a || b is %d\n",a||b);
        return 0;
}
*/






/*
#include<stdio.h>
int main()
{

	int a;
	printf("Enter any value:");
	scanf("%d",&a);
	printf("Logical AND:%d\n",(a>=35 && a<=100));
	printf("Logical OR:%d\n",(a>=35 || a<=35));
	printf("Logical NOT:%d\n", !(a>=35));
	return 0;
}
*/




/*


#include<stdio.h>
int main()
{
	int a=5,b=5,c=9,result;
	result=(a==b) && (c>b);
	printf("(a==b) && (c>b) is %d\n",result);
	result= (a==b) && (c<b);
	printf("(a==b) && (c<b) is %d\n",result);
	result=(a==b) || (c<b);
	printf("(a==b) || (c<b) is %d\n",result);
	result=(a!=b) || (c<b);
	printf("(a!=b) || (c<b) is %d\n",result);
	result = !(a!=b);
	printf("!(a==b) is %d\n",result);
	return 0;
}

*/










//RELATIONAL OPTRS
/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any 2 numbers:");
	scanf("%d %d",&a,&b);
//	printf("%d",a>b);
        //printf("a>b is %d\n",a>b);
	printf("%d is greater than %d is %d",a,b,a>b);

	return 0;
}
*/




/*
#include<stdio.h>
int main()
{
        int a,b;
        printf("Enter any 2 numbers:");
        scanf("%d %d",&a,&b);
      printf("%d\n",a<b);
        printf("a<b is %d\n",a<b);
        printf("%d is greater than %d is %d",a,b,a<b);

        return 0;
}
*/





/*
#include<stdio.h>
int main()
{
        int a,b;
        printf("Enter any 2 numbers:");
        scanf("%d %d",&a,&b);
      printf("%d\n",a>=b);
        printf("a>=b is %d\n",a>=b);
        printf("%d is greater than %d is %d",a,b,a>=b);

        return 0;
}
*/








/*

#include<stdio.h>
int main()
{
        int a,b;
        printf("Enter any 2 numbers:");
        scanf("%d %d",&a,&b);
      printf("%d\n",a<=b);
        printf("a<=b is %d\n",a<=b);
        printf("%d is greater than %d is %d",a,b,a<=b);

        return 0;
	}
	*/








/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two values:");
	scanf("%d%d",&a,&b);
	printf("%d\n", a==b);
	printf("%d  equals to %d is %d\n",a,b,a==b);
	return 0;
}
*/



/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two values:");
	scanf("%d%d",&a,&b);
	printf("%d\n",a!=b);
	printf("%d not equals to %d is %d\n",a,b,a!=b);
	return 0;
}
*/






//Assignment operators
/*
#include<stdio.h>
int main()
{
	int a=10;
	int b=10;
	a+=b;
		printf("x=%d\n",a);
	return 0;
}
*/






/*
#include<stdio.h>
int main()
{
	int a=10;
       int b =20;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a*=b;
	printf("a=%d\n",a);
	return 0;
}
*/






/*
#include<stdio.h>
int main()
{
	int x=10;
	int y=10;
	x^=y;
	printf("x^y is %d\n",x);
	x |=y;
	printf("x=%d\n",x);
	x&=y;
	printf("x=%d\n",x);
	x <<=y;
	printf("x=%d\n",x);
	x>>=y;
	printf("x=%d\n",x);
	return 0;
}

*/





/*
#include<stdio.h>
int main()
{
i
*/nt n1,n2;
printf("enter any two values:");
scanf("%d%d",&n1,&n2);
n1%=n2;
printf("Modulus value of n1 :%d\n",n1);
return 0;
}
*/



/*
#include<stdio.h>
int main()
{
	int a=5;
	int total=10;
	printf("Value of total=%d\n",total+=a);
	printf("value of total=%d\n",total-=a);
	printf("value of total=%d\n",total*=a);
	printf("value of total=%d\n",total/=a);
	printf("value of total=%d\n",total%=a);
	return 0;
}
*/
