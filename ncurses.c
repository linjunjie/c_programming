#include <ncurses.h>
#include <string.h>

int main(){
    int x,y,lines=7,cols=lines*2;
    WINDOW * win[8];
    char const * msg = "Hello World!";
    initscr();
    getmaxyx(stdscr,y,x);
    for(int i=0;i<8;i++){
	win[i] = newwin(lines,cols,y/2-lines/2,x/2-cols/2);
	lines += 2;
	cols = lines*2;
    }
    for(int i=7;i>-1;i--){
	box(win[i],0,0);
    }
    getmaxyx(win[0],y,x);
    mvwprintw(win[0],y/2,x/2-(strlen(msg))/2,"%s",msg);
    refresh();
    for(int i=7;i>-1;i--)
	wrefresh(win[i]);
    getch();	//挂起程序,输入任意键退出程序
    for(int i=0;i<8;i++)
	delwin(win[i]);
    endwin();	//释放
    return 1;
}
