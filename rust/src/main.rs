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

    println!("2 plus 3 is {}", add(2, 3)); // call function

    println!("10 plus 1 is {}", add_one(10));

    // execute like "$ RUST_BACKTRACE=1 cargo run"
    //panic!("Die here !!");
    
    let function_pointer: fn(x: i32, y: i32) -> i32 = add; // function pointer variable

    // next is "https://doc.rust-jp.rs/the-rust-programming-language-ja/1.6/book/primitive-types.html"
}

// function
fn add(x: i32, y: i32) -> i32 {
    return x + y;
}
fn add_one(x: i32) -> i32 {
    add(x, 1)
}


