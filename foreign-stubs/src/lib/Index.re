external sieve_last_prime: unit => int = "caml_sieve_last_prime";
external check_prime: int => bool = "caml_is_prime";

let run = () => {
  let prime = sieve_last_prime();
  let is_prime = check_prime(prime);
  Printf.printf("is %d Prime ?\n%B\n", prime, is_prime);
};
