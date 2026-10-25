#include<stdio.h>
int bubble_sort(int a[]){
    for(int j = 0;j<10;j++){
        for(int i=0;i<9;i++){
          if(a[i]>a[i+1]){
            int t=a[i];
               a[i]=a[i+1];
               a[i+1]=t;
        }}}
    for(int i=0;i<10;i++){
        printf("%d \t",a[i]);
    }}
int main(){
printf("25BIT051\n");
printf("Enter 10 Array elements: \n");
int a[10];
for(int i = 0;i<10;i++)
    scanf("%d",&a[i]);
bubble_sort(a);
return 0;
}

