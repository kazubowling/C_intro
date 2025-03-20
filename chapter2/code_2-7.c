#include <stdio.h>

typedef char String[1024];  /* 最大1000文字程度まで入る文字列型を利用可能にするおまじない */

int main(void)
{
    String monsterName = "ドラゴン";
    printf("敵は%s\n", monsterName); /* 文字列の場合は「%d」ではなく、「%s」を使う */
    return 0;
}