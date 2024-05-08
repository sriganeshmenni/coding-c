#include<stdio.h>
#include<string.h>
#include<ctype.h>
int calculate(int x,int y, char symbol){
if (symbol =='+') return x+y;
else if (symbol == '-') return x-y;
else if (symbol == '*') return x*y;
else if (symbol == '/') return x/y;
}
void evaluateRPN(char *postfix){
int st[101];
int top = -1,i;
for(i=0; i<strlen(postfix); i++){
//postfix[i] --> current can be a digit / operator
if(isdigit(postfix[i])) {
// '9' = 48
st[++top]= postfix[i] = '0'; // converting character to integer
} else {
int op2 = st[top--];
int op1 = st[top--];
int res = calculate(op1,op2,postfix[i]);
st[++top] = res;
}
}
printf("Result is : %d",st[top]);
}
int main(){
char postfix[101];
printf("Enter a postfix expressions (with digits and +, -, *, /): ");
scanf("%s",postfix);
evaluateRPN(postfix);
return 0;
}