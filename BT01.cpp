#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	char string2[100];
	int choice;
	int count = 0;
	do
	{
		printf("\n**********MENU**********");	
		printf("\n1. Nh?p vào chu?i ký t?");	
		printf("\n2. In ra d? dài chu?i và n?i dung chu?i v?a nh?p");	
		printf("\n3. In ra chu?i d?o ngu?c");	
		printf("\n4. In ra s? lu?ng ch? cái trong chu?i");	
		printf("\n5. In ra s? lu?ng ch? s? trong chu?i");
		printf("\n6. In ra s? lu?ng ký t? d?c bi?t trong chu?i");
		printf("\n7. Thoat");	
		printf("\nNhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				printf("\nNhap vao chuoi ki tu: ");
				scanf("%s",&string);
				break;
			case 2:
				printf("\n%s",string);
				printf("\nDo dai cua chuoi la: %d", strlen(string));
				break;
			case 3: 
			for(int i= strlen(string); i>=0; i--){
				printf("%c",string[i]);
			}
			break;
			case 4: 
			for(int i=0; i<=strlen(string)-1; i++){
				if(string[i]>='A'&&string[i]<='Z' || string[i]>='a' && string[i]<='z'){
					printf("%c",string[i]);
					count+=1;
				}
			}
			printf("\nso luong cac chu cai trong chuoi la: %d",count);
			break;
			case 5:
			count = 0;
			for(int i=0; i<=strlen(string)-1; i++){
				if(string[i]>='1'&&string[i]<='9'){
					printf("%c",string[i]);
					count+=1;
				}
			}
			printf("\nso luong cac chu so trong chuoi la: %d",count);
			break;	
			case 6:
			count = 0;
			for(int i=0; i<=strlen(string)-1; i++){
				if(string[i]=='!'||string[i]=='@'||string[i]=='#'||string[i]=='$'||string[i]=='%'||string[i]=='^'||string[i]=='&'||string[i]=='*'||string[i]=='('){
					printf("%c",string[i]);
					count+=1;
				}
			}
			printf("\nso luong cac chu so trong chuoi la: %d",count);
			break;
			case 7:
				return 0;
				break;
			default:
				printf("Nhap lua chon cua ban: ");			
		}
	}while(1==1);	
}
