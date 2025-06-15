#include <iostream>
#include <conio.h>
using namespace std;
void clear(char x[][1000], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int c = 0; c < cols; c++)
		{
			x[i][c] = ' ';
		}
	}
}
void dis(char x[][1000], int rows, int cols, int start, int end)
{
	system("cls");
	for (int i = 0; i < rows; i++)
	{
		for (int c = start; c < end; c++)
		{
			cout << x[i][c];
		}
		cout << "\n";
	}
}
void draw_menu(char x[][80])
{
	for (int i = 0; i < 24; i++)
	{
		for (int c = 0; c < 80; c++)
		{
			x[i][c] = ' ';
		}
	}
	x[5][8] = '_';
	x[5][9] = '_';
	x[6][7] = '/';
	x[7][7] = '\\';
	x[8][8] = '\\';
	x[9][9] = '\\';
	x[9][10] = '_';
	x[9][11] = '_';
	x[9][12] = '/';
	x[9][13] = '\\';
	x[9][14] = '_';
	x[9][15] = '_';
	x[9][16] = '/';
	x[8][17] = '/';
	x[7][18] = '/';
	x[6][19] = '\\';
	x[5][18] = '_';
	x[5][17] = '_';
	x[6][16] = '/';
	x[7][15] = '/';
	x[7][14] = '\\';
	x[7][13] = '/';
	x[7][12] = '\\';
	x[7][12] = '\\';
	x[6][11] = '\\';
	x[9][25] = '_';
	x[9][24] = '_';
	x[9][23] = '\\';
	x[8][22] = '\\';
	x[7][21] = '\\';
	x[6][21] = '/';
	x[5][22] = '_';
	x[5][23] = '_';
	x[5][24] = '_';
	x[5][25] = '_';
	x[9][26] = '_';
	x[6][26] = '\\';
	x[7][26] = '/';
	x[7][25] = '_';
	x[7][24] = '_';
	x[7][23] = '_';
	x[6][23] = '_';
	x[6][24] = '_';
	x[10][27] = '\\';
	x[10][28] = '/';
	x[5][31] = '_';
	x[6][30] = '|';
	x[7][30] = '|';
	x[8][30] = '|';
	x[9][30] = '>';
	x[9][31] = '_';
	x[9][32] = '_';
	x[9][33] = '_';
	x[9][34] = '//';
	x[8][33] = '_';
	x[8][32] = '|';
	x[7][32] = '|';
	x[6][32] = '|';
	x[9][37] = '_';
	x[9][38] = '_';
	x[10][40] = '\\';
	x[10][41] = '/';
	x[9][42] = '>';
	x[9][43] = '_';
	x[9][44] = '_';
	x[9][45] = '_';
	x[9][46] = '_';
	x[9][47] = '/';
	x[8][48] = ')';
	x[7][47] = '\\';
	x[6][45] = '_';
	x[6][44] = '_';
	x[6][43] = '_';
	x[7][42] = '/';
	x[8][41] = '(';
	x[8][44] = '<';
	x[8][45] = '_';
	x[8][46] = '>';
	x[7][45] = '_';
	x[9][45] = '_';
	x[6][40] = '_';
	x[6][39] = '_';
	x[6][38] = '_';
	x[6][37] = '_';
	x[7][36] = '/';
	x[7][35] = '_';
	x[8][36] = '\\';
	x[9][37] = '\\';
	x[8][40] = '_';
	x[8][39] = '_';
	x[8][38] = '\\';
	x[7][38] = '_';
	x[7][39] = '_';
	x[7][40] = '_';
	x[7][41] = '\\';
	x[7][49] = '/';
	x[6][50] = '_';
	x[6][51] = '_';
	x[6][52] = '_';
	x[6][53] = '_';
	x[6][54] = '_';
	x[6][55] = '_';
	x[7][56] = '\\';
	x[7][57] = '_';
	x[8][57] = '\\';
	x[9][57] = '/';
	x[10][56] = '/';
	x[10][55] = '\\';
	x[9][54] = '|';
	x[8][54] = 'Y';
	x[9][53] = '_';
	x[9][52] = '_';
	x[9][51] = '|';
	x[8][51] = 'Y';
	x[9][50] = '_';
	x[9][49] = '_';
	x[9][48] = '|';
	x[7][58] = '/';
	x[6][59] = '_';
	x[6][60] = '_';
	x[6][61] = '_';
	x[6][62] = '_';
	x[6][63] = '_';
	x[7][64] = '\\';
	x[8][64] = '/';
	x[8][63] = '_';
	x[8][62] = '_';
	x[8][61] = '_';
	x[7][62] = '_';
	x[7][61] = '_';
	x[7][60] = '_';
	x[9][58] = '\\';
	x[10][59] = '\\';
	x[10][60] = '_';
	x[10][61] = '_';
	x[10][62] = '_';
	x[10][63] = '_';
	x[11][64] = '\\';
	x[11][65] = '/';
	x[10][66] = '>';
}
void dis_menu(char x[][80], int& value)
{
	system("cls");
	for (int i = 0; i < 24; i++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << x[i][c];
		}
		cout << "\n";
	}
	cout << "Press one to start: "; cin >> value;
}
void draw_hero(char x[][1000], int rh, int ch)
{
	x[rh][ch + 0] = 'M';
	x[rh][ch + 1] = '~';
	x[rh][ch + 2] = '~';
	x[rh][ch + 3] = 'M';
	x[rh - 1][ch + 0] = '(';
	x[rh - 1][ch + 3] = ')';
	x[rh - 2][ch - 1] = '(';
	x[rh - 2][ch + 0] = '>';
	x[rh - 2][ch + 1] = '_';
	x[rh - 2][ch + 2] = '_';
	x[rh - 2][ch + 3] = '<';
	x[rh - 2][ch + 4] = ')';
	x[rh - 3][ch + 0] = '(';
	x[rh - 3][ch + 0] = '(';
	x[rh - 3][ch + 1] = '_';
	x[rh - 3][ch + 2] = '_';
	x[rh - 3][ch + 3] = ')';
	x[rh - 4][ch + 0] = '@';
	x[rh - 4][ch + 1] = '.';
	x[rh - 4][ch + 2] = '.';
	x[rh - 4][ch + 3] = '@';
}
void draw_map(char x[][1000], int rows, int cols)
{
	for (int c = 0; c < cols; c++)
	{
		x[rows - 2][c] = 220;
		x[rows - 1][c] = 250;
		x[rows - 3][c] = 205;
		x[0][c] = 220;
	}
}
void draw_stick(char x[][1000], int r_stick, int c_stick)
{
	for (int i = c_stick; i < c_stick + 7; i++)
	{
		x[r_stick][i] = 220;
	}
}
void move_stick(char x[][1000], int& c_stick, int& dir, int& ct, int len)
{
	if (dir == 1)
	{
		ct++;
		if (ct == len)
		{
			dir *= -1;
		}
	}
	else
	{

		ct--;
		if (ct == 0)
		{
			dir *= -1;
		}
	}
	c_stick += dir;
}
void draw_fire(char x[][1000], int rf, int cf)
{
	x[rf][cf] = '/';
	x[rf][cf + 1] = '\\';
	x[rf][cf + 2] = '/';
	x[rf][cf + 3] = '\\';
	x[rf][cf + 4] = '/';
	x[rf][cf + 5] = '\\';
	x[rf + 1][cf] = '/';
	x[rf + 1][cf + 1] = '\\';
	x[rf + 1][cf + 2] = '/';
	x[rf + 1][cf + 3] = '\\';
	x[rf + 1][cf + 4] = '/';
	x[rf + 1][cf + 5] = '\\';
}
void draw_heart(char x[][1000], int r_heart, int c_heart)
{
	for (int i = c_heart; i < c_heart + 6; i++)
	{
		if (i % 2 == 0)
		{
			x[r_heart][i] = 3;
		}
	}
}
void draw_selm(char x[][1000], int r_selm, int c_selm)
{
	for (int i = r_selm; i < r_selm + 15; i++)
	{
		x[i][c_selm] = 186;
		x[i][c_selm + 6] = 186;
		if (i % 2 != 0)
		{
			for (int c = c_selm + 1; c < c_selm + 6; c++)
			{
				x[i][c] = 205;
			}
		}
	}
}
void draw_selm_2(char x[][1000], int r_selm, int c_selm)
{
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			x[r_selm--][c_selm] = 186;
		}
		x[r_selm][c_selm++] = 201;
		for (int c = 0; c < 6; c++)
		{
			x[r_selm][c_selm++] = 205;
		}
		if (k < 2)
		{
			x[r_selm--][c_selm] = 189;
		}
	}
	x[r_selm][c_selm] = 184;
	for (int i = 0; i < 11; i++)
	{
		x[r_selm + i + 1][c_selm] = 186;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int c = c_selm + 1; c < c_selm + 10; c++)
			{
				x[r_selm + 1 + i][c] = '~';
			}
		}
	}
	draw_stick(x, r_selm - 1, c_selm + 2);
	c_selm += 10;
	x[r_selm][c_selm - 1] = 213;
	for (int i = 0; i < 11; i++)
	{
		x[r_selm + 1 + i][c_selm - 1] = 186;
	}
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 6; i++)
		{
			x[r_selm][c_selm++] = 205;
		}
		x[r_selm++][c_selm] = 187;
		for (int i = 0; i < 3; i++)
		{
			x[r_selm++][c_selm] = 186;
		}
		if (k < 2)
		{
			x[r_selm++][c_selm] = 211;
		}
		r_selm--; c_selm++;
	}
}
void move_hero(char x[][1000], int& r_hero, int& c_hero, char latter, int cols, int rows, int& move_count, int& flag)
{
	int ct = 0; int count = 0; move_count = 0;
	if (latter == 'w')
	{
		for (int k = 0; k < 2; k++)
		{
			ct = 0;
			for (int i = c_hero; i < c_hero + 5; i++)
			{
				if (x[r_hero - 5][i] == ' ')
				{
					ct++;
				}
			}
			if (ct == 5)
			{
				r_hero -= 1;
			}
		}
	}
	else
	{
		if (latter == 's')
		{
			for (int k = 0; k < 2; k++)
			{
				ct = 0;
				for (int i = c_hero; i < c_hero + 5; i++)
				{
					if (x[r_hero + 1][i] == ' ')
					{
						ct++;
					}
				}
				if (ct == 5)
				{
					r_hero += 1;
				}
			}
		}
		else
		{
			if (latter == 'd')
			{
				for (int k = 0; k < 2; k++)
				{
					ct = 0;
					for (int i = r_hero; i > r_hero - 5; i--)
					{
						if (i != r_hero - 2)
						{
							if (x[i][c_hero + 4] == ' ' && c_hero + 4 < cols)
							{
								ct++;
							}
						}
						else
						{
							if (x[i][c_hero + 5] == ' ' && c_hero + 5 < cols)
							{
								ct++;
							}
						}
					}
					if (ct == 5)
					{
						c_hero += 1;
						move_count++;
						flag = 1;
					}
				}
			}
			else
			{
				if (latter == 'a')
				{
					for (int k = 0; k < 2; k++)
					{
						ct = 0;
						for (int i = r_hero; i > r_hero - 5; i--)
						{
							if (i != r_hero - 2)
							{
								if (x[i][c_hero - 1] == ' ' && c_hero - 1 >= 0)
								{
									ct++;
								}
							}
							else
							{
								if (x[i][c_hero - 2] == ' ' && c_hero - 2 >= 0)
								{
									ct++;
								}
							}
						}
						if (ct == 5)
						{
							c_hero -= 1;
							move_count--;
							flag = 1;
						}
					}
				}
				else
				{
					if (latter == 'p')
					{
						for (int i = 0; i < 6; i++)
						{
							count = 0; ct = 0;
							for (int c = c_hero; c < c_hero + 5; c++)
							{
								if (x[r_hero - 5][c] == ' ')
								{
									ct++;
								}
							}
							for (int c = r_hero; c > r_hero - 5; c--)
							{
								if (c != r_hero - 2)
								{
									if (x[c][c_hero + 4] == ' ' && c_hero + 4 < cols)
									{
										count++;
									}
								}
								else
								{
									if (x[c][c_hero + 5] == ' ' && c_hero + 5 < cols)
									{
										count++;
									}
								}
							}
							if (ct == 5 && count == 5)
							{
								r_hero--;
								draw_hero(x, r_hero, c_hero);
								c_hero++;
								move_count++;
								flag = 1;
								draw_hero(x, r_hero, c_hero);
							}
						}
					}
					else
					{
						if (latter == 'i')
						{
							for (int k = 0; k < 6; k++)
							{
								count = 0; ct = 0;
								for (int i = c_hero; i < c_hero + 5; i++)
								{
									if (x[r_hero - 5][i] == ' ')
									{
										ct++;
									}
								}
								for (int i = r_hero; i > r_hero - 5; i--)
								{
									if (i != r_hero - 2)
									{
										if (x[i][c_hero - 1] == ' ' && c_hero - 1 >= 0)
										{
											count++;
										}
									}
									else
									{
										if (x[i][c_hero - 2] == ' ' && c_hero - 2 >= 0)
										{
											count++;
										}
									}
									if (ct == 5 && count == 5)
									{
										r_hero--;
										draw_hero(x, r_hero, c_hero);
										c_hero--;
										move_count--;
										flag = 1;
										draw_hero(x, r_hero, c_hero);
									}
								}
							}
						}
						else
						{
							if (latter == 'o')
							{
								for (int k = 0; k < 5; k++)
								{
									ct = 0;
									for (int i = c_hero; i < c_hero + 5; i++)
									{
										if (x[r_hero - 5][i] == ' ')
										{
											ct++;
										}
									}
									if (ct == 5)
									{
										r_hero--;
										draw_hero(x, r_hero, c_hero);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void sky(char x[][1000], int r_sky, int c_sky)
{
	x[r_sky][c_sky] = '(';
	x[r_sky - 1][c_sky + 2] = '_';
	x[r_sky - 1][c_sky + 3] = '_';
	x[r_sky][c_sky + 5] = ')';
	x[r_sky][c_sky + 6] = '_';
	x[r_sky][c_sky + 7] = '(';
	x[r_sky - 1][c_sky + 9] = '_';
	x[r_sky - 1][c_sky + 10] = '_';
	x[r_sky][c_sky + 12] = ')';
	x[r_sky][c_sky + 13] = '_';
	x[r_sky + 1][c_sky + 14] = ')';
	x[r_sky + 1][c_sky + 13] = '_';
	x[r_sky + 2][c_sky + 12] = ')';
	x[r_sky + 2][c_sky + 10] = '_';
	x[r_sky + 2][c_sky + 9] = '_';
	x[r_sky + 2][c_sky + 7] = '(';
	x[r_sky + 1][c_sky + 6] = '_';
	x[r_sky + 2][c_sky + 5] = ')';
	x[r_sky + 2][c_sky + 3] = '_';
	x[r_sky + 2][c_sky + 2] = '_';
	x[r_sky + 2][c_sky] = '(';
	x[r_sky + 1][c_sky - 1] = '_';
	x[r_sky + 1][c_sky - 2] = '(';
	x[r_sky][c_sky - 1] = '_';
}
void draw_moon(char x[][1000], int r_moon, int c_moon)
{
	x[r_moon][c_moon] = '.';
	x[r_moon][c_moon - 2] = '.';
	x[r_moon][c_moon - 3] = '_';
	x[r_moon + 1][c_moon - 5] = 39;
	x[r_moon + 1][c_moon - 6] = '.';
	x[r_moon + 2][c_moon - 7] = '/';
	x[r_moon + 3][c_moon - 7] = '|';
	x[r_moon + 4][c_moon - 7] = '\\';
	x[r_moon + 5][c_moon - 6] = 39;
	x[r_moon + 5][c_moon - 5] = '.';
	x[r_moon + 5][c_moon - 4] = '_';
	x[r_moon + 6][c_moon - 3] = '`';
	x[r_moon + 6][c_moon - 2] = '`';
	x[r_moon + 6][c_moon - 1] = '`';
	x[r_moon + 5][c_moon] = '_';
	x[r_moon + 5][c_moon - 1] = '.';
	x[r_moon + 5][c_moon - 2] = '-';
	x[r_moon + 5][c_moon - 3] = 39;
	x[r_moon + 4][c_moon - 4] = '\\';
	x[r_moon + 3][c_moon - 4] = '|';
	x[r_moon + 2][c_moon - 4] = '/';
	x[r_moon + 1][c_moon - 3] = '.';
	x[r_moon + 1][c_moon - 2] = '-';
	x[r_moon + 1][c_moon - 1] = 39;
	x[r_moon][c_moon + 1] = '_';
	x[r_moon + 1][c_moon] = '`';
}
void draw_name(char x[][80], int r_name, int c_name)
{
	x[r_name][c_name] = '|';
	x[r_name + 1][c_name] = '|';
	x[r_name + 2][c_name] = '|';
	x[r_name + 3][c_name] = '|';
	x[r_name - 1][c_name + 1] = '_';
	x[r_name][c_name + 2] = '|';
	x[r_name + 1][c_name + 2] = '|';
	x[r_name + 3][c_name + 2] = '|';
	x[r_name + 3][c_name + 1] = '_';
	x[r_name + 2][c_name + 3] = '_';
	x[r_name + 3][c_name + 4] = '|';
	x[r_name + 3][c_name + 5] = '_';
	x[r_name + 3][c_name + 6] = '|';
	x[r_name + 2][c_name + 6] = '|';
	x[r_name + 1][c_name + 6] = '|';
	x[r_name][c_name + 6] = '|';
	x[r_name - 1][c_name + 5] = '_';
	x[r_name][c_name + 4] = '|';
	x[r_name + 1][c_name + 4] = '|';
	x[r_name + 1][c_name + 3] = '_';
	x[r_name][c_name + 7] = '_';
	x[r_name + 1][c_name + 8] = '|';
	x[r_name + 2][c_name + 8] = '|';
	x[r_name + 2][c_name + 9] = '_';
	x[r_name + 2][c_name + 10] = '|';
	x[r_name + 1][c_name + 10] = '|';
	x[r_name][c_name + 11] = '_';
	x[r_name + 1][c_name + 12] = '|';
	x[r_name + 2][c_name + 12] = '|';
	x[r_name + 3][c_name + 12] = '|';
	x[r_name + 3][c_name + 11] = '_';
	x[r_name + 3][c_name + 10] = 39;
	x[r_name + 3][c_name + 9] = '_';
	x[r_name + 3][c_name + 8] = '_';
	x[r_name + 3][c_name + 7] = '\\';
	x[r_name][c_name + 13] = '_';
	x[r_name + 1][c_name + 14] = 39;
	x[r_name][c_name + 15] = '_';
	x[r_name][c_name + 16] = '_';
	x[r_name + 1][c_name + 17] = '\\';
	x[r_name + 2][c_name + 16] = '|';
	x[r_name + 1][c_name + 15] = '_';
	x[r_name + 2][c_name + 14] = '|';
	x[r_name + 3][c_name + 14] = '|';
	x[r_name + 3][c_name + 13] = '_';
	x[r_name + 3][c_name + 17] = '_';
	x[r_name + 3][c_name + 16] = '|';
	x[r_name + 3][c_name + 18] = '|';
	x[r_name + 3][c_name + 18] = '|';
	x[r_name + 2][c_name + 18] = '|';
	x[r_name + 1][c_name + 18] = '|';
	x[r_name][c_name + 18] = '|';
	x[r_name - 1][c_name + 19] = '_';
	x[r_name][c_name + 20] = '|';
	x[r_name][c_name + 21] = '_';
	x[r_name + 1][c_name + 22] = '/';
	x[r_name + 1][c_name + 21] = '_';
	x[r_name + 1][c_name + 20] = '_';
	x[r_name + 2][c_name + 20] = '|';
	x[r_name + 2][c_name + 21] = '|';
	x[r_name + 3][c_name + 19] = '\\';
	x[r_name + 3][c_name + 20] = '_';
	x[r_name + 3][c_name + 21] = '_';
	x[r_name + 3][c_name + 22] = '\\';
	x[r_name + 3][c_name + 23] = '_';
	x[r_name + 3][c_name + 24] = '_';
	x[r_name + 3][c_name + 25] = '_';
	x[r_name + 3][c_name + 26] = '|';
	x[r_name + 2][c_name + 25] = '_';
	x[r_name + 2][c_name + 24] = '_';
	x[r_name + 2][c_name + 26] = '/';
	x[r_name + 1][c_name + 26] = '\\';
	x[r_name][c_name + 25] = '_';
	x[r_name][c_name + 24] = '_';
	x[r_name][c_name + 23] = '_';
	x[r_name + 1][c_name + 24] = '_';
	x[r_name][c_name + 27] = '_';
	x[r_name][c_name + 28] = '_';
	x[r_name + 1][c_name + 29] = 39;
	x[r_name][c_name + 30] = '_';
	x[r_name][c_name + 31] = '_';
	x[r_name + 1][c_name + 32] = '|';
	x[r_name + 1][c_name + 31] = '_';
	x[r_name + 1][c_name + 30] = '_';
	x[r_name + 2][c_name + 29] = '|';
	x[r_name + 3][c_name + 29] = '|';
	x[r_name + 3][c_name + 28] = '_';
	x[r_name + 3][c_name + 27] = '_';
}
void gravity(char x[][1000], int& r_hero, int c_hero)
{
	int ct = 0;
	for (int c = c_hero; c <= c_hero + 3; c++)
	{
		if (x[r_hero + 1][c] == ' ')
		{
			ct++;
		}
	}
	if (ct == 4)
	{
		r_hero++;
	}
}
void Scroll(float& start, float& end, int c_hero, int move_count, int& flag)
{
	if (c_hero > 15)
	{
		if (flag == 1 && start + move_count >= 0 && end + move_count < 999)
		{
			start += move_count;
			end += move_count;
			flag = 0;
		}
	}
}
void plane(char x[][1000], int r_plane, int c_plane)
{
	x[r_plane][c_plane] = '\\';
	x[r_plane - 1][c_plane - 1] = '_';
	x[r_plane][c_plane - 2] = '/';
	x[r_plane][c_plane - 3] = '_';
	x[r_plane][c_plane - 4] = '_';
	x[r_plane][c_plane - 5] = '_';
	x[r_plane][c_plane - 6] = 39;
	x[r_plane][c_plane - 7] = 'o';
	x[r_plane][c_plane - 8] = '_';
	x[r_plane][c_plane - 9] = '\\';
	x[r_plane - 1][c_plane - 10] = '_';
	x[r_plane - 1][c_plane - 11] = '_';
	x[r_plane - 1][c_plane - 12] = '_';
	x[r_plane - 1][c_plane - 13] = '_';
	x[r_plane][c_plane - 12] = '\\';
	x[r_plane][c_plane - 13] = '_';
	x[r_plane][c_plane - 14] = '_';
	x[r_plane][c_plane - 15] = '|';
	x[r_plane + 1][c_plane - 15] = '[';
	x[r_plane + 1][c_plane - 16] = '(';
	x[r_plane + 2][c_plane - 15] = '|';
	x[r_plane + 1][c_plane - 14] = '_';
	x[r_plane + 1][c_plane - 13] = '_';
	x[r_plane + 1][c_plane - 12] = '_';
	x[r_plane + 1][c_plane - 11] = '\\';
	x[r_plane + 1][c_plane - 10] = '_';
	x[r_plane + 1][c_plane - 9] = '_';
	x[r_plane + 1][c_plane - 8] = '_';
	x[r_plane + 1][c_plane - 7] = '_';
	x[r_plane + 1][c_plane - 6] = '_';
	x[r_plane + 1][c_plane - 5] = '_';
	x[r_plane + 1][c_plane - 4] = '_';
	x[r_plane + 1][c_plane - 3] = '_';
	x[r_plane + 1][c_plane - 2] = '-';
	x[r_plane + 1][c_plane - 1] = '\\';
	x[r_plane + 1][c_plane] = 39;
	x[r_plane + 2][c_plane - 13] = 'o';
	x[r_plane + 2][c_plane - 12] = 39;
}
void granade(char x[][1000], int& c_granade, int& r_granade, int c_plane, int r_plane, int& ct_granade)
{
	c_granade = c_plane - 4;
	if (ct_granade == 0)
	{
		r_granade = r_plane + 2;
	}
	for (int i = r_granade; i < r_granade + 3; i++)
	{
		for (int c = c_granade; c < c_granade + 2; c++)
		{
			if (x[i][c] == ' ')
			{
				x[i][c] = '*';
				ct_granade++;
			}
			else
			{
				c_granade = c_plane - 4;
				r_granade = r_plane + 2;
				ct_granade = 0;
				break;
			}
		}
	}
}
void fire_granade(int& r_granade)
{
	r_granade++;
}

void move_plane(char x[][1000], int& c_plane)
{
	if (c_plane != 0)
	{
		c_plane--;
	}
	else
	{
		c_plane = 100;
	}
}
void draw_step(char x[][1000], int r_step, int c_step, int ct1, int ct2, int ct3)
{
	x[r_step + 4][c_step - 12] = 201;
	x[r_step + 5][c_step - 12] = 186;
	x[r_step + 6][c_step - 12] = 200;
	c_step++;
	for (int k = c_step - 12; k < c_step - 2; k++)
	{
		x[r_step + 4][k] = 205;
		x[r_step + 6][k] = 205;
	}
	x[r_step + 4][c_step - 2] = 187;
	x[r_step + 5][c_step - 2] = 186;
	x[r_step + 6][c_step - 2] = 188;

	if (ct1 < 20)
	{


		x[r_step + 5][c_step + 28] = 201;
		x[r_step + 6][c_step + 28] = 186;
		x[r_step + 7][c_step + 28] = 200;
		c_step++;
		for (int k = c_step + 28; k < c_step + 38; k++)
		{
			x[r_step + 5][k] = 205;
			x[r_step + 7][k] = 205;
		}
		x[r_step + 5][c_step + 38] = 187;
		x[r_step + 6][c_step + 38] = 186;
		x[r_step + 7][c_step + 38] = 188;
	}

	x[r_step + 9][c_step + 44] = 201;
	x[r_step + 10][c_step + 44] = 186;
	x[r_step + 11][c_step + 44] = 200;
	c_step++;
	for (int k = c_step + 44; k < c_step + 54; k++)
	{
		x[r_step + 9][k] = 205;
		x[r_step + 11][k] = 205;
	}
	x[r_step + 9][c_step + 54] = 187;
	x[r_step + 10][c_step + 54] = 186;
	x[r_step + 11][c_step + 54] = 188;

	if (ct2 < 20)
	{


		x[r_step + 12][c_step + 61] = 201;
		x[r_step + 13][c_step + 61] = 186;
		x[r_step + 14][c_step + 61] = 200;
		c_step++;
		for (int k = c_step + 61; k < c_step + 71; k++)
		{
			x[r_step + 12][k] = 205;
			x[r_step + 14][k] = 205;
		}
		x[r_step + 12][c_step + 71] = 187;
		x[r_step + 13][c_step + 71] = 186;
		x[r_step + 14][c_step + 71] = 188;
	}
	x[r_step + 9][c_step + 78] = 201;
	x[r_step + 10][c_step + 78] = 186;
	x[r_step + 11][c_step + 78] = 200;
	c_step++;
	for (int k = c_step + 78; k < c_step + 88; k++)
	{
		x[r_step + 9][k] = 205;
		x[r_step + 11][k] = 205;
	}
	x[r_step + 9][c_step + 88] = 187;
	x[r_step + 10][c_step + 88] = 186;
	x[r_step + 11][c_step + 88] = 188;
	if (ct3 < 20)
	{


		x[r_step + 5][c_step + 93] = 201;
		x[r_step + 6][c_step + 93] = 186;
		x[r_step + 7][c_step + 93] = 200;
		c_step++;
		for (int k = c_step + 93; k < c_step + 103; k++)
		{
			x[r_step + 5][k] = 205;
			x[r_step + 7][k] = 205;
		}
		x[r_step + 5][c_step + 103] = 187;
		x[r_step + 6][c_step + 103] = 186;
		x[r_step + 7][c_step + 103] = 188;
	}

	x[r_step + 9][c_step + 107] = 201;
	x[r_step + 10][c_step + 107] = 186;
	x[r_step + 11][c_step + 107] = 200;
	c_step++;
	for (int k = c_step + 107; k < c_step + 117; k++)
	{
		x[r_step + 9][k] = 205;
		x[r_step + 11][k] = 205;
	}
	x[r_step + 9][c_step + 117] = 187;
	x[r_step + 10][c_step + 117] = 186;
	x[r_step + 11][c_step + 117] = 188;


	x[r_step + 12][c_step + 122] = 201;
	x[r_step + 13][c_step + 122] = 186;
	x[r_step + 14][c_step + 122] = 200;
	c_step++;
	for (int k = c_step + 122; k < c_step + 132; k++)
	{
		x[r_step + 12][k] = 205;
		x[r_step + 14][k] = 205;
	}
	x[r_step + 12][c_step + 132] = 187;
	x[r_step + 13][c_step + 132] = 186;
	x[r_step + 14][c_step + 132] = 188;
	x[r_step + 15][c_step + 132] = '|';
	x[r_step + 16][c_step + 132] = '|';
	x[r_step + 17][c_step + 132] = '|';


	x[r_step + 1][c_step - 3] = 201;
	x[r_step + 2][c_step - 3] = 186;
	x[r_step + 3][c_step - 3] = 200;
	c_step++;
	for (int i = c_step - 3; i < c_step + 17; i++)
	{
		x[r_step + 1][i] = 205;
		x[r_step + 3][i] = 205;
	}
	c_step += 20;
	x[r_step + 2][c_step - 3] = 186;
	x[r_step + 3][c_step - 3] = 188;
	x[r_step + 1][c_step - 3] = 187;

}
void skeleton(char x[][1000], int r, int c)
{
	x[r][c] = '_';
	x[r][c + 1] = '_';
	x[r][c + 2] = '_';
	x[r + 1][c + 3] = ')';
	x[r + 1][c + 2] = '_';
	x[r + 1][c + 1] = '_';
	x[r + 1][c] = 'o';
	x[r + 1][c - 1] = '/';
	x[r + 2][c - 1] = '"';
	x[r + 2][c] = 39;
	x[r + 1][c + 4] = '.';
	x[r + 1][c + 5] = '_';
	x[r + 2][c + 6] = '`';
	x[r + 2][c + 7] = '.';
	x[r + 3][c + 7] = '/';
	x[r + 3][c + 6] = '_';
	x[r + 3][c + 5] = '|';
	x[r + 2][c + 5] = 39;
	x[r + 2][c + 4] = '(';
	x[r + 3][c + 3] = '/';
	x[r + 4][c + 3] = '`';
	x[r + 4][c + 2] = '"';
	for (int i = c + 1; i > c - 4; i--)
	{
		x[r + 3][i] = '_';
	}
	x[r + 4][c + 1] = '|';
	x[r + 4][c] = '_';
	x[r + 4][c - 1] = '_';
	x[r + 4][c - 2] = '(';
	x[r + 4][c - 3] = '-';
	x[r + 4][c - 4] = '-';
	//x[r + 4][c - 5] = 39;
	x[r + 3][c - 5] = '_';
	x[r + 3][c - 4] = '_';
	x[r + 4][c + 4] = '/';
	x[r + 5][c + 4] = '"';
	x[r + 5][c + 3] = 39;
	x[r + 4][c + 7] = ';';
	x[r + 5][c + 6] = '/';
	x[r + 5][c + 8] = '|';
	x[r + 6][c + 8] = '\\';
	x[r + 6][c + 6] = '|';
	x[r + 6][c + 5] = '_';
	x[r + 7][c + 4] = 39;
	x[r + 7][c + 9] = '/';
	x[r + 7][c + 8] = 39;
}
void move_skel(char x[][1000], int c_h, int& c_skel, int r_skel, int& flag_stop)
{
	if (c_h >= 244)
	{
		c_skel--;
	}
	if (c_skel - 5 <= c_h + 3)
	{
		flag_stop = 1;
	}


}
void draw_bolet(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& ct, int& flag_bolet, int& ct_skel, int& r_bolet)
{
	if (ct == 0)
	{
		r_bolet = r_hero - 2;
		c_bolet = c_hero + 6;
		ct_skel++;
	}
	if (x[r_bolet][c_bolet] == ' ' && c_bolet < 1000)
	{
		x[r_bolet][c_bolet] = 175;
		ct++;
	}
	else
	{
		flag_bolet = 0;
		ct = 0;
	}
}
void move_bolet(int& c_bolet)
{
	c_bolet += 2;
}
void draw_dbolet(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& ct, int& flag_bolet, int& ct_skel, int& r_bolet)
{
	if (ct == 0)
	{
		r_bolet = r_hero - 2;
		c_bolet = c_hero + 6;
		ct_skel += 3;
	}
	if (ct < 3)
	{
		if (x[r_bolet][c_bolet] == ' ')
		{
			x[r_bolet][c_bolet] = 'o';
			ct++;
		}
		else
		{
			flag_bolet = 0;
			ct = 0;
		}
	}
	else
	{
		for (int i = r_bolet - 1; i <= r_bolet + 1; i++)
		{
			if (x[i][c_bolet] == ' ')
			{
				x[i][c_bolet] = 175;
			}
			else
			{
				flag_bolet = 0;
				ct = 0;
			}
		}
	}
}
void move_dbolet(int& c_dbolet)
{
	c_dbolet += 2;
}
void draw_bolet_double(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& fdd, int& flag_bolet_double, int& ct_skel)
{
	int r_boletd = r_hero - 2;
	//int ctbolet = 0;
	if (fdd == 0)
	{
		c_bolet = c_hero + 6;

		ct_skel += 1;
	}
	if (x[r_boletd][c_bolet] == ' ')
	{
		x[r_boletd][c_bolet] = 175;
		fdd++;
		//ctbolet++;
	}
	else
	{
		flag_bolet_double = 0;
		fdd = 0;

	}

}
void move_bolet_double(int& c_bolet)
{
	c_bolet += 2;

}
void died_hero(char x[][1000], int r_hero, int c_hero, int rf, int cf, int r_stepdied, int c_stepS, int c_stepE, int& flaglive)
{
	for (int i = c_hero; i < c_hero + 4; i++)
	{
		for (int k = cf; k < cf + 6; k++)
		{
			if (r_hero == rf - 1)
			{
				if (i == k)
				{
					flaglive = 1;
				}

			}

		}

	}

	for (int w = c_hero; w < c_hero + 4; w++)
	{
		for (int i = c_stepS; i < c_stepE - 6; i++)
		{
			if (r_hero >= r_stepdied && w == i)
			{
				flaglive = 1;
			}
		}
	}

}
void drow_box(char x[][1000], int r_box, int c_box)
{
	x[r_box][c_box] = 200;
	x[r_box][c_box + 1] = 205;
	x[r_box][c_box + 2] = 205;
	x[r_box][c_box + 3] = 205;
	x[r_box][c_box + 4] = 188;
	x[r_box - 1][c_box] = 204;
	x[r_box - 1][c_box + 1] = 205;
	x[r_box - 1][c_box + 2] = 206;
	x[r_box - 1][c_box + 3] = 205;
	x[r_box - 1][c_box + 4] = 185;
	x[r_box - 2][c_box] = 201;
	x[r_box - 2][c_box + 1] = 205;
	x[r_box - 2][c_box + 2] = 205;
	x[r_box - 2][c_box + 3] = 205;
	x[r_box - 2][c_box + 4] = 187;

}
void draw_hero_bigger(char x[][1000], int rhg, int chg)
{
	x[rhg][chg] = 'M';
	x[rhg][chg + 1] = 'M';
	x[rhg][chg + 2] = '~';
	x[rhg][chg + 3] = '~';
	x[rhg][chg + 4] = '~';
	x[rhg][chg + 5] = '~';
	x[rhg][chg + 6] = 'M';
	x[rhg][chg + 7] = 'M';
	x[rhg - 1][chg] = '(';
	x[rhg - 1][chg + 7] = ')';
	x[rhg - 2][chg] = '(';
	x[rhg - 2][chg + 7] = ')';
	x[rhg - 3][chg] = '(';
	x[rhg - 3][chg + 7] = ')';
	x[rhg - 4][chg] = '(';
	x[rhg - 4][chg + 7] = ')';
	x[rhg - 5][chg] = '(';
	x[rhg - 5][chg + 7] = ')';
	x[rhg - 6][chg] = '(';
	x[rhg - 6][chg + 1] = 47;
	x[rhg - 6][chg + 6] = 92;
	x[rhg - 6][chg + 7] = ')';
	x[rhg - 7][chg - 1] = '(';
	x[rhg - 7][chg + 2] = 47;
	x[rhg - 7][chg + 5] = 92;
	x[rhg - 7][chg + 8] = ')';
	x[rhg - 8][chg - 1] = '(';
	x[rhg - 8][chg + 2] = 92;
	x[rhg - 8][chg + 3] = '_';
	x[rhg - 8][chg + 4] = '_';
	x[rhg - 8][chg + 5] = 47;
	x[rhg - 8][chg + 8] = ')';
	x[rhg - 9][chg] = '(';
	x[rhg - 9][chg + 1] = 92;
	x[rhg - 9][chg + 6] = 47;
	x[rhg - 9][chg + 7] = ')';
	x[rhg - 10][chg - 1] = '(';
	x[rhg - 10][chg + 1] = '_';
	x[rhg - 10][chg + 2] = '_';
	x[rhg - 10][chg + 3] = '_';
	x[rhg - 10][chg + 4] = '_';
	x[rhg - 10][chg + 5] = '_';
	x[rhg - 10][chg + 6] = '_';
	x[rhg - 10][chg + 8] = ')';
	x[rhg - 11][chg] = '@';
	x[rhg - 11][chg + 2] = '.';
	x[rhg - 11][chg + 3] = '.';
	x[rhg - 11][chg + 4] = '.';
	x[rhg - 11][chg + 5] = '.';
	x[rhg - 11][chg + 7] = '@';

}
void move_hero_bigger(char x[][1000], int& rhg, int& chg, char move)
{
	if (move == 'd')
	{
		if (x[rhg][chg + 8] == ' ' && x[rhg][chg + 9] == ' ')
		{
			chg += 2;
		}
	}
	if (move == 'a')
	{
		if (x[rhg][chg - 1] == ' ' && x[rhg][chg - 2] == ' ')
		{
			chg -= 2;
		}
	}

}
void draw_elevator(char x[][1000], int r_elevator, int c_elevator, int flag_elevator)
{
	x[r_elevator][c_elevator] = '|';
	x[r_elevator - 1][c_elevator] = '|';
	x[r_elevator - 2][c_elevator] = '|';
	x[r_elevator - 3][c_elevator] = '|';
	x[r_elevator - 4][c_elevator] = '|';
	x[r_elevator - 5][c_elevator] = '|';
	x[r_elevator - 6][c_elevator] = '|';
	x[r_elevator - 7][c_elevator] = '|';
	x[r_elevator - 8][c_elevator] = '|';
	x[r_elevator - 9][c_elevator] = '|';
	x[r_elevator - 9][c_elevator + 1] = 92;
	x[r_elevator - 9][c_elevator + 2] = '_';
	x[r_elevator - 9][c_elevator + 3] = '_';
	x[r_elevator - 9][c_elevator + 4] = '_';
	x[r_elevator - 9][c_elevator + 5] = '_';
	x[r_elevator - 9][c_elevator + 6] = '_';
	x[r_elevator - 9][c_elevator + 7] = '_';
	x[r_elevator - 9][c_elevator + 8] = '_';
	x[r_elevator - 9][c_elevator + 9] = '_';
	x[r_elevator - 9][c_elevator + 10] = '_';
	x[r_elevator - 9][c_elevator + 11] = '_';
	x[r_elevator - 9][c_elevator + 12] = '_';
	x[r_elevator - 9][c_elevator + 13] = '_';
	x[r_elevator - 9][c_elevator + 14] = '_';
	x[r_elevator - 9][c_elevator + 15] = '_';
	x[r_elevator - 9][c_elevator + 16] = '_';
	x[r_elevator - 9][c_elevator + 17] = '_';
	x[r_elevator - 9][c_elevator + 18] = '/';
	x[r_elevator - 8][c_elevator + 18] = '|';
	x[r_elevator - 7][c_elevator + 18] = '|';
	x[r_elevator - 6][c_elevator + 18] = '|';
	x[r_elevator - 5][c_elevator + 18] = '|';
	x[r_elevator - 4][c_elevator + 18] = '|';
	x[r_elevator - 3][c_elevator + 18] = '|';
	x[r_elevator - 2][c_elevator + 18] = '|';
	x[r_elevator - 1][c_elevator + 18] = '|';
	x[r_elevator][c_elevator + 18] = '|';
	x[r_elevator - 9][c_elevator + 19] = '|';
	x[r_elevator - 8][c_elevator + 19] = '|';
	x[r_elevator - 7][c_elevator + 19] = '|';
	x[r_elevator - 6][c_elevator + 19] = '|';
	x[r_elevator - 5][c_elevator + 19] = '|';
	x[r_elevator - 4][c_elevator + 19] = '|';
	x[r_elevator - 3][c_elevator + 19] = '|';
	x[r_elevator - 2][c_elevator + 19] = '|';
	x[r_elevator - 1][c_elevator + 19] = '|';
	x[r_elevator][c_elevator + 19] = '|';
	x[r_elevator - 8][c_elevator + 1] = '|';
	x[r_elevator - 7][c_elevator + 1] = '|';
	x[r_elevator - 6][c_elevator + 1] = '|';
	x[r_elevator - 5][c_elevator + 1] = '|';
	x[r_elevator - 4][c_elevator + 1] = '|';
	x[r_elevator - 3][c_elevator + 1] = '|';
	x[r_elevator - 2][c_elevator + 1] = '|';
	x[r_elevator - 1][c_elevator + 1] = '|';
	x[r_elevator][c_elevator + 1] = '|';
	x[r_elevator - 10][c_elevator] = '_';
	x[r_elevator - 10][c_elevator + 1] = '_';
	x[r_elevator - 10][c_elevator + 2] = '_';
	x[r_elevator - 10][c_elevator + 3] = '_';
	x[r_elevator - 10][c_elevator + 4] = '_';
	x[r_elevator - 10][c_elevator + 5] = '_';
	x[r_elevator - 10][c_elevator + 6] = '_';
	x[r_elevator - 10][c_elevator + 7] = '_';
	x[r_elevator - 10][c_elevator + 8] = '_';
	x[r_elevator - 10][c_elevator + 9] = '_';
	x[r_elevator - 10][c_elevator + 10] = '_';
	x[r_elevator - 10][c_elevator + 11] = '_';
	x[r_elevator - 10][c_elevator + 12] = '_';
	x[r_elevator - 10][c_elevator + 13] = '_';
	x[r_elevator - 10][c_elevator + 14] = '_';
	x[r_elevator - 10][c_elevator + 15] = '_';
	x[r_elevator - 10][c_elevator + 16] = '_';
	x[r_elevator - 10][c_elevator + 17] = '_';
	x[r_elevator - 10][c_elevator + 18] = '_';
	x[r_elevator - 10][c_elevator + 19] = '_';
	//x[r_elevator - 10][c_elevator] = '_';
	x[r_elevator][c_elevator + 1] = '_';
	x[r_elevator][c_elevator + 2] = '_';
	x[r_elevator][c_elevator + 3] = '_';
	x[r_elevator][c_elevator + 4] = '_';
	x[r_elevator][c_elevator + 5] = '_';
	x[r_elevator][c_elevator + 6] = '_';
	x[r_elevator][c_elevator + 7] = '_';
	x[r_elevator][c_elevator + 8] = '_';
	x[r_elevator][c_elevator + 9] = '_';
	x[r_elevator][c_elevator + 10] = '_';
	x[r_elevator][c_elevator + 11] = '_';
	x[r_elevator][c_elevator + 12] = '_';
	x[r_elevator][c_elevator + 13] = '_';
	x[r_elevator][c_elevator + 14] = '_';
	x[r_elevator][c_elevator + 15] = '_';
	x[r_elevator][c_elevator + 16] = '_';
	x[r_elevator][c_elevator + 17] = '_';
	x[r_elevator][c_elevator + 18] = '_';
	//x[r_elevator - 10][c_elevator + 19] = '_';
	x[r_elevator - 1][c_elevator + 2] = '_';
	x[r_elevator - 1][c_elevator + 3] = '_';
	x[r_elevator - 1][c_elevator + 4] = '_';
	x[r_elevator - 1][c_elevator + 5] = '_';
	x[r_elevator - 1][c_elevator + 6] = '_';
	x[r_elevator - 1][c_elevator + 7] = '_';
	x[r_elevator - 1][c_elevator + 8] = '_';
	x[r_elevator - 1][c_elevator + 9] = '_';
	x[r_elevator - 1][c_elevator + 10] = '_';
	x[r_elevator - 1][c_elevator + 11] = '_';
	x[r_elevator - 1][c_elevator + 12] = '_';
	x[r_elevator - 1][c_elevator + 13] = '_';
	x[r_elevator - 1][c_elevator + 14] = '_';
	x[r_elevator - 1][c_elevator + 15] = '_';
	x[r_elevator - 1][c_elevator + 16] = '_';
	x[r_elevator - 1][c_elevator + 17] = '_';
	x[r_elevator - 5][c_elevator + 20] = '-';
	x[r_elevator - 5][c_elevator + 21] = '-';
	x[r_elevator - 5][c_elevator + 22] = '-';
	x[r_elevator - 6][c_elevator + 20] = '|';
	x[r_elevator - 6][c_elevator + 21] = 'v';
	x[r_elevator - 6][c_elevator + 22] = '|';
	x[r_elevator - 7][c_elevator + 20] = '_';
	x[r_elevator - 7][c_elevator + 21] = '_';
	x[r_elevator - 7][c_elevator + 22] = '_';
	if (flag_elevator == 1)
	{
		x[r_elevator - 2][c_elevator + 7] = 'M';
		x[r_elevator - 2][c_elevator + 8] = '~';
		x[r_elevator - 2][c_elevator + 9] = '~';
		x[r_elevator - 2][c_elevator + 10] = 'M';
		x[r_elevator - 3][c_elevator + 7] = '(';
		x[r_elevator - 3][c_elevator + 10] = ')';
		x[r_elevator - 4][c_elevator + 6] = '(';
		x[r_elevator - 4][c_elevator + 7] = '>';
		x[r_elevator - 4][c_elevator + 8] = '_';
		x[r_elevator - 4][c_elevator + 9] = '_';
		x[r_elevator - 4][c_elevator + 10] = '<';
		x[r_elevator - 4][c_elevator + 11] = ')';
		x[r_elevator - 5][c_elevator + 7] = '(';
		x[r_elevator - 5][c_elevator + 8] = '_';
		x[r_elevator - 5][c_elevator + 9] = '_';
		x[r_elevator - 5][c_elevator + 10] = ')';
		x[r_elevator - 6][c_elevator + 7] = '@';
		x[r_elevator - 6][c_elevator + 8] = '.';
		x[r_elevator - 6][c_elevator + 9] = '.';
		x[r_elevator - 6][c_elevator + 10] = '@';
	}
}
void draw_step_elv(char x[][1000], int r_se, int c_se)
{
	x[r_se][c_se] = 177;
	x[r_se][c_se + 1] = 177;
	x[r_se][c_se + 2] = 177;
	x[r_se][c_se + 3] = 177;
	x[r_se][c_se + 4] = 177;
	x[r_se][c_se + 5] = 177;
	x[r_se][c_se + 6] = 177;
	x[r_se][c_se + 7] = 177;
	x[r_se][c_se + 8] = 177;
	x[r_se][c_se + 9] = 177;
	x[r_se][c_se + 10] = 177;
	x[r_se][c_se + 11] = 177;
	x[r_se][c_se + 12] = 177;
	x[r_se][c_se + 13] = 177;
	x[r_se][c_se + 14] = 177;
	x[r_se][c_se + 15] = 177;
	x[r_se][c_se + 16] = 177;
	x[r_se][c_se + 17] = 177;
	x[r_se][c_se + 18] = 177;
	x[r_se][c_se + 19] = 177;
	x[r_se][c_se + 20] = 177;
	x[r_se][c_se + 21] = 177;
	x[r_se][c_se + 22] = 177;
	x[r_se][c_se + 23] = 177;
	x[r_se][c_se + 24] = 177;
	x[r_se][c_se + 25] = 177;
	x[r_se][c_se + 26] = 177;
	x[r_se][c_se + 27] = 177;
	x[r_se][c_se + 28] = 177;
	x[r_se][c_se + 29] = 177;
	x[r_se][c_se + 30] = 177;
	x[r_se][c_se + 31] = 177;
	x[r_se][c_se + 32] = 177;
	x[r_se][c_se + 33] = 177;
	x[r_se][c_se + 34] = 177;
	x[r_se][c_se + 35] = 177;
	x[r_se][c_se + 36] = 177;
	x[r_se][c_se + 37] = 177;
	x[r_se][c_se + 38] = 177;
	x[r_se][c_se + 39] = 177;
	x[r_se][c_se + 40] = 177;
	x[r_se + 1][c_se] = 177;
	x[r_se + 1][c_se + 1] = 177;
	x[r_se + 1][c_se + 2] = 177;
	x[r_se + 1][c_se + 3] = 177;
	x[r_se + 1][c_se + 4] = 177;
	x[r_se + 1][c_se + 5] = 177;
	x[r_se + 1][c_se + 6] = 177;
	x[r_se + 1][c_se + 7] = 177;
	x[r_se + 1][c_se + 8] = 177;
	x[r_se + 1][c_se + 9] = 177;
	x[r_se + 1][c_se + 10] = 177;
	x[r_se + 1][c_se + 11] = 177;
	x[r_se + 1][c_se + 12] = 177;
	x[r_se + 1][c_se + 13] = 177;
	x[r_se + 1][c_se + 14] = 177;
	x[r_se + 1][c_se + 15] = 177;
	x[r_se + 1][c_se + 16] = 177;
	x[r_se + 1][c_se + 17] = 177;
	x[r_se + 1][c_se + 18] = 177;
	x[r_se + 1][c_se + 19] = 177;
	x[r_se + 1][c_se + 20] = 177;
	x[r_se + 1][c_se + 21] = 177;
	x[r_se + 1][c_se + 22] = 177;
	x[r_se + 1][c_se + 23] = 177;
	x[r_se + 1][c_se + 24] = 177;
	x[r_se + 1][c_se + 25] = 177;
	x[r_se + 1][c_se + 26] = 177;
	x[r_se + 1][c_se + 27] = 177;
	x[r_se + 1][c_se + 28] = 177;
	x[r_se + 1][c_se + 29] = 177;
	x[r_se + 1][c_se + 30] = 177;
	x[r_se + 1][c_se + 31] = 177;
	x[r_se + 1][c_se + 32] = 177;
	x[r_se + 1][c_se + 33] = 177;
	x[r_se + 1][c_se + 34] = 177;
	x[r_se + 1][c_se + 35] = 177;
	x[r_se + 1][c_se + 36] = 177;
	x[r_se + 1][c_se + 37] = 177;
	x[r_se + 1][c_se + 38] = 177;
	x[r_se + 1][c_se + 39] = 177;
	x[r_se + 1][c_se + 40] = 177;
}
void draw_key(char x[][1000], int r_k, int c_k)
{
	x[r_k][c_k] = '0';
	x[r_k][c_k + 1] = '_';
	x[r_k][c_k + 2] = '_';
	x[r_k][c_k + 3] = '_';
	x[r_k + 1][c_k + 2] = '^';
	x[r_k + 1][c_k + 3] = '^';
}
void wa7sh(char x[][1000], int r_wa7sh, int c_wa7sh)
{
	x[r_wa7sh][c_wa7sh] = '_';
	x[r_wa7sh][c_wa7sh - 1] = '_';
	x[r_wa7sh][c_wa7sh - 2] = '_';
	x[r_wa7sh][c_wa7sh - 3] = '_';
	x[r_wa7sh][c_wa7sh - 4] = '_';
	x[r_wa7sh][c_wa7sh - 5] = '{';
	x[r_wa7sh][c_wa7sh - 6] = '-';
	x[r_wa7sh][c_wa7sh - 7] = '-';
	x[r_wa7sh][c_wa7sh - 8] = '`';
	x[r_wa7sh - 1][c_wa7sh - 8] = '{';
	x[r_wa7sh - 2][c_wa7sh - 7] = '_';
	x[r_wa7sh - 2][c_wa7sh - 6] = '_';
	x[r_wa7sh - 2][c_wa7sh - 5] = '_';
	x[r_wa7sh - 2][c_wa7sh - 4] = '(';
	x[r_wa7sh - 3][c_wa7sh - 4] = '\\';
	x[r_wa7sh - 4][c_wa7sh - 4] = '_';
	x[r_wa7sh - 4][c_wa7sh - 5] = '_';
	x[r_wa7sh - 4][c_wa7sh - 6] = '`';
	x[r_wa7sh - 4][c_wa7sh - 3] = 39;
	x[r_wa7sh - 5][c_wa7sh - 4] = ')';
	x[r_wa7sh - 5][c_wa7sh - 5] = ')';
	x[r_wa7sh - 5][c_wa7sh - 6] = ')';
	x[r_wa7sh - 5][c_wa7sh - 7] = '0';
	x[r_wa7sh - 5][c_wa7sh - 8] = '=';
	x[r_wa7sh - 5][c_wa7sh - 9] = '=';
	x[r_wa7sh - 5][c_wa7sh - 10] = '|';
	x[r_wa7sh - 6][c_wa7sh - 10] = 39;
	x[r_wa7sh - 4][c_wa7sh - 10] = 39;
	x[r_wa7sh - 6][c_wa7sh - 11] = '-';
	x[r_wa7sh - 6][c_wa7sh - 12] = '-';
	x[r_wa7sh - 6][c_wa7sh - 13] = '-';
	x[r_wa7sh - 6][c_wa7sh - 14] = '<';
	x[r_wa7sh - 5][c_wa7sh - 11] = '-';
	x[r_wa7sh - 5][c_wa7sh - 12] = '-';
	x[r_wa7sh - 5][c_wa7sh - 13] = '-';
	x[r_wa7sh - 5][c_wa7sh - 14] = '<';
	x[r_wa7sh - 4][c_wa7sh - 11] = '-';
	x[r_wa7sh - 4][c_wa7sh - 12] = '-';
	x[r_wa7sh - 4][c_wa7sh - 13] = '-';
	x[r_wa7sh - 4][c_wa7sh - 14] = '<';
	x[r_wa7sh - 6][c_wa7sh - 4] = '_';
	x[r_wa7sh - 6][c_wa7sh - 5] = '_';
	x[r_wa7sh - 6][c_wa7sh - 3] = '/';
	x[r_wa7sh - 5][c_wa7sh - 3] = '=';
	x[r_wa7sh - 5][c_wa7sh - 2] = '=';
	x[r_wa7sh - 5][c_wa7sh - 1] = ')';
	x[r_wa7sh - 6][c_wa7sh - 1] = '_';
	x[r_wa7sh - 6][c_wa7sh] = '_';
	x[r_wa7sh - 5][c_wa7sh + 1] = '\\';
	x[r_wa7sh - 5][c_wa7sh + 2] = ')';
	x[r_wa7sh - 7][c_wa7sh - 2] = '_';
	x[r_wa7sh - 7][c_wa7sh - 1] = '_';
	x[r_wa7sh - 7][c_wa7sh] = '_';
	x[r_wa7sh - 7][c_wa7sh + 1] = '_';
	x[r_wa7sh - 7][c_wa7sh + 2] = 39;
	x[r_wa7sh - 7][c_wa7sh - 3] = '`';
	x[r_wa7sh - 8][c_wa7sh - 3] = '.';
	x[r_wa7sh - 8][c_wa7sh - 2] = '-';
	x[r_wa7sh - 8][c_wa7sh - 1] = '-';
	x[r_wa7sh - 8][c_wa7sh] = '\\';
	x[r_wa7sh - 9][c_wa7sh - 4] = '(';
	x[r_wa7sh - 9][c_wa7sh - 3] = '_';
	x[r_wa7sh - 9][c_wa7sh - 2] = ')';
	x[r_wa7sh - 10][c_wa7sh - 2] = '_';
	x[r_wa7sh - 10][c_wa7sh - 1] = '^';
	x[r_wa7sh - 10][c_wa7sh] = '_';
	x[r_wa7sh - 10][c_wa7sh - 3] = '`';
	x[r_wa7sh - 11][c_wa7sh - 2] = 'o';
	x[r_wa7sh - 11][c_wa7sh - 1] = 'o';
	x[r_wa7sh - 12][c_wa7sh - 2] = '/';
	x[r_wa7sh - 12][c_wa7sh - 1] = '\\';
	x[r_wa7sh - 12][c_wa7sh] = '/';
	x[r_wa7sh - 12][c_wa7sh + 1] = '\\';
	x[r_wa7sh - 13][c_wa7sh - 3] = '(';
	x[r_wa7sh - 14][c_wa7sh - 2] = '\\';
	x[r_wa7sh - 15][c_wa7sh - 2] = '/';
	x[r_wa7sh - 15][c_wa7sh - 1] = '(';
	x[r_wa7sh - 14][c_wa7sh - 1] = '\\';
	x[r_wa7sh - 14][c_wa7sh] = '_';
	x[r_wa7sh - 14][c_wa7sh + 1] = '_';
	x[r_wa7sh - 13][c_wa7sh + 2] = '`';
	x[r_wa7sh - 13][c_wa7sh + 3] = '_';
	x[r_wa7sh - 13][c_wa7sh + 3] = '/';
	x[r_wa7sh - 14][c_wa7sh + 4] = '/';
	x[r_wa7sh - 15][c_wa7sh + 5] = ')';
	x[r_wa7sh - 15][c_wa7sh + 6] = '`';
	x[r_wa7sh - 14][c_wa7sh + 6] = '|';
	x[r_wa7sh - 13][c_wa7sh + 6] = 39;
	x[r_wa7sh - 12][c_wa7sh + 6] = '\\';
	x[r_wa7sh - 12][c_wa7sh + 5] = '/';
	x[r_wa7sh - 11][c_wa7sh + 6] = '|';
	x[r_wa7sh - 10][c_wa7sh + 6] = 39;
	x[r_wa7sh - 9][c_wa7sh + 6] = '/';
	x[r_wa7sh - 8][c_wa7sh + 5] = '/';
	x[r_wa7sh - 7][c_wa7sh + 5] = '\\';
	x[r_wa7sh - 6][c_wa7sh + 5] = '|';
	x[r_wa7sh - 5][c_wa7sh + 5] = '/';
	x[r_wa7sh - 5][c_wa7sh + 6] = '=';
	x[r_wa7sh - 5][c_wa7sh + 7] = '=';
	x[r_wa7sh - 5][c_wa7sh + 8] = '=';
	x[r_wa7sh - 4][c_wa7sh + 6] = '\\';
	x[r_wa7sh - 4][c_wa7sh + 4] = 39;
	x[r_wa7sh - 4][c_wa7sh + 3] = ',';
	x[r_wa7sh - 4][c_wa7sh + 2] = '_';
	x[r_wa7sh - 4][c_wa7sh + 1] = '_';
	x[r_wa7sh - 4][c_wa7sh] = 39;
	x[r_wa7sh - 3][c_wa7sh + 6] = '|';
	x[r_wa7sh - 2][c_wa7sh + 5] = '/';
	x[r_wa7sh - 1][c_wa7sh + 5] = '|';
	x[r_wa7sh][c_wa7sh + 5] = ')';
	x[r_wa7sh][c_wa7sh + 4] = '_';
	x[r_wa7sh][c_wa7sh + 3] = '_';
	x[r_wa7sh][c_wa7sh + 2] = '_';
	x[r_wa7sh][c_wa7sh + 1] = '_';
	x[r_wa7sh - 1][c_wa7sh - 4] = ',';
	x[r_wa7sh - 1][c_wa7sh - 3] = '_';
	x[r_wa7sh - 1][c_wa7sh - 2] = '_';
	x[r_wa7sh - 1][c_wa7sh - 1] = '_';
	x[r_wa7sh - 1][c_wa7sh] = '_';
	x[r_wa7sh - 1][c_wa7sh + 1] = '_';
}
void laiser(char x[][1000], int r_laiser, int c_laiser)
{
	for (int c = c_laiser; c < c_laiser + 8; c++)
	{
		x[r_laiser][c] = '_';
	}
	x[r_laiser][c_laiser + 8] = '|';
	x[r_laiser - 1][c_laiser + 8] = '|';
	for (int c = c_laiser + 7; c > c_laiser - 1; c--)
	{
		x[r_laiser - 2][c] = '_';
	}
	x[r_laiser - 1][c_laiser + 4] = '$';
	x[r_laiser - 1][c_laiser - 1] = '|';
	x[r_laiser][c_laiser - 1] = '|';
	x[r_laiser - 1][c_laiser + 9] = '=';
	x[r_laiser - 1][c_laiser + 10] = '=';
	x[r_laiser][c_laiser + 9] = '=';
	x[r_laiser][c_laiser + 10] = '=';
	x[r_laiser - 1][c_laiser + 11] = '|';
	x[r_laiser][c_laiser + 11] = '|';
	x[r_laiser][c_laiser + 12] = '|';
	x[r_laiser - 1][c_laiser + 12] = '|';
	x[r_laiser - 2][c_laiser + 12] = '/';
	x[r_laiser + 1][c_laiser + 12] = '\\';
	x[r_laiser + 1][c_laiser + 4] = '/';
	x[r_laiser + 1][c_laiser + 5] = '\\';
}
void draw_lasser(char x[][1000], int& c_lasser, int r_lasser, int& ct_lasser)
{
	r_lasser = 35;
	if (ct_lasser == 0)
	{
		c_lasser = 113;
	}
	for (int c = c_lasser; c < c_lasser + 20; c++)
	{
		if (x[r_lasser][c] == ' ')
		{
			x[r_lasser - 1][c] = '>';
			x[r_lasser][c] = '>';
			x[r_lasser + 1][c] = '>';
			ct_lasser++;
		}
		else
		{
			c_lasser = 113;
			ct_lasser = 0;
			break;
		}
	}
}
void died_plane(char x[][1000], int r_hero, int c_hero, int& ct_plane, int c_granade, int r_granade)
{
	for (int i = c_hero; i < c_hero + 4; i++)
	{
		if (r_granade + 2 >= r_hero - 5 && i == c_granade)
		{
			ct_plane++;
		}
	}
}
void move_laiser(char x[][1000], int& c_lasser, int& r_laiser, int i)
{
	//c_lasser += 4;
	if (i % 2 == 0)
	{
		r_laiser += 2;
		c_lasser += 4;
	}
	if (i % 2 != 0)
	{
		r_laiser -= 2;
		c_lasser += 4;
	}
}
void draw_bolet_bigger(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& ct, int& flag_bolet, int& ct_skel, int& r_bolet)
{
	if (ct == 0)
	{
		r_bolet = r_hero - 7;
		c_bolet = c_hero + 16;
		ct_skel++;
	}
	if (x[r_bolet][c_bolet] == ' ' && c_bolet < 999)
	{
		x[r_bolet][c_bolet] = 175;
		ct++;
	}
	else
	{
		flag_bolet = 0;
		ct = 0;
	}
}
void move_bolet_bigger(int& c_bolet)
{
	c_bolet += 2;
}
void draw_bolet_double_bigger(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& fdd, int& flag_bolet_double, int& ct_skel)
{
	int r_boletd = r_hero - 7;
	//int ctbolet = 0;
	if (fdd == 0)
	{
		c_bolet = c_hero + 16;

		ct_skel += 1;
	}
	if (x[r_boletd][c_bolet] == ' ')
	{
		x[r_boletd][c_bolet] = 175;
		fdd++;
		//ctbolet++;
	}
	else
	{
		flag_bolet_double = 0;
		fdd = 0;

	}

}
void move_bolet_double_bigger(int& c_bolet)
{
	c_bolet += 2;

}
void draw_dbolet_bigger(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& ct, int& flag_bolet, int& ct_skel, int& r_bolet)
{
	if (ct == 0)
	{
		r_bolet = r_hero - 7;
		c_bolet = c_hero + 16;
		ct_skel += 3;
	}
	if (ct < 3)
	{
		if (x[r_bolet][c_bolet] == ' ')
		{
			x[r_bolet][c_bolet] = 'o';
			ct++;
		}
		else
		{
			flag_bolet = 0;
			ct = 0;
		}
	}
	else
	{
		for (int i = r_bolet - 1; i <= r_bolet + 1; i++)
		{
			if (x[i][c_bolet] == ' ')
			{
				x[i][c_bolet] = 175;
			}
			else
			{
				flag_bolet = 0;
				ct = 0;
			}
		}
	}
}
void move_dbolet_bigger(int& c_dbolet)
{
	c_dbolet += 2;
}
void draw_mbolet(char x[][1000], int r_hero, int c_hero, int& c_bolet, int& ct, int& r_bolet, int& ct_wa7sh)
{
	if (ct == 0)
	{
		r_bolet = r_hero - 5;
		c_bolet = c_hero - 15;
		ct_wa7sh++;
	}
	if (ct < 3)
	{
		if (x[r_bolet][c_bolet] == ' ')
		{
			x[r_bolet][c_bolet] = 'o';
			ct++;
		}
		else
		{
			ct = 0;
		}
	}
	else
	{
		for (int i = r_bolet - 1; i <= r_bolet + 1; i++)
		{
			if (x[i][c_bolet] == ' ')
			{
				x[i][c_bolet] = 174;
			}
			else
			{
				ct = 0;
			}
		}
	}
}
void move_mbolet(int& c_dbolet)
{
	c_dbolet -= 2;
}
void Draw_plane2(char X[][1000], int rplane, int cplane)
{
	X[rplane][cplane + 4] = '-';
	X[rplane][cplane + 5] = '_';
	X[rplane][cplane + 6] = '_';
	X[rplane][cplane + 7] = '_';
	X[rplane][cplane + 8] = '_';
	X[rplane][cplane + 9] = '|';
	X[rplane][cplane + 10] = '_';
	X[rplane][cplane + 11] = '_';
	X[rplane][cplane + 12] = '_';
	X[rplane][cplane + 13] = '_';
	X[rplane][cplane + 14] = '-';
	X[rplane + 1][cplane] = '*';
	X[rplane + 1][cplane + 1] = '>';
	X[rplane + 1][cplane + 2] = '=';
	X[rplane + 1][cplane + 3] = '=';
	X[rplane + 1][cplane + 4] = '=';
	X[rplane + 1][cplane + 5] = '=';
	X[rplane + 1][cplane + 6] = '=';
	X[rplane + 1][cplane + 7] = '[';
	X[rplane + 1][cplane + 8] = '_';
	X[rplane + 1][cplane + 9] = '_';
	X[rplane + 1][cplane + 10] = ']';
	X[rplane + 1][cplane + 11] = 'L';
	X[rplane + 1][cplane + 12] = ')';
	X[rplane + 2][cplane + 6] = '-';
	X[rplane + 2][cplane + 7] = '"';
	X[rplane + 2][cplane + 8] = '-';
	X[rplane + 2][cplane + 9] = '`';
	X[rplane + 2][cplane + 10] = '-';
}
void move_p2(char x[][1000], int& r_p2, int& c_p2, int i)
{
	if (i % 2 == 0)
	{
		c_p2++;
		r_p2 += 5;

	}
	if (i % 2 != 0)
	{
		c_p2++;
		r_p2 -= 5;

	}
}

void sky2(char x[][1000], int rs, int cs)
{
	x[rs - 14][cs + 10] = '*';
	x[rs - 14][cs + 18] = '+';
	x[rs - 13][cs + 11] = '\'';
	x[rs - 13][cs + 30] = '|';
	x[rs - 12][cs + 7] = '(';
	x[rs - 12][cs + 8] = ')';
	x[rs - 12][cs + 13] = '.';
	x[rs - 12][cs + 14] = '-';
	x[rs - 12][cs + 15] = '.';
	x[rs - 12][cs + 16] = ',';
	x[rs - 12][cs + 17] = '=';
	x[rs - 12][cs + 18] = '"';
	x[rs - 12][cs + 19] = '`';
	x[rs - 12][cs + 20] = '`';
	x[rs - 12][cs + 21] = '"';
	x[rs - 12][cs + 22] = '=';
	x[rs - 12][cs + 23] = '.';
	x[rs - 12][cs + 28] = '-';
	x[rs - 12][cs + 30] = 'o';
	x[rs - 12][cs + 32] = '-';
	x[rs - 11][cs + 13] = '\'';
	x[rs - 11][cs + 14] = '=';
	x[rs - 11][cs + 15] = '/';
	x[rs - 11][cs + 16] = '_';
	x[rs - 11][cs + 24] = '\\';
	x[rs - 11][cs + 30] = '|';
	x[rs - 10][cs + 10] = '*';
	x[rs - 10][cs + 14] = '|';
	x[rs - 10][cs + 17] = '\'';
	x[rs - 10][cs + 18] = '=';
	x[rs - 10][cs + 19] = '.';
	x[rs - 10][cs + 20] = '_';
	x[rs - 10][cs + 25] = '|';
	x[rs - 9][cs + 15] = '\\';
	x[rs - 9][cs + 21] = '`';
	x[rs - 9][cs + 22] = '=';
	x[rs - 9][cs + 23] = '.';
	x[rs - 9][cs + 24] = '/';
	x[rs - 9][cs + 25] = '`';
	x[rs - 9][cs + 26] = ',';
	x[rs - 9][cs + 35] = '\'';
	x[rs - 8][cs + 12] = '.';
	x[rs - 8][cs + 16] = '\'';
	x[rs - 8][cs + 17] = '=';
	x[rs - 8][cs + 18] = '.';
	x[rs - 8][cs + 19] = '_';
	x[rs - 8][cs + 20] = '_';
	x[rs - 8][cs + 21] = '.';
	x[rs - 8][cs + 22] = '=';
	x[rs - 8][cs + 23] = '\'';
	x[rs - 8][cs + 25] = '`';
	x[rs - 8][cs + 26] = '=';
	x[rs - 8][cs + 27] = '\'';
	x[rs - 8][cs + 34] = '*';
	x[rs - 7][cs + 3] = '+';
	x[rs - 7][cs + 29] = '+';
	x[rs - 6][cs + 8] = 'O';
	x[rs - 6][cs + 15] = '*';
	x[rs - 6][cs + 24] = '\'';
	x[rs - 6][cs + 32] = '.';
}
void star(char x[][1000], int r_star, int c_star)
{
	x[r_star - 14][c_star + 0] = '\\';
	x[r_star - 14][c_star + 3] = ':';
	x[r_star - 14][c_star + 6] = '/';
	x[r_star - 13][c_star + 0] = '`';
	x[r_star - 13][c_star + 1] = '.';
	x[r_star - 13][c_star + 3] = '_';
	x[r_star - 13][c_star + 4] = '_';
	x[r_star - 13][c_star + 5] = '/';
	x[r_star - 13][c_star + 7] = '\\';
	x[r_star - 13][c_star + 8] = '_';
	x[r_star - 13][c_star + 9] = '_';
	x[r_star - 13][c_star + 11] = '.';
	x[r_star - 13][c_star + 12] = '\'';
	x[r_star - 12][c_star + 0] = '_';
	x[r_star - 12][c_star + 2] = '_';
	x[r_star - 12][c_star + 3] = '\\';
	x[r_star - 12][c_star + 9] = '/';
	x[r_star - 12][c_star + 10] = '_';
	x[r_star - 12][c_star + 12] = '_';
	x[r_star - 11][c_star + 3] = '/';
	x[r_star - 11][c_star + 4] = '_';
	x[r_star - 11][c_star + 8] = '_';
	x[r_star - 11][c_star + 9] = '\\';
	x[r_star - 10][c_star + 1] = '.';
	x[r_star - 10][c_star + 2] = '\'';
	x[r_star - 10][c_star + 5] = '\\';
	x[r_star - 10][c_star + 7] = '/';
	x[r_star - 10][c_star + 10] = '`';
	x[r_star - 10][c_star + 11] = '.';
	x[r_star - 9][c_star + 3] = '/';
	x[r_star - 9][c_star + 6] = ':';
	x[r_star - 9][c_star + 9] = '\\';
}
void move_star(int& r_s, int i)
{
	if (i % 2 == 0)
	{
		r_s -= 2;
	}
	if (i % 2 != 0)
	{
		r_s += 2;
	}
}
void bat(char x[][1000], int rbt, int cbt)
{
	x[rbt - 9][cbt + 7] = '(';
	x[rbt - 9][cbt + 8] = '_';
	x[rbt - 9][cbt + 13] = ',';
	x[rbt - 9][cbt + 14] = '_';
	x[rbt - 9][cbt + 15] = ',';
	x[rbt - 9][cbt + 20] = '_';
	x[rbt - 9][cbt + 21] = ')';
	x[rbt - 8][cbt + 7] = '/';
	x[rbt - 8][cbt + 9] = '`';
	x[rbt - 8][cbt + 10] = '\'';
	x[rbt - 8][cbt + 11] = '-';
	x[rbt - 8][cbt + 12] = '-';
	x[rbt - 8][cbt + 13] = ')';
	x[rbt - 8][cbt + 15] = '(';
	x[rbt - 8][cbt + 16] = '-';
	x[rbt - 8][cbt + 17] = '-';
	x[rbt - 8][cbt + 18] = '\'';
	x[rbt - 8][cbt + 19] = '`';
	x[rbt - 8][cbt + 21] = '\\';
	x[rbt - 7][cbt + 6] = '/';
	x[rbt - 7][cbt + 9] = '_';
	x[rbt - 7][cbt + 10] = ',';
	x[rbt - 7][cbt + 11] = '-';
	x[rbt - 7][cbt + 12] = '\'';
	x[rbt - 7][cbt + 13] = '\\';
	x[rbt - 7][cbt + 14] = '_';
	x[rbt - 7][cbt + 15] = '/';
	x[rbt - 7][cbt + 16] = '\'';
	x[rbt - 7][cbt + 17] = '-';
	x[rbt - 7][cbt + 18] = ',';
	x[rbt - 7][cbt + 19] = '_';
	x[rbt - 7][cbt + 22] = '\\';
	x[rbt - 6][cbt + 5] = '/';
	x[rbt - 6][cbt + 6] = '.';
	x[rbt - 6][cbt + 7] = '-';
	x[rbt - 6][cbt + 8] = '\'';
	x[rbt - 6][cbt + 14] = '"';
	x[rbt - 6][cbt + 20] = '\'';
	x[rbt - 6][cbt + 21] = '-';
	x[rbt - 6][cbt + 22] = '.';
	x[rbt - 6][cbt + 23] = '\\';
}
void move_bat(int& rbt, int& rbt3, int i)
{
	if (i % 2 == 0)
	{
		rbt += 4;
		rbt3 -= 4;
	}
	if (i % 2 != 0)
	{
		rbt -= 4;
		rbt3 += 4;
	}
}
void draw_ann(char x[][1000], int ra, int ca)
{
	x[ra - 12][ca + 10] = '_';
	x[ra - 12][ca + 11] = '/';
	x[ra - 12][ca + 13] = '\'';
	x[ra - 12][ca + 14] = '>';
	x[ra - 11][ca + 4] = '_';
	x[ra - 11][ca + 6] = '_';
	x[ra - 11][ca + 7] = '.';
	x[ra - 11][ca + 8] = '-';
	x[ra - 11][ca + 9] = '\'';
	x[ra - 11][ca + 10] = '(';
	x[ra - 11][ca + 14] = ')';
	x[ra - 11][ca + 15] = '\'';
	x[ra - 11][ca + 16] = '-';
	x[ra - 11][ca + 17] = '.';
	x[ra - 11][ca + 18] = '_';
	x[ra - 11][ca + 20] = '_';
	x[ra - 10][ca + 3] = '\'';
	x[ra - 10][ca + 4] = '=';
	x[ra - 10][ca + 5] = '.';
	x[ra - 10][ca + 6] = '_';
	x[ra - 10][ca + 7] = '.';
	x[ra - 10][ca + 8] = '=';
	x[ra - 10][ca + 9] = '-';
	x[ra - 10][ca + 10] = '(';
	x[ra - 10][ca + 14] = ')';
	x[ra - 10][ca + 15] = '-';
	x[ra - 10][ca + 16] = '=';
	x[ra - 10][ca + 17] = '.';
	x[ra - 10][ca + 18] = '_';
	x[ra - 10][ca + 19] = '.';
	x[ra - 10][ca + 20] = '=';
	x[ra - 10][ca + 21] = '\'';
	x[ra - 9][ca + 10] = '|';
	x[ra - 9][ca + 11] = '/';
	x[ra - 9][ca + 12] = '-';
	x[ra - 9][ca + 13] = '\\';
	x[ra - 9][ca + 14] = '|';
	x[ra - 8][ca + 10] = 'Y';
	x[ra - 8][ca + 14] = 'Y';
}
void draw_r(char x[][1000], int rr, int cr)
{
	x[rr - 9][cr + 2] = '/';
	x[rr - 9][cr + 3] = '\\';
	x[rr - 8][cr + 1] = '/';
	x[rr - 8][cr + 4] = '\\';
	x[rr - 7][cr + 1] = '|';
	x[rr - 7][cr + 4] = '|';
	x[rr - 6][cr + 1] = '|';
	x[rr - 6][cr + 4] = '|';
	x[rr - 5][cr + 0] = '/';
	x[rr - 5][cr + 2] = '=';
	x[rr - 5][cr + 3] = '=';
	x[rr - 5][cr + 5] = '\\';
	x[rr - 4][cr + 0] = '|';
	x[rr - 4][cr + 1] = '/';
	x[rr - 4][cr + 2] = '*';
	x[rr - 4][cr + 3] = '*';
	x[rr - 4][cr + 4] = '\\';
	x[rr - 4][cr + 5] = '|';
}
void move_r(int& rr)
{
	rr -= 2;
}
void draw_poom(char x[][1000], int rsh, int csh)
{
	x[rsh - 14][csh + 5] = '.';
	x[rsh - 13][csh + 17] = '.';
	x[rsh - 12][csh + 17] = '.';
	x[rsh - 12][csh + 25] = ':';
	x[rsh - 11][csh + 17] = ':';
	x[rsh - 11][csh + 24] = '.';
	x[rsh - 10][csh + 8] = ':';
	x[rsh - 10][csh + 9] = '.';
	x[rsh - 10][csh + 10] = '.';
	x[rsh - 10][csh + 14] = ':';
	x[rsh - 10][csh + 17] = ':';
	x[rsh - 10][csh + 19] = ':';
	x[rsh - 10][csh + 22] = '.';
	x[rsh - 9][csh + 11] = '.';
	x[rsh - 9][csh + 12] = '.';
	x[rsh - 9][csh + 15] = ';';
	x[rsh - 9][csh + 17] = ':';
	x[rsh - 9][csh + 18] = ':';
	x[rsh - 9][csh + 20] = '.';
	x[rsh - 8][csh + 14] = '.';
	x[rsh - 8][csh + 15] = '.';
	x[rsh - 8][csh + 16] = '.';
	x[rsh - 8][csh + 18] = '.';
	x[rsh - 8][csh + 19] = '.';
	x[rsh - 8][csh + 21] = ':';
	x[rsh - 8][csh + 22] = '.';
	x[rsh - 8][csh + 23] = '.';
	x[rsh - 7][csh + 13] = ':';
	x[rsh - 7][csh + 14] = ':';
	x[rsh - 7][csh + 15] = ':';
	x[rsh - 7][csh + 17] = ':';
	x[rsh - 7][csh + 18] = '.';
	x[rsh - 7][csh + 19] = '.';
	x[rsh - 7][csh + 20] = '.';
	x[rsh - 6][csh + 9] = ':';
	x[rsh - 6][csh + 10] = ':';
	x[rsh - 6][csh + 11] = '.';
	x[rsh - 6][csh + 12] = ':';
	x[rsh - 6][csh + 13] = '.';
	x[rsh - 6][csh + 14] = ':';
	x[rsh - 6][csh + 15] = '.';
	x[rsh - 6][csh + 16] = '.';
	x[rsh - 6][csh + 17] = '.';
	x[rsh - 6][csh + 18] = ';';
	x[rsh - 6][csh + 19] = ';';
	x[rsh - 6][csh + 21] = '.';
	x[rsh - 6][csh + 22] = '.';
	x[rsh - 6][csh + 23] = '.';
	x[rsh - 6][csh + 24] = '.';
	x[rsh - 6][csh + 25] = '.';
	x[rsh - 5][csh + 6] = ':';
	x[rsh - 5][csh + 7] = '.';
	x[rsh - 5][csh + 8] = '.';
	x[rsh - 5][csh + 14] = '.';
	x[rsh - 5][csh + 15] = ';';
	x[rsh - 5][csh + 16] = '.';
	x[rsh - 5][csh + 17] = '.';
	x[rsh - 5][csh + 19] = ':';
	x[rsh - 5][csh + 20] = ';';
	x[rsh - 5][csh + 26] = '.';
	x[rsh - 5][csh + 27] = '.';
	x[rsh - 4][csh + 12] = '.';
	x[rsh - 4][csh + 14] = ':';
	x[rsh - 4][csh + 15] = '.';
	x[rsh - 4][csh + 17] = '.';
	x[rsh - 4][csh + 20] = ';';
	x[rsh - 4][csh + 21] = '.';
	x[rsh - 3][csh + 13] = '.';
	x[rsh - 3][csh + 14] = ':';
	x[rsh - 3][csh + 16] = ';';
	x[rsh - 3][csh + 17] = ';';
	x[rsh - 3][csh + 18] = ':';
	x[rsh - 3][csh + 20] = ';';
	x[rsh - 3][csh + 21] = '.';
}
void game_over(char x[][1000], int rg, int cg)
{
	x[rg - 14][cg + 2] = '_';
	x[rg - 14][cg + 3] = '_';
	x[rg - 14][cg + 4] = '_';
	x[rg - 14][cg + 5] = '_';
	x[rg - 14][cg + 29] = '_';
	x[rg - 14][cg + 30] = '_';
	x[rg - 14][cg + 31] = '_';
	x[rg - 13][cg + 1] = '/';
	x[rg - 13][cg + 3] = '_';
	x[rg - 13][cg + 4] = '_';
	x[rg - 13][cg + 5] = '_';
	x[rg - 13][cg + 6] = '|';
	x[rg - 13][cg + 8] = '_';
	x[rg - 13][cg + 9] = '_';
	x[rg - 13][cg + 11] = '_';
	x[rg - 13][cg + 13] = '_';
	x[rg - 13][cg + 15] = '_';
	x[rg - 13][cg + 16] = '_';
	x[rg - 13][cg + 18] = '_';
	x[rg - 13][cg + 19] = '_';
	x[rg - 13][cg + 20] = '_';
	x[rg - 13][cg + 24] = '_';
	x[rg - 13][cg + 25] = '_';
	x[rg - 13][cg + 26] = '_';
	x[rg - 13][cg + 28] = '/';
	x[rg - 13][cg + 30] = '_';
	x[rg - 13][cg + 32] = '\\';
	x[rg - 13][cg + 33] = '_';
	x[rg - 13][cg + 34] = '_';
	x[rg - 13][cg + 38] = '_';
	x[rg - 13][cg + 39] = '_';
	x[rg - 13][cg + 40] = '_';
	x[rg - 13][cg + 41] = '_';
	x[rg - 13][cg + 42] = '_';
	x[rg - 13][cg + 44] = '_';
	x[rg - 13][cg + 46] = '_';
	x[rg - 13][cg + 47] = '_';
	x[rg - 12][cg + 0] = '|';
	x[rg - 12][cg + 2] = '|';
	x[rg - 12][cg + 5] = '_';
	x[rg - 12][cg + 7] = '/';
	x[rg - 12][cg + 9] = '_';
	x[rg - 12][cg + 10] = '`';
	x[rg - 12][cg + 12] = '|';
	x[rg - 12][cg + 14] = '\'';
	x[rg - 12][cg + 15] = '_';
	x[rg - 12][cg + 17] = '`';
	x[rg - 12][cg + 19] = '_';
	x[rg - 12][cg + 21] = '\\';
	x[rg - 12][cg + 23] = '/';
	x[rg - 12][cg + 25] = '_';
	x[rg - 12][cg + 27] = '\\';
	x[rg - 12][cg + 29] = '|';
	x[rg - 12][cg + 31] = '|';
	x[rg - 12][cg + 33] = '\\';
	x[rg - 12][cg + 35] = '\\';
	x[rg - 12][cg + 37] = '/';
	x[rg - 12][cg + 39] = '/';
	x[rg - 12][cg + 41] = '_';
	x[rg - 12][cg + 43] = '\\';
	x[rg - 12][cg + 45] = '\'';
	x[rg - 12][cg + 46] = '_';
	x[rg - 12][cg + 47] = '_';
	x[rg - 12][cg + 48] = '|';
	x[rg - 11][cg + 0] = '|';
	x[rg - 11][cg + 2] = '|';
	x[rg - 11][cg + 3] = '_';
	x[rg - 11][cg + 4] = '|';
	x[rg - 11][cg + 6] = '|';
	x[rg - 11][cg + 8] = '(';
	x[rg - 11][cg + 9] = '_';
	x[rg - 11][cg + 10] = '|';
	x[rg - 11][cg + 12] = '|';
	x[rg - 11][cg + 14] = '|';
	x[rg - 11][cg + 16] = '|';
	x[rg - 11][cg + 18] = '|';
	x[rg - 11][cg + 20] = '|';
	x[rg - 11][cg + 22] = '|';
	x[rg - 11][cg + 25] = '_';
	x[rg - 11][cg + 26] = '_';
	x[rg - 11][cg + 27] = '/';
	x[rg - 11][cg + 29] = '|';
	x[rg - 11][cg + 30] = '_';
	x[rg - 11][cg + 31] = '|';
	x[rg - 11][cg + 33] = '|';
	x[rg - 11][cg + 34] = '\\';
	x[rg - 11][cg + 36] = 'V';
	x[rg - 11][cg + 38] = '/';
	x[rg - 11][cg + 41] = '_';
	x[rg - 11][cg + 42] = '_';
	x[rg - 11][cg + 43] = '/';
	x[rg - 11][cg + 45] = '|';
	x[rg - 10][cg + 1] = '\\';
	x[rg - 10][cg + 2] = '_';
	x[rg - 10][cg + 3] = '_';
	x[rg - 10][cg + 4] = '_';
	x[rg - 10][cg + 5] = '_';
	x[rg - 10][cg + 6] = '|';
	x[rg - 10][cg + 7] = '\\';
	x[rg - 10][cg + 8] = '_';
	x[rg - 10][cg + 9] = '_';
	x[rg - 10][cg + 10] = ',';
	x[rg - 10][cg + 11] = '_';
	x[rg - 10][cg + 12] = '|';
	x[rg - 10][cg + 13] = '_';
	x[rg - 10][cg + 14] = '|';
	x[rg - 10][cg + 16] = '|';
	x[rg - 10][cg + 17] = '_';
	x[rg - 10][cg + 18] = '|';
	x[rg - 10][cg + 20] = '|';
	x[rg - 10][cg + 21] = '_';
	x[rg - 10][cg + 22] = '|';
	x[rg - 10][cg + 23] = '\\';
	x[rg - 10][cg + 24] = '_';
	x[rg - 10][cg + 25] = '_';
	x[rg - 10][cg + 26] = '_';
	x[rg - 10][cg + 27] = '|';
	x[rg - 10][cg + 28] = '\\';
	x[rg - 10][cg + 29] = '_';
	x[rg - 10][cg + 30] = '_';
	x[rg - 10][cg + 31] = '_';
	x[rg - 10][cg + 32] = '/';
	x[rg - 10][cg + 35] = '\\';
	x[rg - 10][cg + 36] = '_';
	x[rg - 10][cg + 37] = '/';
	x[rg - 10][cg + 39] = '\\';
	x[rg - 10][cg + 40] = '_';
	x[rg - 10][cg + 41] = '_';
	x[rg - 10][cg + 42] = '_';
	x[rg - 10][cg + 43] = '|';
	x[rg - 10][cg + 44] = '_';
	x[rg - 10][cg + 45] = '|';
}
void winner(char x[][1000], int rw, int cw)
{
	x[rw - 14][cw + 10] = '_';
	x[rw - 13][cw + 0] = '_';
	x[rw - 13][cw + 1] = '_';
	x[rw - 13][cw + 8] = '_';
	x[rw - 13][cw + 9] = '(';
	x[rw - 13][cw + 10] = '_';
	x[rw - 13][cw + 11] = ')';
	x[rw - 13][cw + 12] = '_';
	x[rw - 13][cw + 14] = '_';
	x[rw - 13][cw + 15] = '_';
	x[rw - 13][cw + 18] = '_';
	x[rw - 13][cw + 20] = '_';
	x[rw - 13][cw + 21] = '_';
	x[rw - 13][cw + 25] = '_';
	x[rw - 13][cw + 26] = '_';
	x[rw - 13][cw + 27] = '_';
	x[rw - 13][cw + 29] = '_';
	x[rw - 13][cw + 31] = '_';
	x[rw - 13][cw + 32] = '_';
	x[rw - 12][cw + 0] = '\\';
	x[rw - 12][cw + 2] = '\\';
	x[rw - 12][cw + 4] = '/';
	x[rw - 12][cw + 5] = '\\';
	x[rw - 12][cw + 7] = '/';
	x[rw - 12][cw + 9] = '/';
	x[rw - 12][cw + 11] = '|';
	x[rw - 12][cw + 13] = '\'';
	x[rw - 12][cw + 14] = '_';
	x[rw - 12][cw + 16] = '\\';
	x[rw - 12][cw + 17] = '|';
	x[rw - 12][cw + 19] = '\'';
	x[rw - 12][cw + 20] = '_';
	x[rw - 12][cw + 22] = '\\';
	x[rw - 12][cw + 24] = '/';
	x[rw - 12][cw + 26] = '_';
	x[rw - 12][cw + 28] = '\\';
	x[rw - 12][cw + 30] = '\'';
	x[rw - 12][cw + 31] = '_';
	x[rw - 12][cw + 32] = '_';
	x[rw - 12][cw + 33] = '|';
	x[rw - 11][cw + 1] = '\\';
	x[rw - 11][cw + 3] = 'V';
	x[rw - 11][cw + 6] = 'V';
	x[rw - 11][cw + 8] = '/';
	x[rw - 11][cw + 9] = '|';
	x[rw - 11][cw + 11] = '|';
	x[rw - 11][cw + 13] = '|';
	x[rw - 11][cw + 15] = '|';
	x[rw - 11][cw + 17] = '|';
	x[rw - 11][cw + 19] = '|';
	x[rw - 11][cw + 21] = '|';
	x[rw - 11][cw + 23] = '|';
	x[rw - 11][cw + 26] = '_';
	x[rw - 11][cw + 27] = '_';
	x[rw - 11][cw + 28] = '/';
	x[rw - 11][cw + 30] = '|';
	x[rw - 10][cw + 2] = '\\';
	x[rw - 10][cw + 3] = '_';
	x[rw - 10][cw + 4] = '/';
	x[rw - 10][cw + 5] = '\\';
	x[rw - 10][cw + 6] = '_';
	x[rw - 10][cw + 7] = '/';
	x[rw - 10][cw + 9] = '|';
	x[rw - 10][cw + 10] = '_';
	x[rw - 10][cw + 11] = '|';
	x[rw - 10][cw + 12] = '_';
	x[rw - 10][cw + 13] = '|';
	x[rw - 10][cw + 15] = '|';
	x[rw - 10][cw + 16] = '_';
	x[rw - 10][cw + 17] = '|';
	x[rw - 10][cw + 18] = '_';
	x[rw - 10][cw + 19] = '|';
	x[rw - 10][cw + 21] = '|';
	x[rw - 10][cw + 22] = '_';
	x[rw - 10][cw + 23] = '|';
	x[rw - 10][cw + 24] = '\\';
	x[rw - 10][cw + 25] = '_';
	x[rw - 10][cw + 26] = '_';
	x[rw - 10][cw + 27] = '_';
	x[rw - 10][cw + 28] = '|';
	x[rw - 10][cw + 29] = '_';
	x[rw - 10][cw + 30] = '|';
}
void main()
{
	char menu[24][80];
	int value = 0;
	int r_name = 15;
	int c_name = 32;
	for (; value != 1;)
	{
		draw_menu(menu);
		draw_name(menu, r_name, c_name);
		dis_menu(menu, value);
	}
	char map[40][1000];
	int number_rows = 40;
	int number_cols = 1000;
	int r_h = 36, c_h = 1;
	int r_stick = 34;
	int c_stick = 17;
	int dir_stick = 1;
	int move_count = 0;
	int move_len = 10;
	int rf = 36;
	int cf = 20;
	int r_heart = 2;
	int c_heart = 2;
	//selm1
	int r_selm = 15;
	int c_selm = 442;
	//selm2
	int r_selm_2 = 36;
	int c_selm_2 = 45;
	int r_sky = 6;
	int r_sky2 = 2;
	int c_sky = 25;
	int c_sky2 = 45;
	int c_sky3 = 65;
	int r_moon = 2;
	int c_moon = 7;
	float start = 0;
	float end = 100;
	int move_ct = 0;
	int flag = 0;
	//plane
	int r_plane = 13;
	int c_plane = 100;
	int ct_plane = 0;
	//step
	int r_step = 19;
	int c_step = 100;
	int ct_stp1 = 0;
	int ct_stp2 = 0;
	int ct_stp3 = 0;
	int m = 0;
	int b = 0;
	int c = 0;
	//skel
	int r_skel = 29;
	int c_skel = 300;
	int ct_skel = 0;
	int r_granade = 0;
	int c_granade = 0;
	int flag_reverse = 0;
	int flag_bolet = 0;
	int c_bolet = 0;
	int r_bolet = 0;
	int value_bolet_count = 0;
	int ct_granade = 0;
	//bolet double
	int flag_bolet_double1 = 0;
	int flag_bolet_double2 = 0;
	int flag_bolet_double3 = 0;
	int flag_bolet_double4 = 0;
	int flag_bolet_double5 = 0;
	int flag_bolet_double6 = 0;
	int c_boletd1 = 0;
	int r_boletd1 = 0;
	int fdd1 = 0;
	int c_boletd2 = 0;
	int r_boletd2 = 0;
	int fdd2 = 0;
	int c_boletd3 = 0;
	int r_boletd3 = 0;
	int fdd3 = 0;
	int c_boletd4 = 0;
	int r_boletd4 = 0;
	int fdd4 = 0;
	int c_boletd5 = 0;
	int r_boletd5 = 0;
	int fdd5 = 0;
	int c_boletd6 = 0;
	int r_boletd6 = 0;
	int fdd6 = 0;
	int ct_bd = 0;
	int ct_bd2 = 0;
	int ct_bd3 = 0;
	int ct_bd4 = 0;
	int ct_bd5 = 0;
	int ct_bd6 = 0;
	int ct_bd7 = 0;
	//died
	int flaglive = 0;
	int c_stepS = 80;
	int c_stepE = 245;
	int r_stepdied = 32;
	//box
	int r_box = 36;
	int c_box = 455;
	int flag_box = 0;
	//bigger
	int r_bigger = r_h;
	int c_bigger = c_box - 8;
	int flagbigger = 0;
	//elevator
	int r_elevator = 36;
	int c_elevator = 360;
	int flag_elevator = 0;
	//step_ev
	int r_ev = 14;
	int c_ev = 402;
	//key
	int r_k = 12;
	int c_k = 417;
	int flag_key = 0;
	int ct_key = 0;
	//wa7sh
	int r_wa7sh = 36;
	int c_wa7sh = 551;
	//lasser
	int r_lasser = 35;
	int c_lasser = 113;
	int ct_lasser = 0;
	int r_laiser = 35;
	int c_laiser = 99;
	int l = 0;
	int flag_dbolet = 0;
	int r_dbolet = 0;
	int c_dbolet = 0;
	int count_dbolet = 0;
	int flag_stop = 0;
	int c_mbolet = 0;
	int  count_mbolet = 0;
	int r_mbolet = 0;
	int ct_wa7sh = 0;
	//plane2
	int r_p2 = 6;
	int c_p2 = 365;;
	int i = 0;
	int flag_dww = 0;
	//selm3
	int c_s3 = 565;
	int r_s3 = 36;
	//sky2
	int rs = 15;
	int cs = 125;
	int cs2 = 170;
	//star
	int r_star = 15;
	int c_star = 159;
	int c_star2 = 204;
	//bat
	int rbt = 15;
	int cbt1 = 235;
	int cbt2 = 285;
	int cbt3 = 260;
	int rbt3 = 11;
	//e
	int r_a = 20;
	int c_a = 430;
	//ro
	int rr = 35;
	int cr = c_wa7sh - 12;
	int flag_r = 0;
	int flag_move_r = 0;
	//pooom
	int rsh = 20;
	int csh = c_wa7sh - 35;
	//game over
	int rg = 30;
	int cg = 15;
	int flag_game_over = 0;
	//winner
	int flag_winer = 0;
	int r_w = 30;
	int c_w = c_wa7sh - 35;
	for (;;)
	{
		for (; !_kbhit();)
		{
			i++;
			clear(map, number_rows, number_cols);
			draw_map(map, number_rows, number_cols);
			draw_selm3(map, r_s3, c_s3);
			draw_step_elv(map, r_ev, c_ev);
			if (flag_winer == 1)
			{
				winner(map, r_w, c_w);
			}
			if (flag_r == 1)
			{

				if (rr > 15)
				{
					draw_r(map, rr, cr);
					move_r(rr);
				}
				else
				{
					draw_poom(map, rsh, csh);
					flag_move_r = 1;
				}
				if (flag_move_r == 1)
				{
					flag_move_r = 0;
					rr = 35;
				}
			}
			if (ct_skel < 12)
			{
				draw_ann(map, r_a, c_a);
			}
			//died_plane(map, r_h, c_h, ct_plane, c_granade, r_granade);
			Draw_plane2(map, r_p2, c_p2);
			move_p2(map, r_p2, c_p2, i);
			sky2(map, rs, cs);
			sky2(map, rs, cs2);
			star(map, r_star, c_star);
			star(map, r_star, c_star2);
			move_star(r_star, i);
			bat(map, rbt, cbt1);
			bat(map, rbt, cbt2);
			bat(map, rbt3, cbt3);
			move_bat(rbt, rbt3, i);
			if (flag_game_over == 1)
			{
				game_over(map, rg, cg);
			}
			if (c_p2 == 551)
			{
				c_p2 = 455;
			}
			if (ct_wa7sh > 12)
			{
				flagbigger = 0;
				cg = 500;
				flag_game_over = 1;
			}
			if (ct_plane > 3)
			{
				flaglive = 1;
				cg = 15;
				flag_game_over = 1;
			}
			if (c_h + 4 == c_k)
			{
				flag_key = 1;
				ct_key++;
			}
			if (flag_key == 0)
			{
				draw_key(map, r_k, c_k);
			}
			if (flaglive == 0)
			{
				draw_hero(map, r_h, c_h);
			}
			draw_stick(map, r_stick, c_stick);
			move_stick(map, c_stick, dir_stick, move_count, move_len);
			draw_fire(map, rf, cf);
			//draw_heart(map, r_heart, c_heart);
			draw_selm(map, r_selm, c_selm);
			draw_selm_2(map, r_selm_2, c_selm_2);
			//step
			draw_step(map, r_step, c_step, ct_stp1, ct_stp2, ct_stp3);
			if (c_h >= c_step + 28)
			{
				m++;
				if (m % 2 == 0)
				{
					ct_stp1++;
				}
			}
			if (c_h >= c_step + 61)
			{
				b++;
				if (b % 2 == 0)
				{
					ct_stp2++;
				}
			}
			if (c_h >= c_step + 93)
			{
				c++;
				if (c % 2 == 0)
				{
					ct_stp3++;
				}
			}
			laiser(map, r_laiser, c_laiser);
			//lasser

			draw_lasser(map, c_lasser, r_lasser, ct_lasser);
			move_laiser(map, c_lasser, r_lasser, i);
			plane(map, r_plane, c_plane);
			move_plane(map, c_plane);
			granade(map, c_granade, r_granade, c_plane, r_plane, ct_granade);
			fire_granade(r_granade);
			sky(map, r_sky, c_sky);
			draw_moon(map, r_moon, c_moon);
			sky(map, r_sky2, c_sky2);
			sky(map, r_sky, c_sky3);
			if (c_h + 5 == c_skel - 4 && ct_skel < 4)
			{
				flaglive = 1;
				cg = 265;
				flag_game_over = 1;

			}
			gravity(map, r_h, c_h);
			Scroll(start, end, c_h, move_ct, flag);
			died_hero(map, r_h, c_h, rf, cf, r_stepdied, c_stepS, c_stepE, flaglive);
			if (ct_skel < 19)
			{
				wa7sh(map, r_wa7sh, c_wa7sh);

			}
			else
			{
				flag_dww = 1;
				flag_winer = 1;
				flag_r = 1;
			}
			if (ct_skel < 8)
			{
				skeleton(map, r_skel, c_skel);
				if (flag_stop != 1)
				{
					move_skel(map, c_h, c_skel, r_skel, flag_stop);
				}
			}
			if (ct_key < 4 && flag_box == 0)
			{
				drow_box(map, r_box, c_box);
			}

			if (flaglive == 0 && flag_bolet == 1)
			{
				draw_bolet(map, r_h, c_h, c_bolet, value_bolet_count, flag_bolet, ct_skel, r_bolet);
				move_bolet(c_bolet);
			}
			if (flaglive == 1 && flag_bolet == 1)
			{
				draw_bolet_bigger(map, r_h, c_h, c_bolet, value_bolet_count, flag_bolet, ct_skel, r_bolet);
				move_bolet_bigger(c_bolet);
			}
			/// </summary>
			if (flaglive == 0)
			{


				if (ct_bd == 1)
				{
					ct_bd2++;
				}
				if (ct_bd2 == 1)
				{
					flag_bolet_double1 = 1;
				}
				if (flag_bolet_double1 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd1, fdd1, flag_bolet_double1, ct_skel);
					move_bolet_double(c_boletd1);
				}
				if (ct_bd == 2)
				{
					ct_bd3++;
				}
				if (ct_bd3 == 1)
				{
					flag_bolet_double2 = 1;
				}
				if (flag_bolet_double2 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd2, fdd2, flag_bolet_double2, ct_skel);
					move_bolet_double(c_boletd2);
				}
				if (ct_bd == 3)
				{
					ct_bd3++;
				}
				if (ct_bd3 == 1)
				{
					flag_bolet_double3 = 1;
				}
				if (flag_bolet_double3 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd3, fdd3, flag_bolet_double3, ct_skel);
					move_bolet_double(c_boletd3);
				}
				if (ct_bd == 4)
				{
					ct_bd4++;
				}
				if (ct_bd4 == 1)
				{
					flag_bolet_double4 = 1;
				}
				if (flag_bolet_double4 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd4, fdd4, flag_bolet_double4, ct_skel);
					move_bolet_double(c_boletd4);
				}
				if (ct_bd == 5)
				{
					ct_bd5++;
				}
				if (ct_bd5 == 1)
				{
					flag_bolet_double5 = 1;
				}
				if (flag_bolet_double5 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd5, fdd5, flag_bolet_double5, ct_skel);
					move_bolet_double(c_boletd5);
				}
				if (ct_bd == 6)
				{
					ct_bd6++;
				}
				if (ct_bd6 == 1)
				{
					flag_bolet_double6 = 1;
				}
				if (flag_bolet_double6 == 1)
				{

					draw_bolet_double(map, r_h, c_h, c_boletd6, fdd6, flag_bolet_double6, ct_skel);
					move_bolet_double(c_boletd6);
				}
				if (ct_bd > 6)
				{
					ct_bd = 0;
					ct_bd2 = 0;
					ct_bd3 = 0;
					ct_bd4 = 0;
					ct_bd5 = 0;
					ct_bd6 = 0;

				}
			}
			if (flaglive == 1)
			{
				if (ct_bd == 1)
				{
					ct_bd2++;
				}
				if (ct_bd2 == 1)
				{
					flag_bolet_double1 = 1;
				}
				if (flag_bolet_double1 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd1, fdd1, flag_bolet_double1, ct_skel);
					move_bolet_double_bigger(c_boletd1);
				}
				if (ct_bd == 2)
				{
					ct_bd3++;
				}
				if (ct_bd3 == 1)
				{
					flag_bolet_double2 = 1;
				}
				if (flag_bolet_double2 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd2, fdd2, flag_bolet_double2, ct_skel);
					move_bolet_double_bigger(c_boletd2);
				}
				if (ct_bd == 3)
				{
					ct_bd3++;
				}
				if (ct_bd3 == 1)
				{
					flag_bolet_double3 = 1;
				}
				if (flag_bolet_double3 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd3, fdd3, flag_bolet_double3, ct_skel);
					move_bolet_double_bigger(c_boletd3);
				}
				if (ct_bd == 4)
				{
					ct_bd4++;
				}
				if (ct_bd4 == 1)
				{
					flag_bolet_double4 = 1;
				}
				if (flag_bolet_double4 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd4, fdd4, flag_bolet_double4, ct_skel);
					move_bolet_double_bigger(c_boletd4);
				}
				if (ct_bd == 1)
				{
					ct_bd5++;
				}
				if (ct_bd5 == 1)
				{
					flag_bolet_double5 = 1;
				}
				if (flag_bolet_double5 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd5, fdd5, flag_bolet_double5, ct_skel);
					move_bolet_double_bigger(c_boletd5);
				}
				if (ct_bd == 1)
				{
					ct_bd6++;
				}
				if (ct_bd6 == 1)
				{
					flag_bolet_double6 = 1;
				}
				if (flag_bolet_double6 == 1)
				{

					draw_bolet_double_bigger(map, r_h, c_h, c_boletd6, fdd6, flag_bolet_double6, ct_skel);
					move_bolet_double_bigger(c_boletd6);
				}
				if (ct_bd > 6)
				{
					ct_bd = 0;
					ct_bd2 = 0;
					ct_bd3 = 0;
					ct_bd4 = 0;
					ct_bd5 = 0;
					ct_bd6 = 0;

				}
			}
			if (flag_dbolet == 1 && flaglive == 0)
			{
				draw_dbolet(map, r_h, c_h, c_dbolet, count_dbolet, flag_dbolet, ct_skel, r_dbolet);
				move_dbolet(c_dbolet);
			}
			if (flag_dbolet == 1 && flaglive == 1)
			{
				draw_dbolet_bigger(map, r_h, c_h, c_dbolet, count_dbolet, flag_dbolet, ct_skel, r_dbolet);
				move_dbolet_bigger(c_dbolet);
			}
			if (c_h + 3 == c_box - 2)
			{
				flaglive = 1;
				flagbigger = 1;
				flag_box = 1;
				ct_key += 1;
			}
			if (flagbigger == 1)
			{

				draw_hero_bigger(map, r_bigger, c_bigger);
			}
			if (c_h + 3 == c_elevator - 2)
			{
				flag_elevator = 1;
				flaglive = 1;
			}
			draw_elevator(map, r_elevator, c_elevator, flag_elevator);
			if (flag_elevator == 1 && r_elevator > 14)
			{
				r_elevator--;
				c_elevator++;
			}
			if (r_elevator <= 14)
			{
				flag_elevator = 0;
				flaglive = 0;
				r_h = 9;
				c_h = 405;
				r_elevator = 36;
				c_elevator = 360;
			}
			if (c_h >= 442 && r_h < 34)
			{
				r_h += 2;
			}
			if (flag_dww == 0)
			{
				if (c_mbolet >= 0 && c_h > c_box)
				{
					draw_mbolet(map, r_wa7sh, c_wa7sh, c_mbolet, count_mbolet, r_mbolet, ct_wa7sh);
					move_mbolet(c_mbolet);
				}
			}
			if (flag_dww == 1)
			{
				flagbigger = 0;
				flaglive = 0;
				flag_r = 1;

			}
			dis(map, number_rows, number_cols, start, end);

		}

		char move = _getch();
		if (flagbigger == 0)
		{
			move_hero(map, r_h, c_h, move, number_cols, number_rows, move_ct, flag);
		}
		if (flagbigger == 1)
		{
			move_hero_bigger(map, r_bigger, c_bigger, move);
			move_hero(map, r_h, c_h, move, number_cols, number_rows, move_ct, flag);
		}
		if (move == 'v')
		{
			flag_bolet = 1;
		}
		if (move == 'x')
		{
			ct_bd++;
		}
		if (move == 'f')
		{
			flag_dbolet = 1;
		}
		if (move == ' ')
		{
			flaglive = 0;
			if (c_h < 100)
			{
				r_h = 36, c_h = 1;
				start = 0;
				end = 100;
			}
			if (100 <= c_h && c_h < 300)
			{
				r_h = 15;
				c_h = 105;
				start = 97;
				end = 197;
				ct_stp1 = 0;
				ct_stp2 = 0;
				ct_stp3 = 0;
				m = 0;
				b = 0;
				c = 0;
			}
			if (c_h > 300 && c_h < 530)
			{
				r_h = 30;
				c_h = 350;
				start = 340;
				end = 440;
			}

			flag_elevator = 0;
			r_elevator = 36;
			ct_skel = 0;
			flag_key = 0;
			flag_box = 0;
			flagbigger = 0;
			ct_plane = 0;
			r_skel = 29;
			c_skel = 300;
			flag_stop = 0;
			ct_wa7sh = 0;
			flaglive = 0;
			flag_dww = 0;
			ct_key = 0;
			flag_game_over = 0;
		}
	}
}