window.onload = () => {
  let tags = [
    "caption",
    "th",
    "tr",
    "thead",
    "td",
    "tbody",
    "table",
    "a",
    "tfoot",
    "legend",
    "label",
    "p",
    "fieldset",
    "form",
    "div",
  ];

  for (let i = 0; i < tags.length; i++) {
    let tag = tags[i];
    document.querySelectorAll(tag).forEach(function (element) {
      hovering(element);
    });
  }
};

function hovering(element) {
  const temp = document.createElement("span");
  temp.className = "hoverNode";

  const text = document.createTextNode(element.tagName);
  temp.appendChild(text);
  temp.addEventListener("click", function () {
    alert(
      `Tag: ${element.tagName}\nClass: ${element.className}\nID: ${element.id}\ninnerHTML: ${element.innerHTML}`
    );
  });
  element.appendChild(temp);
}
