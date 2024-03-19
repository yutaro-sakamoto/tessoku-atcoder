let s = input_line stdin
let l = List.init (String.length s) (String.get s)
let () =
  List.fold_left (fun acc c -> 2 * acc + (if c = '1' then 1 else 0)) 0 l |>
  Printf.printf "%d\n"