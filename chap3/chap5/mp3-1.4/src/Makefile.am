AUTOMAKE_OPTIONS = foreign
SUBDIRS = usb lcd media inc
bin_PROGRAMS = mp3
mp3_SOURCES = player.c
mp3_LDADD = usb/libusb.a lcd/liblcd.a media/libmedia.a
mp3_CFLAGS = -Iinc
