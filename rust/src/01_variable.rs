fn main() { // start main() function.
    println!("Hello world !!"); // macro
    // function with "!" at the end of the name is macro.


    let immutable_x = 20; // immutable
    let mut mutable_x = 10; // mutable
    
    let (pattern_x, pattern_y) = (1, 2); // pattern
    
    let int32_x: i32 = 1; // i32
    println!("x is {}", int32_x);

    { // scope
        let scope_x = 10;
        let int32_x = "hello world"; // shadowing
    }
}
