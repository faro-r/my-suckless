/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 100;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code:pixelsize=14:antialias=true:autohint=true",
    "Liberation Mono:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eeeeee", "#282828" },
	[SchemeSel] = { "#eeeeee", "#3c3836" },
	[SchemeSelHighlight] = { "#fe8019", "#3c3836" },
	[SchemeNormHighlight] = { "#fabd2f", "#282828" },
	[SchemeOut] = { "#eeeeee", "#282828" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 3;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
