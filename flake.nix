{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    forester.url = "sourcehut:~jonsterling/ocaml-forester";
  };

  outputs = { forester, nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = import nixpkgs { inherit system; }; in
      {
        devShells.default = pkgs.mkShell {
          buildInputs = [ pkgs.python3 forester.packages.${system}.default ];
        };
      });
}
