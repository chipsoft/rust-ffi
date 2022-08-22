// build.rs

fn main() {
    cc::Build::new()
        .file("./c/num/num.c")
        .file("./c/num/num_ext.c")
        .include("./c/num")
        .compile("num");
}