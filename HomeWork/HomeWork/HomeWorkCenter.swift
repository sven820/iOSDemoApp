//
//  HomeWorkCenter.swift
//  HomeWork
//
//  Created by 靳小飞 on 2018/11/29.
//  Copyright © 2018 靳小飞. All rights reserved.
//

import UIKit
import TestPod

class HomeWorkModel: JsonObject {
    var name: String?
    var code: Int?
}

open class HomeWorkCenter: NSObject {
    public override init() {
        super.init()
        
        let model = HomeWorkModel()
        model.name = "jxf"
        model.code = 200
        print(model.toJSONString() ?? "")
        
        IFlyCollector.setDebugModeEnable(true)
    }
}
