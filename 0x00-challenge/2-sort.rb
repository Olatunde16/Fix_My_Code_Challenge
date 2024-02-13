#!/usr/bin/env ruby
###
#
#  Sort integer arguments (ascending) 
#
###

result = []

ARGV.each do |arg|
    # Skip if not an integer
    next if arg !~ /^-?\d+$/

    # Convert to integer
    i_arg = arg.to_i

    # Insert the integer at the right position
    is_inserted = false
    result.each_with_index do |val, idx|
        if val >= i_arg
            result.insert(idx, i_arg)
            is_inserted = true
            break
        end
    end
    result << i_arg unless is_inserted
end

puts result.join(' ')
