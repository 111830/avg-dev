/* Enumeration or enum is like a closed list. For example, in a program we can choose from different opportunities like days of the week or colors. An enumeration is a type that lets you define your own sequence so you can declare variables with values in that sequence, representing each piece like a named constant. */
import <iostream>;
import <print>;
#include <utility>

enum class PieceType {
	King,
	Queen,
	Rook,
	Pawn
};

struct ChessPiece{
	PieceType type;
	bool isWhite;
};

int main(){
	ChessPiece myPiece;
	myPiece.type = PieceType::Queen;
	myPiece.isWhite = true;

	std::println("Figure eshte e tipit: {}", (myPiece.isWhite ? "E bardhe" : "E zeze"));
	auto numericValue = std::to_underlying(myPiece.type);
	std::println("Vlera numerike e fshehur pas Queen eshte {}", numericValue);

	return 0;
}


