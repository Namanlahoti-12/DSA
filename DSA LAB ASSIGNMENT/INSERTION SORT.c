#include<stdio.h>
void InsertionSort(int a[]){
    int key,j;
    for(int i=1;i<10;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
printf("Enter Array elements:");
int a[10];
for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
InsertionSort(a);
for(int i=0;i<10;i++)
    printf("%d\t",a[i]);
return 0;
}
