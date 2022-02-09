AUTOMAKE_OPTIONS = foreign
#SUBDIRS = usb lcd media inc
bin_PROGRAMS = mp3
mp3_SOURCES = player.c
mp3_LDADD = ../usb/libusb.a ../media/libmedia.a ../lib/libvideo.a
mp3_CFLAGS = -I../inc
mp3_LDFLAGS = -L../lcd
LIBS = -llcd -ljpg
