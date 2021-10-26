//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "~/.config/dwmblocks/scripts/battery",	50,		0},
	{" ", "~/.config/dwmblocks/scripts/date",	 0,		0},
	{" ", "~/.config/dwmblocks/scripts/time",	50,		0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

