#include <stdio.h>
#include <string.h>
struct stack{
char arr[20];
int top;
};
struct stack s;
int isempty(){
    if(s.top==-1){
        return 1;}
    else
        return 0;
    }
int isfull(){
    if(s.top==9){
        return 1;}
    else
        return 0;
    }


int push(char a){
    if(isfull()==1){
        printf("Stack is full!!");
    }
    else{
        s.top++;
        s.arr[s.top]=a;
    }
    }
int pop(){
    if(isempty()==1){
        printf("Stack is empty!!");
    }
    else{
        s.top--;
    }}
int length(char str[]){
    int i=0,size=0;
    while(str[i]!='\0'){
        i++;
        size++;
    }
    return size;
}
int main(){
    s.top=-1;
    int flag;
    char str[20];
    printf("Enter String: ");
    scanf("%s",str);
    int x=length(str);
    for(int i=0;i<x;i++){
        if(str[i]=='(' ||str[i]=='{'||str[i]=='['){
            push(str[i]);}
        else{
            char z=str[i];
                if((z==')') && (s.arr[s.top]=='('))
                    flag=1;
                else if((z==']') && (s.arr[s.top]=='['))
                    flag=1;
                else if((z=='}') && (s.arr[s.top]=='{')){
                    flag=1;}
                else
                    flag=0;
                pop();
                }}
        if(flag==1)
            printf("Balanced");
        else
            printf("Unbalanced");

return 0;}
