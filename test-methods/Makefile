TARGET = main
SRCS = test_methods.cpp ../src/StopCondition.cpp ../src/math.cpp ../src/powell.cpp ../src/hessian_free.cpp ../src/nesterov.cpp ../src/bfgs.cpp ../src/dfp.cpp ../src/dfp2.cpp ../src/AdaMax.cpp ../src/Adam.cpp ../src/AMSGrad.cpp ../src/Adagrad.cpp ../src/Adadelta.cpp ../src/Nadam.cpp ../src/RmsProp.cpp ../src/powell2.cpp ../src/bfgs2.cpp ../src/powell21.cpp ../src/Data.cpp
OBJS = $(SRCS:.cpp=.o)
CXX ?= gcc
CXXFLAGS ?= -pthread -Ofast -std=c++14 -Wall -Wextra -fmax-errors=2 -I"../include"

.PHONY: all clean

all: $(TARGET)
$(TARGET): $(OBJS)
		$(CXX) -o $(TARGET) $(OBJS) $(CXXFLAGS)
 
.c.o:
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		rm -rf $(TARGET) $(OBJS)