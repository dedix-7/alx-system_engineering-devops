#!/usr/bin/env ruby
# A regex to match 2-5 t's in a word

i = 0
while (i < ARGV.length)
  puts ARGV[i].scan(/hbt{2,5}n/).join
  i += 1
end
