tabl = { "0" => 6, "1" => 2, "2" => 5, "3" => 5, "4" => 4, "5" => 5, "6" => 6, "7" => 3, "8" => 7, "9" => 6 }
s = gets.chomp
res = 0
for c in s.chars do
    res += tabl[c]
end
puts res