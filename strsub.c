void Strsub(char str[],int start,int length , char result[]){
    int i , j ;
    for (i=start,j=0;j<length;i++,j++){
        result[j] = str[i];
      }
        result[j] = '\0';
}