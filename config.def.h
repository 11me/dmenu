/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* ********************* ONEDARK COLORS ****************/
static const char col_black[]         = "#282c34";
static const char col_grey[]          = "#4b5263";
static const char col_white[]         = "#abb2bf";
static const char col_blue[]          = "#61afef";
static const char col_magenta[]       = "#c678dd";
static const char col_cyan[]          = "#56b6c2";
static const char col_light_red[]     = "#e06c75";
static const char col_dark_red[]      = "#be5046";
static const char col_green[]         = "#98c379";
static const char col_light_yellow[]  = "#e5c07b";
static const char col_dark_yellow[]   = "#d19a66";

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10",
 	"Noto Color Emoji:pixelsize=14:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	             /*     fg         bg       */
	[SchemeNorm] = {col_white, col_black},
	[SchemeSel] = {col_blue, col_grey},
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
