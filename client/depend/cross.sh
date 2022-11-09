#!/bin/bash

# this cross compiles all our dependencies

set -e

# force execution in dependencies directory
cd depend

read -p "cross compiling will take several minutes or longer - do you want to proceed? (y/n) " -n 1 -r
echo
if [[ $REPLY =~ ^[Yy]$ ]]
then
  read -p "compile raylib? (y/n) " -n 1 -r
  echo
  if [[ $REPLY =~ ^[Yy]$ ]]
  then
    raylibdir=raylib/src

    make -j $(nproc) -C $raylibdir clean
    make -j $(nproc) -C $raylibdir CC=x86_64-w64-mingw32-gcc PLATFORM=PLATFORM_DESKTOP PLATFORM_OS=WINDOWS RAYLIB_LIBTYPE=STATIC

    echo "compiled raylib"
  else
    echo "skipping raylib compilation"
  fi
  read -p "compiling openCV takes a while - do you want to proceed? (y/n) " -n 1 -r
  echo
  if [[ $REPLY =~ ^[Yy]$ ]]
  then
    #rm -rf opencv 
    SRCFOLDER=opencv
    BINFOLDER=opencv-build
    cvver="4.6.0"

    #wget https://github.com/opencv/opencv/archive/4.6.0.zip

    #unzip opencv-source.zip -d tmp
    #mkdir ${SRCFOLDER}
    #mv tmp/opencv-$cvver/* ${SRCFOLDER}

    #rm -rf "./tmp"

    rm -rf opencv-build


    # NOTE: DirectShow (WITH_SHOW=OFF) is disabled on purpose do not enable it

    cmake -S ${SRCFOLDER} -B ${BINFOLDER} \
        -DCMAKE_C_COMPILER=x86_64-w64-mingw32-gcc -DCMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++ -DCMAKE_SYSTEM_NAME=Windows \
        -DBUILD_SHARED_LIBS=OFF -DCMAKE_BUILD_TYPE=RELEASE -DWITH_OPENEXR=OFF -DWITH_FFMPEG=OFF -DOpenCV_STATIC=ON \
        -DOPENCV_GENERATE_PKGCONFIG=ON \
        -DBUILD_opencv_python2=OFF \
        -DBUILD_opencv_python3=OFF \
        -DBUILD_EXAMPLES=OFF \
        -DBUILD_DOCS=OFF \
        -DINSTALL_PYTHON_EXAMPLES=OFF \
        -DINSTALL_C_EXAMPLES=OFF \
        -DWITH_PTHREADS_PF=OFF \
        -DWITH_TBB=OFF \
        -DPARALLEL_ENABLE_PLUGINS=OFF \
        -DWITH_PROTOBUF=OFF \
        -DBUILD_PROTOBUF=OFF \
        -DBUILD_JAVA=OFF \
        -DBUILD_TESTS=OFF \
        -DBUILD_OPENEXR=OFF \
        -DWITH_WIN32UI=ON \
        -DWITH_DSHOW=OFF \
        -DWITH_WEBP=OFF \
        -DWITH_TIFF=OFF \
        -DWITH_PNG=OFF \
        -DWITH_JPEG=OFF \
        -DWITH_OPENJPEG=OFF \
        -DWITH_JASPER=OFF \
        -DBUILD_WEBP=OFF \
        -DBUILD_TIFF=OFF \
        -DBUILD_PNG=OFF \
        -DBUILD_JPEG=OFF \
        -DBUILD_OPENJPEG=OFF \
        -DBUILD_JASPER=OFF \
        2>&1 | tee log_cmake.txt

    cd ${BINFOLDER}
    make -j $(nproc) 2>&1 | tee ../log_make.txt
    make install 2>&1 | tee ../log_make-install.txt

    echo "compiled openCV $cvver"

  else
    echo "skipped compiling openCV"
  fi
else
  echo "not cross-compiling dependencies"
fi
