#include <ncurses.h>

using namespace std;

int main(){
	
	initscr();
	
	char nama[30], alamat[50], hobi[20];
	
	getstr(nama);
	getstr(alamat);
	getstr(hobi);
	
	printw("\n"); printw("Nama   : "); printw(nama); 
	printw("\n"); printw("Alamat : "); printw(alamat); 
	printw("\n"); printw("Hobi   : "); printw(hobi);
	
	refresh();
	getch();
	endwin();
	return 0;

} 
