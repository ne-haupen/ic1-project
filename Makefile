
compile:
	mkdir unprotected
	gcc -ggdb -m64 -fno-stack-protector -z execstack -o exploitable_1 levels/level_one.c
	gcc -ggdb -m64 -fno-stack-protector -z execstack -o exploitable_2 levels/level_two.c
	gcc -ggdb -m64 -fno-stack-protector -z execstack -o exploitable_3 levels/level_three.c
	mv exploitable_1 exploitable_2 exploitable_3 unprotected/
run:
	./main.sh
clean:
	rm unprotected/*
	clear