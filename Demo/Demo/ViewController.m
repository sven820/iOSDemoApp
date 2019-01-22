//
//  ViewController.m
//  Demo
//
//  Created by 靳小飞 on 2018/11/21.
//  Copyright © 2018 靳小飞. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSDictionary *options = @{UIApplicationOpenURLOptionsSourceApplicationKey: @"jxf"};
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"zhixueteacher://"] options:options completionHandler:^(BOOL success) {
        NSLog(@"jxf");
    }];
}
@end
