EXOS =	exo1.cpp \
		exo2.cpp \
		exo3.cpp \
		exo4.cpp

BINS = $(EXOS:%.cpp=%)

%:	%.cpp
	g++ -O0 -g3 $< -o $@

all: $(BINS)

clean:
	rm -f $(BINS)
