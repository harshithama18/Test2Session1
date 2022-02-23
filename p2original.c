#include<stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float a;
  a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if (a==0)
    return 1;
  else
    return 2;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int is_triangle)
{
  if(is_triangle==1)
    printf("The given 3 points don't form a trinagle\n");
  else
    printf("The given 3 points form a trinagle\n");
}
int main()
{
  float x1,y1,x2,y2,x3,y3,istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}
  
