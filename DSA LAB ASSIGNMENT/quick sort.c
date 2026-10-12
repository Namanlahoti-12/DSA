#include<stdio.h>
int quicksort(int arr[],int d,int u){
int down,up,key,temp;
down=d;
up=u;
key=arr[d];
while(down<up){
    while(arr[down]<=key&&down<u)
        down++;
    while(arr[up]>key && up>d)
        up--;
    if(down<up){
        temp=arr[down];
        arr[down]=arr[up];
        arr[up]=temp;
    }}
    arr[d]=arr[up];
    arr[up]=key;
    if(up-1-d>0)
        quicksort(arr,d,u-1);
    if(u-(up+1)>0)
        quicksort(arr,up+1,u);
}
int main(){
printf("enter array elements: ");\
int arr[15];
for(int i = 0;i<15;i++)
    scanf("%d",&arr[i]);
quicksort(arr,0,14);
for(int i=0;i<15;i++)
    printf("%d, ",arr[i]);
return 0;
}
