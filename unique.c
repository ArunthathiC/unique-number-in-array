#include<stdio.h>
void main(){
  int a[10],n,i,j,c=0;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter the array elements");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
      c=1;
    for(j=0;j<n;j++){
      if(a[i]==a[j]&&i!=j)
      c++;
    }
    if(c==1)
        printf("%d",a[i]);
    }
}  
