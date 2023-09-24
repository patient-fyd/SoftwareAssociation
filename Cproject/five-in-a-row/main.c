#include <stdio.h>
#include <stdlib.h>
#define MAX_ROW 15
#define MAX_COL 15
#define WHITE -1
#define BLACK 1
#define BLANK 0

void draw_chessboardn(int row, int col, int chessboard[][MAX_COL]);
void draw_chessman(int type, char *str);

void person_person(void);
int is_full(int chessboard[][MAX_COL], int row, int col);
int is_win(int chessboard[][MAX_COL], int row, int col);

int main () {
    draw_chessboardn(3,4,0);

    return 0;
}
//绘制棋盘
void draw_chessboardn(int row, int col, int chessboard[][MAX_COL]) {
    for (int i = 0; i < row ; i++) {
        if (i == 0) {
            for (int j = 0; j < col; j++) {
                if (j == 0)
                    draw_chessman(chessboard[i][j], "┌ ");
                else if (j == 14)
                    draw_chessman(chessboard[i][j], "┐");
                else
                    draw_chessman(chessboard[i][j], "┬ ");
            }
            printf("\n");
        } else if (i == 14) {
            for (int j = 0; j < col; j++) {
                if (j == 0)
                    draw_chessman(chessboard[i][j], "└ ");
                else if (j == 14)
                    draw_chessman(chessboard[i][j], "┘ ");
                else
                    draw_chessman(chessboard[i][j], "┴ ");
            }
            printf("\n");
        } else {
            for (int j = 0; j < col; j++) {
                if (j == 0)
                    draw_chessman(chessboard[i][j], "├ ");
                else if (j == 14)
                    draw_chessman(chessboard[i][j], "┤");
                else
                    draw_chessman(chessboard[i][j], "┼ ");
            }
            printf("\n");
        }
    }
}
//绘制棋子
void draw_chessman(int type, char *str) {
    if (type == WHITE)
        printf("●");
    if (type == BLACK)
        printf("○");
    if (type == BLANK)
        printf("%s", str);

}

void person_person(void) {
    int chessboard[MAX_ROW][MAX_COL] = {BLANK};
    int i, j;
    char key;
    draw_chessboardn(MAX_ROW, MAX_COL, chessboard);
    for (int step = 1; step <= MAX_ROW * MAX_COL; step++) {    //黑子先行，然后双方轮流下棋
        if (step % 2 == 1) {                                   //当前步数为单数，黑棋落子。
            printf("请黑棋落子:");
            while (1) {
                scanf("%d %d", &i, &j);
                if (chessboard[i][j] != BLANK) {
                    printf("该位置已有棋子，请重新输入\n");        //棋子只能落在空白处
                    continue;
                }
                if (i >= MAX_ROW || j >= MAX_COL || i < 0 || j < 0) {
                    printf("输入超出棋盘范围，请重新输入\n");      //棋子坐标不可超出棋盘
                    continue;
                }
                break;
            }
            chessboard[i][j] = BLACK;
            draw_chessboardn(MAX_ROW, MAX_COL, chessboard);
            if (is_win(chessboard, MAX_ROW, MAX_COL) == BLACK) {
                printf("黑棋胜");
                exit(0);
            }

        } else if (step % 2 == 0) {                            //当前步数为双数，则白棋落子
            printf("请白棋落子:");
            while (1) {
                scanf("%d %d", &i, &j);
                if (chessboard[i][j] != BLANK) {
                    printf("该位置已有棋子，请重新输入\n");        //棋子只能落在空白处
                    continue;
                }
                if (i >= MAX_ROW || j >= MAX_COL || i < 0 || j < 0) {
                    printf("输入超出棋盘范围，请重新输入\n");     //棋子坐标不可超出棋盘
                    continue;
                }
                break;
            }
            chessboard[i][j] = WHITE;
            draw_chessboardn(MAX_ROW, MAX_COL, chessboard);
            if (is_win(chessboard, MAX_ROW,  MAX_COL) == WHITE) {
                printf("白棋胜");
                exit(0);
            }

        }
    }
    if (is_full(chessboard, MAX_ROW, MAX_COL) == 1)
        printf("棋盘已满");
}
//判断棋盘是否已满
int is_full(int chessboard[][MAX_COL], int row, int col) {
    int ret = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (chessboard[i][j] == BLANK) {        //遍历数组，当有一个位置为空，则棋盘不满
                ret = 0;
                break;
            }
        }
    }
    return ret;
}
//判断胜负
int is_win(int chessboard[][MAX_COL], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (chessboard[i][j] == BLANK)
                continue;
            if (j < col - 4)
                if (chessboard[i][j] == chessboard[i][j + 1] && chessboard[i][j] == chessboard[i][j + 2]
                    && chessboard[i][j] == chessboard[i][j + 3] && chessboard[i][j] == chessboard[i][j + 4])
                    return chessboard[i][j];
            if (i < row - 4)
                if (chessboard[i][j] == chessboard[i + 1][j] && chessboard[i][j] == chessboard[i + 2][j]
                    && chessboard[i][j] == chessboard[i + 3][j] && chessboard[i][j] == chessboard[i + 4][j])
                    return chessboard[i][j];
            if (i < row - 4 && j < col - 4)
                if (chessboard[i][j] == chessboard[i + 1][j + 1] && chessboard[i][j] == chessboard[i + 2][j + 2]
                    && chessboard[i][j] == chessboard[i + 3][j + 3] && chessboard[i][j] == chessboard[i + 4][j + 4])
                    return chessboard[i][j];
            if (i < row - 4 && j > 4)
                if (chessboard[i][j] == chessboard[i + 1][j - 1] && chessboard[i][j] == chessboard[i + 2][j - 2]
                    && chessboard[i][j] == chessboard[i + 3][j - 3] && chessboard[i][j] == chessboard[i + 4][j - 4])
                    return chessboard[i][j];
        }
    }
    return BLANK;
}
