ifeq ($(strip $(arch)),)

CXX=clang++
C=clang
LD=-fuse-ld=mold
CFLAGS=$(shell pkg-config --cflags opencv4)

else ifeq ($(strip $(arch)),win)

ifeq ($(strip $(cv)),)
CXX=x86_64-w64-mingw32-g++
CC=x86_64-w64-mingw32-ld
C=x86_64-w64-mingw32-gcc
else 
CXX=x86_64-w64-mingw32-g++-posix
CC=x86_64-w64-mingw32-ld
C=x86_64-w64-mingw32-gcc-posix
endif
#LD=-fuse-ld=mold
DEPDEF=-D__WINDOWS_MM__ -DDEPEND_CROSS -D_USE_MATH_DEFINES 

endif



CFLAGS+=-Wall -Wextra $(DEPDEF) -Og -g

CSTDFLAG=--std=c++20

ifeq ($(strip $(arch)),)
LFLAGS+=$(LD) -lraylib
LFLAGS+=$(shell pkg-config --libs opencv4)
else ifeq ($(strip $(arch)),win)
LFLAGS+=-static -static-libgcc -static-libstdc++ -L./depend/raylib/src -lraylib
LFLAGS+=-lwinmm -lcomdlg32 -lgdi32 -lws2_32

ifeq ($(strip $(cv)), on)
CFLAGS+=-I./depend/opencv-build/install/include/opencv4/
LFLAGS+=-L./depend/opencv-build/install/lib/opencv4/3rdparty
LFLAGS+= \
-lade \
-l:libquirc.a \
-lzlib
#-llibprotobuf \
#-llibtiff \
#-llibwebp \
#-llibjpeg-turbo \
#-llibopenjp2 \
#-llibpng \

LFLAGS+=-L./depend/opencv-build/install/lib
LFLAGS+= \
-lopencv_gapi460 \
-lopencv_stitching460 \
-lopencv_highgui460 \
-lopencv_videoio460 \
-lopencv_ml460 \
-lopencv_video460 \
-lopencv_objdetect460 \
-lopencv_calib3d460 \
-lopencv_imgcodecs460 \
-lopencv_features2d460 \
-lopencv_flann460 \
-lopencv_photo460 \
-lopencv_imgproc460 \
-lopencv_core460 
#-lopencv_dnn460 \

endif

endif

CFLAGS+=-I./depend/websocketpp/

LIBWARNING=-Wno-unused-parameter -Wno-unknown-pragmas -Wno-missing-field-initializers -Wno-unused-variable

#PREREQ_DIR=@mkdir -p $(@D)

LOGDIR=depend/logq/src
EWSDIR=depend/easywsclient
SRDIR=depend/sr_webcam
SRCDIR=src
BUILDDIR=build
BINDIR=bin

NAME= $(addprefix $(BINDIR)/, rec)

SRCS=$(wildcard $(SRCDIR)/*.cc)
OBJS=$(patsubst $(SRCDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCS))


SRCSLOG=$(wildcard $(LOGDIR)/*.cc)
OBJSLOG=$(patsubst $(LOGDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCSLOG))

SRCSEWS=$(EWSDIR)/easywsclient.cpp
OBJSEWS=$(BUILDDIR)/easywsclient.o

ifeq ($(strip $(arch)),win)
#SRCSSR=$(SRDIR)/src/sr_webcam.c
#SRCSSR1=$(SRDIR)/src/sr_webcam_win.cpp
#OBJSSR=$(BUILDDIR)/sr_webcam.o
#OBJSSR1=$(SRDIR)/src/sr_webcam_win.o
#LFLAGS+=-lmfplat -lmf -lmfuuid -lmfreadwrite -lshlwapi -lole32
else
SRCSSR=$(SRDIR)/src/sr_webcam.c
SRCSSR1=$(SRDIR)/src/sr_webcam_lin.c
OBJSSR=$(BUILDDIR)/sr_webcam.o
OBJSSR1=$(SRDIR)/src/sr_webcam_lin.o
LFLAGS+=-lpthread
endif


all:
	@$(MAKE) --no-print-directory $(NAME)

re: clean
ifeq ($(strip $(arch)),win)
	@./depend/cross.sh
endif
	@$(MAKE) --no-print-directory

f: clean
	@$(MAKE) rel=a --no-print-directory
	@$(MAKE) arch=win rel=a cleanbuild
	@$(MAKE) arch=win rel=a --no-print-directory
	@$(MAKE) arch=win rel=a cleanbuild

pre:
	@./tool/generate.sh ON
	@./tool/codepoint.sh

$(NAME): $(OBJS) $(OBJSLOG) $(OBJSEWS) $(OBJSSR) $(OBJSSR1)
	$(CXX) $(CSTDFLAG) $(CFLAGSSTD) -o $(NAME) $(OBJS) $(OBJSLOG) $(OBJSEWS) $(OBJSSR) $(OBJSSR1) $(LFLAGS)

$(OBJS): $(BUILDDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) $(CSTDFLAG) $(CFLAGS) $(DFLAGS) -o $@ -c $<

$(OBJSLOG): $(BUILDDIR)/%.o: $(LOGDIR)/%.cc
	$(CXX) $(CSTDFLAG) $(CFLAGSLOG) -o $@ -c $< 


$(OBJSEWS): 
	$(CXX) $(CSTDFLAG) $(CFLAGS) $(LIBWARNING) -o $(OBJSEWS) -c $(SRCSEWS) 

$(OBJSSR):
	$(CXX) $(CSTDFLAG) $(CFLAGS) $(LIBWARNING) -o $(OBJSSR) -c $(SRCSSR)

$(OBJSSR1):
ifeq ($(strip $(arch)),win)
	$(CXX) $(CSTDFLAG) $(CFLAGS) $(LIBWARNING) -o $(OBJSSR1) -c $(SRCSSR1)
else
	$(C) -std=c99 $(CFLAGS) $(LIBWARNING) -o $(OBJSSR1) -c $(SRCSSR1)
endif

clean:
	@echo
	@echo "cleaning old build files"
	@echo
	rm -f build/*.o
	rm -f $(NAME) $(NAME).exe

.PHONY: all clean

