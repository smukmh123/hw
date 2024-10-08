#include <stdio.h>


int main() {
    int a, b, c;
    float shin_dis, kb_dis;

    printf("*** 신한/국민 K-패스 체크카드 시뮬레이션 프로그램 ***\n");


    do {
        printf("월평균 대중교통 요금: ");
        scanf("%d", &a);
        if (a < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
        }
    } 

    while (a < 0);

    do {
        printf("월평균 생활서비스 결제액: ");
        scanf("%d", &b);
        if (b < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
        }
    } 
    while (b < 0);


    do {
        printf("월평균 기타 결제액: ");
        scanf("%d", &c);
        if (c < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
        }
    } 
    while (c < 0);


    shin_dis = (a * 0.1) + (b * 0.02);

    kb_dis = (a * 0.1) + (b * 0.02);





    printf("신한 K-패스 체크카드의 예상 할인 금액은 %.2f원이며, 할인률은 %.2f%%입니다.\n", shin_dis, (shin_dis / (a + b + c)) * 100);
    printf("국민 K-패스 체크카드의 예상 할인 금액은 %.2f원이며, 할인률은 %.2f%%입니다.\n", kb_dis, (kb_dis / (a + b + c)) * 100);

    if (shin_dis > kb_dis) {
        printf("따라서 신한 K-패스 체크카드가 더 나은 선택입니다.\n");
    } 
    
    else if (shin_dis < kb_dis) {
        printf("따라서 국민 K-패스 체크카드가 더 나은 선택입니다.\n");
    } 
    
    else {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.\n");
    }

    return 0;
}
