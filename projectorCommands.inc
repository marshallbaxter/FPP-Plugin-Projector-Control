<?php
//This this template to add additional projectors
//If Protocol = TCP and PORT = 23, then you can put commands in as ASCII added as TELNET support. 10/9/2020 Pat
//
//

$PROJECTORS = Array(

// To add another projector fill out the below and remove the //
//     Array("NAME" => "NAME_OF_PROJECTOR",
//              
//                "ON" => "\x30\x30\x21\x0D",
//                "OFF" => "\x30\x30\x22\x0D",
//                "VIDEO" => "\x30\x30\x5F\x76\x31",
//
//                "BAUD_RATE" => "9600",
//                "CHAR_BITS" => "8",
//                "STOP_BITS" => "1",
//                "PARITY" => "none"
//),

		Array("NAME" => "PJLINK",
				"PROTOCOL" => "PJLINK",
				"ON" => "set_power_state 1",
				"OFF" => "set_power_state 0",
				"RGB" => "set_input INPUT_RGB",
				"VIDEO" => "set_input INPUT_VIDEO",
				"DIGITAL" => "set_input INPUT_DIGITAL",
				
				"IP" => "",
				"PASSWORD" => ""
		),
	                Array("NAME" => "EZ580",
			      
                                "ON" => "\x02\x41\x44\x5A\x5A\x3B\x50\x4F\x4E\x03",
                                "OFF" => "\x02\x41\x44\x5A\x5A\x3B\x50\x4F\x46\x03",
                                "VIDEO" => "\x30\x30\x5F\x76\x31",

                                "BAUD_RATE" => "9600",
                                "CHAR_BITS" => "8",
                                "STOP_BITS" => "1",
                                "PARITY" => "none"
                ),
			Array("Name" => "NP410",
			      "ON" => "\x02\x00\x00\x00\x00\x02",
			      "OFF" => "\x02\x01\x00\x00\x00\x03",
			      
			      "BAUD_RATE" => "9600",
                              "CHAR_BITS" => "8",
                              "STOP_BITS" => "1",
                              "PARITY" => "none"
			      ),


);
?>
