# Autoriser X11
xhost +local:docker

# Build et run dans le container
docker run --rm -it \
    -v $(pwd):/workspace \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -w /workspace \
    qt-builder:1.01 bash -c "cd build 
    cmake .. && make"
