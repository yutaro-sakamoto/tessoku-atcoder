let sum = input_line stdin
|> String.split_on_char ' '
|> List.map int_of_string
|> List.fold_left (+) 0

let () = Printf.printf "%d\n" sum