n = gets.chomp.to_i
n.times {
	tn = gets.chomp.to_i
	res = 1
	for i in 1..tn do
		res *= i
	end
	puts res
}