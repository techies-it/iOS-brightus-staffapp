//
//  Constant.swift
//  BrightUs_StaffAttendance
//
//  Created by Mohit Sharma on 12/12/16.
//  Copyright © 2016 Techies India Inc. All rights reserved.
//

import Foundation
import UIKit

/**
 * Reachability Check Function
 */
func IsConnectionAvailable()->Bool{
    return Reachability.isConnectedToNetwork()
}

/**
 * Intialized UserDefaults
 */
var defaults = UserDefaults.standard

/**
 * Variable to check device height
 */
var screenheight = UIScreen.main.bounds.height

//let baseURL = "https://brightus-attendance.herokuapp.com"

let baseURL = "https://brightus--attendance-herokuapp-com-hf2xh802zzn7.runscope.net"

//Staff App - client_id = 2, client_secret = XNgcybCHTfz0wfehSQcDOStyGCnwakCIIECZzWtD

//Student App - client_id = 3, client_secret = LlHv7I5ROyd61U3R2FJDtmiuYLAoT5IXWdn6ldS7

/**
 Validate email format
 
 - parameter argument : Email text
 
 - parameter returns : Returns bool value
 
*/
func ValidateEmail(text : String)->Bool{
    
    let emailRegEx = "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}"
    let emailTest = NSPredicate(format: "SELF MATCHES %@", emailRegEx)
    let result = emailTest.evaluate(with: text)
    
    if result == false{
        return false
    }
    return true
}

/**
 Validate empty email content
 
 - parameter argument : Email UITextField
 
 - parameter returns : Returns bool value
 
 */

func ValidateEmptyContent(textField : UITextField)->Bool{
    if textField.text == ""{
        return false
    }
    return true
}
