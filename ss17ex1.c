#include<stdio.h>

int nhapMang(int arr[], int *n);
int hienThiMang(int arr[], int n);
int doDaiMang(int n);
int tinhTong(int arr[], int n);
int phanTuLonNhat(int arr[], int n);

int main() {
    int arr[100];
    int n = 0;         
    int choice;       
    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", doDaiMang(n));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la: %d\n", phanTuLonNhat(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai!\n");
        }
    } while (choice != 6);
    return 0;
}

int nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu trong mang (toi da 100): ");
    scanf("%d", n);
    if (*n > 100 || *n <= 0) {
        printf("So phan tu khong hop le! Vui long nhap lai.\n");
        *n = 0;
        return 0;
    }
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return 1;
}

int hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang chua co phan tu nao!\n");
        return 0;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 1;
}

int doDaiMang(int n) {
    return n;
}

int tinhTong(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int phanTuLonNhat(int arr[], int n) {
    if (n == 0) {
        printf("Mang chua co phan tu nao!\n");
        return -1;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

