#!/bin/bash

# Compile the C program
gcc -o test_program hello.c

# Check if compilation was successful
if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

# Function to run a test and compare the output
run_test() {
  local description="$1"
  local expected_output="$2"
  
  echo "$description"
  ./test_program | grep -q "$expected_output"
  
  if [ $? -eq 0 ]; then
    echo "Pass: $description"
  else
    echo "Fail: $description"
    echo "Expected output: $expected_output"
    exit 1
  fi
}

# Run the tests
run_test "Test Insert at End" "10 20 30 40 50 60"
run_test "Test Insert at Beginning" "5 10 20 30 40 50"
run_test "Test Insert at Index" "10 20 25 30 40 50"

echo
echo "All tests passed."

# Clean up the compiled program
rm test_program

exit 0