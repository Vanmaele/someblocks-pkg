//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwlcpu",		1,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwlmem",		30,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwldisk",		30,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwldown",		1,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwlup",		1,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwlclock",		1,			0},
	{"", 		"/home/r2d2/repo/dwl-snuk/core/someblocks/scripts/dwltemp",		1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 1;
