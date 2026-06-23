#include<stdio.h>
#include<string.h>
int main(){
char str1[50],str2[50];
int i,j,found;
printf("Enter first string: ");
gets(str1);
printf("Enter second string: ");
gets(str2);
if(strlen(str1)!=strlen(str2)){
printf("Strings are not anagrams.");
return 0;
}
for(i=0;str1[i]!='\0';i++){
found=0;
for(j=0;str2[j]!='\0';j++){
if(str1[i]==str2[j]){
str2[j]='*';
found=1;
break;
}
}
if(found==0){
printf("Strings are not anagrams.");
return 0;
}
}
printf("Strings are anagrams.");
return 0;
}