#include <ncurses.h>

int main (int argc, int *argv[]) {
	char input;
	initscr();
	cbreak();
	noecho();

	keypad(stdscr, TRUE);

	attron(A_STANDOUT);
	printw("DAY 1 of 100: My first attempt of using ncurses in C.");
	attroff(A_STANDOUT);
	mvprintw(1, 0, "Type any character and the program will output\nthe character\'s ASCII value.");

	do {
		mvprintw(4, 4, "Output:  %-3d", input);
		mvprintw(3, 4, "Input:   %-3c", input);
		move(3, 13);
	} while ((input = getch()) != 'Q');
	
	endwin();
	return 0;
}
