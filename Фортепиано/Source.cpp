#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<string>

using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор консоли
// Текстовый курсор в точку x,y 
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}
void ConsoleCursorVisible(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show; // изменяем видимость курсора
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	
	
	system("title Фортепиано");
	system("cls");
	/*Beep(261.63, 1000); //ДО z - 122
	Beep(293.66, 1000); //РЕ x -120
	Beep(329.63, 1000);// МИ c - 99
	Beep(349.23, 1000);// ФА v- 118
	Beep(392.00, 1000);// СОЛЬ b-98
	Beep(440.00, 1000);// ЛЯ n-110
	Beep(493.88, 1000);// СИ m-109  */ 
	ConsoleCursorVisible(false, 100);
	//string arrF[7][4];
	int active_fort = 0;
	int x = 0, y = 0;
	
	

	char ch;
	while (true)
	{
		
			for (int i = 0; i < 4; i++) {
				if (i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				else 	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			for (int j = 1; j <= 7; j++) {
					cout << "|##|";
				}
			cout << endl;
			}
		
		
		
				
		ch = _getch();
		if (ch == -32) ch = _getch(); // Отлавливаем стрелочки
		switch (ch)
		{
		case 27:
			exit(0);
		case 122:
			//GoToXY(x,y);
			for (int i = 0; i<1; i++) {
			for (int j = 0; j < 4; j++) {
				GoToXY(x, j);
				
					if (j == active_fort&&i==active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|"<<endl;
				}
			}
			Beep(293.66, 300);
			system("CLS");
			break;
		case 120:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x+4, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					
					
					cout << "|##|" << endl;
					
				}
			}
			Beep(329.63, 300);
			system("CLS");
			break;
		case 99:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x + 8, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);


					cout << "|##|" << endl;

				}
			}
			Beep(329.63, 300);
			system("CLS");
			break;
		case 118:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x + 12, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);


					cout << "|##|" << endl;

				}
			}
			Beep(349.23, 300);
			system("CLS");
			break;
		case 98:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x + 16, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);


					cout << "|##|" << endl;

				}
			}
			Beep(392.00, 300);
			system("CLS");
			break;
		case 110:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x + 20, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);


					cout << "|##|" << endl;

				}
			}
			Beep(440.00, 300);
			system("CLS");
			break;
		case 109:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 4; j++) {
					GoToXY(x + 24, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);


					cout << "|##|" << endl;

				}
			}

			Beep(493.88, 300);
			system("CLS");
			break;
			default:
			cout << "ошибка ввода " << endl;
		}
	}


	
	system("pause>nul");
	return 0;
}