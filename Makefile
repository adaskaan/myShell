all:
	chmod a+x myShell.c
	gcc -o myShell myShell.c
	gcc -o cikar cikar.c
	gcc -o topla topla.c
	gcc -o islem islem.c
	gcc -o tekrar tekrar.c
clean:
	rm myShell
	rm cikar
	rm topla
	rm tekrar
	rm islem
