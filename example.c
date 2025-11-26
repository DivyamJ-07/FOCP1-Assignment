#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    int freq[101] = {0};

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    for(int x = min; x <= max; x++){
        if(freq[x] == 0){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
