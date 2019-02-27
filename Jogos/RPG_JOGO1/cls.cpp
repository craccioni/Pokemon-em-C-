#include <stdio.h>
#include <windows.h>

HANDLE  hConsoleOut = 0;                   /* Handle to the console */
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;   /* Console information */
CHAR attribute;

void initvideo()
{
  hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
  attribute = 0x07;
}

void gotoxy(int column, int row)
{
  COORD c;

  c.X = column - 1;
  c.Y = row - 1;
  SetConsoleCursorPosition(hConsoleOut, c);
}

void clrscr(void)
{
  COORD c;
  DWORD len, wr;

  if(!hConsoleOut)
    initvideo();
    
  len = csbiInfo.dwSize.X * csbiInfo.dwSize.Y;
  c.X = c.Y = 0;
  FillConsoleOutputCharacter(hConsoleOut, ' ', len, c, &wr);
  FillConsoleOutputAttribute(hConsoleOut, attribute, len, c, &wr);

  gotoxy(1, 1);
}

void delay(DWORD milliseconds)
{
  Sleep(milliseconds);
}

