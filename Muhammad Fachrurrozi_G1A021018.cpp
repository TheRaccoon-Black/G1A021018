#include<iostream>
#include<fungsi.cpp>
using namespace std;

struct {
	int pjg;
	int lbr;
	int kllg;
	int luas;
}jajargenjang;

int main(){
printf("**************************************************\n");
printf("*             Welcome to my Program              *\n");
printf("*   Menghitung Luas dan Keliling jajargenjang    *\n");
printf("**************************************************\n");
printf("*           oleh Muhammad Fachrurrozi            *\n");
printf("**************************************************\n");
printf("*               NPM: G1A021018                   *\n");
printf("Masukkan panjang dari jajargenjang = ");scanf("%d", &jajargenjang.pjg);
printf("Masukkan lebar dari jajargenjang = ");scanf("%d", &jajargenjang.lbr);
printf("**************************************************\n");
luasjajargenjang();
kelilingjajargenjang();
printf("**************************************************\n");
return 0;

}
