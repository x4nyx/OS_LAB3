g++ -c -fpic -o Number/number.o Number/number.cpp
ar rvs Number/libNumber.a Number/number.o

g++ -c -INumber -fpic -o Vector/vector.o Vector/vector.cpp
g++ -shared -o Vector/libVector.so Number/libNumber.a Vector/vector.o

g++ -c -INumber -IVector -o Main/main.o Main/main.cpp
g++ -o Main/main Main/main.o Vector/libVector.so Number/libNumber.a

./Main/main
