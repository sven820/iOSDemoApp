//
//  ViewController.swift
//  Demo2
//
//  Created by 靳小飞 on 2018/11/29.
//  Copyright © 2018 靳小飞. All rights reserved.
//

import UIKit

import TestPod
//import HandyJSON

class Student: JsonObject {
    var name: String?
//    override func mapping(mapper: HelpingMapper) {
//        mapper <<<
//            self.name <-- "stuName"
//    }
}

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        let st = Student.deserialize(from: "")
        
    }
}

