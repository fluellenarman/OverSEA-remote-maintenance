#!/bin/bash

export DEBUG=dss*
set DEBUG=dss*

if [[ ! -e node-dss/node_modules ]]
then
	echo "you have not installed the required node packages"
	echo "MAKE SURE TO \'npm install\' in \'node-css\' directory BEFORE YOU START THE SERVER"
	echo "installing packages for you"
	cd node-dss && npm install
fi

cd node-dss && npm start
