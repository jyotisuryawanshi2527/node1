/*find all elements in array which have atleast two greater elements*/
#include<stdio.h>
void findElement(int arr[],int n)
{
  for(int i=0;i<=n;i++)
   {
    int count=0;
    for(int j=0;j<=n;j++)
     {
      if(arr[j]>arr[i])
       count++;
      }
      if(count>=2)
      printf("%d\t",arr[i]);
      
     }
  }
int main()
 {
   int arr[]={2,8,7,1,5};
    int n=sizeof(arr[0]);
    findElement(arr,n);
    return 0;
  }
