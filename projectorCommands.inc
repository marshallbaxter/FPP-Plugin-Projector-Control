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
			Array("NAME" => "Samsung_Commercial_Flat_Panel_MDC",
				"ON"     => "\xAA\x11\xFE\x01\x01\x11",
				"OFF"    => "\xAA\x11\xFE\x01\x00\x10",
				//Inputs
				"SVIDEO" => "\xAA\x14\xFE\x01\x04\x17",		//not available on test tv
				"VIDEO"  => "\xAA\x14\xFE\x01\x0C\x1F",
				"YPbPr"  => "\xAA\x14\xFE\x01\x08\x1B",
				"PC"     => "\xAA\x14\xFE\x01\x14\x27",
				"DVIVid" => "\xAA\x14\xFE\x01\x1F\x32",
				"PC1"    => "\xAA\x14\xFE\x01\x15\x28",		//not available on test tv
				"PC2"    => "\xAA\x14\xFE\x01\x16\x29",		//not available on test tv
				"DVID"   => "\xAA\x14\xFE\x01\x18\x2B",
				"BNC"    => "\xAA\x14\xFE\x01\x1E\x31",
				"MagicNet" => "\xAA\x14\xFE\x01\x20\x33",	//not available on test tv
				"HDMI"   => "\xAA\x14\xFE\x01\x21\x34",
				"ATV"    => "\xAA\x14\xFE\x01\x30\x43",		//not available on test tv
				"DTV"    => "\xAA\x14\xFE\x01\x40\x53",		//not available on test tv
		
				"BAUD_RATE" => "9600",
				"CHAR_BITS" => "8",
				"STOP_BITS" => "1",
				"PARITY" => "none"
		)
);
?>
