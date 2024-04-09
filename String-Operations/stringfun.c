#include<stdio.h>

int Strlen(char str[]){
    int length = 0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

void Strcat(char str1[],char str2[]){
int i,j;
i = Strlen(str1);
for(j=0;str2[j]!='\0';i++,j++){
    str1[i]=str2[j];
}
str1[i]='\0';
}

void Strcpy(char source[], char dest[]) { 
int i = 0; 
while (source[i] != '\0') { 
dest[i] = source[i]; 
i++; 
} 
dest[i] = '\0'; 
} 

int Strpal(char str[]) { 
int i, j; 
i = 0; 
j = Strlen(str) - 1; 
while (i < j) { 
if (str[i] != str[j]) { 
return 0; // Not a palindrome 
} 
i++; 
j--; 
} 
return 1; // Palindrome 
}

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

int Strcmp(char str1[],char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0' && str1[i]==str2[i]){
        i++;
    }
    return (str1[i]-str2[i]);
}

void Strsub(char str[],int start,int length , char result[]){
    int i , j ;
    for (i=start,j=0;j<length;i++,j++){
        result[j] = str[i];
      }
        result[j] = '\0';
}

#include <stdio.h>
#include <string.h>  // For string functions like strcpy, strlen

int main() {
    char str1[100], str2[100], result[100];
    int choice, length, start;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("Menu:\n");
    printf("1. Length\n");
    printf("2. Concatenate\n");
    printf("3. Copy\n");
    printf("4. Palindrome Check\n");
    printf("5. Reverse\n");
    printf("6. Compare\n");
    printf("7. Extract Substring\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            length = Strlen(str1);
            printf("Length of string 1: %d\n", length);
            length = Strlen(str2);
            printf("Length of string 2: %d\n", length);
            break;
        case 2:
            Strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 3:
            Strcpy(result, str1);
            printf("Copied string: %s\n", result);
            break;
        case 4:
            if (Strpal(str1)) {
                printf("String 1 is a palindrome.\n");
            } else {
                printf("String 1 is not a palindrome.\n");
            }
            if (Strpal(str2)) {
                printf("String 2 is a palindrome.\n");
            } else {
                printf("String 2 is not a palindrome.\n");
            }
            break;
        case 5:
            Strrev(str1);
            printf("Reversed string 1: %s\n", str1);
            Strrev(str2);
            printf("Reversed string 2: %s\n", str2);
            break;
        case 6:
            if (Strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        case 7:
            printf("Start index: ");
            scanf("%d", &start);
            printf("Substring length: ");
            scanf("%d", &length);
            Strsub(str1, start, length, result);
            printf("Substring: %s\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
