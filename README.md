Coverup
=======

A coverage analysis tool meant to serve much the same purpose as gcov, I.e.
reading gcc style execution arcs, more efficiently and with additional output
formats.  These are the same arcs and note files produced by

    --coverage

or

    --fprofile-arcs -ftest-coverage // compiling
    --lgcov                         // linking

So if you have a process that lead up to invoking *gcov*, you should be able to
use that process with coverup.
