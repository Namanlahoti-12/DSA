#include <stdio.h>
#include<ctype.h>
#include<math.h>
struct stack{
int top;
int arr[20];
};
struct stack s;
void push(int a){
    if(s.top==19)
        printf("STACK IS FULL!!");
    else
        s.arr[++s.top]=a;
    }
void pop(){
    if(s.top==-1)
        printf("STACK IS EMPTY!!");
    else
        s.top--;
}
int main(){
    s.top=-1;
    printf("Enter Expression : ");
    char exp[20];
    scanf("%s",exp);
    int i=0;
    while(exp[i]!='\0'){
        if(isdigit(exp[i]))
            push(exp[i]-'0');
        else if(exp[i]=='+' && s.top>=1){
            int x=s.arr[s.top-1] + s.arr[s.top];
            s.top=s.top-2;
            push(x);}
        else if(exp[i]=='-' && s.top>=1){
            int x=s.arr[s.top-1] - s.arr[s.top];
            s.top=s.top-2;
            push(x);}
        else if(exp[i]=='*' && s.top>=1){
            int x=s.arr[s.top-1] * s.arr[s.top];
            s.top=s.top-2;
            push(x);}
        else if(exp[i]=='/' && s.top>=1){
            int x=s.arr[s.top-1] / s.arr[s.top];
            s.top=s.top-2;
            push(x);}
        else if((exp[i]=='$' || exp[i]=='^') && s.top>=1){
            int x=pow(s.arr[s.top-1],s.arr[s.top]);
            s.top=s.top-2;
            push(x);}
        else
            printf("INVALID EXPRESSION!!");
    i++;
    }
    printf("%d",s.arr[s.top]);
    return 0;
}
