let n = input_line stdin |> int_of_string

let a = input_line stdin
|> String.split_on_char ' '
|> List.map int_of_string
|> Array.of_list

exception Break

let () =
  try
    for i = 0 to n - 1 do
      for j = i + 1 to n - 1 do
        for k = j + 1 to n - 1 do
          if a.(i) + a.(j) + a.(k) = 1000 then
            raise Break;
        done;
      done;
    done;
    print_endline "No"
  with
  | Break -> print_endline "Yes"