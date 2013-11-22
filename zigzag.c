#include<stdio.h>
#include<conio.h>
main(void) {
	int a,b,c,d,e,f,g;
	int i = 219;
	a=14;//ada 14 bagian (isi kosong)
	b=9;//tinggi tengah 9
	c=(a-1)/2;//bagian paling atas | bawah
	
	printf("%c",i); 
    
	d=a%2;
	for(f=1;f<=c;f++){
		printf(" %c%c%c",i,i,i);
	}
	
	if(d==0){
		printf(" %c",i);
	}else {
		printf("");
	}
	printf("\n");
   
	for(e=3;e<=b;e++){
		for(f=1;f<=a;f++){
			printf("%c",i);
			for(g=1;g<=1;g++) {
				printf(" ");
			}
		}
		printf("\n");
	}
    
	for(f=1;f<=c;f++){
		printf("%c%c%c ",i,i,i);
	}

	if(d==0){
		printf("%c%c%c",i,i,i);
	}else {
		printf("%c",i);
    }

	getch ();
}
