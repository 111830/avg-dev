let myNumber = "18";

let number = Number(myNumber);

if (isNaN(number)) {
  console.log("This is not a valid number.");
} else {
  if (number >= 18) {
    console.log("You can vote.");
  } else {
    console.log("You are a minor; you cannot vote.");
  }
}

let result = number >= 18 ? "You can vote." : "You are a minor; you cannot vote.";
console.log(result);