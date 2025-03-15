#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='A'||a=='a'|| a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
        printf("Vowel");
    }
    else if(a >='0' &&a <='9'){
        printf("Digit");
    }
    else if(a=='!'||a=='@'||a=='#'||a=='$'||a=='%'||a=='^'||a=='&'||a=='*'){
        printf("Special Character");
    }
    else if((a>='A'&&a>'Z')||(a<='a'&&a<='z')){
        printf("Consonant");
    }
    return 0;
}