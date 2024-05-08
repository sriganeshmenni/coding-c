#include <stdio.h> 
#include <string.h>
int get_priority(char ch){
    if(ch == '/'|| ch == '*') return 3;
     else if(ch == '+'|| ch == '-') return 2;
     else return 1;
}
void convert_infix_to_postfix(char *infix){
    char postfix[101];
    char st[101];
    int top = -1,i,j=0;
    for(int i=0;i< strlen(infix);i++){
        int priority = get_priority(infix[i]);
        if(priority==1){//operand
            postfix[j]=infix[i];
            j++;
        }
        else{
            while(top != -1 && priority <= get_priority(st[top])){
                postfix[j++] = st[top--];//pop operation
            }
            st[++top] = infix[i];
        }
       
    }
    while(top != -1 ) postfix[j++] = st[top--];
    postfix[j]= '\0';
        printf("%s",postfix);
}
int main() {
    char infix[101];
    scanf("%s",infix);
    convert_infix_to_postfix(infix);
    return 0;
}
