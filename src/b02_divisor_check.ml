let l1 = input_line stdin
|> String.split_on_char ' '
|> List.map int_of_string
|> Array.of_list

let a = l1.(0)
let b = l1.(1)

exception Break

let () =
  try
    for i = a to b do
      if 100 mod i = 0 then
        raise Break
    done;
    print_endline "No"
  with
  | Break -> print_endline "Yes"