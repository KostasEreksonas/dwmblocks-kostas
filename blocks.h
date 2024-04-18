//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-kernel",														0,		3},
	{"",	"sb-weather",														60,		6},
	{"",	"sb-traffic",														2,		2},
	{"",	"sb-memory",														30,		7},
	{"",	"sb-cpu_usage",														5,		8},
	{"",	"sb-cpu_temp",														5,		5},
	{"",	"sb-cpu_freq",														5,		4},
	{"",	"sb-battery",														5,		9},
	{"",	"sb-volume",														0,		10},
	{"",	"sb-brightness",													0,		11},
	{"",	"sb-clock",															60,		12},
	{"",	"sb-shutdown",														0,		13},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
