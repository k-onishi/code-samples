fn main() {
    // Loop
    loop { // not while true {
        println!("infinite loop");
        break;
    }

    // while
    let mut while_counter = 0;
    let mut while_done = false;
    while !while_done {
        while_counter += 1;
        println!("while_counter : {}", while_counter);
        if while_counter > 100 {
            while_done = true;
        }
        if while_done {
            println!("loop done.");
            break; // break
        }
    }

    // for
    for x in 0..10 { // 0 ~ 9
        println!("x is {}", x);
    }
    for (index, value) in (1..10).enumerate() { // enumerate()
        println!("index: {}, value: {}", index, value);
    }

    // continue, break
    let mut loop_counter2 = 0;
    loop {
        loop_counter2 += 1;
        if loop_counter2 > 10 {
            break;
        }
        continue;
        println!("Never printed");
    }
    println!("Hi");

    // loop label
    'outer: for x in 1..100 {
        'inner: for y in 1..100 {
            if y > 9 {
                println!("");
                continue 'outer;
            }
            print!("{0: >5} ", x * y);
        }
    }
}
