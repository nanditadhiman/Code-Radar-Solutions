#include<stdio.h>
int main(){
    char a;
    int b;
    scanf("%c %d",&a,&b);
    if(a=='A'||a=='a'|| a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    if(b=='!'||b=='@'||b=='#'||b=='%'||b=='&'|b=='^'||b=='*'){
        printf("Special Character");
    }
    else{
        printf("Digit");
    }
    return 0;
}