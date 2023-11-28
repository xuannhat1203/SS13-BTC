#include<stdio.h>
#include<string.h>

int main() {
    char string[100];
    int choice;
    char find;
    int count = 0;
    char newValue;

    do {
        printf("\n**********MENU**********");
        printf("\n1. Nhap vao chuoi ki tu");
        printf("\n2. In ra noi dung chuoi");
        printf("\n3. Nhap vao 1 ki tu, dem so lan xuat hien ki tu trong chuoi");
        printf("\n4. Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat");
        printf("\n5. Nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi");
        printf("\n6. Thoat");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao chuoi ki tu: ");
                scanf("%s", string);
                break;
            case 2:
                printf("%s", string);
                break;
            case 3:
                printf("\nNhap phan tu muon tim kiem: ");
                scanf(" %c", &find);
                for (int i = 0; i < strlen(string); i++) {
                    if (string[i] == find) {
                        count += 1;
                    }
                }
                printf("So lan xuat hien cua ki tu do la: %d", count);
                break;
            case 4:
                printf("Nhap phan tu muon thay the: ");
                scanf(" %c", &find);
                printf("Nhap ki tu muon thay the: ");
                scanf(" %c", &newValue);
                for (int i = 0; i < strlen(string); i++) {
                    if (string[i] == find) {
                        string[i] = newValue;
                    }
                }
                printf("%s", string);
                break;
            case 5:
                printf("Nhap phan tu muon xoa: ");
                scanf(" %c", &find);
                int j = 0;
                for (int i = 0; i < strlen(string); i++) {
                    if (string[i] != find) {
                        string[j] = string[i];
                        j++;
                    }
                }
                string[j] = '\0';
                printf("%s", string);
                break;
           	case 6:
           		return 0;
           		break;
           	default:
           		printf("Nhap tu 1 den 6");
        }

    } while (1==1);

    return 0;
}
