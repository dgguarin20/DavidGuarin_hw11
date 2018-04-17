pos.png:NA_graph.py
	python NA_graph.py

NA_graph.py: tray.txt

tray.txt:NA_gravity.cpp
	c++ NA_gravity
	./a.out > tray.txt

