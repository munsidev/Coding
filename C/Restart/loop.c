#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
static void pause_ms(DWORD ms) { Sleep(ms); }
#else
#include <time.h>
static void pause_ms(unsigned ms) {
	struct timespec delay = { ms / 1000, (long)(ms % 1000) * 1000000L };
	nanosleep(&delay, NULL);
}
#endif

int main(void) {
	const char *colors[] = {"\033[32m", "\033[36m", "\033[92m", "\033[35m"};
	unsigned color = 0;

	for (;;) {
		printf("\033[2J\033[H");
		printf("\033[32m>_ SYSTEM STATUS: ACTIVE\033[0m\n\n");
		printf("%s[ 3 days left ]\033[0m\n", colors[color]);
		printf("\033[32m// signal looping...\033[0m\n");
		fflush(stdout);
		color = (color + 1) % (sizeof colors / sizeof colors[0]);
		pause_ms(500);
	}
}
