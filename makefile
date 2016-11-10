all: main.o Add.o BubbleSort.o Div.o ListContainer.o Mult.o Op.o SelectionSort.o Sqr.o Sub.o VectorContainer.o
	g++ main.o Add.o BubbleSort.o Div.o ListContainer.o Mult.o Op.o SelectionSort.o Sqr.o Sub.o VectorContainer.o
main.o: main.cpp Add.h Base.h BubbleSort.h Container.h Div.h ListContainer.h Mult.h Op.h SelectionSort.h Sort.h Sqr.h Sub.h VectorContainer.h
	g++ -std=c++11 main.cpp -W -Wall -Werror -c
Add.o: Add.cpp Add.h Base.h Operator.h
	g++ -std=c++11 Add.cpp -W -Wall -Werror -c 
Div.o: Div.cpp Div.h Base.h Operator.h
    g++ -std=c++11 Div.cpp -Wall -Werror -c
Mult.o: Mult.cpp Mult.h Base.h Operator.h
    g++ -std=c++11 Mult.cpp -Wall -Werror -c
Sub.o: Sub.cpp Sub.h Base.h Operator.h
    g++ -std=c++11 Sub.cpp -Wall -Werror -c
Op.o: Op.cpp Op.h Base.h
    g++ -std=c++11 Op.cpp -Wall -Werror -c
Sqr.o: Sqr.cpp Sqr.h Base.h
    g++ -std=c++11 Sqr.cpp -Wall -Werror -c
BubbleSort.o: BubbleSort.cpp BubbleSort.h Sort.h Container.h Base.h
    g++ -std=c++11 BubbleSort.cpp -Wall -Werror -c
SelectionSort.o: SelectionSort.cpp SelectionSort.h Sort.h Container.h Base.h
    g++ -std=c++11 SelectionSort.cpp -Wall -Werror -c
ListContainer.o: ListContainer.cpp ListContainer.h Container.h Base.h
    g++ -std=c++11 ListContainer.cpp -Wall -Werror -c
VectorContainer.o: VectorContainer.cpp VectorContainer.h Container.h Base.h
    g++ -std=c++11 VectorContainer.cpp -Wall -Werror -c