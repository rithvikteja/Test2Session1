#include<stdio.h>
#include <math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the points of triangle\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int a,b,c;
  a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  c=sqrt(pow((x3-x1),2))+pow((y3-y1),2);
  if((a+b)>c && (b+c)>a && (c+a)>b)
  return 1;
  else
  return 0;
  }
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle==1)
  {
    printf("area of triangle (%f,%f),(%f,%f)&(%f,%f) form a triangle\n",x1,y1,x2,y2,x3,y3);
    }
  else
  {
    printf("area of triangle (%f,%f),(%f,%f)&(%f,%f) do not form a triangle\n",x1,y1,x2,y2,x3,y3);
  }
  }
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&x2,&y2,&x2,&y3,&x3);
  int a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
  }