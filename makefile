c.dat: clase.x
	./clase.x > c.dat
clase.x : c.cpp
	c++ c.cpp -o clase.x
clean :
	rm -r clase.x 
	