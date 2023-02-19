//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"/home/r2d2/.local/bin/statusbar/dwlcpu",		1,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwlmem",		30,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwldisk",		30,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwldown",		1,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwlup",		1,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwltemp",		1,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwlpowerstat",1,			0},
	{"", 		"/home/r2d2/.local/bin/statusbar/dwlclock",	1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 1;
