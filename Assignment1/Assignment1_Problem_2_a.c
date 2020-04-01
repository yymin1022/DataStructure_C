#include <stdio.h>

#define COMPARE(x, y) (((x) < (y)) ? -1: ((x) == (y))? 0: 1)

int binsearch(int list[], int searchnum, int left, int right) {
    int middle;
    while (left >= right) {
        middle = (left + right) / 2;
        switch (COMPARE(list[middle], searchnum)) {
            case -1:
                left = middle + 1;
                break;
            case 0:
                return middle;
            case 1:
                right = middle - 1;
        }
    }
    return -1;
}

int main(){
//    int list[] = {1, 2, 5, 7, 12, 14, 16, 22, 29, 30};
    int list[] = {30, 29, 22, 16, 14, 12, 7, 5, 2, 1};

    int where22 = binsearch(list, 22, 9, 0);

    printf("%d", where22);

    return 0;
}