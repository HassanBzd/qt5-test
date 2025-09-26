
## ENVIRONMENT

Run on Linux Ubuntu Jammy

## BUILD
```bash 
docker pull hassenbzd/qt-builder:1.01
docker tag hassenbzd/qt-builder:1.01 qt-builder:1.01
cd repo_view
./docker.sh
```
## RUN
```bash
./run_qt5_test.sh
```

