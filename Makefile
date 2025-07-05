
BASE_NAME = src/class

CXX = clang++ -std=c++20

run:
	$(CXX) $(BASE_NAME)_$(n).cpp -o $(BASE_NAME)
	./$(BASE_NAME)
