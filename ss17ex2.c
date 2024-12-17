#include <stdio.h>

char *nhapChuoi(char*str);
int inChuoi(char*str);
int demChuCai(char*str);
int demChuSo(char*str);
int demKyTuDacBiet(char*str);

int main(){
    char str[1000]; 
    char *p=str;  
    int choice;     
    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&choice);
        getchar(); 
        switch (choice) {
            case 1:
                nhapChuoi(p);
                break;
            case 2:
                inChuoi(p);
                break;
            case 3:
                printf("So luong chu cai trong chuoi la: %d\n",demChuCai(p));
                break;
            case 4:
                printf("So luong chu so trong chuoi la: %d\n",demChuSo(p));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi la: %d\n",demKyTuDacBiet(p));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le,vui long thu lai!\n");
        }
    } while (choice!= 6);
    return 0;
}
char *nhapChuoi(char*str){
    printf("Nhap vao chuoi: ");
    fgets(str,1000,stdin); 
    str[strcspn(str,"\n")] ='\0'; 
    return str;
}
int inChuoi(char*str){
    if (strlen(str)==0){
        printf("Chuoi rong!\n");
    }else{
        printf("Chuoi vua nhap la: %s\n",str);
    }
}
int demChuCai(char*str){
    int count=0;
    while (*str!='\0'){
        if ((*str>='A'&&*str<='Z')||(*str>='a'&&*str<='z')){
            count++;
        }
        str++;
    }
    return count;
}
int demChuSo(char*str){
    int count = 0;
    while (*str!='\0'){
        if (*str>='0' &&*str<='9'){
            count++;
        }
        str++;
    }
    return count;
}
int demKyTuDacBiet(char*str){
    int count=0;
    while (*str!='\0'){
        if (!((*str>='A'&&*str<='Z')|| 
              (*str>='a'&&*str<='z')|| 
              (*str>='0'&&*str<='9')|| 
              *str ==' ')){
            count++;
        }
        str++;
    }
    return count;
}

