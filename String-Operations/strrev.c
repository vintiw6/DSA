void Strrev(char str[]){
    int i , j;
    char temp;
    j = Strlen(str)-1;
    for(i=0;i<j;i++,j--){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    }
}