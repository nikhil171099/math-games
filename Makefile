$(VERBOSE).SILENT:

.ONESHELL:

CHDIR_SHELL := $(SHELL)
define chdir
   $(eval _D=$(firstword $(1) $(@D)))
   $(info $(MAKE): cd $(_D)) $(eval SHELL = cd $(_D); $(CHDIR_SHELL))
endef

all:
	cat doc/instructions.txt
info:
	cat doc/project.txt
runcode:
	gcc -lm -o a src/bertnandBox.c src/coinStreaks.c src/common.c src/doubleSixesDeathGame.c src/doublerGame.c src/googolGame.c src/humbleNishiyama.c main.c src/martingaleProblem.c src/math_app.c src/miltersenGame.c src/montyHall.c src/newtonPepy.c src/parrondoParadox.c src/russianRoulette.c src/superRationality.c
	./a
	rm a

quit:
	$(MAKE) -C ~ all
