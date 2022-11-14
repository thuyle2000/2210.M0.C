#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo cach lap trinh bien kieu cau truc

//dinh nghia kieu cau truc Student, bao gom ID, Name, Yob
struct STUDENT
{
    char id[11];
    char name[31];
    int yob;
};

int main(){
    //khai bao 2 bien sv1, sv2 chua thong tin cua 2 sinh vien
    // => 2 bien tren se co kieu [struct STUDENT]
    struct STUDENT sv1 = {"sv01","pham van B", 2006};
    struct STUDENT sv2;
    printf(" nhap thong tin chi tiet cua sv thu 2: \n");
    printf(" >> nhap id: "); gets(sv2.id);
    printf(" >> nhap ho ten: "); gets(sv2.name);
    printf(" >> nhap nam sinh: ");scanf("%d", &sv2.yob);

    printf("\n thong tin SV thu 1: %s, %s, %d", sv1.id, sv1.name, sv1.yob);
    printf("\n thong tin SV thu 2: %s, %s, %d", sv2.id, sv2.name, sv2.yob);

}
