#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void countCharacter(char* str, char x){
	int count = 0;
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if(str[i]==x){
			count++;
		}
	}
	printf("Co %d lan xuat hien ki tu '%c' trong chuoi\n",count,x);
}
void replaceCharacter(char* str, char m, char n){
	int length=strlen(str);
	for(int i=0; i<length;i++){
		if(str[i]==m){
			str[i]=n;
		}
	}
	printf("Chuoi sau khi thay the ky tu '%c' thành '%c' la: %s\n",m,n,str);
}
void removeCharacter(char* str, char x) {
    int length = strlen(str);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != x) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa bo ky tu '%c' la: %s\n", x, str);
	
}
int main(){
	char character[100];
	char a,m,n;
	do{
		printf("********MENU**********\n");
		printf("1.Nhap vao chuoi ki tu\n");
		printf("2.In ra noi dung chuoi\n");
		printf("3.Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
		printf("4.Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat\n");
		printf("5.Nhap vao 1 ki tu, xoa bo cac ki tu do trong chuoi\n");
		printf("6.Thoat\n");
		int choice;
		printf("Moi ban chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so ki tu cho chuoi: ");
				scanf("%s",character);
				break;
			case 2:
				printf("Noi dung chuoi la: %s\n",character);
				break;
			case 3:
				printf("Nhap 1 ki tu: ");
				scanf("%c",&a);
				countCharacter(character,a);
				break;
			case 4:
				printf("Nhap 2 ki tu: ");
				scanf("%c%c",&m,&n);
				replaceCharacter(character,m,n);
				break;
			case 5:
				printf("Nhap vao 1 ky tu: ");
                scanf(" %c", &a);
                removeCharacter(character, a);
				break;
			case 6:
				printf("Ket thuc chuong trinh");
				exit(0);
			default:
				printf("Khong hop le");
		}
	}while(1==1);
				
}
