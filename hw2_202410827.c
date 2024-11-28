#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arr[5][5];
    int arr2[5][5];
    int score = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = '.';
            arr2[i][j] = '.';
        }
    }

    srand(time(NULL));

    int count = 0;
    while (count < 5) {
        int row = rand() % 5;
        int col = rand() % 5;

        if (arr[row][col] != 'f') {
            arr[row][col] = 'f';
            count++;
        }
    }

    int count2 = 5;
    int a, b = 0;
    int pickedCount = 0;

    while (count2 > 0) {
        printf("\n현재 선택된 컵: %d개\n", pickedCount);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%c ", arr2[i][j]);
            }
            printf("\n");
        }

        printf("\n선택할 컵 (행 열): ");
        scanf("%d %d", &a, &b);

        if (a >= 0 && a < 5 && b >= 0 && b < 5) {
            if (arr2[a][b] == 'C') {
                printf("이미 선택한 컵입니다. 다시 선택하세요.\n");
                continue;
            }

            if (arr[a][b] == '.') {
                arr[a][b] = 'C';
                arr2[a][b] = 'C';
                count2--;
                pickedCount++;
                score++;
            } else if (arr[a][b] == 'f') {
                printf("패배! Kkanari 컵을 선택했습니다.\n");
                arr[a][b] = '#';
                arr2[a][b] = '#';
                break;
            }

            if (count2 == 0 && pickedCount == 5) {
                printf("승리! 모든 커피 컵을 성공적으로 선택했습니다.\n");
                break;
            }
        } else {
            printf("잘못된 입력입니다. 0에서 4 사이의 값을 입력하세요.\n");
        }
    }

    printf("\n게임 종료! 최종 상태:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 'f') {
                printf("f ");
            } else {
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }

    printf("최종 점수: %d\n", score);

    return 0;
}
