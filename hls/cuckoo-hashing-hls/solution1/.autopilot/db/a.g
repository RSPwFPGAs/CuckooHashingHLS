#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/bollu/work/CuckooHashingHLS/hls/cuckoo-hashing-hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}