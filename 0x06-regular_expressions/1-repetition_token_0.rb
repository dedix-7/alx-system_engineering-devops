#!/usr/bin/env ruby
# A regex to match 2-5 t's in a word

i = 0
while (i < ARGV.length)
  puts ARGV[i].scan(/.*t{2,5}.*/).join
  i += 1
end
