let n = input_line stdin |> int_of_string

let rec int_to_bin n =
  if n = 0 then
    []
  else
    (n mod 2) :: int_to_bin (n / 2);;

let rec rep i c =
  if i = 0 then
    []
  else
    c :: rep (i - 1) c;;

let rec format_list l =
  let rev_l = List.rev l in
  let padding = 10 - List.length rev_l in
  if padding > 0 then
    List.append (rep padding 0) rev_l
  else
    rev_l;;

let () = begin
  ignore(List.map (fun x -> print_int x) (format_list (int_to_bin n)));
  print_endline ""
end