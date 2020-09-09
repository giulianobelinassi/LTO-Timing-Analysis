#/bin/sh

# Color special caracters.
GREEN='\033[1;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

ok () {
    if [ -z "$BASH" ]; then
        echo "${GREEN}OK: $1${NC}"
    else
        echo -e "${GREEN}OK: $1${NC}"
    fi
}


warn () {
    if [ -z "$BASH" ]; then
        echo "${YELLOW}WARNING: $1${NC}"
    else
        echo -e "${YELLOW}WARNING: $1${NC}"
    fi
}

fail () {
    if [ -z "$BASH" ]; then
        echo "${RED}ERROR: $1${NC}"
    else
        echo -e "${RED}ERROR: $1${NC}"
    fi
	exit 1
}


check_file()
{
	file=$1
	grep -nwI "int main" $file > /dev/null
	if [ $? -ne 0 ]; then
		warn "File $file has no main function"
	fi
}

for file in *.c
do
	check_file $file
done
