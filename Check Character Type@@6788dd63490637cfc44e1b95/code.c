#include<stdio.h>
int main(){
    char a;
    int b;
    scanf("%c",&a);
    scanf("%d",&b);
    if(a=='A'||a=='a'|| a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
        printf("Vowel");
    }
    else if(a=='!'||a=='@'||a=='#'||a=='$'||a=='%'||a=='^'||a=='&'||a=='*'){
        printf("Special Character");
    }
    else if((a>='A'&&a>'a')||(a<='Z'&&a<='z')){
        printf("Consonant");
    }
    else if(b>=0&&b<=9){
        printf("Digit");
    }
    return 0;
}