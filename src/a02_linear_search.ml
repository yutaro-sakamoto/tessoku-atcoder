let l1 = input_line stdin
|> String.split_on_char ' '
|> List.map int_of_string
|> Array.of_list

let n = l1.(0)
let x = l1.(1)

let l2 = (input_line stdin
|> String.split_on_char ' '
|> List.map int_of_string
|> List.filter (fun a -> a == x))

let () = print_endline(
  match l2 with
  | [] -> "No"
  | _ -> "Yes"
)