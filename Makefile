
compile:
	echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
	gcc -ggdb -m64 -fno-stack-protector -z execstack -o exploitable_1 levels/level_one.c
	gcc -ggdb -m64 -fno-stack-protector -z execstack -o exploitable_2 levels/level_two.c
	mv exploitable_1 exploitable_2 unprotected/
clean:
	rm unprotected/*
	clear