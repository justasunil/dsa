# $@	the target (graph_dsa)
# $<	the first prerequisite only
# $^	all prerequisites, space-separated, de-duplicated
# $+	all prerequisites, including duplicates


all: graph_dsa

COMMON_INC=-I../inc
INCLUDE=$(COMMON_INC) 


GRAPH_INC=-I../src/graphs/
GRAPH_SRC=../src/graphs/bfs.cpp
INCLUDE+=$(GRAPH_INC)

graph_dsa: graph_input.cpp $(GRAPH_SRC)
	g++ $(INCLUDE) $^ -o graph_dsa

clean:
	rm -f graph_dsa
