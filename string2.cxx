/*
 * string2.cxx
 * 
 * Copyright 2023  <koheiminoda@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y)
{
	return 2 * x + y;
}

void Show(int x, int y)
{
	char str[50];
	
	sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));
	cout << str << endl;
}

int main()
{
	Show(1, 2);
	Show(182, 144);
}
