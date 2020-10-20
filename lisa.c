#include<stdio.h>
#include<math.h>
int min(int arr[],int a,int b){
    int l=arr[a];
    for(int i=a;i<=b;i++){
        if(l>arr[i])
        l=arr[i];
    }
    return l;
}
int main (){
    int n,t,a,b;
    scanf("%d%d",&n,&t);
    int arr[n],frr[t];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        frr[i]=min(arr,a,b);
    }
    for(int i=0;i<t;i++)
    printf("%d\n",frr[i]);
    return 0;

}
