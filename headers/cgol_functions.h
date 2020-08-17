

// for making like atari game world, where when you go off the edge you appear on the other side

ivec2 yield (ivec2 input_vec){

	ivec2 output_vec = input_vec;

	if (input_vec.x >= screen_width_int) output_vec.x = input_vec.x - screen_width_int;
	// if (input_vec.x < 0) output_vec.x = screen_width_int + input_vec.x;

	if (input_vec.y >= screen_height_int) output_vec.y = input_vec.y - screen_height_int;
	// if (input_vec.y < 0) output_vec.y = screen_height_int + input_vec.y;

	return output_vec;

}

int get_x_from_i (int i){
	return i % screen_width_int;
}

int get_y_from_i (int i){

	return i / screen_width_int;
}


int get_i_from_x_and_y (ivec2 input_vec){
	return input_vec.x + screen_width_int * input_vec.y;
}
