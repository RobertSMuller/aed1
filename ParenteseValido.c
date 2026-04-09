/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

*/

#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
    char *s="(){}[]"; 
    int tamanho=strlen(s);
    int next,result;

    for(int i=0;s[i]!='\0';i++){
       next=i+1;
        if(s[i]=='['&&s[next]==']'||s[i]=='('&&s[next]==')'||s[i]=='{'&&s[next]=='}'){
            result=0;
        }else{
            if(tamanho%2==0 && result==0 ){
                if(s[0]=='['&&s[tamanho]==']'||s[0]=='('&&s[tamanho]==')'||s[0]=='{'&&s[tamanho]=='}'){
                result=0;
                }
                    
            }else{
               result=1; 
        }
    }
}
if(result==0)
printf("verdadeiro");
else
printf("valse");
return 0;
}