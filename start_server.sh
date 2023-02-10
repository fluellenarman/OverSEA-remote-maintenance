#!/bin/bash

echo "MAKE SURE TO \"npm install\" BEFORE YOU START THE SERVER"


export DEBUG=dss*
set DEBUG=dss*

cd node-dss && npm start
