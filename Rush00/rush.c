#include "ft_putchar.c"

void rush (int x, int y)
{
	char h = '-';
	char v = '|';
	char point = 'o';
	char enter = '\n';
	char b = ' ';

	int tempY = y;

	while(tempY>0){
		int tempX = x;

		while(tempX>0){
			if(tempY == y || tempY == 1){
				if(tempX == x || tempX == 1){
					ft_putchar(point);
			}
				else{
					ft_putchar(h);
				}
		}
			else{
				if(tempX == x || tempX == 1){
					ft_putchar(v);
				}
				else{
					ft_putchar(b);
				}
			}
			tempX--;
		}
		
		ft_putchar(enter);
		tempY--;
	}
}
