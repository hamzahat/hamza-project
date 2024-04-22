#include <stdio.h>
#include <cs50.h>

char youser_chose();
void upercase(string s);
void lowercase(string s);
char finish_programe();

int main(void) {
    string s = get_string("text: ");
    char chose = youser_chose();

    if (chose == 'u'|| chose == 'U') {
        upercase(s);
    } else if (chose == 'l'|| chose == 'L') {
        lowercase(s);
    }
    finish_programe();
    return 0;
}

char youser_chose(){
    char chose;
    do{
        chose = get_char("uper (U) or lower(L)?");
    }while(!(chose == 'u' || chose == 'U' || chose == 'l' || chose == 'L'));
    return chose;
}

void upercase (string s){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",s[i] - 32);
        } else {
            printf("%c",s[i]);
        }
        i++;
    }
    printf("\n");
}

void lowercase(string s) {
    int i = 0;
    while( s[i] != '\0'){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            printf("%c",s[i]+32);
        } else {
            printf ("%c",s[i]);
        }
            i++;
        }
        printf("\n");
}

char finish_programe(){
    char finish ;
    do{
        finish = get_char("Do you want to process another text? (Y/N) ");
    }while(!(finish == 'Y' || finish == 'y' || finish == 'n' || finish == 'N'));

    if (finish == 'y'|| finish == 'Y'){
        main();
    }
    else if (finish == 'n' || finish == 'N'){
        return 0;
    }
    return 0;
}

