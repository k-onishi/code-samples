fn main() {
     let my_array = vec![1, 2, 3];
     let your_array = my_array;

     //println!("{}", my_array[0]); /* error[E0382]: use of moved value: `my_array` */
     println!("your_array[0] is {}", your_array[0]);

     let my_i32 = 1;
     let your_i32 = my_i32;
     println!("my_i32 is {}", my_i32);
     println!("your_i32 is {}", your_i32); // This works because i32 has implemented Copy trait
}
