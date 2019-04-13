(*
 * This is a comment
 *)

(* Definition of function *)
let average a b =
  let c = 4.0 in
  (a +. b +. c) /. 3.0;;

print_endline (string_of_float (average 2.0 3.0));;

let my_ref = ref 0;;
my_ref := 100;;
print_endline (string_of_int !my_ref);;

let my_list = [1; 2; 3];;
let my_list2 = [3; 4; 5];;

print_endline (string_of_int (List.length my_list));;

type gender = 
  | MALE of int
  | FEMALE of int
;;

(*
type human = {
  name: string
  age: int
  gender: gender
};;
*)
