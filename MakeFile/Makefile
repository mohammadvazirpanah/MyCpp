# -------------------- 1 ------------------------ #
# hello:
# 	echo "hello world"


# -------------------- 2 ------------------------ #

# blah: blah.o
# 	cc blah.o -o blah # Runs third

# blah.o: blah.c
# 	cc -c blah.c -o blah.o # Runs second

# blah.c:
# 	echo "int main() { return 0; }" > blah.c # Runs first

# -------------------- 3 ------------------------ #

# some_file:
# 	echo "This line will always print"

# -------------------- 4 ------------------------ #

# some_file:
# 	echo "This line will only print once"
# 	touch some_file

# -------------------- 5 ------------------------ #

# some_file: other_file
# 	echo "This will run second, because it depends on other_file"
# 	touch some_file

# other_file:
# 	echo "This will run first"
# 	touch other_file

# -------------------- 6 ------------------------ #

# some_file: other_file
# 	touch some_file

# other_file:
# 	echo "nothing"

# -------------------- 7 ------------------------ #

# some_file: 
# 	touch some_file

# clean:
# 	rm -f some_file

# -------------------- 8 ------------------------ #

# files := file1 file2
# some_file: $(files)
# 	echo "Look at this variable: " $(files)
# 	touch some_file

# file1:
# 	touch file1
# file2:
# 	touch file2

# clean:
# 	rm -f file1 file2 some_file


# -------------------- 9 ------------------------ #

# x := dude

# all:
# 	echo $(x)
# 	echo ${x}

# 	# Bad practice, but works
# 	echo $x 

# -------------------- 10 ------------------------ #

# all: one two three

# one:
# 	touch one
# two:
# 	touch two
# three:
# 	touch three

# clean:
# 	rm -f one two three

# -------------------- 11 ------------------------ #

