#include<stdio.h>
#include<string.h>

void reverseString(char* str){
	int length=strlen(str);
	for(int i=0;i<length/2;i++){
		char temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
}
int countLetters(char* str){
	int count = 0;
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			count++;
		}
	}
	return count;
}
int countDigits(char* str){
	int count = 0;
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if(str[i]>='0' && str[i]<='9'){
			count++;
		}
	}
	return count;
}
int countSpecialChars(char* str){
	int count = 0;
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) || (str[i]>='0' && str[i]<='9')){
			count++;
		}
	}
	return count;
}
int main(){
	char character[100];
	int n;
	do{
		printf("********MENU**********\n");
		printf("1.Nhap vao chuoi ki tu\n");
		printf("2.In ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3.In ra chuoi dao nguoc\n");
		printf("4.In ra so luong chu cai trong moi chuoi\n");
		printf("5.In ra so luong chu so trong moi chuoi\n");
		printf("6.In ra so luong ki tu dac biet trong moi chuoi\n");
		printf("7.Thoat\n");
		int choice;
		printf("Moi ban chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so ki tu cho chuoi: ");
				scanf("%s",character);
				break;
			case 2:
				printf("Do dai chuoi la: %d\n",strlen(character));
				printf("Noi dung chuoi la: %s\n",character);
				break;
			case 3:
				reverseString(character);
				printf("chuoi dao nguoc la: %s\n", character);
				break;
			case 4:
				printf("So luong chu cai trong chuoi la: %d\n",countLetters(character));
				break;
			case 5:
				printf("So luong chu so trong chuoi la: %d\n",countDigits(character));
				break;
			case 6:
				printf("So luong ki tu co trong chuoi la: %d\n",countSpecialChars(character));
				break;
			case 7:
				printf("Ket thuc chuong trinh");
				exit(0);
			default:
				printf("Khong hop le, vui long chon tu 1 den 7.");
		}
	}while(1==1);
}
