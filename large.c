#include<stdio.h>
void quick(int *a,int f,int l){
    int i,j,p,t;
    if(f<l)
    {
        i=f;
        p=f;
        j=l;
        while(i<j){
            while(a[i]<=a[p]&&i<l)
            i++;
            while(a[p]<a[j])
            j--;
            
            if(i<j)
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
            t=a[p];
                a[p]=a[j];
                a[j]=t;
                quick(a,f,j-1);
                quick(a,j+1,l);
    
    }
    return ;
}
int main()
{
    int n=50,a[n];
    int i,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    quick(a,0,n-1);
    k=k-1;
    printf("%d",a[k]);
    return 0;
    
}
