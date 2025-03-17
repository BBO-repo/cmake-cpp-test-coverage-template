# Cmake c++ template with test and coverage
C++ cmake template for catch2 test and gcov coverage for libraries and application

# How to use
Inside the Docker container run the following commands to build the test executable and the custom application target:
```
cd /workspace
cmake -B build -S .
cmake --build build -j 10
```
Run the test exectable to generate coverage data
```
cd /workspace/build
tests/all_tests
```
Generate the report with the following command
```
cd /workspace/build
lcov -c -d . -o coverage.info
lcov --remove coverage.info '/usr/*' --output-file coverage.info
genhtml coverage.info --output-directory out
```
Open the file `/workspace/build/out/index.html` with your favorite web browser.<br>
You should see the code coverage for the two libraries, 100% for libprocessing and 33% for libstreaming.

# Notes
For quick usage a `Dockerfile` is provided and `.devcontainer.json` for use with vscode.