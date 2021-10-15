// bai tap dau gio ve ham
#include<stdio.h>

int xeploai(int a, int b, int c);

main()
{
	int a_s_m, lythuyet, thuchanh;
	int tb;
	char luachon;
	
	do{
		printf("\nNhap vao diem ASM : ");
		scanf("%d", &a_s_m);
		printf("\nNhap vao diem Ly Thuyet : ");
		scanf("%d", &lythuyet);
		printf("\nNhap vao diem ASM : ");
		scanf("%d", &thuchanh);
		
		tb = xeploai(a_s_m, lythuyet, thuchanh);
		
		if(tb == 0){
			printf("\nBan truot mon!");
		}
		else if(tb == 1){
			printf("\nBan xep loai trung binh");
		}
		else if(tb == 2){
			printf("\nBan xep loai kha");
	    }
	    else if(tb == 3){
	    	printf("\nBan xep loai gioi");
		}
		
		printf("\nBan co muon tra cuu xep loai tiep khong?");
		printf("\nCo nhan chu Y, khong nhan chu N\n");
		fflush(stdin);
		scanf("%c", &luachon);
	}while(luachon == 'Y' || luachon == 'y');
	
	if(luachon != 'Y' && luachon != 'y')
	    printf("\nHen gap lai!");
	
	return 0;
}

int xeploai(int a, int b, int c)
{
	float tb = (float)(a + b + c)/3;
	    if(tb < 40)
	        return 0;
	    else if(tb >= 40 && tb < 60)
		    return 1;
		else if(tb >= 60 && tb < 80)
		    return 2;
		else if(tb >= 80)
		    return 3;		    
}
