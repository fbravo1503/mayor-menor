#include <stdio.h>
#include <stdlib.h>
int nm();
int main()
{
    int n,m, t;
    printf("ingrese un numero \n");
    scanf("%d",&n);
    printf("Ingrese un segundo numero \n");
    scanf("%d",&m);
    t = nm(n, m);
    return t;
}
    int nm(int n,int m)
    {       int suma,multi,isuma;
            suma=n+m;
            multi=n*m;
            isuma=n%10+m%10;
            if((n%2==0)&&(m%2==0))
            {
                return suma;
            }
            if ((n%2!=0)&&(m%2!=0))
            {
                return multi;
            }
            if ((n%2==0)&&(m%2!=0)||(n%2!=0)&&(m%2==0))
            {
                return isuma;
            }
        }
