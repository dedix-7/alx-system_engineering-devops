#!/usr/bin/env ruby
# A regex to match best school

i = 0
while (i < ARGV.length)
  puts ARGV[i].scan(/School/).join
  i += 1
end
