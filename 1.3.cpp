#include <stlmain>
const char* get_below20(int n){ if(n==0){return"zero";}
    if(n==1){return"one";}
    if(n==2){return"two";}
    if(n==3){return"three";}
    if(n==4){return"four";}
    if(n==5){return"five";}
    if(n==6){return"six";}
    if(n==7){return"seven";}
    if(n==8){return"eight";}
    if(n==9){return"nine";}
    if(n==10){return"ten";}
    if(n==11){return"eleven";}
    if(n==12){return"twelve";}
    if(n==13){return"thirteen";}
    if(n==14){return"fourteen";}
    if(n==15){return"fifteen";}
    if(n==16){return"sixteen";}
    if(n==17){return"seventeen";}
    if(n==18){return"eighteen";}
    if(n==19){return"nineteen";}
}
char* get_below_1k(int k){
    int n=k%100;
    char* below_100;
    if(k<100){
    if(n<20){
        below_100=(char*)get_below20(n);
    }
    else {const char*temp1;
        int t1=n/10;int t2=n%10;char*temp;
        if(t2!=0){
         temp= (char*)get_below20(t2);}
        else{temp=(char*)"";}
        if(t1==2){temp1="twenty";}
        if(t1==3){temp1="thirty";}
        if(t1==4){temp1="forty";}
        if(t1==5){temp1="fifty";}
        if(t1==6){temp1="sixty";}
        if(t1==7){temp1="seventy";}
        if(t1==8){temp1="eighty";}
        if(t1==9){temp1="ninety";}
        below_100=(char*)malloc(strlen(temp1)+strlen(temp)+2);
        strcpy(below_100,temp1);
        if(t2!=0){strcat(below_100,"-");}
        strcat(below_100,temp);
    }
   return(below_100);}
    else {
        int t1 = k / 100;
        int t2 = k % 100;
        char *t100;
        if (t1 == 1) { t100 = (char *) "one hundred"; }
        if (t1 == 2) { t100 = (char *) "two hundred"; }
        if (t1 == 3) { t100 = (char *) "three hundred"; }
        if (t1 == 4) { t100 = (char *) "four hundred"; }
        if (t1 == 5) { t100 = (char *) "five hundred"; }
        if (t1 == 6) { t100 = (char *) "six hundred"; }
        if (t1 == 7) { t100 = (char *) "seven hundred"; }
        if (t1 == 8) { t100 = (char *) "eight hundred"; }
        if (t1 == 9) { t100 = (char *) "nine hundred"; }
        if (t2 == 0) { return (t100); }
        else {
            char *temp = get_below_1k(t2);
            char *tand = (char *) " and ";
            char *dest = (char *) malloc(strlen(t100) + strlen(temp) + strlen(tand) + 1);
            strcpy(dest, t100);
            strcat(dest, tand);
            strcat(dest, temp);
            return (dest);
        }
    }
}
int main(){
    int n;scanf("%d",&n);
    if(n<1000){
        char* temp= get_below_1k(n);
        printf("%s",temp);
        free(temp);
        return(0);
    }
    else {
        int t1 = n / 1000;
        int t2 = n % 1000;
        char *temp2;
        char *temp = get_below_1k(t1);
        if (t2 != 0) {
            temp2 = get_below_1k(t2);
        } else { temp2 = (char *) ""; }
        char *thousand = (char *) " thousand";
        char *blank1 = (char *) " ";
        char *blank2 = (char *) " and ";
        char *dest = (char *) malloc(
                strlen(temp) + strlen(temp2) + strlen(thousand) + strlen(blank1) + strlen(blank2) + 1);
        strcpy(dest, temp);
        strcat(dest, thousand);
        if (t2 != 0) {
            if (t2 >= 100) {
                strcat(dest, blank1);
            } else { strcat(dest, blank2); }}
            strcat(dest, temp2);
            printf("%s", dest);
            free(dest);
            return (0);
    }
}