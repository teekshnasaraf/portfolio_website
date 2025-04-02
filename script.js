document.addEventListener("DOMContentLoaded", function () {
    const sections = document.querySelectorAll("section");
    const header = document.querySelector("header");

    function fadeInOnScroll() {
        sections.forEach(section => {
            const sectionTop = section.getBoundingClientRect().top;
            const windowHeight = window.innerHeight;
            if (sectionTop < windowHeight - 100) {
                section.classList.add("show");
            }
        });
    }

    function shrinkHeader() {
        if (window.scrollY > 50) {
            header.classList.add("shrink");
        } else {
            header.classList.remove("shrink");
        }
    }

    window.addEventListener("scroll", function () {
        fadeInOnScroll();
        shrinkHeader();
    });

    fadeInOnScroll();
});
