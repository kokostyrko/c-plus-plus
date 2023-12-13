APP=tic-tac-toe

BINDIR=bin

SRCDIR=source

OBJDIR=obj

LIBDIR=lib

all: $(BINDIR)/$(APP)

$(BINDIR)/$(APP): $(LIBDIR)/libboard.a $(LIBDIR)/liblogic.a $(LIBDIR)/libmove.a $(LIBDIR)/libplayer.a $(OBJDIR)/main.o
	clang++ $(OBJDIR)/main.o -L$(LIBDIR) -lboard -llogic -lmove -lplayer -o $(BINDIR)/$(APP)

$(OBJDIR)/board.o: $(SRCDIR)/board.cpp
	clang++ $(SRCDIR)/board.cpp -o $(OBJDIR)/board.o -c -std=c++20

$(OBJDIR)/logic.o: $(SRCDIR)/logic.cpp
	clang++ $(SRCDIR)/logic.cpp -o $(OBJDIR)/logic.o -c -std=c++20

$(OBJDIR)/move.o: $(SRCDIR)/move.cpp
	clang++ $(SRCDIR)/move.cpp -o $(OBJDIR)/move.o -c -std=c++20

$(OBJDIR)/player.o: $(SRCDIR)/player.cpp
	clang++ $(SRCDIR)/player.cpp -o $(OBJDIR)/player.o -c -std=c++20

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp
	clang++ $(SRCDIR)/main.cpp -o $(OBJDIR)/main.o -c -std=c++20

$(LIBDIR)/libboard.a: $(OBJDIR)/board.o
	ar rcs $(LIBDIR)/libboard.a $(OBJDIR)/board.o 

$(LIBDIR)/liblogic.a: $(OBJDIR)/logic.o
	ar rcs $(LIBDIR)/liblogic.a $(OBJDIR)/logic.o

$(LIBDIR)/libmove.a: $(OBJDIR)/move.o
	ar rcs $(LIBDIR)/libmove.a $(OBJDIR)/move.o

$(LIBDIR)/libplayer.a: $(OBJDIR)/player.o
	ar rcs $(LIBDIR)/libplayer.a $(OBJDIR)/player.o

clean:
	rm -f $(OBJDIR)/*.o $(LIBDIR)/*.a $(BINDIR)/$(APP)
