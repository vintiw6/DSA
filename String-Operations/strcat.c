void Strcat(char str1[],char str2[]){
int i,j;
i = strlen(str1);
for(j=0;str2[j]!='\0';i++,j++){
    str1[i]=str2[j];
}
str1[i]='\0';
}