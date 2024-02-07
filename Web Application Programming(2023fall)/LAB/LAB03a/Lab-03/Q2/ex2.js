function login() {
  // write your code to ask pass(word)

  var password = prompt("Input the password", "ex) 12345");

  while (password != "pass") {
    alert("Wrong (you entered: " + password + ")");
    password = prompt("Input the password", "ex) 12345");
  }

  alert("Pass (you entered: " + password + ")");
}

function explainDays() {
  // write your code to ask days and explain

  var day = prompt("Input from Mon to Sun", "ex) Mon");

  if (day == "Sat" || day == "Sun") {
    document.write("Weekend, and take a rest!");
  } else {
    document.write(day + ", to go to work!");
  }
}
