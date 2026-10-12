#include<stdio.h>
void selectionsort(int a[]){

for(int i=0;i<4;i++){
    int t=a[i];
    int min=i;
    for(int j=i+1;j<5;j++){
        if(a[j]<a[i])
             min=j;
        if(j==4){
            a[i]=a[min];
            a[min]=t;
        }
    }

}
}
int main(){
printf("enter array elements: ");\
int a[5];
for(int i = 0;i<5;i++)
    scanf("%d",&a[i]);
selectionsort(a);
for(int i=0;i<5;i++)
    printf("%d, ",a[i]);
return 0;
}
