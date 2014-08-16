# Makefile for part inventory
# Author: Rio Schad
# Date: 8_8_2014
# Rev: 1.1

#<target file>: <list_of_dependencies>
#<tab>:command_to_build_target_file


# this rule tells how to make the excutable sentence
plist: part.o main.o plist.o
	g++ -Wall -pedantic -g -o plist part.o main.o plist.o

# this rule tells how to make the object file main.o
main.o: main.cpp part.h plist.h
	g++ -Wall -pedantic -g -c main.cpp

# this rule tells how to make the object file part.o
part.o: part.h part.cpp
	g++ -Wall -pedantic -g -c part.cpp

#this rule tells how to make the object file plist.o
plist.o: plist.h plist.cpp part.h
	g++ -Wall -pedantic -g -c plist.cpp

#this rule tells what to delete when the user types "make clean"
#Be carefule to only put generated files into here
clean: 
	rm -f plist.o main.o part.o plist plsit.exe


#COMPILER OPTIONS:
# Files first get compiled into "object files" that are later "linked" into an excutable
#
# -c: compile only into .o file type
# -g: put extra information that can be used by debugger
# -o: rename the output file
# -Wall: show all warnings
# -pedantic: issue warning if program does not follow ISO C++/C  standards



	

