{ pkgs }: {
	deps = [
   pkgs.gti
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}