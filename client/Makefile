ifeq ($(strip $(arch)),)

CXX=clang++
C=clang
LD=-fuse-ld=mold
CFLAGS=$(shell pkg-config --cflags opencv4)

else ifeq ($(strip $(arch)),win)

CXX=x86_64-w64-mingw32-g++
CC=x86_64-w64-mingw32-ld
C=x86_64-w64-mingw32-gcc
#LD=-fuse-ld=mold
DEPDEF=-D__WINDOWS_MM__ -DDEPEND_CROSS -D_USE_MATH_DEFINES 

endif



CFLAGS+=--std=c++20 -Wall -Wextra $(DEPDEF) -Og -g

ifeq ($(strip $(arch)),)
LFLAGS+=$(LD) -lraylib
LFLAGS+=$(shell pkg-config --libs opencv4)
else ifeq ($(strip $(arch)),win)
LFLAGS+=-static -static-libgcc -static-libstdc++ -L./depend/raylib/src -lraylib
LFLAGS+=-lwinmm -lcomdlg32 -lgdi32

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

