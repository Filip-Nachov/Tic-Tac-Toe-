#include <stdio.h>

int main() {
    // creating a board
   int board[3][3] = {
       {1, 1, 1},
       {1, 1, 1},
       {1, 1, 1}
    };

   //while (10 > 1) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d|", board[i][j]);
            }
            printf("\n------\n");
        }
  // }    
}
