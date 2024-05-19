#!/usr/bin/env ruby
# a script to match htn


i = 0
while (i < ARGV.length)
  puts ARGV[i].scan(/\bhbt+n\b/).join
  i += 1
end
