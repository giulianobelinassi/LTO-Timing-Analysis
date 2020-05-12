#!/bin/bash

# Generate programs with the following number of functions:
PROGRAMS="20 40 60 80 100 120 140 160 180 200 220 240 280 300"

# Number of parallel jobs:
PARALLEL=8

# Color special caracters.
GREEN='\033[1;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

ok () {
    if [ -z "$BASH" ]; then
        echo "${GREEN}OK: $1${NC}\n"
    else
        echo -e "${GREEN}OK: $1${NC}\n"
    fi
}

warn () {
    if [ -z "$BASH" ]; then
        echo "${YELLOW}WARNING: $1${NC}\n"
    else
        echo -e "${YELLOW}WARNING: $1${NC}\n"
    fi
	exit 1
}

fail () {
    if [ -z "$BASH" ]; then
        echo "${RED}ERROR: $1${NC}\n"
    else
        echo -e "${RED}ERROR: $1${NC}\n"
    fi
	exit 1
}

if [ -z $BASH ]; then
    fail "Bash is required for this script!"
fi

run()
{
    make -j$PARALLEL $PROGRAMS
}

parse_args()
{
    while getopts p option; do
        case "${option}" in
            p) PARALLEL=${OPTARG};;
        esac
    done
}

parse_args
run
