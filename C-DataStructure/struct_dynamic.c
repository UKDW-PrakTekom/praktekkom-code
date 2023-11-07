#include <stdio.h>
#include <string.h>

typedef struct T_Mahasiswa
{
	int nim;
	char nama[20];
} Mahasiswa;

void main(){
    //dynamic allocation
    Mahasiswa *dynamicMhs = malloc(sizeof(Mahasiswa));
    dynamicMhs->nim = 12345;
    strcpy(dynamicMhs->nama, "Dendy");
    
    printf("Student ID: %d\n", dynamicMhs->nim);

    free(dynamicMhs);

}