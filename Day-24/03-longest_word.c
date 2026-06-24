#include<stdio.h>
#include<string.h>
int main(){
char str[100],longest[50];
int len=0,maxLen=0,j=0;
printf("Enter a sentence: ");
fgets(str,sizeof(str),stdin);
char word[50];
for(int i=0; ;i++){
if(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n'){
word[j++]=str[i];
len++;
}else{
word[j]='\0';
if(len>maxLen){
maxLen=len;
strcpy(longest,word);
}
len=0;
j=0;
}
if(str[i]=='\0')
break;
}
printf("Longest word: %s\n",longest);
return 0;
}