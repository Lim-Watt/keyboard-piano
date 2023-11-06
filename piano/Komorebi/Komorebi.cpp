#include <bits/stdc++.h>

#include <windows.h>

#include <conio.h>

//#pragma comment(lib, "winmm.lib")


#define Sl(x) Sleep(x * sl)

//#pragma comment(lib,"winmm.lib")

using namespace std;

int Rest = 0, C8 = 108, B7 = 107, A7s = 106, A7 = 105, G7s = 104, G7 = 103, F7s = 102, F7 = 101, E7 = 100,
	
	D7s = 99, D7 = 98, C7s = 97, C7 = 96, B6 = 95, A6s = 94, A6 = 93, G6s = 92, G6 = 91, F6s = 90, F6 = 89,
	
	E6 = 88, D6s = 87, D6 = 86, C6s = 85, C6 = 84, B5 = 83, A5s = 82, A5 = 81, G5s = 80, G5 = 79, F5s = 78,
	
	F5 = 77, E5 = 76, D5s = 75, D5 = 74, C5s = 73, C5 = 72, B4 = 71, A4s = 70, A4 = 69, G4s = 68, G4 = 67,
	
	F4s = 66, F4 = 65, E4 = 64, D4s = 63, D4 = 62, C4s = 61, C4 = 60, B3 = 59, A3s = 58, A3 = 57, G3s = 56,
	
	G3 = 55, F3s = 54, F3 = 53, E3 = 52, D3s = 51, D3 = 50, C3s = 49, C3 = 48, B2 = 47, A2s = 46, A2 = 45,
	
	G2s = 44, G2 = 43, F2s = 42, F2 = 41, E2 = 40, D2s = 39, D2 = 38, C2s = 37, C2 = 36, B1 = 35, A1s = 34,
	
	A1 = 33, G1s = 32, G1 = 31, F1s = 30, F1 = 29, E1 = 28, D1s = 27, D1 = 26, C1s = 25, C1 = 24, B0 = 23,
	
	A0s = 22, A0 = 21;

int X1 = C2, X2 = D2, X3 = E2, X4 = F2s, X5 = G2, X6 = A2, X7 = B2,
	
	L1 = C3, L2 = D3, L3 = E3, L4 = F3s, L5 = G3, L6 = A3, L7 = B3,
	
	M1 = C4, M2 = D4, M3 = E4, M4 = F4s, M5 = G4, M6 = A4, M7 = B4,
	
	H1 = C5, H2 = D5, H3 = E5, H4 = F5s, H5 = G5, H6 = A5, H7 = B5,
	
	T1 = C6, T2 = D6, T3 = E6, T4 = F6s, T5 = G6, T6 = A6, T7 = B6,
	
	LOW_SPEED = 500, MIDDLE_SPEED = 400, HIGH_SPEED = 300,
	
	_ = 0XFF;

int volume;
int voice;
int sl;
HMIDIOUT handle;
map<char, int>v;

void begin()
{
	midiOutOpen(&handle, 0, 0, 0, __MSABI_LONG(0x00000000));
	
	midiOutShortMsg(handle, 0 << 8 | 0xC0);
	
	volume = 0x40;
	voice = 0x0;
	sl = 140;
	
	v['u'] = T1, v['i'] = T2, v['o'] = T3, v['p'] = T4, v['['] = T5, v[']'] = T6, v['\\'] = T7;
	v['6'] = H1, v['7'] = H2, v['8'] = H3, v['9'] = H4, v['0'] = H5, v['-'] = H6, v['='] = H7;
	v['a'] = M1, v['s'] = M2, v['d'] = M3, v['f'] = M4, v['g'] = M5, v['h'] = M6, v['j'] = M7;
	v['z'] = L1, v['x'] = L2, v['c'] = L3, v['v'] = L4, v['b'] = L5, v['n'] = L6, v['m'] = L7;
	v[','] = X7, v['.'] = X6, v['/'] = X5;
}

inline void clear()
{
	midiOutClose(handle);
	midiOutOpen(&handle, 0, 0, 0, __MSABI_LONG(0x00000000));
	midiOutShortMsg(handle, 0 << 8 | 0xC0);
}

int cnt = 0x90;

inline void o(char x)
{
//	++ cnt;
//	if (cnt == 0x99) cnt = 0x90; 
	voice = (volume << 16) + ((v[x]) << 8) + cnt;
	midiOutShortMsg(handle, voice);
//	Sl(10);
//	midiOutShortMsg(handle, voice);
	
}

int main()
{
	system("mode con cols=62 lines=10");
	cout << "                     Komorebi (Part One)\n";
	cout << "                                                    by wht\n";
	cout << "--------------------------------------------------------------\n";
	Sleep(1000);
	cout << "\n";
	cout << "Press any key to startn";
	getch();
	system("cls");
	cout << "                     Komorebi (Part One)\n";
	cout << "                                                    by wht\n";
	cout << "--------------------------------------------------------------\n";
	begin();
//	char g;
	while (1)
	{
//		
//		cout << g << "\n";
//			 if (g == 'A')
			o('a'), o('8'), Sl(2), 
			o('g'), Sl(1), 
			o('='), Sl(1), 
			o('j'), Sl(2), 
			o('-'), Sl(2), 
			o('s'), o('9'), o('i'), Sl(4), 
			o('='), Sl(4), 
			
			o('-'), o('d'), Sl(2), 
			o('g'), Sl(1), 
			o('='), Sl(1),
			o('j'), Sl(2),
			o('0'), Sl(2), 
			o('7'), o('9'), o('m'), Sl(2), 
			o('f'), Sl(2), 
			o('7'), o('h'), Sl(4), 
			
			o('8'), o('z'), Sl(1), 
			o('j'), Sl(1), 
			o('='), o('b'), Sl(2), 
			o('a'), Sl(1), 
			o('j'), Sl(1), 
			o('9'), Sl(1), 
			o('0'), Sl(1), 
			o('9'), o('x'), Sl(2), 
			o('n'), Sl(1), 
			o('7'), Sl(1), 
			o('s'), Sl(2), 
			o('h'), Sl(2), 
			
			o('d'), o('g'), o('j'), o('c'), Sl(2), 
			o('m'), Sl(2), 
			o('d'), Sl(2), 
			o('g'), Sl(2), 
			o('f'), o('x'), Sl(2), 
			o('m'), Sl(2), 
			o('s'), Sl(2), 
			o('m'), Sl(2), 
			
			o('8'), o('z'), Sl(2), 
			o('b'), Sl(1), 
			o('='), Sl(1), 
			o('m'), Sl(2), 
			o('-'), Sl(2), 
			o('x'), o('9'), o('i'), Sl(2), 
			o('v'), Sl(2), 
			o('='), o('n'), Sl(2), 
			o('v'), Sl(2), 
			
			o('-'), o('c'), Sl(2), 
			o('b'), Sl(1), 
			o('='), Sl(1),
			o('m'), Sl(2),
			o('0'), o('d'), Sl(2), 
			o('9'), o(','), Sl(2), 
			o('v'), Sl(2), 
			o('7'), o('n'), Sl(2), 
			o('v'), Sl(2), 
			
			o('8'), o('z'), Sl(1), 
			o('j'), Sl(1), 
			o('='), o('b'), Sl(2), 
			o('a'), Sl(1), 
			o('j'), Sl(1), 
			o('9'), Sl(1), 
			o('0'), Sl(1), 
			o('9'), o('x'), Sl(2), 
			o('n'), Sl(1), 
			o('7'), Sl(1), 
			o('f'), Sl(2), 
			o('h'), Sl(2), 
			
			o('d'), o('g'), o('j'), o('c'), Sl(2), 
			o('m'), Sl(2), 
			o('d'), Sl(2), 
			o('g'), Sl(2), 
			o('f'), o('x'), o('s'), o('h'), 
			
			midiOutShortMsg(handle, 122 << 8 | 0xC1), 
			voice = (0x39 << 16) + ((109) << 8) + 0x91,
			midiOutShortMsg(handle, voice), 
			Sl(8), 
			voice = (0x39 << 16) + ((109) << 8) + 0x81,
			midiOutShortMsg(handle, voice), 
			
			
		cout << "again\n";
//		
//		else
//			o(g);
	}
	midiOutClose(handle);
	return 0;
}
