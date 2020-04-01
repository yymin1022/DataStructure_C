#include <stdio.h>

#define COMPARE(x, y) (((x) < (y)) ? -1: ((x) == (y))? 0: 1)

int binsearch(int *list, int searchnum, int left, int right, int length) {
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;
        switch (COMPARE(*(list + middle), searchnum)) {
            case -1:
                left = middle + 1;
                break;
            case 0:
                return middle;
            case 1:
                right = middle - 1;
        }
    }

    for(int i = 0; i < length; i++){
        if(searchnum < *(list + i)){
            int temp = *(list + i);
            *(list + i) = searchnum;
            for(int j = i + 1; j < length; j++){
                int temp2;
                if(j == i + 1){
                    temp2 = *(list + j);
                    *(list + j) = temp;
                }else{
                    int temp3 = *(list + j);
                    *(list + j) = temp2;
                    temp2 = temp3;
                }
            }
            break;
        }
    }

    return -1;
}

int main(){
    int list[7] = {1, 4, 9, 15, 30, 0, 0};
    int listSize = sizeof(list) / sizeof(int);

    printf("%d\n", binsearch(list, 30, 0, 4, listSize));
    printf("%d\n", binsearch(list, 10, 0, 4, listSize));
    printf("%d\n", binsearch(list, 10, 0, 5, listSize));
    printf("%d\n", binsearch(list, 30, 0, 5, listSize));

    return 0;
}