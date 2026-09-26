# $@	the target (graph_dsa)
# $<	the first prerequisite only
# $^	all prerequisites, space-separated, de-duplicated
# $+	all prerequisites, including duplicates


all: graph_dsa


SOURCE=../src/bfs.cpp

graph_dsa: graph_input.cpp $(SOURCE)
	g++ -I../inc/ $^ -o graph_dsa

clean:
	rm -f graph_dsa
