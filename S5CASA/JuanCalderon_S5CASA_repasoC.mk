grafica_aleatorios.png : CalderonJuan_S5C2_repasocpp.cpp grafica_aleatorio.py
	g++ CalderonJuan_S5C2_repasocpp.cpp
	./a.out
	g++ CalderonJuan_S5C2_repasocpp.cpp -o CalderonJuan_S5C2_repasocpp.exe
	./CalderonJuan_S5C2_repasocpp.exe
	python3 grafica_aleatorio.py
