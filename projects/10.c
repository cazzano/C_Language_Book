#include <stdio.h>
int main(){
char s;
do{
    printf("Enter the current stat of phone(\'w\' for working \'d\' for dead:");
    scanf("%c",&s);
}while(s!='w'&&s!='d');
}
