NAME ?= BCKLIGHT
ARCHIVED ?= YES
COMPRESSED ?= NO
DESCRIPTION ?= "Backlight Adjuster"

include $(CEDEV)/include/.makefile

cemu: all
	cemu --send bin/$(NAME).8xp

cemu-debug: debug
	cemu --send bin/$(NAME).8xp

compile_flags.txt:
	echo -I$(CEDEV)/include > $@
