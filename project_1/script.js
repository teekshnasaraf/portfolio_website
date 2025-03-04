window.addEventListener("scroll", function () {
    let header = document.querySelector("header");
    header.style.backgroundColor = window.scrollY > 50 ? "#222" : "#333";
});
