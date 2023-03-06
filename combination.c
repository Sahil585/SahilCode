#include<stdio.h>

int fact(int);
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n; i++){
    f=f*i;

  }

   return f;
}

int main(){
     
int n, r, nCr, nPr;
printf("Enter the value of n and r\n:");
scanf("%d %d",&n,&r);

nPr=fact(n)/fact(n-r);

nCr=fact(n)/(fact(r)*fact(n-r));
printf("The value of %dC%d=%d and %dP%d=%d", n,r,nCr, n, r, nPr );


} 

/*int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n; i++){
    f=f*i;

  }

   return f;

}*/