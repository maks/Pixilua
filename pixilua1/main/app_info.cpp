/*
 * Main entry point for Pixilua 
 */

#include "sundog.h"
#include "sunvox_engine.h"
#include "pixilua.h"

// required by sundog:
const char* g_app_name = "Pixilua " PIXILUA_VERSION_STR " (" __DATE__ ")";
const char* g_app_name_short = "Pixilua";

int g_app_window_xsize = 480;
int g_app_window_ysize = 320;
uint g_app_window_flags = WIN_INIT_FLAG_SCALABLE | WIN_INIT_FLAG_SHRINK_DESKTOP_TO_SAFE_AREA;
app_option g_app_options[] = { { NULL } };
const char* g_app_usage =
"Pixilua " PIXILUA_VERSION_STR " (" __DATE__ ")\n"
"Usage: pixilua [filename] [arg]\n"
"Filename: lua source file (*.lua).\n"
"Additional arguments (arg): some options for the Pixilua program.\n";

int main(void) {
    printf("%s \n", g_app_usage);
}