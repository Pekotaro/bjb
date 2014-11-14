#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void) {
    char bjb_element[4][8] = {"ﾎﾞ","ﾝ","ｼﾞｮ","ｳﾞｨ"},
         bjb_valid[6][8] = {"ｼﾞｮ","ﾝ","ﾎﾞ","ﾝ","ｼﾞｮ","ｳﾞｨ"},
         ret[6][8] = {"","","","","",""};
    int  random = 0, head = 0, i = 0;
    
    srand((unsigned)time(NULL));
    while(1){
        random = rand() % 4;
        printf("%s", bjb_element[random]);
        memcpy(ret[(head + 5) % 6],bjb_element[random], 8);
        if(memcmp(ret[head], bjb_valid[0], (6 - head) * 8 ) == 0
            && ( head == 0 || memcmp(ret[0], bjb_valid[6 - head], head * 8 ) == 0)) break;
        head = ++i % 6;
    }
    printf("\r\n%d Bon Jovis\r\n", i);
    printf("＿人人人人人人人人人人人人人人＿\r\n");
    printf("＞　You Give Love a Bad Name　＜\r\n");
    printf("￣Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^￣\r\n");
    return 0;
}