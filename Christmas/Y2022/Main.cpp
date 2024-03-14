#include <conio.h>
#include "Video.h"

int main()
{
	while (!_kbhit());

	Video video = Video();

	video.Play(60);

	return 0;
}