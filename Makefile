all:helloworld enter_name check_repeat object_type conversion square read_two_ints read_two_doubles unit_conversion unit_conversion_class exception celsius_to_kelvin calculator calculator_2 file_io fltk map fork fork2 hello_world_thread helloworld_map helloworld_link helloworld_key_operations

map: map.cpp
	clang++ map.cpp -o map -std=c++17
exception: exception.cpp
	clang++ exception.cpp -o exception -std=c++17
fltk: fltk.cpp
	g++ -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -g -O2 -fstack-protector-strong -Wformat -Werror=format-security -fvisibility-inlines-hidden -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'fltk' 'fltk.cpp' -Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-z,now -lfltk -lX11
file_io: file_io.cpp
	clang++ file_io.cpp -o file_io -std=c++17
calculator: calculator.cpp
	clang++ calculator.cpp -o calculator -std=c++17
calculator_2: calculator_2.cpp
	clang++ calculator_2.cpp -o calculator_2 -std=c++17
celsius_to_kelvin: celsius_to_kelvin.cpp
	clang++ celsius_to_kelvin.cpp -o celsius_to_kelvin -std=c++17
check_repeat: check_repeat.cpp
	clang++ check_repeat.cpp -o check_repeat -std=c++17
read_two_doubles: read_two_doubles.cpp
	clang++ read_two_doubles.cpp -o read_two_doubles -std=c++17
unit_conversion_class: unit_conversion_class.cpp
	clang++ unit_conversion_class.cpp -o unit_conversion_class -std=c++17
unit_conversion: unit_conversion.cpp
	clang++ unit_conversion.cpp -o unit_conversion -std=c++17
read_two_ints: read_two_ints.cpp
	clang++ read_two_ints.cpp -o read_two_ints -std=c++17

square_def: square_def.cpp 
	clang++ square_def.cpp -c  -std=c++17
square: square.cpp square_def
	clang++ square.cpp -c  -std=c++17
	clang++ square.o square_def.o -o square_main -std=c++17

conversion: conversion.cpp
	clang++ conversion.cpp -o conversion -std=c++17
object_type: object_type.cpp
	clang++ object_type.cpp -o object_type -std=c++17
enter_name: enter_name.cpp
	clang++ enter_name.cpp -o enter_name -std=c++17
helloworld_link: helloworld_link.cpp
	clang++ helloworld_link.cpp -o helloworld_link -std=c++17
helloworld_key_operations: helloworld_key_operations.cpp
	clang++ helloworld_key_operations.cpp -o helloworld_key_operations -std=c++17
helloworld_map: helloworld_map.cpp
	clang++ helloworld_map.cpp -o helloworld_map -std=c++17
helloworld: helloworld.cpp
	clang++ helloworld.cpp -o helloworld -std=c++17
fork: fork.cpp
	clang++ fork.cpp -o fork -std=c++17
fork2: fork2.cpp
	clang++ fork2.cpp -o fork2 -std=c++17
hello_world_thread: hello_world_thread.cpp
	clang++ hello_world_thread.cpp -o hello_world_thread -std=c++17 -pthread
.PHONY:clean
clean:
	rm helloworld enter_name check_repeat object_type conversion square read_two_ints read_two_doubles unit_conversion unit_conversion_class exception celsius_to_kelvin calculator calculator_2 file_io fltk map fork fork2 hello_world_thread helloworld_map helloworld_link helloworld_key_operations
