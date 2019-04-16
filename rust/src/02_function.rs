fn main() { // start main() function.
    println!("2 plus 3 is {}", add(2, 3)); // call function

    println!("10 plus 1 is {}", add_one(10));

    // execute like "$ RUST_BACKTRACE=1 cargo run"
    //panic!("Die here !!");
    
    let function_pointer: fn(x: i32, y: i32) -> i32 = add; // function pointer variable
}

// function
fn add(x: i32, y: i32) -> i32 {
    return x + y;
}
fn add_one(x: i32) -> i32 {
    add(x, 1)
}


