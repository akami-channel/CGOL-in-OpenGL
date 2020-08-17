

// for making like atari game world, where when you go off the edge you appear on the other side

vec2 yield (vec2 input_vec){

	vec2 output_vec = input_vec;

	if (input_vec.x >= screen_width_int) output_vec.x = input_vec.x - screen_width_int;
	if (input_vec.x < 0) output_vec.x = screen_width_int + input_vec.x;

	if (input_vec.y >= screen_height_int) output_vec.y = input_vec.y - screen_height_int;
	if (input_vec.y < 0) output_vec.y = screen_height_int + input_vec.y;

	return output_vec;

}



