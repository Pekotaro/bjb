#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_E_SIZE 4
#define LEN(array) (sizeof array / MAX_E_SIZE)

int main(void) {
    
    const char elements[][MAX_E_SIZE] = {"ﾎﾞ","ﾝ","ｼﾞｮ","ｳﾞｨ"},
         valid_result[][MAX_E_SIZE] = {"ｼﾞｮ","ﾝ","ﾎﾞ","ﾝ","ｼﾞｮ","ｳﾞｨ"};
    char result[LEN(valid_result)][MAX_E_SIZE];
    unsigned int random = 0, head = 0, i = 0;
    
    srand((unsigned)time(NULL));
    while(1){
        random = rand() % (LEN(elements));
        printf("%s", elements[random]);
        memcpy(result[head], elements[random], MAX_E_SIZE);
        head = ++i % LEN(result);
        if(memcmp(result[head], valid_result[0], (LEN(result) - head) * MAX_E_SIZE ) == 0
           &&  memcmp(result[0], valid_result[LEN(result) - head], head * MAX_E_SIZE ) == 0) break;
    }
    printf("\r\n%d Bon Jovis\r\n", i);
    printf("＿人人人人人人人人人人人人人人＿\r\n");
    printf("＞　You Give Love a Bad Name　＜\r\n");
    printf("￣Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^￣\r\n");
    return 0;
}
