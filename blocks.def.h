//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    { "",           "~/.config/dwmblocks/scripts/sb-datetime",          10,         0       },
    { "",           "~/.config/dwmblocks/scripts/sb-volume",            0,          10      },
    { "",           "~/.config/dwmblocks/scripts/sb-battery",           60,         0       },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 4;

