fn main() {
    // bool
    let mut bool_x: bool = false;
    
    // char
    let char_x: char = 'b';
    
    /*
     * i8, i16, i32, i64
     * u8, u16, u32, u64
     * isize, usize
     * f32, f64
     */
    let number_x: i8 = 10;

    // array
    let array_x = [1, 2, 3, 4, 5]; // [i32; 5] = [type; length]
    let array_y: [i32; 5]; // type and size.
    let array_z = [10; 5]; // default value and size.
    println!("size of array_y is {}", array_x.len());
    println!("second value in array_z is {}", array_z[1]);
    
    // slice (pointer(view) to array)
    let slice_x = [1, 2, 3, 4, 5];
    println!("third value in slice_x is {}", slice_x[2]);
    let slice_y = &slice_x[..]; // all values.
    let slice_z = &slice_x[1..4]; // 2, 3, 4 only.

    // string
    let str_x = "hello world.";

    // tuple
    let tuple_x = (100, "Mike", true);
    let (x, y, z) = (0, "", false);
    let xx = tuple_x.0;
    let yy = tuple_x.1;
    let zz = tuple_x.2;
    
    // functions has type
    fn add(x: i32, y: i32) -> i32 { x + y };
    let add_pointer: fn(x: i32, y: i32) -> i32 = add;
}
