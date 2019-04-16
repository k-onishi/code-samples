fn main() {
    // Branch
    let branch_x = 10;
    if branch_x == 10 {
        println!("branch_x is 10");
    } else if branch_x == 20 {
        println!("branch_x is 20");
    } else {
        println!("branch_x is not 10");
    }
    // Branch 2
    let branch_y = 10;
    let branch_z = if branch_y == 10 {
        20
    } else {
        30
    };
    let branch_a = if branch_y == 20 { 1 } else { 2 };
}
