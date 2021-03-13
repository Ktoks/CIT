use strict;

my @words;    # a line of text
my %wordlist; # key: prefix, value: array of suffixes

my $pref_len = shift @ARGV || 2;
my $maxwords = shift @ARGV || 10000;

# build word list
#
# 'Blessed is the man that walketh not in the counsel'
# %wordlist = ( 'blessed is' => [ 'the',  ],
#               'is the'     => [ 'man',  ],
#               'the man'    => [ 'that', ],
#             );
while (<>) {
    push @words, split;

    while ( @words > $pref_len )  {
        # build prefix of $pref_len words
        # join(' ', @array) is faster than qq(@array) or "@array"
        #
        my $pref = join(' ', @words[0..($pref_len-1)]);

        # add suffix to list
        #
        push @{ $wordlist{$pref} }, $words[$pref_len];

        shift @words; # next word on this line
    }
}

# starting point
#
my $pref = (keys %wordlist)[rand keys %wordlist];

print "$pref";

# dump out listings
#
for (0..($maxwords-1)) {
  last if not defined($wordlist{$pref});

  my $index = rand @{ $wordlist{$pref} };
  my $suf   = $wordlist{$pref}[$index];

  print ' '. $suf;

  print "\n" if ( $_ % 10 == 0);

  # skip past first word in prefix
  #
  #$pref = (split(' ', $pref))[1..$pref_len-1] . ' ' . $suf;
  $pref =~ s/^[^ ]+ (.+)$/$1 $suf/;
}