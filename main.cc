#include <iostream> 
// This `includes` the source file <iostream> with our file, so we can do crazy things 
// like print
using namespace std;
// The standard library's namespace, which is being imported into the global namespace. 
// It is actually NOT considered a best practice to import in your public files in this 
// fashion, since it forces anyone using your files to also `use` the same namespaces at
// the same level, or face weird bugs due to name conflicts. The way to import specific 
// parts of the namespace is like so -- `std::cout` -- where std is the namespace and 
// cout is the part you want to call. It's similar to Math.pi, for one example.

int main()
// The function that is automatically called when the file is run, just like in Java
{
	// Whitespace doesn't matter. Braces and semicolons denote blocks and lines.
	cout 
	// This tells the code to output to whatever is hooked up as the computer's standard
	// output, which is almost always a screen. Cout is a stream -- remember those? --
	// and you can call it without knowing any details about the medium it is using as
	// output, screen or audio or smell.
	<< 
	// The left shift operator. In the standard library, it has been overloaded so you
	// can use it to indicate you want to `put` something to a stream, like cout. `Put`
	// works a bit like the same keyword in Ruby, allowing you to print 
	"Hello ";
	// Our string, followed by a semicolon. C++ requires semicolons. The string is
	// surrounded by double quotes, because single quotes are for characters
	put(cout,"World!");
	// This is equivalent to the above code, just calling `put` directly instead of that
	// << business
}
