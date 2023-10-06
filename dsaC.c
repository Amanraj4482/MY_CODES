// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int arr[5] = {1, 1, 1, 2, 3}, freq[5] = {0}, count, i, j;
// 	for (i = 0; i < 5; i++) {
// 		if (arr[i] == -1) {
// 			continue;
// 		}
// 		count = 1;
// 		for (j = i + 1; j < 5; j++) {
// 			if (arr[i] == arr[j]) {
// 				count++;
// 				arr[j] = -1;
// 			}
// 		}
// 		freq[i] = count;
// 		printf("the freq of the no %d is : %d\n", arr[i], freq[i]);
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// int main() {
// 	int n[3][3], i, j;
// 	for (i = 0; i < 3; i++) {
// 		for (j = 0; j < 3; j++) {
// 			scanf("%d", &n[i][j]);
// 		}
// 	}
// 	for (i = 0; i < 3; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			printf("%d ", n[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
