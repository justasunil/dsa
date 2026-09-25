all: graph_dsa

graph_dsa: graph_dsa.cpp
	g++ graph_dsa.cpp -o graph_dsa

clean: graph_dsa
	rm -f graph_dsa
