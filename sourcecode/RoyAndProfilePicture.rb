l = gets.chomp.to_i
n = gets.chomp.to_i
n.times {
	w, h = gets.split(" ").map(&:to_i)
	if w < l or h < l
		puts "UPLOAD ANOTHER"
	elsif w == h
		puts "ACCEPTED"
	else
		puts "CROP IT"
	end
}