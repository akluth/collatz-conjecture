#!/usr/bin/perl
use strict;
use warnings;

my $n_max = $ARGV[0];
my $iterations = $ARGV[1];
my $target_dir = $ARGV[2] . "/nmax-$n_max-iters-$iterations";

`mkdir -p $target_dir`;

foreach my $i (0..$n_max) {
    `./collatz $i $iterations | gzip > $target_dir/$i.gz`
}
