#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100]; 

    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        }
    }

    // 변환된 문자열 출력
    printf("변환된 문자열: %s\n", str);

    return 0;
}
