#include <stdio.h>
#include <ctype.h>
struct stack{
char arr[20];
int top;
};
struct stack s;
int push(char a){
    if(s.top==19){
        printf("Stack is full!!");
    }
    else{
        s.top++;
        s.arr[s.top]=a;
    }}
char pop(){
    if(s.top==-1){
        printf("Stack is empty!!");
    }
    else{
        s.top--;
    }}
int priority(char a){
    if(a=='+' || a=='-'){
        return 1;}
    else if(a=='/' || a=='*'){
        return 2;}
    else if(a=='$'){
        return 3;}
    else if(a=='(')
        return 0;
    }
int main(){
    s.top=-1;
    printf("Enter Expression : ");
    char exp[20];
    scanf("%s",exp);
    int i=0;
    while(exp[i]!='\0'){
        if(isalnum(exp[i]))
            printf("%c",exp[i]);
        else if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')'){
            while(s.top!=-1 && s.arr[s.top]!='('){
                printf("%c",s.arr[s.top]);
                pop();}
            if(s.top!=-1)
                pop();}
        else{
            while(s.top!=-1 && priority(s.arr[s.top])>=priority(exp[i]) && exp[i]!='$'){
                printf("%c",s.arr[s.top]);
                pop();
            }
            push(exp[i]);}
            i++;}
    while(s.top!=-1){
        printf("%c",s.arr[s.top]);
        s.top--;}
    return 0;
        }

