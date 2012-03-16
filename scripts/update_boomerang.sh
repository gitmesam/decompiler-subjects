#!/bin/sh

set -e

if test -z "$BOOMERANGDIR"; then
    echo "\$BOOMERANGDIR not set. The executable \$BOOMERANGDIR/boomerang will be used."
    exit 1
fi

root=$(pwd)

cd $BOOMERANGDIR
export LD_LIBRARY_PATH=$BOOMERANGDIR/lib

find $root -name subject.exe | sort | while read line
do
  echo -n "decompiling $line"
  dir=$(dirname $line)
  rm -f $dir/by_boomerang.c $dir/by_boomerang.failed
  rm -rf _output
  mkdir _output
  if ./boomerang -o _output "$line" >out 2>&1 ; then
      echo "  ok"
      mv _output/subject/subject.c $dir/by_boomerang.c
      cat _output/subject/*.c >>$dir/by_boomerang.c 2>/dev/null || true
  else
      echo "  failed"
      touch $dir/by_boomerang.failed
  fi
  if test -s _output/log; then
      mv _output/log $dir/by_boomerang.log
  fi
  mv out $dir/by_boomerang.out
done
