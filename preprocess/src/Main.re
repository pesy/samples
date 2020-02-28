open Lwt;
let foo = {
  let%lwt foo = Lwt.return("foo");
  Lwt.return(foo ++ " blah");
};
print_endline(Lwt_main.run(foo));
