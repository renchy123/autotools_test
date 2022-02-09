#include<stdio.h>
#include "lcd.h"
#include "usb.h"
#include "media.h"
#include "video.h"
#include "jpg.h"

int main()
{
	printf("MP3 player init...\n");
	lcd_init();
	usb_init();
	media_init();
	video_init();
	jpg_init();
	return 0;
}
