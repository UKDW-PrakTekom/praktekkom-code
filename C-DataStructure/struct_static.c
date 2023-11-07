#include <stdio.h>
#include <string.h>

typedef struct T_Mahasiswa
{
	int nim;
	char nama[20];
} Mahasiswa;

void main(){
    //static alocation
	Mahasiswa staticMhs1;
    staticMhs1.nim = 54321;
    strcpy(staticMhs1.nama, "Dida");
    printf("Student ID: %d\n", staticMhs1.nim);
}