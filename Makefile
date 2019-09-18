# set non-optional compiler flags here
CXXFLAGS += -std=c++11 -fopenmp

# set non-optional preprocessor flags here
# CPPFLAGS += -fopenmp

# find cpp files in src folder
SOURCES := $(shell find ./src -name '*.cpp')

# find headers in src folder
HEADERS := $(shell find ./src -name '*.h')

OUTPUT := a.out

# Everything depends on the output
all: $(OUTPUT)

# The output depends on sources and headers
$(OUTPUT): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $(OUTPUT) $(SOURCES)

clean:
	$(RM) $(OUTPUT)
