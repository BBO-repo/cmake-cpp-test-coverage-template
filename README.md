# cmake-cpp-test-coverage-template
C++ cmake template with test and coverage

# how to use
Inside the Docker container run the following commands to build the test executable and the custom application target:
```
cd /workspace
cmake -B build -S .
cmake --build build -j 10
```
Run the test exectable and/or the custom application to generqte coverage data
```
cd build
tests/test/all_tests
applications/custom_app/custom_app
```
Generate the report with the following command
```
lcov -c -d . -o coverage.info
lcov --remove coverage.info '/usr/*' --output-file coverage.info
genhtml coverage.info --output-directory out
```
Open the file `build/out/index.html` with your favorite web browser