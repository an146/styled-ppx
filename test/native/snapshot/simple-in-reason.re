/* Shoudn't break other ppxs with similar APIs */
module StateLenses = [%lenses
  type state = {
    email: string,
    age: int,
  }
];

module Component = [%styled "display: block"];
module Component = [%styled.section {|
  display: flex;
  justify-content: center;
|}];

let var = "#333333"
module Component = [%styled {j|
  color: $var;
  display: block;
|j}]

/* module Component = [%styled (~var) => {j|
  color: $var;
  display: block;
|j}]
 */
