#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("문자열 입력: ");
    
    // 하나씩 입력받아서 처리
    while ((ch = getchar()) != '\n') {  // Enter 키를 입력할 때까지 반복
        if (ch >= 'A' && ch <= 'Z') {
            putchar(ch + ('a' - 'A'));  // 대문자 -> 소문자
        } else if (ch >= 'a' && ch <= 'z') {
            putchar(ch - ('a' - 'A'));  // 소문자 -> 대문자
        } else {
            // 알파벳 외의 문자가 들어오면 오류 메시지 출력
            printf("\n잘못된 입력입니다.\n");
            return 1;
        }
    }

    printf("\n");  // 줄 바꿈 출력

    return 0;
}
