ifeq ($(strip $(arch)),)

CXX=clang++
C=clang
LD=-fuse-ld=mold

else ifeq ($(strip $(arch)),win)

CXX=x86_64-w64-mingw32-g++
CC=x86_64-w64-mingw32-ld
C=x86_64-w64-mingw32-gcc
#LD=-fuse-ld=mold
DEPDEF=-D__WINDOWS_MM__ -DLOCRAY -D_USE_MATH_DEFINES 

endif



CFLAGS=--std=c++20 -Wall -Wextra $(DEPDEF) -Og -g

ifeq ($(strip $(arch)),)
LFLAGS+=$(LD) -lraylib 
else ifeq ($(strip $(arch)),win)
LFLAGS+=-static -static-libgcc -static-libstdc++ -L./depend/raylib/src -lraylib
LFLAGS+=-lwinmm -lcomdlg32 -lgdi32
endif

#PREREQ_DIR=@mkdir -p $(@D)

LOGDIR=depend/logq/src
SRCDIR=src
BUILDDIR=build
BINDIR=bin

NAME= $(addprefix $(BINDIR)/, rec)

SRCS=$(wildcard $(SRCDIR)/*.cc)
OBJS=$(patsubst $(SRCDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCS))


SRCSLOG=$(wildcard $(LOGDIR)/*.cc)
OBJSLOG=$(patsubst $(LOGDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCSLOG))

all:
ifeq ($(strip $(arch)),win)
	@./depend/cross.sh
endif
	@$(MAKE) --no-print-directory $(NAME)

re: clean
	@$(MAKE) --no-print-directory

f: clean
	@$(MAKE) rel=a --no-print-directory
	@$(MAKE) arch=win rel=a cleanbuild
	@$(MAKE) arch=win rel=a --no-print-directory
	@$(MAKE) arch=win rel=a cleanbuild

pre:
	@./tool/generate.sh ON
	@./tool/codepoint.sh

$(NAME): $(OBJS) $(OBJSLOG)
	$(CXX) $(CFLAGSSTD) -o $(NAME) $(OBJS) $(OBJSLOG) $(LFLAGS)

$(OBJS): $(BUILDDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) $(CFLAGS) $(DFLAGS) -o $@ -c $<

$(OBJSLOG): $(BUILDDIR)/%.o: $(LOGDIR)/%.cc
	$(CXX) $(CFLAGSLOG) -o $@ -c $< 

clean:
	@echo
	@echo "cleaning old build files"
	@echo
	rm -f build/*.o
	rm -f $(NAME) $(NAME).exe

.PHONY: all clean

