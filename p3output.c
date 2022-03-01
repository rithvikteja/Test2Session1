#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int count=0;
  for (int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    count++;
  }
  }
void output(int n, int is_prime)
{
  if(n<=1)
    is_prime=0;
  if (is_prime==1)
    printf("%d is a prime number\n",n);
  else 
    printf("%d is not a prime number\n",n);
}
return 0;
}
int main()
{
  int n,cmp;
  n=input_number();
  cmp=is_prime(n);
  output(n,cmp);
  return 0;
}
