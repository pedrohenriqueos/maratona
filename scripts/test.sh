#!/bin/bash
for test in *.in; do echo $test; ./a.out < $test; echo ; done
